// void linefollower(){ //Declare the line follower function as
// int right;// declare the int right
// int left;// declare the int left
// int middle;// declare the int middle
// middle = analogRead(A1);//middle is equal to the bit voltage at A1
// right =analogRead(A0);//right is equal to the bit voltage at A0
// left = analogRead(A2);//left is equal to the bit voltage at A2

// if(middle - right >= 0  && middle - left >= 0){// If middle is greater than left and right then... 
//   Forward(60);// Move forward with a speend of 100
// }
// if(right - middle >= 0 && right- left>= 0){// If right is greater than middle and left then...
// Right(50);// move right with a speed of 75
// }
// if(left- middle>= 0 && left - right>=0 ){// If left is greater than middle and right then...
//   Left(50);// move left with a speed of 75
// }
// }