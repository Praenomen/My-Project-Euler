module Main where

main :: IO ()
main = do
    putStrLn $ show $ multiplesSum

divByEither :: Int -> Int -> Int -> Bool
divByEither a b n = (n `mod` a) == 0 || (n `mod` b) == 0

multiplesSum :: Int
multiplesSum = let
                   values = [1 .. 999]
                   culled = filter (divByEither 5 3) $ values
                   total  = sum culled
               in total