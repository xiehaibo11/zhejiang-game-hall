
/* void cocos2d::JniHelper::callObjectVoidMethod<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, float, float, float>(_jobject*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, float, float, float) */

void cocos2d::JniHelper::
     callObjectVoidMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float,float,float>
               (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3_00,
               _jmethodID *param_1,basic_string *param_2,basic_string *param_3,basic_string *param_7
               )

{
  char *pcVar1;
  long lVar2;
  _jobject *p_Var3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  basic_string *pbVar9;
  basic_string *pbVar10;
  void *pvVar11;
  void *pvVar12;
  ulong uVar13;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  ulong local_d0;
  ulong uStack_c8;
  char *local_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  void *local_a8;
  void *local_a0;
  ulong uStack_98;
  void *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  uStack_e8 = 0;
  local_e0 = (void *)0x0;
  local_f0 = 0;
  if (((byte)*param_7 & 1) == 0) {
    local_e0 = *(void **)(param_7 + 0x10);
    uStack_e8 = *(ulong *)(param_7 + 8);
    local_f0 = *(ulong *)param_7;
    goto LAB_00860ecc;
  }
  uVar6 = *(ulong *)(param_7 + 8);
  if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pvVar12 = *(void **)(param_7 + 0x10);
  if (uVar6 < 0x17) {
    pvVar8 = (void *)((ulong)&local_f0 | 1);
    local_f0 = (ulong)(byte)((int)uVar6 << 1);
    if (uVar6 != 0) goto LAB_00860eb8;
  }
  else {
    uVar13 = uVar6 + 0x10 & 0xfffffffffffffff0;
    pvVar8 = operator_new(uVar13);
    local_f0 = uVar13 | 1;
    uStack_e8 = uVar6;
    local_e0 = pvVar8;
LAB_00860eb8:
    memcpy(pvVar8,pvVar12,uVar6);
  }
  *(undefined1 *)((long)pvVar8 + uVar6) = 0;
LAB_00860ecc:
  getJNISignature<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float,float,float>
            (&local_b8,param_1_00,param_2_00,param_3_00,&local_f0);
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert(&local_b8,0,"(",1);
  local_90 = (void *)puVar5[2];
  uStack_98 = puVar5[1];
  local_a0 = (void *)*puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_a0,")V",2);
  local_c0 = (char *)puVar5[2];
  uStack_c8 = puVar5[1];
  local_d0 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (((byte)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  pbVar9 = *(basic_string **)(param_2 + 0x10);
  pbVar10 = *(basic_string **)(param_3 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar9 = param_2 + 1;
  }
  if (((byte)*param_3 & 1) == 0) {
    pbVar10 = param_3 + 1;
  }
  pcVar1 = (char *)((ulong)&local_d0 | 1);
  if ((local_d0 & 1) != 0) {
    pcVar1 = local_c0;
  }
  uVar6 = getMethodInfo((JniMethodInfo_ *)&local_b8,(char *)pbVar9,(char *)pbVar10,pcVar1);
  if ((uVar6 & 1) == 0) {
    reportError(param_2,param_3,(basic_string *)&local_d0);
  }
  else {
    p_Var3 = (_jobject *)CONCAT71(uStack_b7,local_b8);
    uStack_98 = 0;
    local_a0 = (void *)0x0;
    uStack_88 = 0;
    local_90 = (void *)0x0;
    local_80 = 0x3f800000;
    uVar7 = convert((unordered_map *)&local_a0,(JniMethodInfo_ *)&local_b8,param_7);
    _JNIEnv::CallVoidMethod
              (p_Var3,param_1,(double)(float)param_1_00,(double)(float)param_2_00,
               (double)(float)param_3_00,local_a8,uVar7);
    (**(code **)(*(long *)CONCAT71(uStack_b7,local_b8) + 0xb8))
              ((long *)CONCAT71(uStack_b7,local_b8),uStack_b0);
    deleteLocalRefs((_JNIEnv *)CONCAT71(uStack_b7,local_b8),(unordered_map *)&local_a0);
    pvVar12 = local_a0;
    puVar4 = local_90;
    while (puVar4 != (void *)0x0) {
      pvVar8 = (void *)puVar4[3];
      pvVar11 = (void *)*puVar4;
      local_a0 = pvVar12;
      if (pvVar8 != (void *)0x0) {
        puVar4[4] = pvVar8;
        operator_delete(pvVar8);
      }
      operator_delete(puVar4);
      pvVar12 = local_a0;
      puVar4 = pvVar11;
    }
    local_a0 = (void *)0x0;
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

