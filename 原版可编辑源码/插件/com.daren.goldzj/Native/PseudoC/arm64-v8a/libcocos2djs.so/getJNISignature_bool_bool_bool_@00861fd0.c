
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   cocos2d::JniHelper::getJNISignature<bool, bool, bool>(bool, bool, bool) */

void cocos2d::JniHelper::getJNISignature<bool,bool,bool>(bool param_1,bool param_2,bool param_3)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined8 *in_x8;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong local_90;
  ulong uStack_88;
  char *local_80;
  undefined1 *local_70;
  undefined8 uStack_68;
  void *local_60;
  undefined1 *local_58;
  undefined8 local_50;
  void *local_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uStack_68 = 0;
  uStack_38 = 0;
  local_60 = (void *)0x0;
  local_70 = &DAT_00005a02;
  local_30 = (void *)0x0;
  local_40 = &DAT_00005a02;
  local_50 = 0;
  local_48 = (void *)0x0;
  local_58 = &DAT_00005a02;
  puVar4 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_40,(char *)((ulong)&local_58 | 1),1);
  local_80 = (char *)puVar4[2];
  uStack_88 = puVar4[1];
  local_90 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if (((ulong)local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if (((ulong)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  uVar1 = local_90 >> 1 & 0x7f;
  pcVar3 = (char *)((ulong)&local_90 | 1);
  if ((local_90 & 1) != 0) {
    uVar1 = uStack_88;
    pcVar3 = local_80;
  }
  puVar5 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_70,pcVar3,uVar1);
  uVar7 = puVar5[1];
  uVar6 = *puVar5;
  in_x8[2] = puVar5[2];
  in_x8[1] = uVar7;
  *in_x8 = uVar6;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

