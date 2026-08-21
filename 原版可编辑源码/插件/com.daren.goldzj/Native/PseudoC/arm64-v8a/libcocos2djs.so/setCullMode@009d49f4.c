
/* cocos2d::renderer::EffectBase::setCullMode(cocos2d::renderer::CullMode, int) */

void __thiscall
cocos2d::renderer::EffectBase::setCullMode(EffectBase *this,undefined4 param_2,int param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x10))();
  uVar2 = plVar1[1] - *plVar1 >> 3;
  if (param_3 == -1) {
    uVar3 = 0;
    if (uVar2 == 0) {
      return;
    }
  }
  else {
    uVar3 = (ulong)param_3;
    if ((long)uVar2 <= (long)uVar3) {
      __android_log_print(3,"renderer"," (149): EffectBase::setCullMode error passIdx [%d]\n",
                          param_3);
      return;
    }
    uVar2 = (ulong)(param_3 + 1);
    if (uVar2 <= uVar3) {
      return;
    }
  }
  Pass::setCullMode(*(Pass **)(*plVar1 + uVar3 * 8),param_2);
  while (uVar3 = uVar3 + 1, uVar3 != uVar2) {
    Pass::setCullMode(*(Pass **)(*plVar1 + uVar3 * 8),param_2);
  }
  return;
}

