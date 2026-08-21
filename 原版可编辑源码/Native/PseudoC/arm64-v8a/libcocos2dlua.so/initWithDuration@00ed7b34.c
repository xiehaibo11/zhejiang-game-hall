
/* cocos2d::Waves::initWithDuration(float, cocos2d::Size const&, unsigned int, float, bool, bool) */

bool __thiscall
cocos2d::Waves::initWithDuration
          (Waves *this,float param_1,Size *param_2,uint param_3,float param_4,bool param_5,
          bool param_6)

{
  bool bVar1;
  ulong uVar2;
  
                    /* try { // try from 00ed7b3c to 00fd7b8f has its CatchHandler @ 00ed86bc */
  uVar2 = GridAction::initWithDuration((GridAction *)this,param_1,param_2);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    *(uint *)(this + 0x68) = param_3;
    *(float *)(this + 0x6c) = param_4;
    *(undefined4 *)(this + 0x70) = 0x3f800000;
    this[0x75] = (Waves)param_5;
    this[0x74] = (Waves)param_6;
  }
  return bVar1;
}

