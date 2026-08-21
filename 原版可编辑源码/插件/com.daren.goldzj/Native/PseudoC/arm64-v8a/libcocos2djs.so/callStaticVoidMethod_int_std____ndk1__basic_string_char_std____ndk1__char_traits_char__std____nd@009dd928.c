
/* WARNING: Type propagation algorithm not settling */
/* void cocos2d::JniHelper::callStaticVoidMethod<int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void cocos2d::JniHelper::
     callStaticVoidMethod<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
               (basic_string *param_1,basic_string *param_2,uint param_3,basic_string *param_4,
               basic_string *param_5)

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
  void *pvVar10;
  basic_string *pbVar11;
  basic_string *pbVar12;
  void *pvVar13;
  void *pvVar14;
  ulong uVar15;
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
  
                    /* try { // try from 009dd940 to 00add94f has its CatchHandler @ 009dd9a0 */
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 009dd958 to 00add95f has its CatchHandler @ 009dd99c */
                    /* try { // try from 009dd960 to 00add9c7 has its CatchHandler @ 009dd89c */
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
    pvVar14 = *(void **)(param_4 + 0x10);
                    /* catch() { ... } // from try @ 009dd958 with catch @ 009dd99c */
                    /* catch() { ... } // from try @ 009dd940 with catch @ 009dd9a0 */
    if (uVar7 < 0x17) {
                    /* catch() { ... } // from try @ 009dd904 with catch @ 009dd9a4 */
                    /* catch() { ... } // from try @ 009dd910 with catch @ 009dd9ac */
      pvVar10 = (void *)((ulong)&local_100 | 1);
      local_100 = (ulong)(byte)((int)uVar7 << 1);
      if (uVar7 != 0) goto LAB_009dd9dc;
    }
    else {
      uVar15 = uVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 009dd9c8 to 00adda27 has its CatchHandler @ 009dd9c8
                       catch() { ... } // from try @ 009dd9c8 with catch @ 009dd9c8
                       catch() { ... } // from try @ 009dda80 with catch @ 009dd9c8 */
      pvVar10 = operator_new(uVar15);
      local_100 = uVar15 | 1;
      uStack_f8 = uVar7;
      local_f0 = pvVar10;
LAB_009dd9dc:
      memcpy(pvVar10,pvVar14,uVar7);
    }
    *(undefined1 *)((long)pvVar10 + uVar7) = 0;
  }
  uStack_118 = 0;
  local_110 = (void *)0x0;
  local_120 = 0;
  if (((byte)*param_5 & 1) == 0) {
    local_110 = *(void **)(param_5 + 0x10);
    uStack_118 = *(ulong *)(param_5 + 8);
    local_120 = *(ulong *)param_5;
    goto LAB_009dda78;
  }
  uVar7 = *(ulong *)(param_5 + 8);
  if (0xffffffffffffffef < uVar7) {
                    /* try { // try from 009ddca0 to 00addcaf has its CatchHandler @ 009ddd00 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar14 = *(void **)(param_5 + 0x10);
                    /* try { // try from 009dda28 to 00adda2f has its CatchHandler @ 009ddac4 */
  if (uVar7 < 0x17) {
                    /* try { // try from 009dda30 to 00adda3f has its CatchHandler @ 009ddacc */
    pvVar10 = (void *)((ulong)&local_120 | 1);
    local_120 = (ulong)(byte)((int)uVar7 << 1);
    if (uVar7 != 0) goto LAB_009dda64;
  }
  else {
    uVar15 = uVar7 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = operator_new(uVar15);
    local_120 = uVar15 | 1;
                    /* try { // try from 009dda60 to 00adda6f has its CatchHandler @ 009ddac0 */
    uStack_118 = uVar7;
    local_110 = pvVar10;
LAB_009dda64:
    memcpy(pvVar10,pvVar14,uVar7);
  }
  *(undefined1 *)((long)pvVar10 + uVar7) = 0;
LAB_009dda78:
                    /* try { // try from 009dda78 to 00adda7f has its CatchHandler @ 009ddabc */
                    /* try { // try from 009dda80 to 00addae7 has its CatchHandler @ 009dd9c8 */
  getJNISignature<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (local_e8,param_3,&local_100,&local_120);
  puVar6 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)local_e8,0,"(",1);
  local_90 = (void *)puVar6[2];
  uStack_98 = puVar6[1];
  local_a0 = (void *)*puVar6;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
                    /* catch() { ... } // from try @ 009dda78 with catch @ 009ddabc */
                    /* catch() { ... } // from try @ 009dda60 with catch @ 009ddac0 */
                    /* catch() { ... } // from try @ 009dda28 with catch @ 009ddac4 */
                    /* catch() { ... } // from try @ 009dda30 with catch @ 009ddacc */
  puVar6 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_a0,")V",2);
  local_c0 = (char *)puVar6[2];
  uStack_c8 = puVar6[1];
  local_d0 = *puVar6;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
                    /* try { // try from 009ddae8 to 00addb47 has its CatchHandler @ 009ddae8
                       catch() { ... } // from try @ 009ddae8 with catch @ 009ddae8
                       catch() { ... } // from try @ 009ddba0 with catch @ 009ddae8 */
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (((byte)local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  if ((local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  pbVar11 = *(basic_string **)(param_1 + 0x10);
  pbVar12 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar11 = param_1 + 1;
  }
  if (((byte)*param_2 & 1) == 0) {
    pbVar12 = param_2 + 1;
  }
  pcVar1 = (char *)((ulong)&local_d0 | 1);
  if ((local_d0 & 1) != 0) {
    pcVar1 = local_c0;
  }
                    /* try { // try from 009ddb48 to 00addb4f has its CatchHandler @ 009ddbe4 */
  uVar7 = getStaticMethodInfo((JniMethodInfo_ *)&local_b8,(char *)pbVar11,(char *)pbVar12,pcVar1);
  p_Var5 = p_Stack_b0;
  p_Var4 = local_b8;
                    /* try { // try from 009ddb50 to 00addb5f has its CatchHandler @ 009ddbec */
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
                    /* try { // try from 009ddb80 to 00addb8f has its CatchHandler @ 009ddbe0 */
    uVar9 = convert((unordered_map *)&local_a0,(JniMethodInfo_ *)&local_b8,param_5);
                    /* try { // try from 009ddb98 to 00addb9f has its CatchHandler @ 009ddbdc */
                    /* try { // try from 009ddba0 to 00addc07 has its CatchHandler @ 009ddae8 */
    _JNIEnv::CallStaticVoidMethod(p_Var4,p_Var5,local_a8,(ulong)param_3,uVar8,uVar9);
    (**(code **)(*(long *)local_b8 + 0xb8))(local_b8,p_Stack_b0);
    deleteLocalRefs((_JNIEnv *)local_b8,(unordered_map *)&local_a0);
    pvVar14 = local_a0;
    puVar3 = local_90;
    while (puVar3 != (void *)0x0) {
      pvVar10 = (void *)puVar3[3];
      pvVar13 = (void *)*puVar3;
      local_a0 = pvVar14;
      if (pvVar10 != (void *)0x0) {
                    /* catch() { ... } // from try @ 009ddb98 with catch @ 009ddbdc */
        puVar3[4] = pvVar10;
                    /* catch() { ... } // from try @ 009ddb80 with catch @ 009ddbe0 */
        operator_delete(pvVar10);
      }
                    /* catch() { ... } // from try @ 009ddb48 with catch @ 009ddbe4 */
      operator_delete(puVar3);
                    /* catch() { ... } // from try @ 009ddb50 with catch @ 009ddbec */
      pvVar14 = local_a0;
      puVar3 = pvVar13;
    }
    local_a0 = (void *)0x0;
    if (pvVar14 != (void *)0x0) {
      operator_delete(pvVar14);
                    /* try { // try from 009ddc08 to 00addc67 has its CatchHandler @ 009ddc08
                       catch() { ... } // from try @ 009ddc08 with catch @ 009ddc08
                       catch() { ... } // from try @ 009ddcc0 with catch @ 009ddc08 */
    }
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
                    /* try { // try from 009ddc68 to 00addc6f has its CatchHandler @ 009ddd04 */
                    /* try { // try from 009ddc70 to 00addc7f has its CatchHandler @ 009ddd0c */
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

