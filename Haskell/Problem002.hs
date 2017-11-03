module Main where

main :: IO ()
main = do
    putStrLn $ show $ sumVals

fibber :: [Int] -> [Int]
fibber a = if (head a) <= 4000000
         then fibber $ ((head a) + (head $ tail a)):a
         else a

sumVals :: Int
sumVals = let
              fibSeq = fibber [1,1]
              culled = filter even $ filter (<= 4000000) fibSeq
              total  = sum culled
          in total