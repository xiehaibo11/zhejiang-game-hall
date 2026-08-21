
/* WARNING: Type propagation algorithm not settling */
/* void cocos2d::JniHelper::callStaticVoidMethod<int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void cocos2d::JniHelper::
     callStaticVoidMethod<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
               (basic_string *param_1,basic_string *param_2,uint param_3,basic_string *param_4,
               basic_string *param_5,basic_string *param_6,basic_string *param_7)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  _jclass *p_Var4;
  _jmethodID *p_Var5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *pvVar12;
  basic_string *pbVar13;
  basic_string *pbVar14;
  ulong uVar15;
  void *pvVar16;
  void *pvVar17;
  ulong local_160;
  ulong uStack_158;
  void *local_150;
  ulong local_140;
  ulong uStack_138;
  void *local_130;
  ulong local_120;
  ulong uStack_118;
  void *local_110;
  ulong local_100;
  ulong uStack_f8;
  void *local_f0;
  JniHelper local_e8 [16];
  void *local_d8;
  ulong local_d0;
  ulong uStack_c8;
  char *local_c0;
  _jclass *local_b8;
  _jmethodID *p_Stack_b0;
  undefined8 local_a8;
  void *local_a0;
  ulong uStack_98;
  void *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_70;
  
  lVar2 = tpidr_el0;
                    /* try { // try from 009dd21c to 00add223 has its CatchHandler @ 009dd2d8 */
  local_70 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 009dd224 to 00add257 has its CatchHandler @ 009dd2e0 */
  uStack_f8 = 0;
  local_f0 = (void *)0x0;
  local_100 = 0;
  if (((byte)*param_4 & 1) == 0) {
    local_f0 = *(void **)(param_4 + 0x10);
    uStack_f8 = *(ulong *)(param_4 + 8);
    local_100 = *(ulong *)param_4;
  }
  else {
    uVar7 = *(ulong *)(param_4 + 8);
    if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar17 = *(void **)(param_4 + 0x10);
                    /* try { // try from 009dd27c to 00add28b has its CatchHandler @ 009dd2d4 */
    if (uVar7 < 0x17) {
      pvVar12 = (void *)((ulong)&local_100 | 1);
                    /* try { // try from 009dd28c to 00add2fb has its CatchHandler @ 009dd1b8 */
      local_100 = (ulong)(byte)((int)uVar7 << 1);
      if (uVar7 != 0) goto LAB_009dd2ec;
    }
    else {
      uVar15 = uVar7 + 0x10 & 0xfffffffffffffff0;
      pvVar12 = operator_new(uVar15);
      local_100 = uVar15 | 1;
                    /* catch() { ... } // from try @ 009dd27c with catch @ 009dd2d4 */
                    /* catch() { ... } // from try @ 009dd21c with catch @ 009dd2d8 */
                    /* catch() { ... } // from try @ 009dd224 with catch @ 009dd2e0 */
      uStack_f8 = uVar7;
      local_f0 = pvVar12;
LAB_009dd2ec:
      memcpy(pvVar12,pvVar17,uVar7);
    }
                    /* try { // try from 009dd2fc to 00add363 has its CatchHandler @ 009dd2fc
                       catch() { ... } // from try @ 009dd2fc with catch @ 009dd2fc
                       catch() { ... } // from try @ 009dd3cc with catch @ 009dd2fc */
    *(undefined1 *)((long)pvVar12 + uVar7) = 0;
  }
  uStack_118 = 0;
  local_110 = (void *)0x0;
  local_120 = 0;
  if (((byte)*param_5 & 1) == 0) {
    local_110 = *(void **)(param_5 + 0x10);
    uStack_118 = *(ulong *)(param_5 + 8);
    local_120 = *(ulong *)param_5;
  }
  else {
    uVar7 = *(ulong *)(param_5 + 8);
    if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar17 = *(void **)(param_5 + 0x10);
    if (uVar7 < 0x17) {
      pvVar12 = (void *)((ulong)&local_120 | 1);
      local_120 = (ulong)(byte)((int)uVar7 << 1);
      if (uVar7 != 0) goto LAB_009dd3a8;
    }
    else {
                    /* try { // try from 009dd364 to 00add36b has its CatchHandler @ 009dd414 */
                    /* try { // try from 009dd370 to 00add39b has its CatchHandler @ 009dd41c */
      uVar15 = uVar7 + 0x10 & 0xfffffffffffffff0;
      pvVar12 = operator_new(uVar15);
      local_120 = uVar15 | 1;
      uStack_118 = uVar7;
      local_110 = pvVar12;
LAB_009dd3a8:
                    /* try { // try from 009dd3ac to 00add3bb has its CatchHandler @ 009dd410 */
      memcpy(pvVar12,pvVar17,uVar7);
    }
    *(undefined1 *)((long)pvVar12 + uVar7) = 0;
  }
  uStack_138 = 0;
  local_130 = (void *)0x0;
  local_140 = 0;
                    /* try { // try from 009dd3c4 to 00add3cb has its CatchHandler @ 009dd40c */
  if (((byte)*param_6 & 1) == 0) {
                    /* try { // try from 009dd3cc to 00add437 has its CatchHandler @ 009dd2fc */
    local_130 = *(void **)(param_6 + 0x10);
    uStack_138 = *(ulong *)(param_6 + 8);
    local_140 = *(ulong *)param_6;
  }
  else {
    uVar7 = *(ulong *)(param_6 + 8);
    if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar17 = *(void **)(param_6 + 0x10);
    if (uVar7 < 0x17) {
      pvVar12 = (void *)((ulong)&local_140 | 1);
      local_140 = (ulong)(byte)((int)uVar7 << 1);
      if (uVar7 != 0) goto LAB_009dd464;
    }
    else {
                    /* catch() { ... } // from try @ 009dd3ac with catch @ 009dd410 */
                    /* catch() { ... } // from try @ 009dd364 with catch @ 009dd414 */
                    /* catch() { ... } // from try @ 009dd370 with catch @ 009dd41c */
      uVar15 = uVar7 + 0x10 & 0xfffffffffffffff0;
      pvVar12 = operator_new(uVar15);
                    /* try { // try from 009dd438 to 00add50f has its CatchHandler @ 009dd438
                       catch() { ... } // from try @ 009dd438 with catch @ 009dd438
                       catch() { ... } // from try @ 009dd69c with catch @ 009dd438 */
      local_140 = uVar15 | 1;
      uStack_138 = uVar7;
      local_130 = pvVar12;
LAB_009dd464:
      memcpy(pvVar12,pvVar17,uVar7);
    }
    *(undefined1 *)((long)pvVar12 + uVar7) = 0;
  }
  uStack_158 = 0;
  local_150 = (void *)0x0;
  local_160 = 0;
  if (((byte)*param_7 & 1) == 0) {
    local_150 = *(void **)(param_7 + 0x10);
    uStack_158 = *(ulong *)(param_7 + 8);
    local_160 = *(ulong *)param_7;
    goto LAB_009dd534;
  }
  uVar7 = *(ulong *)(param_7 + 8);
  if (0xffffffffffffffef < uVar7) {
                    /* try { // try from 009dd7d8 to 00add7df has its CatchHandler @ 009dd888 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar17 = *(void **)(param_7 + 0x10);
  if (uVar7 < 0x17) {
    pvVar12 = (void *)((ulong)&local_160 | 1);
    local_160 = (ulong)(byte)((int)uVar7 << 1);
    if (uVar7 != 0) goto LAB_009dd520;
  }
  else {
    uVar15 = uVar7 + 0x10 & 0xfffffffffffffff0;
    pvVar12 = operator_new(uVar15);
    local_160 = uVar15 | 1;
                    /* try { // try from 009dd510 to 00add51b has its CatchHandler @ 009dd710 */
    uStack_158 = uVar7;
    local_150 = pvVar12;
LAB_009dd520:
    memcpy(pvVar12,pvVar17,uVar7);
  }
  *(undefined1 *)((long)pvVar12 + uVar7) = 0;
