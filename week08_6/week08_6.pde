///week08_6
///用mouse吹氣球
void setup(){
  size(400,400);///大小
}
int [] x = new int[100];///氣球的座標，氣球的大小
int [] y = new int[100];
int [] s = new int[100];
int N = 0;
void draw(){
  background(255);///白色的背景
  for(int i=0; i<N;i++){
    ellipse(x[i],y[i]-s[i]/2,s[i]*0.7, s[i]);///瘦瘦的氣球
    if((mousePressed==false || i<N-1) && y[i]>s[i]+1) y[i] -=2;///一直壓著
  }
  if(mousePressed)s[N-1]++;
}
void mousePressed(){///
  x[N] = mouseX;
  y[N] = mouseY;
  s[N] = 1;///大小設數字1
  N++;
}
