module Main where

main :: IO ()
main = do
    putStrLn $ show $ sumVals

fibs :: [Int] -> [Int]
fibs a = if (head a) <= 4000000
         then fibs $ ((head a) + (head $ tail a)):a
         else a

sumVals :: Int
sumVals = let
              fibSeq = fibs [1,1]
              culled = filter even $ filter (<= 4000000) fibSeq
              total  = sum culled
          in total