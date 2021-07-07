//Solutions by other people

//1
float opposite(float num) {
  return -num;
}

//2
float opposite(float num)
{
 return (num *= -1.0);
}

//3
float opposite(float num) {
  //processing...
  return num * -1;
}

//4
float opposite(float num) {
  //processing...
  return -1.0f*num; // to avoid multiplication -> toggle first bit but dirty
}

//5
float opposite(float num) {
  if (num != 0)
    num = num * -1;
  else
    num = num;
  return num;
}

//6
float opposite(float num) {
  num=num* (-1.0);
  return num;
}

//7
float opposite(float num) {
  return("%f\n", -num);
}
/*int main(float num){
  opposite(num);
 }
*/

//8
float opposite(float num) {
  return  num  ?  -num  :  abs(num);
}

//9
float opposite(float num)
{
  //processing...
  if (num < 0)
  return (num * (-1.0));
  else if (num > 0)
  return (num * (-1.0));
}

//10
float opposite(float Z) {
  return -Z;
}

//11
float opposite(float i) {
  return -i;
}

//12
float opposite(float num) {return num - num * 2;}

//13
#define 😂😂😂 -num
float opposite(float num) {
  return 😂😂😂;
}
