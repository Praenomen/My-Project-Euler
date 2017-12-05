module Main where

main :: IO ()
main = do
    putStrLn $ show $ maximum $ filter palindrome products

palindrome :: Int -> Bool
palindrome n = ((show n) == (reverse $ show n))

subproducts :: Int -> [Int]
subproducts n = map (\x -> n * x) [1 .. n]

products :: [Int]
products = concat $ map subproducts [100 .. 999]