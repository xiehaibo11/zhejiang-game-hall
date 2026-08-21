
/* cocos2d::renderer::EffectBase::setBlend(bool, cocos2d::renderer::BlendOp,
   cocos2d::renderer::BlendFactor, cocos2d::renderer::BlendFactor, cocos2d::renderer::BlendOp,
   cocos2d::renderer::BlendFactor, cocos2d::renderer::BlendFactor, unsigned int, int) */

void __thiscall
cocos2d::renderer::EffectBase::setBlend
          (EffectBase *this,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x10))();
  uVar3 = plVar1[1] - *plVar1 >> 3;
  if (param_10 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)param_10;
    if ((long)uVar3 <= (long)uVar2) {
      __android_log_print(3,"renderer"," (167): EffectBase::setBlend error passIdx [%d]\n",param_10)
      ;
      return;
    }
    uVar3 = (ulong)(param_10 + 1);
  }
  if (uVar2 < uVar3) {
    Pass::setBlend(*(Pass **)(*plVar1 + uVar2 * 8),param_2 & 1,param_3,param_4,param_5,param_6,
                   param_7,param_8,param_9);
    while (uVar2 = uVar2 + 1, uVar2 != uVar3) {
      Pass::setBlend(*(Pass **)(*plVar1 + uVar2 * 8),param_2 & 1,param_3,param_4,param_5,param_6,
                     param_7,param_8,param_9);
    }
  }
  return;
}

