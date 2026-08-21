
void FUN_00aa99fc(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,basic_string *param_2,ulong param_3,allocator *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulong uVar5;
  basic_string local_80 [16];
  void *local_70;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  ulong local_50;
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = 0;
  local_40 = (void *)0x0;
  local_50 = 0;
  uVar5 = cocos2d::StringUtils::UTF8ToUTF32(param_2,(basic_string *)&local_50);
  if ((uVar5 & 1) == 0) {
                    /* catch() { ... } // from try @ 00aa9974 with catch @ 00aa9a74 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(param_1,"");
  }
  else {
                    /* catch() { ... } // from try @ 00aa99a8 with catch @ 00aa9a40 */
                    /* catch() { ... } // from try @ 00aa99c0 with catch @ 00aa9a44 */
    uVar5 = local_50 >> 1 & 0x7f;
    if ((local_50 & 1) != 0) {
      uVar5 = local_48;
    }
    if (uVar5 < param_3) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(param_1,"");
    }
    else {
      uStack_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      std::__ndk1::
      basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>::
      basic_string(local_80,(ulong)&local_50,param_3,param_4);
      uVar5 = cocos2d::StringUtils::UTF32ToUTF8(local_80,(basic_string *)&local_68);
      if (((byte)local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      pvVar4 = local_58;
      uVar3 = uStack_60;
      uVar2 = local_68;
      if ((uVar5 & 1) == 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(param_1,"");
        if ((local_68 & 1) != 0) {
          operator_delete(local_58);
        }
      }
      else {
        uStack_60 = 0;
        local_58 = (void *)0x0;
        local_68 = 0;
        *(void **)(param_1 + 0x10) = pvVar4;
        *(undefined8 *)(param_1 + 8) = uVar3;
        *(ulong *)param_1 = uVar2;
      }
    }
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

