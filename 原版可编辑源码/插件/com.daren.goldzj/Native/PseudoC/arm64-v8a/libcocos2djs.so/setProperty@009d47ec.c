
/* cocos2d::renderer::EffectBase::setProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::renderer::Technique::Parameter const&, int) */

void __thiscall
cocos2d::renderer::EffectBase::setProperty
          (EffectBase *this,basic_string *param_1,Parameter *param_2,int param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x10))();
  uVar2 = plVar1[1] - *plVar1 >> 3;
  if (param_3 == -1) {
    uVar3 = 0;
    if (uVar2 == 0) goto LAB_009d48a0;
  }
  else {
    uVar3 = (ulong)param_3;
    if ((long)uVar2 <= (long)uVar3) {
      __android_log_print(3,"renderer"," (109): EffectBase::setProperty error passIdx [%d]\n",
                          param_3);
      return;
    }
    uVar2 = (ulong)(param_3 + 1);
    if (uVar2 <= uVar3) goto LAB_009d48a0;
  }
  Pass::setProperty(*(Pass **)(*plVar1 + uVar3 * 8),param_1,param_2);
  while (uVar3 = uVar3 + 1, uVar3 != uVar2) {
    Pass::setProperty(*(Pass **)(*plVar1 + uVar3 * 8),param_1,param_2);
  }
LAB_009d48a0:
  this[0xc] = (EffectBase)0x1;
  return;
}

