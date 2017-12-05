-- A solution, but incredibly slow. One to work on.

module Main where

import Data.List

main :: IO ()
main = do
    putStrLn $ show $ largestPrimeFactor 600851475143

factorize :: Int -> [Int]
factorize n = filter (\x -> (n `mod` x == 0)) [1 .. n]

largestPrimeFactor :: Int -> Int
largestPrimeFactor n = maximum $ filter (\f -> factorize f == [1,f]) (factorize n)