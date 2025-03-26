void setup(){
  size(600,400);
}
float fishX = 300, fishY =200;//魚座標
float [] x = new float[100];//JAVA陣列
float [] y = new float[100];//最多有幾個
int N = 0;//目前為零
void draw (){
  background (#C0ffee);
  for (int i=0;i<N;i++){
    ellipse(x[i],y[i],8,8);
    y[i]++;
    if(y[i]>400){
      for(int k=i;k<N-1;k++){
        x[k]=x[k+1];
        y[k]=y[k+1];
      }
      N--;//更新飼料總數
    }
  }
  println(N);
  ellipse(fishX, fishY,30,10);
}
void mousePressed(){
x[N]=mouseX;
y[N]=mouseY;
N++;
}
