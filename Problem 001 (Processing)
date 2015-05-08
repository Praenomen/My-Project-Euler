int sum = 0;
int third = 0;
int fifth = 0;
int[] numbers;

void setup(){
  numbers = new int[1000];
  for (int i = 0; i<1000; i++){
    numbers[i] = i;
  }
  for  (int i = 0; i<1000; i++){
    third = numbers[i]/3;
    fifth = numbers[i]/5;
    if (third*3 == numbers[i]){
      sum += numbers[i];
    }
    else if (fifth*5 == numbers[i]){
      sum += numbers[i];
    }
  }
  println(sum);
}
