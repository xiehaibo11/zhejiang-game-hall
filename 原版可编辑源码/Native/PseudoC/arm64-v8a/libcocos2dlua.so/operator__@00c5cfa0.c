
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (cocostudio::InputDelegate::*)(cocos2d::Acceleration*, cocos2d::Event*),
   cocostudio::InputDelegate*, std::__ndk1::placeholders::__ph<1> const&,
   std::__ndk1::placeholders::__ph<2> const&>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocostudio::InputDelegate::*)(cocos2d::Acceleration*, cocos2d::Event*),
   cocostudio::InputDelegate*, std::__ndk1::placeholders::__ph<1> const&,
   std::__ndk1::placeholders::__ph<2> const&> >, void (cocos2d::Acceleration*,
   cocos2d::Event*)>::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Acceleration*&&, cocos2d::Event*&&) */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocostudio::InputDelegate::*)(cocos2d::Acceleration*,cocos2d::Event*),cocostudio::InputDelegate*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocostudio::InputDelegate::*)(cocos2d::Acceleration*,cocos2d::Event*),cocostudio::InputDelegate*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,void(cocos2d::Acceleration*,cocos2d::Event*)>
::operator()(__func<std::__ndk1::__bind<void(cocostudio::InputDelegate::*)(cocos2d::Acceleration*,cocos2d::Event*),cocostudio::InputDelegate*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocostudio::InputDelegate::*)(cocos2d::Acceleration*,cocos2d::Event*),cocostudio::InputDelegate*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,void(cocos2d::Acceleration*,cocos2d::Event*)>
             *this,Acceleration **param_1,Event **param_2)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  plVar1 = (long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1));
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00c5cfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_1,*param_2);
  return;
}

