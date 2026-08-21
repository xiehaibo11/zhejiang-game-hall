
/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   cocos2d::JniHelper::getJNISignature<int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)
    */

void __thiscall
cocos2d::JniHelper::
getJNISignature<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
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
  undefined1 *local_70;
  undefined8 uStack_68;
  void *local_60;
  long local_58;
  
                    /* try { // try from 009df36c to 00adf3ab has its CatchHandler @ 009df36c
                       catch() { ... } // from try @ 009df36c with catch @ 009df36c
                       catch() { ... } // from try @ 009df42c with catch @ 009df36c */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uStack_68 = 0;
  local_60 = (void *)0x0;
  local_70 = &DAT_00004902;
  uStack_98 = 0;
  local_90 = (void *)0x0;
  local_a0 = 0;
                    /* try { // try from 009df3ac to 00adf3b7 has its CatchHandler @ 009df478 */
  if ((*param_3 & 1) == 0) {
    local_90 = (void *)param_3[2];
    uStack_98 = param_3[1];
    local_a0 = *param_3;
  }
  else {
    uVar5 = param_3[1];
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar4 = (void *)param_3[2];
                    /* try { // try from 009df3d4 to 00adf3db has its CatchHandler @ 009df480 */
    if (uVar5 < 0x17) {
                    /* try { // try from 009df3dc to 00adf3eb has its CatchHandler @ 009df488 */
      pvVar6 = (void *)((ulong)&local_a0 | 1);
      local_a0 = (ulong)(byte)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_009df414;
    }
    else {
      uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pvVar6 = operator_new(uVar7);
      local_a0 = uVar7 | 1;
                    /* try { // try from 009df40c to 00adf41b has its CatchHandler @ 009df474 */
      uStack_98 = uVar5;
      local_90 = pvVar6;
LAB_009df414:
      memcpy(pvVar6,pvVar4,uVar5);
    }
                    /* try { // try from 009df424 to 00adf42b has its CatchHandler @ 009df470 */
    *(undefined1 *)((long)pvVar6 + uVar5) = 0;
  }
  uStack_b8 = 0;
  local_b0 = (void *)0x0;
                    /* try { // try from 009df42c to 00adf4ab has its CatchHandler @ 009df36c */
  local_c0 = 0;
  if ((*param_4 & 1) == 0) {
    local_b0 = (void *)param_4[2];
    uStack_b8 = param_4[1];
    local_c0 = *param_4;
    goto LAB_009df4b0;
  }
  uVar5 = param_4[1];
  if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar4 = (void *)param_4[2];
  if (uVar5 < 0x17) {
    pvVar6 = (void *)((ulong)&local_c0 | 1);
                    /* catch() { ... } // from try @ 009df424 with catch @ 009df470 */
    local_c0 = (ulong)(byte)((int)uVar5 << 1);
                    /* catch() { ... } // from try @ 009df40c with catch @ 009df474 */
    if (uVar5 != 0) goto LAB_009df49c;
  }
  else {
                    /* catch() { ... } // from try @ 009df3d4 with catch @ 009df480 */
    uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
                    /* catch() { ... } // from try @ 009df3dc with catch @ 009df488 */
    pvVar6 = operator_new(uVar7);
    local_c0 = uVar7 | 1;
    uStack_b8 = uVar5;
    local_b0 = pvVar6;
LAB_009df49c:
    memcpy(pvVar6,pvVar4,uVar5);
  }
                    /* catch() { ... } // from try @ 009df5a0 with catch @ 009df4ac */
  *(undefined1 *)((long)pvVar6 + uVar5) = 0;
LAB_009df4b0:
  getJNISignature<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (local_88,&local_a0,&local_c0);
  uVar5 = (ulong)(local_88[0] >> 1);
  pcVar2 = (char *)((ulong)local_88 | 1);
  if ((local_88[0] & 1) != 0) {
    uVar5 = local_80;
    pcVar2 = local_78;
  }
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_70,pcVar2,uVar5);
  uVar9 = puVar3[1];
  uVar8 = *puVar3;
  param_1[2] = puVar3[2];
                    /* try { // try from 009df4f4 to 00adf517 has its CatchHandler @ 009df5e0 */
  param_1[1] = uVar9;
  *param_1 = uVar8;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
                    /* try { // try from 009df55c to 00adf563 has its CatchHandler @ 009df5e4 */
  }
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

