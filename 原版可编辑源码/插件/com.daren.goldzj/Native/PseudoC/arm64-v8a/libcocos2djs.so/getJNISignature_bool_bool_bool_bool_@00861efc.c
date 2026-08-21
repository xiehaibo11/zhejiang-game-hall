
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   cocos2d::JniHelper::getJNISignature<bool, bool, bool, bool>(bool, bool, bool, bool) */

void __thiscall
cocos2d::JniHelper::getJNISignature<bool,bool,bool,bool>
          (JniHelper *this,bool param_1,bool param_2,bool param_3,bool param_4)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 *in_x8;
  undefined8 uVar5;
  undefined8 uVar6;
  byte local_68 [8];
  ulong local_60;
  char *local_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uStack_48 = 0;
  local_40 = (void *)0x0;
  local_50 = &DAT_00005a02;
  getJNISignature<bool,bool,bool>(param_1,param_2,param_3);
  uVar1 = (ulong)(local_68[0] >> 1);
  pcVar3 = (char *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    uVar1 = local_60;
    pcVar3 = local_58;
  }
  puVar4 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_50,pcVar3,uVar1);
  uVar6 = puVar4[1];
  uVar5 = *puVar4;
  in_x8[2] = puVar4[2];
  in_x8[1] = uVar6;
  *in_x8 = uVar5;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (((ulong)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

