
/* cocos2d::ui::RichText::openUrl(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::ui::RichText::openUrl(RichText *this,basic_string *param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
                    /* try { // try from 00dd6e2c to 00ed6e3b has its CatchHandler @ 00dd72f0 */
  plVar1 = *(long **)(this + 0x590);
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)Application::getInstance();
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x58);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x00dd6e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1);
  return;
}

