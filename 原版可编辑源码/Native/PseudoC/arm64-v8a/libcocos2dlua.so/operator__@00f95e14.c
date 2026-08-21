
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (cocos2d::Director::*)(bool),
   cocos2d::Director*&, bool&>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::Director::*)(bool), cocos2d::Director*&, bool&> >, void ()>::TEMPNAMEPLACEHOLDERVALUE()
    */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::Director::*)(bool),cocos2d::Director*&,bool&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Director::*)(bool),cocos2d::Director*&,bool&>>,void()>
::operator()(__func<std::__ndk1::__bind<void(cocos2d::Director::*)(bool),cocos2d::Director*&,bool&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Director::*)(bool),cocos2d::Director*&,bool&>>,void()>
             *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  plVar1 = (long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1));
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00f95e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,this[0x20]);
  return;
}

