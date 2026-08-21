
/* cocos2d::renderer::EffectBase::getProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int) const */

long __thiscall
cocos2d::renderer::EffectBase::getProperty(EffectBase *this,basic_string *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x18))();
  uVar3 = plVar1[1] - *plVar1 >> 3;
  if (param_2 == -1) {
    uVar4 = 0;
    if (uVar3 == 0) {
      return 0;
    }
  }
  else {
    uVar4 = (ulong)param_2;
    if ((long)uVar3 <= (long)uVar4) {
      __android_log_print(3,"renderer"," (86): EffectBase::getProperty error passIdx [%d]\n",param_2
                         );
      return 0;
    }
    uVar3 = (ulong)(param_2 + 1);
    if (uVar3 <= uVar4) {
      return 0;
    }
  }
  lVar2 = Pass::getProperty(*(Pass **)(*plVar1 + uVar4 * 8),param_1);
  while( true ) {
    if (lVar2 != 0) {
      return lVar2;
    }
    uVar4 = uVar4 + 1;
    if (uVar3 <= uVar4) break;
    lVar2 = Pass::getProperty(*(Pass **)(*plVar1 + uVar4 * 8),param_1);
  }
  return 0;
}

