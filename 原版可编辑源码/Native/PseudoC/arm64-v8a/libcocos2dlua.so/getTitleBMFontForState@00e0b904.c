
/* cocos2d::extension::ControlButton::getTitleBMFontForState(cocos2d::extension::Control::State) */

undefined * cocos2d::extension::ControlButton::getTitleBMFontForState(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x6d8))();
  if (((lVar2 == 0) ||
      (lVar2 = __dynamic_cast(lVar2,&Node::typeinfo,&LabelProtocol::typeinfo,0xfffffffffffffffe),
      lVar2 == 0)) ||
     (lVar2 = __dynamic_cast(lVar2,&LabelProtocol::typeinfo,&Label::typeinfo,0x2f8), lVar2 == 0)) {
                    /* catch() { ... } // from try @ 00e0b8b4 with catch @ 00e0b984 */
    if (((DAT_01788be8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01788be8), iVar1 != 0)) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &DAT_01788bd0,"");
      puVar3 = &DAT_01788bd0;
      __cxa_atexit(std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   ~basic_string,&DAT_01788bd0,&PTR_LOOP_016979c0);
      __cxa_guard_release(&DAT_01788be8);
    }
    else {
      puVar3 = &DAT_01788bd0;
    }
  }
  else {
    puVar3 = (undefined *)(lVar2 + 0x348);
  }
  return puVar3;
}

