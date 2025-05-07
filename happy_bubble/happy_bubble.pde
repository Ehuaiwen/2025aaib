//week12_1_happy_bubble_3D_part 3
//調色彩
void setup(){
  size(300,300,P3D);//開啟3D功能
}
int [][] state = new int[6][6];
void draw(){
  background(255,255,0);//白色背景
  ortho();//垂直投影
  lights();
  noStroke();
  fill(#FF8BEA);
  for(int i=0; i<6;i++){
    for(int j=0;j<6;j++){
    pushMatrix();
    translate(25+j*50,25+i*50);//照著滑鼠的座標動
    if(state[i][j]==0)sphere(23);
    else sphere(10);
    popMatrix();
    }
  }
}
void mousePressed(){
  int j = (mouseX)/50, i = (mouseY)/50;
  state[i][j] = 1 - state[i][j];
}
