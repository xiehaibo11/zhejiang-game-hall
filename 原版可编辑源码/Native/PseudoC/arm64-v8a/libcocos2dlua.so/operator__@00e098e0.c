
/* std::__ndk1::__function::__func<std::__ndk1::__bind<bool
   (cocos2d::extension::Control::*)(cocos2d::Touch*, cocos2d::Event*), cocos2d::extension::Control*,
   std::__ndk1::placeholders::__ph<1> const&, std::__ndk1::placeholders::__ph<2> const&>,
   std::__ndk1::allocator<std::__ndk1::__bind<bool (cocos2d::extension::Control::*)(cocos2d::Touch*,
   cocos2d::Event*), cocos2d::extension::Control*, std::__ndk1::placeholders::__ph<1> const&,
   std::__ndk1::placeholders::__ph<2> const&> >, bool (cocos2d::Touch*,
   cocos2d::Event*)>::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Touch*&&, cocos2d::Event*&&) */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<bool(cocos2d::extension::Control::*)(cocos2d::Touch*,cocos2d::Event*),cocos2d::extension::Control*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<bool(cocos2d::extension::Control::*)(cocos2d::Touch*,cocos2d::Event*),cocos2d::extension::Control*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,bool(cocos2d::Touch*,cocos2d::Event*)>
::operator()(__func<std::__ndk1::__bind<bool(cocos2d::extension::Control::*)(cocos2d::Touch*,cocos2d::Event*),cocos2d::extension::Control*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<bool(cocos2d::extension::Control::*)(cocos2d::Touch*,cocos2d::Event*),cocos2d::extension::Control*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,bool(cocos2d::Touch*,cocos2d::Event*)>
             *this,Touch **param_1,Event **param_2)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
                    /* try { // try from 00e098e0 to 00f098eb has its CatchHandler @ 00e09934 */
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  plVar1 = (long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1));
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
                    /* try { // try from 00e098f4 to 00f09907 has its CatchHandler @ 00e09930 */
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00e09900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_1,*param_2);
  return;
}

