
/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   cocos2d::JniHelper::getJNISignature<int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)
    */

void __thiscall
cocos2d::JniHelper::
getJNISignature<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
          (undefined8 *param_1,undefined8 param_2,ulong *param_3,ulong *param_4,ulong *param_5,
          ulong *param_6)

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
  ulong local_120;
  ulong uStack_118;
  void *local_110;
  ulong local_100;
  ulong uStack_f8;
  void *local_f0;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  JniHelper local_a0 [8];
  ulong local_98;
  char *local_90;
  undefined1 *local_88;
  undefined8 uStack_80;
  void *local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uStack_80 = 0;
  local_78 = (void *)0x0;
  local_88 = &DAT_00004902;
  uStack_b8 = 0;
  local_b0 = (void *)0x0;
  local_c0 = 0;
  if ((*param_3 & 1) == 0) {
    local_b0 = (void *)param_3[2];
    uStack_b8 = param_3[1];
    local_c0 = *param_3;
  }
  else {
    uVar5 = param_3[1];
    if (0xffffffffffffffef < uVar5) {
                    /* try { // try from 009deb90 to 00adebbb has its CatchHandler @ 009dec08 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar4 = (void *)param_3[2];
    if (uVar5 < 0x17) {
      pvVar6 = (void *)((ulong)&local_c0 | 1);
      local_c0 = (ulong)(byte)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_009de8cc;
    }
    else {
      uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pvVar6 = operator_new(uVar7);
      local_c0 = uVar7 | 1;
      uStack_b8 = uVar5;
      local_b0 = pvVar6;
LAB_009de8cc:
      memcpy(pvVar6,pvVar4,uVar5);
    }
                    /* try { // try from 009de8dc to 00ade96f has its CatchHandler @ 009de8dc
                       catch() { ... } // from try @ 009de8dc with catch @ 009de8dc
                       catch() { ... } // from try @ 009de9ac with catch @ 009de8dc */
    *(undefined1 *)((long)pvVar6 + uVar5) = 0;
  }
  uStack_d8 = 0;
  local_d0 = (void *)0x0;
  local_e0 = 0;
  if ((*param_4 & 1) == 0) {
    local_d0 = (void *)param_4[2];
    uStack_d8 = param_4[1];
    local_e0 = *param_4;
  }
  else {
    uVar5 = param_4[1];
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar4 = (void *)param_4[2];
    if (uVar5 < 0x17) {
      pvVar6 = (void *)((ulong)&local_e0 | 1);
      local_e0 = (ulong)(byte)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_009de954;
    }
    else {
      uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pvVar6 = operator_new(uVar7);
      local_e0 = uVar7 | 1;
      uStack_d8 = uVar5;
      local_d0 = pvVar6;
LAB_009de954:
      memcpy(pvVar6,pvVar4,uVar5);
    }
    *(undefined1 *)((long)pvVar6 + uVar5) = 0;
  }
  uStack_f8 = 0;
  local_f0 = (void *)0x0;
  local_100 = 0;
                    /* try { // try from 009de970 to 00ade977 has its CatchHandler @ 009de9f8 */
  if ((*param_5 & 1) == 0) {
                    /* try { // try from 009de978 to 00ade987 has its CatchHandler @ 009de9e8 */
    local_f0 = (void *)param_5[2];
    uStack_f8 = param_5[1];
    local_100 = *param_5;
  }
  else {
    uVar5 = param_5[1];
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar4 = (void *)param_5[2];
                    /* try { // try from 009de99c to 00ade9ab has its CatchHandler @ 009de9e4 */
    if (uVar5 < 0x17) {
                    /* try { // try from 009de9ac to 00adea0b has its CatchHandler @ 009de8dc */
      pvVar6 = (void *)((ulong)&local_100 | 1);
      local_100 = (ulong)(byte)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_009de9dc;
    }
    else {
      uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pvVar6 = operator_new(uVar7);
      local_100 = uVar7 | 1;
      uStack_f8 = uVar5;
      local_f0 = pvVar6;
LAB_009de9dc:
                    /* catch() { ... } // from try @ 009de99c with catch @ 009de9e4 */
                    /* catch() { ... } // from try @ 009de978 with catch @ 009de9e8 */
      memcpy(pvVar6,pvVar4,uVar5);
    }
    *(undefined1 *)((long)pvVar6 + uVar5) = 0;
  }
  uStack_118 = 0;
  local_110 = (void *)0x0;
  local_120 = 0;
                    /* catch() { ... } // from try @ 009de970 with catch @ 009de9f8 */
  if ((*param_6 & 1) == 0) {
    local_110 = (void *)param_6[2];
    uStack_118 = param_6[1];
    local_120 = *param_6;
                    /* try { // try from 009dea0c to 00adea73 has its CatchHandler @ 009dea0c
                       catch() { ... } // from try @ 009dea0c with catch @ 009dea0c
                       catch() { ... } // from try @ 009deac8 with catch @ 009dea0c */
    goto LAB_009dea78;
  }
  uVar5 = param_6[1];
  if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar4 = (void *)param_6[2];
  if (uVar5 < 0x17) {
    pvVar6 = (void *)((ulong)&local_120 | 1);
    local_120 = (ulong)(byte)((int)uVar5 << 1);
    if (uVar5 != 0) goto LAB_009dea64;
  }
  else {
    uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar6 = operator_new(uVar7);
    local_120 = uVar7 | 1;
    uStack_118 = uVar5;
    local_110 = pvVar6;
LAB_009dea64:
    memcpy(pvVar6,pvVar4,uVar5);
  }
                    /* try { // try from 009dea74 to 00adea7b has its CatchHandler @ 009deb00 */
  *(undefined1 *)((long)pvVar6 + uVar5) = 0;
LAB_009dea78:
                    /* try { // try from 009dea80 to 00adeaa7 has its CatchHandler @ 009deb08 */
  getJNISignature<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (local_a0,&local_c0,&local_e0,&local_100,&local_120);
  uVar5 = (ulong)((byte)local_a0[0] >> 1);
  pcVar2 = (char *)((ulong)local_a0 | 1);
  if (((byte)local_a0[0] & 1) != 0) {
    uVar5 = local_98;
    pcVar2 = local_90;
  }
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_88,pcVar2,uVar5);
                    /* try { // try from 009deab8 to 00adeac7 has its CatchHandler @ 009deafc */
  uVar9 = puVar3[1];
  uVar8 = *puVar3;
  param_1[2] = puVar3[2];
  param_1[1] = uVar9;
  *param_1 = uVar8;
                    /* try { // try from 009deac8 to 00adeb23 has its CatchHandler @ 009dea0c */
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  if ((local_e0 & 1) != 0) {
                    /* try { // try from 009deb68 to 00adeb83 has its CatchHandler @ 009dec00 */
    operator_delete(local_d0);
  }
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
                    /* try { // try from 009deb84 to 00adeb8b has its CatchHandler @ 009debf8 */
  if (((ulong)local_88 & 1) != 0) {
                    /* catch() { ... } // from try @ 009dea74 with catch @ 009deb00 */
    operator_delete(local_78);
  }
                    /* catch() { ... } // from try @ 009dea80 with catch @ 009deb08 */
  if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* try { // try from 009deb2c to 00adeb67 has its CatchHandler @ 009deb2c
                       catch() { ... } // from try @ 009deb2c with catch @ 009deb2c
                       catch() { ... } // from try @ 009debbc with catch @ 009deb2c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

