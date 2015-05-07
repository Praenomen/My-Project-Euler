int sum = 0;
int even = 0;
int[] numbers;

void setup(){
  numbers = new int[32];
  numbers[0] = 1;
  numbers[1] = 2;
  for (int i = 2; i<32; i++){
    numbers[i] = numbers[(i-1)] + numbers[(i-2)];
    println( numbers[i]);
  }
  for  (int i = 1; i<32; i+=3){
    if (numbers[i] <= 4000000){
      sum += numbers[i];
    }
  }
  println(sum);
}
