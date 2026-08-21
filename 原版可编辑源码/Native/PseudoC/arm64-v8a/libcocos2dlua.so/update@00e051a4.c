
/* cocos2d::extension::AssetsManagerEx::update() */

void __thiscall cocos2d::extension::AssetsManagerEx::update(AssetsManagerEx *this)

{
  long lVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x118] != (AssetsManagerEx)0x0) goto switchD_00e05230_caseD_2;
  if (this[0x240] == (AssetsManagerEx)0x0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,"");
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_68,"");
    dispatchUpdateEvent(this,0,local_50,local_68,0,0);
LAB_00e052b8:
    if (((byte)local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    uVar2 = Manifest::isLoaded(*(Manifest **)(this + 0x100));
    if ((uVar2 & 1) == 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_50,"");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_68,"");
      dispatchUpdateEvent(this,0,local_50,local_68,0,0);
      goto LAB_00e052b8;
    }
    this[0x118] = (AssetsManagerEx)0x2;
    switch(*(undefined4 *)(this + 0x50)) {
    case 0:
      *(undefined4 *)(this + 0x50) = 1;
    case 1:
      downloadVersion(this);
      break;
    case 3:
      parseVersion(this);
      break;
    case 6:
      parseManifest(this);
      break;
    case 7:
    case 0xb:
      uVar2 = Manifest::isLoaded(*(Manifest **)(this + 0x110));
      if ((uVar2 & 1) != 0) {
        startUpdate();
        break;
      }
      *(undefined4 *)(this + 0x50) = 4;
    case 4:
      downloadManifest(this);
      break;
    case 8:
    case 9:
    case 10:
      this[0x118] = (AssetsManagerEx)0x0;
    }
  }
switchD_00e05230_caseD_2:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

