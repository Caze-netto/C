int growingPlant(int upSpeed, int downSpeed, int desiredHeight)
{
    int height = 0;
    int days = 0;
  
    if((upSpeed < 5 || upSpeed > 100) || (downSpeed < 2 || downSpeed > upSpeed) || (desiredHeight < 4 || desiredHeight > 1000)){
      return 0;
    }
  
    while(height < desiredHeight){
      days++;
      height += upSpeed;
      
      if (height >= desiredHeight){
         break;
      }
      
      height -= downSpeed;
    }   
  
  
    return days;
}