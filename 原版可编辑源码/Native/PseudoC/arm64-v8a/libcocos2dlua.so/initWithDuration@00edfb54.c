
/* cocos2d::MoveTo::initWithDuration(float, cocos2d::Vec3 const&) */

undefined8 __thiscall cocos2d::MoveTo::initWithDuration(MoveTo *this,float param_1,Vec3 *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = 1e-06;
                    /* try { // try from 00edfb68 to 00fdfbbf has its CatchHandler @ 00edfb68
                       catch() { ... } // from try @ 00edfb68 with catch @ 00edfb68
                       catch() { ... } // from try @ 00edfd0c with catch @ 00edfb68 */
  if (1e-06 < ABS(param_1)) {
    fVar2 = param_1;
  }
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  *(float *)(this + 0x4c) = fVar2;
  uVar1 = *(undefined8 *)param_2;
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(this + 0x7c) = uVar1;
  return 1;
}

