
/* cocos2d::extension::AssetsManager::AssetsManager(char const*, char const*, char const*) */

void __thiscall
cocos2d::extension::AssetsManager::AssetsManager
          (AssetsManager *this,char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  AssetsManager AVar2;
  long lVar3;
  Downloader *this_00;
  ulong uVar4;
  code *pcVar5;
  AssetsManager *pAVar6;
  undefined **local_90;
  AssetsManager *pAStack_88;
  long *local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  Node::Node((Node *)this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df6728 with catch @ 00df6acc
                        */
  pcVar1 = "";
  if (param_3 != (char *)0x0) {
    pcVar1 = param_3;
  }
  *(undefined ***)this = &PTR__AssetsManager_016e7648;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x2f8),pcVar1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x310),"");
  pcVar1 = "";
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x328),pcVar1);
  pcVar1 = "";
  if (param_2 != (char *)0x0) {
    pcVar1 = param_2;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x340),pcVar1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x358),"");
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df696c with catch @ 00df6b40
                        */
  this_00 = operator_new(0xd0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df692c with catch @ 00df6b44
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df68ec with catch @ 00df6b48
                        */
  network::Downloader::Downloader(this_00);
  AVar2 = this[0x2f8];
  *(Downloader **)(this + 0x370) = this_00;
  *(undefined4 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x380) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df685c with catch @ 00df6b5c
                        */
  *(undefined2 *)(this + 0x388) = 0;
  if (((byte)AVar2 & 1) == 0) {
    if ((byte)AVar2 >> 1 != 0) {
LAB_00df6b6c:
      if (((byte)AVar2 & 1) == 0) {
        uVar4 = (ulong)((byte)AVar2 >> 1);
        pAVar6 = this + 0x2f9;
      }
      else {
        uVar4 = *(ulong *)(this + 0x300);
        pAVar6 = *(AssetsManager **)(this + 0x308);
      }
      if (pAVar6[uVar4 - 1] != (AssetsManager)0x2f) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (this + 0x2f8),"/",1);
        this_00 = *(Downloader **)(this + 0x370);
      }
    }
  }
  else if (*(long *)(this + 0x300) != 0) goto LAB_00df6b6c;
  local_90 = &PTR_FUN_016e7c00;
  pAStack_88 = this;
  local_70 = (long *)&local_90;
  FUN_0090e07c(&local_90,this_00 + 0x90);
  if (&local_90 == (undefined ***)local_70) {
    pcVar5 = *(code **)(*local_70 + 0x20);
LAB_00df6bfc:
    (*pcVar5)();
  }
  else if (local_70 != (long *)0x0) {
    pcVar5 = *(code **)(*local_70 + 0x28);
    goto LAB_00df6bfc;
  }
  local_90 = &PTR_FUN_016e7c80;
  pAStack_88 = this;
  local_70 = (long *)&local_90;
  FUN_0090dd8c(&local_90,*(long *)(this + 0x370) + 0x60);
  if (&local_90 == (undefined ***)local_70) {
    pcVar5 = *(code **)(*local_70 + 0x20);
LAB_00df6c48:
    (*pcVar5)();
  }
  else if (local_70 != (long *)0x0) {
    pcVar5 = *(code **)(*local_70 + 0x28);
    goto LAB_00df6c48;
  }
  local_90 = &PTR_FUN_016e7d00;
  pAStack_88 = this;
  local_70 = (long *)&local_90;
  FUN_00df9160(&local_90,*(undefined8 *)(this + 0x370));
  if (&local_90 == (undefined ***)local_70) {
    pcVar5 = *(code **)(*local_70 + 0x20);
LAB_00df6c90:
    (*pcVar5)();
  }
  else if (local_70 != (long *)0x0) {
    pcVar5 = *(code **)(*local_70 + 0x28);
    goto LAB_00df6c90;
  }
  local_90 = &PTR_FUN_016e7d90;
  pAStack_88 = this;
  local_70 = (long *)&local_90;
  FUN_0090dad8(&local_90,*(long *)(this + 0x370) + 0x30);
  if (&local_90 == (undefined ***)local_70) {
    pcVar5 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_00df6ce0;
    pcVar5 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar5)();
LAB_00df6ce0:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

