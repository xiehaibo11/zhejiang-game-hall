
/* cocos2d::extension::ControlButton::getTitleTTFForState(cocos2d::extension::Control::State) */

undefined * cocos2d::extension::ControlButton::getTitleTTFForState(long *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x6d8))();
  if (((lVar2 != 0) &&
      (lVar2 = __dynamic_cast(lVar2,&Node::typeinfo,&LabelProtocol::typeinfo,0xfffffffffffffffe),
      lVar2 != 0)) &&
     (plVar3 = (long *)__dynamic_cast(lVar2,&LabelProtocol::typeinfo,&Label::typeinfo,0x2f8),
     plVar3 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00e0b6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined *)(**(code **)(*plVar3 + 0x568))();
    return puVar4;
  }
  if (((DAT_01788bc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01788bc8), iVar1 != 0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_01788bb0,"");
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_01788bb0,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01788bc8);
  }
  return &DAT_01788bb0;
}

