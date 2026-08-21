
/* cocos2d::FadeOutDownTiles::testFunc(cocos2d::Size const&, float) */

void __thiscall
cocos2d::FadeOutDownTiles::testFunc(FadeOutDownTiles *this,Size *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 4);
  if (*(float *)(param_1 + 4) <= 0.0) {
    fVar1 = 0.1;
  }
  powf(((1.0 - param_2) * *(float *)(this + 0x5c)) / fVar1,6.0);
  return;
}

