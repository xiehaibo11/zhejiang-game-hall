
/* cocos2d::SkewTo::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::SkewTo::startWithTarget(SkewTo *this,Node *param_1)

{
  float fVar1;
  float fVar2;
  float __y;
  
  Action::startWithTarget((Action *)this,param_1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
                    /* try { // try from 00edffb8 to 00fdffbf has its CatchHandler @ 00ee00cc */
  fVar1 = (float)(**(code **)(*(long *)param_1 + 0x130))(param_1);
  fVar2 = 180.0;
  if (fVar1 <= 0.0) {
    fVar2 = -180.0;
  }
                    /* try { // try from 00edffe0 to 00fe0003 has its CatchHandler @ 00ee00dc */
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
  if (fVar1 <= 0.0) {
    __y = -360.0;
  }
  fVar2 = fmodf(fVar1,__y);
                    /* try { // try from 00ee0038 to 00fe0047 has its CatchHandler @ 00ee00cc */
  *(float *)(this + 100) = fVar2;
  fVar2 = *(float *)(this + 0x6c) - fVar2;
                    /* try { // try from 00ee0048 to 00fe013b has its CatchHandler @ 00edfec0 */
  fVar1 = fVar2 + -360.0;
  if (fVar2 <= 180.0) {
    fVar1 = fVar2;
  }
  fVar2 = fVar1 + 360.0;
  if (-180.0 <= fVar1) {
    fVar2 = fVar1;
  }
  *(float *)(this + 0x74) = fVar2;
  return;
}

