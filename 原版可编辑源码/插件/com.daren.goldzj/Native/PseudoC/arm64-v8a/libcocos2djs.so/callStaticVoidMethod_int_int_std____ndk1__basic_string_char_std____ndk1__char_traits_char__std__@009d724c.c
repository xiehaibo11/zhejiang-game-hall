
/* void cocos2d::JniHelper::callStaticVoidMethod<int, int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int, int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void cocos2d::JniHelper::
     callStaticVoidMethod<int,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
               (basic_string *param_1,basic_string *param_2,uint param_3,uint param_4,
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
  void *pvVar9;
  basic_string *pbVar10;
  basic_string *pbVar11;
  void *pvVar12;
  void *pvVar13;
  ulong uVar14;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  JniHelper local_d8 [16];
  void *local_c8;
  ulong local_c0;
  ulong uStack_b8;
  char *local_b0;
  _jclass *local_a8;
  _jmethodID *p_Stack_a0;
  undefined8 local_98;
  void *local_90;
  ulong uStack_88;
  void *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uStack_e8 = 0;
  local_e0 = (void *)0x0;
  local_f0 = 0;
  if (((byte)*param_5 & 1) == 0) {
    local_e0 = *(void **)(param_5 + 0x10);
    uStack_e8 = *(ulong *)(param_5 + 8);
    local_f0 = *(ulong *)param_5;
    goto LAB_009d7314;
  }
  uVar7 = *(ulong *)(param_5 + 8);
  if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar13 = *(void **)(param_5 + 0x10);
  if (uVar7 < 0x17) {
    pvVar9 = (void *)((ulong)&local_f0 | 1);
                    /* try { // try from 009d72d4 to 00ad743b has its CatchHandler @ 009d71c0 */
    local_f0 = (ulong)(byte)((int)uVar7 << 1);
    if (uVar7 != 0) goto LAB_009d7300;
  }
  else {
    uVar14 = uVar7 + 0x10 & 0xfffffffffffffff0;
    pvVar9 = operator_new(uVar14);
    local_f0 = uVar14 | 1;
    uStack_e8 = uVar7;
    local_e0 = pvVar9;
LAB_009d7300:
    memcpy(pvVar9,pvVar13,uVar7);
  }
  *(undefined1 *)((long)pvVar9 + uVar7) = 0;
LAB_009d7314:
  getJNISignature<int,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (local_d8,param_3,param_4,&local_f0);
  puVar6 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)local_d8,0,"(",1);
  local_80 = (void *)puVar6[2];
  uStack_88 = puVar6[1];
  local_90 = (void *)*puVar6;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  puVar6 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_90,")V",2);
  local_b0 = (char *)puVar6[2];
  uStack_b8 = puVar6[1];
  local_c0 = *puVar6;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (((byte)local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  pbVar10 = *(basic_string **)(param_1 + 0x10);
  pbVar11 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar10 = param_1 + 1;
  }
  if (((byte)*param_2 & 1) == 0) {
    pbVar11 = param_2 + 1;
  }
  pcVar1 = (char *)((ulong)&local_c0 | 1);
  if ((local_c0 & 1) != 0) {
    pcVar1 = local_b0;
  }
  uVar7 = getStaticMethodInfo((JniMethodInfo_ *)&local_a8,(char *)pbVar10,(char *)pbVar11,pcVar1);
  p_Var5 = p_Stack_a0;
  p_Var4 = local_a8;
  if ((uVar7 & 1) == 0) {
    reportError(param_1,param_2,(basic_string *)&local_c0);
  }
  else {
    uStack_88 = 0;
    local_90 = (void *)0x0;
    uStack_78 = 0;
    local_80 = (void *)0x0;
    local_70 = 0x3f800000;
    uVar8 = convert((unordered_map *)&local_90,(JniMethodInfo_ *)&local_a8,param_5);
    _JNIEnv::CallStaticVoidMethod(p_Var4,p_Var5,local_98,(ulong)param_3,(ulong)param_4,uVar8);
    (**(code **)(*(long *)local_a8 + 0xb8))(local_a8,p_Stack_a0);
                    /* try { // try from 009d743c to 00ad7443 has its CatchHandler @ 009d7444 */
                    /* catch() { ... } // from try @ 009d743c with catch @ 009d7444
                       try { // try from 009d7444 to 00ad745b has its CatchHandler @ 009d71c0 */
    deleteLocalRefs((_JNIEnv *)local_a8,(unordered_map *)&local_90);
    pvVar13 = local_90;
    puVar3 = local_80;
                    /* catch() { ... } // from try @ 009d7230 with catch @ 009d7448 */
    while (puVar3 != (void *)0x0) {
      pvVar9 = (void *)puVar3[3];
      pvVar12 = (void *)*puVar3;
      local_90 = pvVar13;
      if (pvVar9 != (void *)0x0) {
                    /* try { // try from 009d745c to 00ad74cf has its CatchHandler @ 009d745c
                       catch() { ... } // from try @ 009d745c with catch @ 009d745c
                       catch() { ... } // from try @ 009d7524 with catch @ 009d745c */
        puVar3[4] = pvVar9;
        operator_delete(pvVar9);
      }
      operator_delete(puVar3);
      pvVar13 = local_90;
      puVar3 = pvVar12;
    }
    local_90 = (void *)0x0;
    if (pvVar13 != (void *)0x0) {
      operator_delete(pvVar13);
    }
  }
  if ((local_c0 & 1) != 0) {
                    /* try { // try from 009d74d0 to 00ad74df has its CatchHandler @ 009d7740 */
    operator_delete(local_b0);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 009d74f4 to 00ad7523 has its CatchHandler @ 009d7744 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

