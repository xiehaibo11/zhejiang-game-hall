
/* cocos2d::MenuItemLabel::setString(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::MenuItemLabel::setString(MenuItemLabel *this,basic_string *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)0x0;
  if (*(long *)(this + 0x340) != 0) {
    plVar1 = (long *)__dynamic_cast(*(long *)(this + 0x340),&Node::typeinfo,&LabelProtocol::typeinfo
                                    ,0xfffffffffffffffe);
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
  uVar2 = (**(code **)(**(long **)(this + 0x340) + 0x168))();
                    /* catch() { ... } // from try @ 00f1d8a8 with catch @ 00f1d9b0 */
                    /* catch() { ... } // from try @ 00f1d7c0 with catch @ 00f1d9b4 */
                    /* catch() { ... } // from try @ 00f1d67c with catch @ 00f1d9b8 */
                    /* WARNING: Could not recover jumptable at 0x00f1d9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x160))(this,uVar2);
  return;
}

