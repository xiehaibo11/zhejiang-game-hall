
/* cocos2d::SkewBy::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::SkewBy::startWithTarget(SkewBy *this,Node *param_1)

{
  float fVar1;
  float fVar2;
  float __y;
  
                    /* catch() { ... } // from try @ 00ee039c with catch @ 00ee03e0 */
  Action::startWithTarget((Action *)this,param_1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
                    /* try { // try from 00ee03fc to 00fe0463 has its CatchHandler @ 00ee03fc
                       catch() { ... } // from try @ 00ee03fc with catch @ 00ee03fc
                       catch() { ... } // from try @ 00ee0474 with catch @ 00ee03fc */
  fVar1 = (float)(**(code **)(*(long *)param_1 + 0x130))(param_1);
  fVar2 = 180.0;
  if (fVar1 <= 0.0) {
    fVar2 = -180.0;
  }
  fVar2 = fmodf(fVar1,fVar2);
  *(float *)(this + 0x60) = fVar2;
  fVar2 = *(float *)(this + 0x68) - fVar2;
  __y = 360.0;
  fVar1 = fVar2 + -360.0;
  if (fVar2 <= 180.0) {
    fVar1 = fVar2;
  }
  fVar2 = fVar1 + 360.0;
  if (-180.0 <= fVar1) {
    fVar2 = fVar1;
  }
  *(float *)(this + 0x70) = fVar2;
  fVar1 = (float)(**(code **)(*(long *)param_1 + 0x140))(param_1);
                    /* try { // try from 00ee0464 to 00fe0473 has its CatchHandler @ 00ee04ac */
  if (fVar1 <= 0.0) {
    __y = -360.0;
  }
  fVar1 = fmodf(fVar1,__y);
                    /* try { // try from 00ee0474 to 00fe04c7 has its CatchHandler @ 00ee03fc */
  *(float *)(this + 0x70) = *(float *)(this + 0x58);
  *(float *)(this + 0x74) = *(float *)(this + 0x5c);
  *(float *)(this + 100) = fVar1;
  *(float *)(this + 0x68) = *(float *)(this + 0x60) + *(float *)(this + 0x58);
  *(float *)(this + 0x6c) = fVar1 + *(float *)(this + 0x5c);
  return;
}

