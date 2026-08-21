
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (cocos2d::experimental::AudioEngineImpl::*)(cocos2d::EventCustom*),
   cocos2d::experimental::AudioEngineImpl*, std::__ndk1::placeholders::__ph<1> const&>,
   std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::experimental::AudioEngineImpl::*)(cocos2d::EventCustom*),
   cocos2d::experimental::AudioEngineImpl*, std::__ndk1::placeholders::__ph<1> const&> >, void
   (cocos2d::EventCustom*)>::TEMPNAMEPLACEHOLDERVALUE(cocos2d::EventCustom*&&) */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::experimental::AudioEngineImpl::*)(cocos2d::EventCustom*),cocos2d::experimental::AudioEngineImpl*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::experimental::AudioEngineImpl::*)(cocos2d::EventCustom*),cocos2d::experimental::AudioEngineImpl*,std::__ndk1::placeholders::__ph<1>const&>>,void(cocos2d::EventCustom*)>
::operator()(__func<std::__ndk1::__bind<void(cocos2d::experimental::AudioEngineImpl::*)(cocos2d::EventCustom*),cocos2d::experimental::AudioEngineImpl*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::experimental::AudioEngineImpl::*)(cocos2d::EventCustom*),cocos2d::experimental::AudioEngineImpl*,std::__ndk1::placeholders::__ph<1>const&>>,void(cocos2d::EventCustom*)>
             *this,EventCustom **param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  plVar1 = (long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1));
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00e66714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_1);
  return;
}

