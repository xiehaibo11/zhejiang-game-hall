
/* cocos2d::ProgressTo::initWithDuration(float, float) */

bool __thiscall cocos2d::ProgressTo::initWithDuration(ProgressTo *this,float param_1,float param_2)

{
  bool bVar1;
  ulong uVar2;
  
                    /* try { // try from 00ee8098 to 00fe80d7 has its CatchHandler @ 00ee8098
                       catch() { ... } // from try @ 00ee8098 with catch @ 00ee8098
                       catch() { ... } // from try @ 00ee8220 with catch @ 00ee8098 */
  uVar2 = ActionInterval::initWithDuration((ActionInterval *)this,param_1);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    *(float *)(this + 0x58) = param_2;
  }
  return bVar1;
}