LAB_009dd534:
  getJNISignature<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (local_e8,param_3,&local_100,&local_120,&local_140,&local_160);
  puVar6 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)local_e8,0,"(",1);
  local_90 = (void *)puVar6[2];
  uStack_98 = puVar6[1];
  local_a0 = (void *)*puVar6;
                    /* try { // try from 009dd574 to 00add57b has its CatchHandler @ 009dd700 */
  puVar6[1] = 0;
  puVar6[2] = 0;
                    /* try { // try from 009dd57c to 00add587 has its CatchHandler @ 009dd708 */
  *puVar6 = 0;
  puVar6 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_a0,")V",2);
  local_c0 = (char *)puVar6[2];
  uStack_c8 = puVar6[1];
  local_d0 = *puVar6;
                    /* try { // try from 009dd5a0 to 00add5a7 has its CatchHandler @ 009dd6f0 */
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
                    /* try { // try from 009dd5ac to 00add5f3 has its CatchHandler @ 009dd718 */
  if (((ulong)local_a0 & 1) != 0) {
                    /* catch() { ... } // from try @ 009dd5ac with catch @ 009dd718 */
    operator_delete(local_90);
  }
  if (((byte)local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  if ((local_160 & 1) != 0) {
    operator_delete(local_150);
  }
  if ((local_140 & 1) != 0) {
    operator_delete(local_130);
  }
  if ((local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  pbVar13 = *(basic_string **)(param_1 + 0x10);
  pbVar14 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar13 = param_1 + 1;
  }
  if (((byte)*param_2 & 1) == 0) {
    pbVar14 = param_2 + 1;
  }
  pcVar1 = (char *)((ulong)&local_d0 | 1);
  if ((local_d0 & 1) != 0) {
    pcVar1 = local_c0;
  }
  uVar7 = getStaticMethodInfo((JniMethodInfo_ *)&local_b8,(char *)pbVar13,(char *)pbVar14,pcVar1);
  p_Var5 = p_Stack_b0;
  p_Var4 = local_b8;
  if ((uVar7 & 1) == 0) {
    reportError(param_1,param_2,(basic_string *)&local_d0);
  }
  else {
    uStack_98 = 0;
    local_a0 = (void *)0x0;
    uStack_88 = 0;
    local_90 = (void *)0x0;
    local_80 = 0x3f800000;
    uVar8 = convert((unordered_map *)&local_a0,(JniMethodInfo_ *)&local_b8,param_4);
    uVar9 = convert((unordered_map *)&local_a0,(JniMethodInfo_ *)&local_b8,param_5);
    uVar10 = convert((unordered_map *)&local_a0,(JniMethodInfo_ *)&local_b8,param_6);
    uVar11 = convert((unordered_map *)&local_a0,(JniMethodInfo_ *)&local_b8,param_7);
                    /* try { // try from 009dd68c to 00add69b has its CatchHandler @ 009dd6e8 */
                    /* try { // try from 009dd69c to 00add797 has its CatchHandler @ 009dd438 */
    _JNIEnv::CallStaticVoidMethod(p_Var4,p_Var5,local_a8,(ulong)param_3,uVar8,uVar9,uVar10,uVar11);
    (**(code **)(*(long *)local_b8 + 0xb8))(local_b8,p_Stack_b0);
    deleteLocalRefs((_JNIEnv *)local_b8,(unordered_map *)&local_a0);
    pvVar17 = local_a0;
    puVar3 = local_90;
    while (puVar3 != (void *)0x0) {
      pvVar12 = (void *)puVar3[3];
      pvVar16 = (void *)*puVar3;
      local_a0 = pvVar17;
      if (pvVar12 != (void *)0x0) {
        puVar3[4] = pvVar12;
        operator_delete(pvVar12);
      }
                    /* catch() { ... } // from try @ 009dd68c with catch @ 009dd6e8 */
      operator_delete(puVar3);
                    /* catch() { ... } // from try @ 009dd5a0 with catch @ 009dd6f0 */
      pvVar17 = local_a0;
      puVar3 = pvVar16;
    }
    local_a0 = (void *)0x0;
                    /* catch() { ... } // from try @ 009dd574 with catch @ 009dd700 */
    if (pvVar17 != (void *)0x0) {
      operator_delete(pvVar17);
                    /* catch() { ... } // from try @ 009dd57c with catch @ 009dd708 */
    }
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
                    /* try { // try from 009dd798 to 00add7d7 has its CatchHandler @ 009dd798
                       catch() { ... } // from try @ 009dd798 with catch @ 009dd798
                       catch() { ... } // from try @ 009dd838 with catch @ 009dd798 */
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

