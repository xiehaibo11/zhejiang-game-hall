
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   cocos2d::JniHelper::getJNISignature<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, float, bool, bool, bool,
   bool>(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, float, bool, bool, bool, bool) */

void __thiscall
cocos2d::JniHelper::
getJNISignature<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float,bool,bool,bool,bool>
          (undefined8 *param_1,float param_2,undefined8 param_3,uint param_4,byte param_5,
          byte param_6,bool param_7)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte local_68 [8];
  ulong local_60;
  char *local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined2 uStack_3f;
  undefined1 uStack_3d;
  undefined4 uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_50 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x24;
  uStack_3c = 0;
  uStack_3f = 0x3b67;
  uStack_47 = 0x697274532f676e;
  uStack_40 = 0x6e;
  uStack_4f = 0x6c2f6176616a4c;
  uStack_48 = 0x61;
  uStack_3d = 0;
  getJNISignature<float,bool,bool,bool,bool>
            ((JniHelper *)(ulong)(param_4 & 1),param_2,(bool)(param_5 & 1),(bool)(param_6 & 1),
             (bool)(param_7 & 1),param_7);
  uVar1 = (ulong)(local_68[0] >> 1);
  pcVar3 = (char *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    uVar1 = local_60;
    pcVar3 = local_58;
  }
  puVar4 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     (&local_50,pcVar3,uVar1);
  uVar6 = puVar4[1];
  uVar5 = *puVar4;
  param_1[2] = puVar4[2];
  param_1[1] = uVar6;
  *param_1 = uVar5;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_3c,CONCAT13(uStack_3d,CONCAT21(uStack_3f,uStack_40))));
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

