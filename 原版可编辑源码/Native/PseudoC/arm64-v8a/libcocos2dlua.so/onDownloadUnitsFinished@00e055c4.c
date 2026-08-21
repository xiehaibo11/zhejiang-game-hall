
/* cocos2d::extension::AssetsManagerEx::onDownloadUnitsFinished() */

void __thiscall cocos2d::extension::AssetsManagerEx::onDownloadUnitsFinished(AssetsManagerEx *this)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x160) == 0) {
    if (*(int *)(this + 0x50) == 8) {
      updateSucceed(this);
    }
  }
  else {
    Manifest::saveToFile(*(Manifest **)(this + 0x108),(basic_string *)(this + 0xd0));
    *(undefined4 *)(this + 0x50) = 0xb;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,"");
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_68,"");
    dispatchUpdateEvent(this,9,local_50,local_68,0,0);
    if (((byte)local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

