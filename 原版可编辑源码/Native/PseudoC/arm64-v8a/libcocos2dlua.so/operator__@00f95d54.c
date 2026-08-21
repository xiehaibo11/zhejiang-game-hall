
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (cocos2d::Console::*)(int),
   cocos2d::Console*, int&>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::Console::*)(int), cocos2d::Console*, int&> >, void ()>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::Console::*)(int),cocos2d::Console*,int&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Console::*)(int),cocos2d::Console*,int&>>,void()>
::operator()(__func<std::__ndk1::__bind<void(cocos2d::Console::*)(int),cocos2d::Console*,int&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Console::*)(int),cocos2d::Console*,int&>>,void()>
             *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  plVar1 = (long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1));
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00f95d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*(undefined4 *)(this + 0x20));
  return;
}

