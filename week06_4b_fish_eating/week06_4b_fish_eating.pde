// week07_4_ 下週再寫這個版本
// 程式模仿自 week06_4 week04_5 及 week03_4
void setup(){
  size(600, 400);
}
float fishX = 300, fishY = 200; // 魚座標
float [] x = new float[100]; // Java 的陣列
float [] y = new float[100]; // 最多有100個飼料
int N = 0; // 目前是0顆飼料
void draw(){
  background(#c0ffee);
  for(int i=0; i<N; i++){ // for迴圈
    ellipse(x[i], y[i], 8, 8); //飼料的陣列
    y[i]++;
    if(y[i]>400 || dist(x[i],y[i],fishX,fishY)<4){ // 飼料掉到底部, 要回收 x[i]及y[i]
      for(int k=i; k<N-1; k++){ // 把右邊逐一往左搬
        x[k] = x[k+1]; // 格子的值,往左移
        y[k] = y[k+1];
      }
      N--; // 更新飼料的總數N
    }
  }
  println(N);
  float bestD = 9999999;
  int bestI = -1;
  for(int i=0; i<N; i++){
    float nowD = dist(x[i], y[i], fishX, fishY);
    if(nowD < bestD){
      bestD = nowD;
      bestI = i;
    }
  }
  if(bestI != -1){
    float dx = x[bestI] - fishX;
    float dy = y[bestI] - fishY;
    fishX += dx / bestD * 3;
    fishY += dy / bestD * 3;
  }
  ellipse(fishX, fishY, 30, 10); // 魚
}
void mousePressed(){
  x[N] = mouseX;
  y[N] = mouseY;
  N++;
}
