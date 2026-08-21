
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (cocos2d::extension::ScrollView::*)(cocos2d::Touch*, cocos2d::Event*),
   cocos2d::extension::ScrollView*, std::__ndk1::placeholders::__ph<1> const&,
   std::__ndk1::placeholders::__ph<2> const&>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::extension::ScrollView::*)(cocos2d::Touch*, cocos2d::Event*),
   cocos2d::extension::ScrollView*, std::__ndk1::placeholders::__ph<1> const&,
   std::__ndk1::placeholders::__ph<2> const&> >, void (cocos2d::Touch*,
   cocos2d::Event*)>::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Touch*&&, cocos2d::Event*&&) */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::extension::ScrollView::*)(cocos2d::Touch*,cocos2d::Event*),cocos2d::extension::ScrollView*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::extension::ScrollView::*)(cocos2d::Touch*,cocos2d::Event*),cocos2d::extension::ScrollView*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,void(cocos2d::Touch*,cocos2d::Event*)>
::operator()(__func<std::__ndk1::__bind<void(cocos2d::extension::ScrollView::*)(cocos2d::Touch*,cocos2d::Event*),cocos2d::extension::ScrollView*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::extension::ScrollView::*)(cocos2d::Touch*,cocos2d::Event*),cocos2d::extension::ScrollView*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,void(cocos2d::Touch*,cocos2d::Event*)>
             *this,Touch **param_1,Event **param_2)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
                    /* try { // try from 00e176c4 to 00f1782f has its CatchHandler @ 00e176c4
                       catch() { ... } // from try @ 00e176c4 with catch @ 00e176c4
                       catch() { ... } // from try @ 00e17904 with catch @ 00e176c4 */
  plVar1 = (long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1));
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00e176dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_1,*param_2);
  return;
}

