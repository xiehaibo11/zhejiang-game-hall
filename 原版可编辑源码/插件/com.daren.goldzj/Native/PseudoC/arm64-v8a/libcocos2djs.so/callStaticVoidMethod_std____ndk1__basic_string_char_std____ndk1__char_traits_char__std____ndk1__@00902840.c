
/* WARNING: Type propagation algorithm not settling */
/* void cocos2d::JniHelper::callStaticVoidMethod<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void cocos2d::JniHelper::
     callStaticVoidMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
               (basic_string *param_1,basic_string *param_2,basic_string *param_3,
               basic_string *param_4)

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
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e8 [16];
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
  local_70 = *(long *)(lVar2 + 0x28);
  uStack_f8 = 0;
  local_f0 = (void *)0x0;
  local_100 = 0;
  if (((byte)*param_3 & 1) == 0) {
    local_f0 = *(void **)(param_3 + 0x10);
    uStack_f8 = *(ulong *)(param_3 + 8);
    local_100 = *(ulong *)param_3;
  }
  else {
    uVar7 = *(ulong *)(param_3 + 8);
    if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar14 = *(void **)(param_3 + 0x10);
    if (uVar7 < 0x17) {
      pvVar10 = (void *)((ulong)&local_100 | 1);
      local_100 = (ulong)(byte)((int)uVar7 << 1);
      if (uVar7 != 0) goto LAB_009028f0;
    }
    else {
      uVar15 = uVar7 + 0x10 & 0xfffffffffffffff0;
      pvVar10 = operator_new(uVar15);
      local_100 = uVar15 | 1;
      uStack_f8 = uVar7;
      local_f0 = pvVar10;
LAB_009028f0:
      memcpy(pvVar10,pvVar14,uVar7);
    }
    *(undefined1 *)((long)pvVar10 + uVar7) = 0;
  }
  uStack_118 = 0;
  local_110 = (void *)0x0;
  local_120 = 0;
  if (((byte)*param_4 & 1) == 0) {
    local_110 = *(void **)(param_4 + 0x10);
    uStack_118 = *(ulong *)(param_4 + 8);
    local_120 = *(ulong *)param_4;
    goto LAB_0090298c;
  }
  uVar7 = *(ulong *)(param_4 + 8);
  if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar14 = *(void **)(param_4 + 0x10);
  if (uVar7 < 0x17) {
    pvVar10 = (void *)((ulong)&local_120 | 1);
    local_120 = (ulong)(byte)((int)uVar7 << 1);
    if (uVar7 != 0) goto LAB_00902978;
  }
  else {
    uVar15 = uVar7 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = operator_new(uVar15);
    local_120 = uVar15 | 1;
    uStack_118 = uVar7;
    local_110 = pvVar10;
LAB_00902978:
    memcpy(pvVar10,pvVar14,uVar7);
  }
  *(undefined1 *)((long)pvVar10 + uVar7) = 0;
LAB_0090298c:
  getJNISignature<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (local_e8,&local_100,&local_120);
  puVar6 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert(local_e8,0,"(",1);
  local_90 = (void *)puVar6[2];
  uStack_98 = puVar6[1];
  local_a0 = (void *)*puVar6;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
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
  uVar7 = getStaticMethodInfo((JniMethodInfo_ *)&local_b8,(char *)pbVar11,(char *)pbVar12,pcVar1);
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
    uVar8 = convert((unordered_map *)&local_a0,(JniMethodInfo_ *)&local_b8,param_3);
    uVar9 = convert((unordered_map *)&local_a0,(JniMethodInfo_ *)&local_b8,param_4);
    _JNIEnv::CallStaticVoidMethod(p_Var4,p_Var5,local_a8,uVar8,uVar9);
    (**(code **)(*(long *)local_b8 + 0xb8))(local_b8,p_Stack_b0);
    deleteLocalRefs((_JNIEnv *)local_b8,(unordered_map *)&local_a0);
    pvVar14 = local_a0;
    puVar3 = local_90;
    while (puVar3 != (void *)0x0) {
      pvVar10 = (void *)puVar3[3];
      pvVar13 = (void *)*puVar3;
      local_a0 = pvVar14;
      if (pvVar10 != (void *)0x0) {
        puVar3[4] = pvVar10;
        operator_delete(pvVar10);
      }
      operator_delete(puVar3);
      pvVar14 = local_a0;
      puVar3 = pvVar13;
    }
    local_a0 = (void *)0x0;
    if (pvVar14 != (void *)0x0) {
      operator_delete(pvVar14);
    }
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

