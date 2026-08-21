
/* cocos2d::renderer::EffectBase::setDepth(bool, bool, cocos2d::renderer::ComparisonFunc, int) */

void __thiscall
cocos2d::renderer::EffectBase::setDepth
          (EffectBase *this,uint param_2,uint param_3,undefined4 param_4,int param_5)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x10))();
                    /* try { // try from 009d4ea0 to 00ad4ea7 has its CatchHandler @ 009d4ffc */
                    /* try { // try from 009d4ea8 to 00ad4eaf has its CatchHandler @ 009d4ff4 */
                    /* try { // try from 009d4eb0 to 00ad4f3b has its CatchHandler @ 009d5004 */
  uVar2 = plVar1[1] - *plVar1 >> 3;
  if (param_5 == -1) {
    uVar3 = 0;
    if (uVar2 == 0) {
      return;
    }
  }
  else {
    uVar3 = (ulong)param_5;
    if ((long)uVar2 <= (long)uVar3) {
      __android_log_print(3,"renderer"," (222): EffectBase::setDepth error passIdx [%d]\n",param_5);
      return;
    }
    uVar2 = (ulong)(param_5 + 1);
    if (uVar2 <= uVar3) {
      return;
    }
  }
  Pass::setDepth(*(Pass **)(*plVar1 + uVar3 * 8),param_2 & 1,param_3 & 1,param_4);
  while (uVar3 = uVar3 + 1, uVar3 != uVar2) {
    Pass::setDepth(*(Pass **)(*plVar1 + uVar3 * 8),param_2 & 1,param_3 & 1,param_4);
  }
                    /* try { // try from 009d4f3c to 00ad5027 has its CatchHandler @ 009d4e60 */
  return;
}

