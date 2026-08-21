
/* cocos2d::MenuItemLabel::getString() const */

void cocos2d::MenuItemLabel::getString(void)

{
  long in_x0;
  long *plVar1;
  basic_string *pbVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
                    /* try { // try from 00f1d9d4 to 0101da23 has its CatchHandler @ 00f1d9d4
                       catch() { ... } // from try @ 00f1d9d4 with catch @ 00f1d9d4
                       catch() { ... } // from try @ 00f1da2c with catch @ 00f1d9d4 */
  plVar1 = (long *)0x0;
  if (*(long *)(in_x0 + 0x340) != 0) {
    plVar1 = (long *)__dynamic_cast(*(long *)(in_x0 + 0x340),&Node::typeinfo,
                                    &LabelProtocol::typeinfo,0xfffffffffffffffe);
  }
  pbVar2 = (basic_string *)(**(code **)(*plVar1 + 0x18))();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(in_x8,pbVar2);
  return;
}

