
/* void cocos2d::JniHelper::callStaticVoidMethod<int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void cocos2d::JniHelper::
     callStaticVoidMethod<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
               (basic_string *param_1,basic_string *param_2,uint param_3,basic_string *param_4)

{
  char *pcVar1;
  long lVar2;
  _jclass *p_Var3;
  _jmethodID *p_Var4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  void *pvVar11;
  basic_string *pbVar12;
  basic_string *pbVar13;
  void *pvVar14;
  ulong uVar15;
  ulong local_110;
  ulong uStack_108;
  void *local_100;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  ulong local_d0;
  ulong uStack_c8;
  char *local_c0;
  JniMethodInfo_ local_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined2 uStack_a7;
  undefined1 uStack_a5;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  ulong uStack_98;
  void *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uStack_108 = 0;
  local_100 = (void *)0x0;
  local_110 = 0;
  if (((byte)*param_4 & 1) == 0) {
    local_100 = *(void **)(param_4 + 0x10);
    uStack_108 = *(ulong *)(param_4 + 8);
    local_110 = *(ulong *)param_4;
    goto LAB_0086f3f8;
  }
  uVar9 = *(ulong *)(param_4 + 8);
  if (0xffffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pvVar11 = *(void **)(param_4 + 0x10);
  if (uVar9 < 0x17) {
    pvVar14 = (void *)((ulong)&local_110 | 1);
    local_110 = (ulong)(byte)((int)uVar9 << 1);
    if (uVar9 != 0) goto LAB_0086f3e4;
  }
  else {
    uVar15 = uVar9 + 0x10 & 0xfffffffffffffff0;
    pvVar14 = operator_new(uVar15);
    local_110 = uVar15 | 1;
    uStack_108 = uVar9;
    local_100 = pvVar14;
LAB_0086f3e4:
    memcpy(pvVar14,pvVar11,uVar9);
  }
  *(undefined1 *)((long)pvVar14 + uVar9) = 0;
LAB_0086f3f8:
  local_b8 = (JniMethodInfo_)0x24;
  uStack_98 = 0;
  local_90 = (void *)0x0;
  uStack_a4 = 0;
  local_a0 = &DAT_00004902;
  uStack_a7 = 0x3b67;
  uStack_af = 0x697274532f676e;
  uStack_a8 = 0x6e;
  uStack_b7 = 0x6c2f6176616a4c;
  uStack_b0 = 0x61;
  uStack_a5 = 0;
  puVar8 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_a0,(char *)((ulong)&local_b8 | 1),0x12);
  local_e0 = (void *)puVar8[2];
  uStack_e8 = puVar8[1];
  local_f0 = *puVar8;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  if (((byte)local_b8 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_a4,CONCAT13(uStack_a5,CONCAT21(uStack_a7,uStack_a8))));
  }
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  puVar8 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_f0,0,"(",1);
  local_90 = (void *)puVar8[2];
  uStack_98 = puVar8[1];
  local_a0 = (undefined1 *)*puVar8;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_a0,")V",2);
  local_c0 = (char *)puVar8[2];
  uStack_c8 = puVar8[1];
  local_d0 = *puVar8;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  if ((local_110 & 1) != 0) {
    operator_delete(local_100);
  }
  pbVar12 = *(basic_string **)(param_1 + 0x10);
  pbVar13 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar12 = param_1 + 1;
  }
  if (((byte)*param_2 & 1) == 0) {
    pbVar13 = param_2 + 1;
  }
  pcVar1 = (char *)((ulong)&local_d0 | 1);
  if ((local_d0 & 1) != 0) {
    pcVar1 = local_c0;
  }
  uVar9 = getStaticMethodInfo(&local_b8,(char *)pbVar12,(char *)pbVar13,pcVar1);
  if ((uVar9 & 1) == 0) {
    reportError(param_1,param_2,(basic_string *)&local_d0);
  }
  else {
    p_Var3 = (_jclass *)CONCAT71(uStack_b7,local_b8);
    p_Var4 = (_jmethodID *)CONCAT71(uStack_af,uStack_b0);
    uVar5 = CONCAT44(uStack_a4,CONCAT13(uStack_a5,CONCAT21(uStack_a7,uStack_a8)));
    uStack_98 = 0;
    local_a0 = (void *)0x0;
    uStack_88 = 0;
    local_90 = (void *)0x0;
    local_80 = 0x3f800000;
    uVar10 = convert((unordered_map *)&local_a0,&local_b8,param_4);
    _JNIEnv::CallStaticVoidMethod(p_Var3,p_Var4,uVar5,(ulong)param_3,uVar10);
    (**(code **)(*(long *)CONCAT71(uStack_b7,local_b8) + 0xb8))
              ((long *)CONCAT71(uStack_b7,local_b8),CONCAT71(uStack_af,uStack_b0));
    deleteLocalRefs((_JNIEnv *)CONCAT71(uStack_b7,local_b8),(unordered_map *)&local_a0);
    puVar6 = local_a0;
    puVar7 = local_90;
    while (puVar7 != (void *)0x0) {
      pvVar11 = (void *)puVar7[3];
      pvVar14 = (void *)*puVar7;
      local_a0 = puVar6;
      if (pvVar11 != (void *)0x0) {
        puVar7[4] = pvVar11;
        operator_delete(pvVar11);
      }
      operator_delete(puVar7);
      puVar6 = local_a0;
      puVar7 = pvVar14;
    }
    local_a0 = (undefined1 *)0x0;
    if (puVar6 != (void *)0x0) {
      operator_delete(puVar6);
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

