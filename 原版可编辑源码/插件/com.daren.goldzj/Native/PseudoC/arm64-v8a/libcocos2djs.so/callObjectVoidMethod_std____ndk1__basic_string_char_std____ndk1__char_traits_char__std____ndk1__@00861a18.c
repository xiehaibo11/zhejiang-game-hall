
/* void cocos2d::JniHelper::callObjectVoidMethod<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, float, bool, bool, bool,
   bool>(_jobject*, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   float, bool, bool, bool, bool) */

void cocos2d::JniHelper::
     callObjectVoidMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float,bool,bool,bool,bool>
               (undefined8 param_1_00,_jmethodID *param_1,basic_string *param_2,
               basic_string *param_3,basic_string *param_5,uint param_6,uint param_7,uint param_8,
               uint param_9)

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
  ulong uVar11;
  void *pvVar12;
  void *pvVar13;
  ulong local_100;
  ulong uStack_f8;
  void *local_f0;
  ulong local_e0;
  ulong uStack_d8;
  char *local_d0;
  JniHelper local_c8;
  undefined7 uStack_c7;
  undefined8 uStack_c0;
  void *local_b8;
  void *local_b0;
  ulong uStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  uStack_f8 = 0;
  local_f0 = (void *)0x0;
  local_100 = 0;
  if (((byte)*param_5 & 1) == 0) {
    local_f0 = *(void **)(param_5 + 0x10);
    uStack_f8 = *(ulong *)(param_5 + 8);
    local_100 = *(ulong *)param_5;
    goto LAB_00861b1c;
  }
  uVar6 = *(ulong *)(param_5 + 8);
  if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pvVar13 = *(void **)(param_5 + 0x10);
  if (uVar6 < 0x17) {
    pvVar8 = (void *)((ulong)&local_100 | 1);
    local_100 = (ulong)(byte)((int)uVar6 << 1);
    if (uVar6 != 0) goto LAB_00861af8;
  }
  else {
    uVar11 = uVar6 + 0x10 & 0xfffffffffffffff0;
    pvVar8 = operator_new(uVar11);
    local_100 = uVar11 | 1;
    uStack_f8 = uVar6;
    local_f0 = pvVar8;
LAB_00861af8:
    memcpy(pvVar8,pvVar13,uVar6);
  }
  *(undefined1 *)((long)pvVar8 + uVar6) = 0;
LAB_00861b1c:
  getJNISignature<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float,bool,bool,bool,bool>
            (&local_c8,param_1_00,&local_100,param_6 & 1,param_7 & 1,param_8 & 1,param_9 & 1);
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_c8,0,"(",1);
  local_a0 = (void *)puVar5[2];
  uStack_a8 = puVar5[1];
  local_b0 = (void *)*puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_b0,")V",2);
  local_d0 = (char *)puVar5[2];
  uStack_d8 = puVar5[1];
  local_e0 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if (((ulong)local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (((byte)local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  pbVar9 = *(basic_string **)(param_2 + 0x10);
  pbVar10 = *(basic_string **)(param_3 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar9 = param_2 + 1;
  }
  if (((byte)*param_3 & 1) == 0) {
    pbVar10 = param_3 + 1;
  }
  pcVar1 = (char *)((ulong)&local_e0 | 1);
  if ((local_e0 & 1) != 0) {
    pcVar1 = local_d0;
  }
  uVar6 = getMethodInfo((JniMethodInfo_ *)&local_c8,(char *)pbVar9,(char *)pbVar10,pcVar1);
  if ((uVar6 & 1) == 0) {
    reportError(param_2,param_3,(basic_string *)&local_e0);
  }
  else {
    p_Var3 = (_jobject *)CONCAT71(uStack_c7,local_c8);
    uStack_a8 = 0;
    local_b0 = (void *)0x0;
    uStack_98 = 0;
    local_a0 = (void *)0x0;
    local_90 = 0x3f800000;
    uVar7 = convert((unordered_map *)&local_b0,(JniMethodInfo_ *)&local_c8,param_5);
    _JNIEnv::CallVoidMethod
              (p_Var3,param_1,(double)(float)param_1_00,local_b8,uVar7,(ulong)(param_6 & 1),
               (ulong)(param_7 & 1),(ulong)(param_8 & 1),(ulong)(param_9 & 1));
    (**(code **)(*(long *)CONCAT71(uStack_c7,local_c8) + 0xb8))
              ((long *)CONCAT71(uStack_c7,local_c8),uStack_c0);
    deleteLocalRefs((_JNIEnv *)CONCAT71(uStack_c7,local_c8),(unordered_map *)&local_b0);
    pvVar13 = local_b0;
    puVar4 = local_a0;
    while (puVar4 != (void *)0x0) {
      pvVar8 = (void *)puVar4[3];
      pvVar12 = (void *)*puVar4;
      local_b0 = pvVar13;
      if (pvVar8 != (void *)0x0) {
        puVar4[4] = pvVar8;
        operator_delete(pvVar8);
      }
      operator_delete(puVar4);
      pvVar13 = local_b0;
      puVar4 = pvVar12;
    }
    local_b0 = (void *)0x0;
    if (pvVar13 != (void *)0x0) {
      operator_delete(pvVar13);
    }
  }
  if ((local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  if (*(long *)(lVar2 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

