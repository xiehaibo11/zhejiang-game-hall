
/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   cocos2d::JniHelper::getJNISignature<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

void __thiscall
cocos2d::JniHelper::
getJNISignature<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
          (undefined8 *param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  byte local_88 [8];
  ulong local_80;
  char *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined2 uStack_5f;
  undefined1 uStack_5d;
  undefined4 uStack_5c;
  long local_58;
  
                    /* try { // try from 009df084 to 00adf0e3 has its CatchHandler @ 009df00c */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x24;
  uStack_5c = 0;
  uStack_67 = 0x697274532f676e;
  uStack_60 = 0x6e;
  uStack_6f = 0x6c2f6176616a4c;
  uStack_68 = 0x61;
  uStack_5f = 0x3b67;
  uStack_5d = 0;
  uStack_98 = 0;
  local_90 = (void *)0x0;
  local_a0 = 0;
  if ((*param_3 & 1) == 0) {
    local_90 = (void *)param_3[2];
    uStack_98 = param_3[1];
    local_a0 = *param_3;
                    /* try { // try from 009df0e4 to 00adf103 has its CatchHandler @ 009df28c */
  }
  else {
    uVar5 = param_3[1];
    if (0xffffffffffffffef < uVar5) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009df064 with catch @ 009df2b0
                        */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar4 = (void *)param_3[2];
    if (uVar5 < 0x17) {
                    /* try { // try from 009df104 to 00adf143 has its CatchHandler @ 009df00c */
      pvVar6 = (void *)((ulong)&local_a0 | 1);
      local_a0 = (ulong)(byte)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_009df138;
    }
    else {
      uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pvVar6 = operator_new(uVar7);
      local_a0 = uVar7 | 1;
      uStack_98 = uVar5;
      local_90 = pvVar6;
LAB_009df138:
                    /* try { // try from 009df144 to 00adf18f has its CatchHandler @ 009df2b8 */
      memcpy(pvVar6,pvVar4,uVar5);
    }
    *(undefined1 *)((long)pvVar6 + uVar5) = 0;
  }
  uStack_b8 = 0;
  local_b0 = (void *)0x0;
  local_c0 = 0;
  if ((*param_4 & 1) == 0) {
    local_b0 = (void *)param_4[2];
    uStack_b8 = param_4[1];
    local_c0 = *param_4;
    goto LAB_009df1d4;
  }
  uVar5 = param_4[1];
  if (0xffffffffffffffef < uVar5) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009df144 with catch @ 009df2b8
                        */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar4 = (void *)param_4[2];
  if (uVar5 < 0x17) {
    pvVar6 = (void *)((ulong)&local_c0 | 1);
    local_c0 = (ulong)(byte)((int)uVar5 << 1);
    if (uVar5 != 0) goto LAB_009df1c0;
  }
  else {
    uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar6 = operator_new(uVar7);
                    /* try { // try from 009df1b0 to 00adf1cf has its CatchHandler @ 009df26c */
    local_c0 = uVar7 | 1;
    uStack_b8 = uVar5;
    local_b0 = pvVar6;
LAB_009df1c0:
    memcpy(pvVar6,pvVar4,uVar5);
  }
                    /* try { // try from 009df1d0 to 00adf1ef has its CatchHandler @ 009df00c */
  *(undefined1 *)((long)pvVar6 + uVar5) = 0;
LAB_009df1d4:
  getJNISignature<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (local_88,&local_a0,&local_c0);
                    /* try { // try from 009df1f0 to 00adf20f has its CatchHandler @ 009df258 */
  uVar5 = (ulong)(local_88[0] >> 1);
  pcVar2 = (char *)((ulong)local_88 | 1);
  if ((local_88[0] & 1) != 0) {
    uVar5 = local_80;
    pcVar2 = local_78;
  }
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     (&local_70,pcVar2,uVar5);
                    /* try { // try from 009df210 to 00adf2cb has its CatchHandler @ 009df00c */
  uVar9 = puVar3[1];
  uVar8 = *puVar3;
  param_1[2] = puVar3[2];
  param_1[1] = uVar9;
  *param_1 = uVar8;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_c0 & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009df0e4 with catch @ 009df28c
                        */
    operator_delete(local_b0);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (((byte)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,CONCAT13(uStack_5d,CONCAT21(uStack_5f,uStack_60))));
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009df1f0 with catch @ 009df258
                        */
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009df1b0 with catch @ 009df26c
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

