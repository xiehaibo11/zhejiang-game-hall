
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   cocos2d::JniHelper::getJNISignature<int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)
    */

void cocos2d::JniHelper::
     getJNISignature<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte local_58 [17];
  undefined2 uStack_47;
  undefined1 uStack_45;
  undefined4 uStack_44;
  undefined1 *local_40;
  undefined8 uStack_38;
  void *local_30;
  long local_28;
  
                    /* try { // try from 009d9924 to 00ad99d7 has its CatchHandler @ 009d9e5c */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = 0;
  local_58[0] = 0x24;
  local_30 = (void *)0x0;
  local_40 = &DAT_00004902;
  uStack_44 = 0;
  local_58[9] = 0x6e;
  local_58[10] = 0x67;
  local_58[0xb] = 0x2f;
  local_58[0xc] = 0x53;
  local_58[0xd] = 0x74;
  local_58[0xe] = 0x72;
  local_58[0xf] = 0x69;
  local_58[0x10] = 0x6e;
  local_58[1] = 0x4c;
  local_58[2] = 0x6a;
  local_58[3] = 0x61;
  local_58[4] = 0x76;
  local_58[5] = 0x61;
  local_58[6] = 0x2f;
  local_58[7] = 0x6c;
  local_58[8] = 0x61;
  uStack_47 = 0x3b67;
  uStack_45 = 0;
  puVar2 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_40,(char *)((ulong)local_58 | 1),0x12);
  uVar4 = puVar2[1];
  uVar3 = *puVar2;
  param_1[2] = puVar2[2];
  param_1[1] = uVar4;
  *param_1 = uVar3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  if ((local_58[0] & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_44,
                                     CONCAT13(uStack_45,CONCAT21(uStack_47,local_58[0x10]))));
  }
  if (((ulong)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
                    /* try { // try from 009d99d8 to 00ad9b5b has its CatchHandler @ 009d9e60 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

