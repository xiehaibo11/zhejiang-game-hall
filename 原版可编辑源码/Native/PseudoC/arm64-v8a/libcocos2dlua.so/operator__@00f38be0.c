
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (cocos2d::ProgressTimer::*)(cocos2d::Mat4 const&, unsigned int), cocos2d::ProgressTimer*,
   cocos2d::Mat4 const&, unsigned int&>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::ProgressTimer::*)(cocos2d::Mat4 const&, unsigned int), cocos2d::ProgressTimer*,
   cocos2d::Mat4 const&, unsigned int&> >, void ()>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::ProgressTimer::*)(cocos2d::Mat4_const&,unsigned_int),cocos2d::ProgressTimer*,cocos2d::Mat4_const&,unsigned_int&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::ProgressTimer::*)(cocos2d::Mat4_const&,unsigned_int),cocos2d::ProgressTimer*,cocos2d::Mat4_const&,unsigned_int&>>,void()>
::operator()(__func<std::__ndk1::__bind<void(cocos2d::ProgressTimer::*)(cocos2d::Mat4_const&,unsigned_int),cocos2d::ProgressTimer*,cocos2d::Mat4_const&,unsigned_int&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::ProgressTimer::*)(cocos2d::Mat4_const&,unsigned_int),cocos2d::ProgressTimer*,cocos2d::Mat4_const&,unsigned_int&>>,void()>
             *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  plVar1 = (long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1));
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00f38c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,this + 0x20,*(undefined4 *)(this + 0x60));
  return;
}

