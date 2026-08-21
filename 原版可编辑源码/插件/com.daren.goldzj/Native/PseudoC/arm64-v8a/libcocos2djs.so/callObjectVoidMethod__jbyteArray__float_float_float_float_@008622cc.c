
/* void cocos2d::JniHelper::callObjectVoidMethod<_jbyteArray*, float, float, float,
   float>(_jobject*, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, _jbyteArray*, float,
   float, float, float) */

void cocos2d::JniHelper::callObjectVoidMethod<_jbyteArray*,float,float,float,float>
               (_jobject *param_1,basic_string *param_2,basic_string *param_3,_jbyteArray *param_4,
               float param_5,float param_6,float param_7,float param_8)

{
  char *pcVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  void *pvVar7;
  basic_string *pbVar8;
  basic_string *pbVar9;
  void *pvVar10;
  ulong local_c0;
  ulong uStack_b8;
  char *local_b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8;
  undefined7 uStack_a7;
  undefined8 uStack_a0;
  void *local_98;
  void *local_90;
  ulong uStack_88;
  void *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  getJNISignature<_jbyteArray*,float,float,float,float>
            ((JniHelper *)param_4,(_jbyteArray *)param_2,param_5,param_6,param_7,param_8);
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert(&local_a8,0,"(",1);
  local_80 = (void *)puVar5[2];
  uStack_88 = puVar5[1];
  local_90 = (void *)*puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_90,")V",2);
  local_b0 = (char *)puVar5[2];
  uStack_b8 = puVar5[1];
  local_c0 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (((byte)local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  pbVar8 = *(basic_string **)(param_2 + 0x10);
  pbVar9 = *(basic_string **)(param_3 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar8 = param_2 + 1;
  }
  if (((byte)*param_3 & 1) == 0) {
    pbVar9 = param_3 + 1;
  }
  pcVar1 = (char *)((ulong)&local_c0 | 1);
  if ((local_c0 & 1) != 0) {
    pcVar1 = local_b0;
  }
  uVar6 = getMethodInfo((JniMethodInfo_ *)&local_a8,(char *)pbVar8,(char *)pbVar9,pcVar1);
  if ((uVar6 & 1) == 0) {
    reportError(param_2,param_3,(basic_string *)&local_c0);
  }
  else {
    uStack_88 = 0;
    local_90 = (void *)0x0;
    uStack_78 = 0;
    local_80 = (void *)0x0;
    local_70 = 0x3f800000;
    _JNIEnv::CallVoidMethod
              ((_jobject *)CONCAT71(uStack_a7,local_a8),(_jmethodID *)param_1,(double)param_5,
               (double)param_6,(double)param_7,(double)param_8,local_98,param_4);
    (**(code **)(*(long *)CONCAT71(uStack_a7,local_a8) + 0xb8))
              ((long *)CONCAT71(uStack_a7,local_a8),uStack_a0);
    deleteLocalRefs((_JNIEnv *)CONCAT71(uStack_a7,local_a8),(unordered_map *)&local_90);
    pvVar3 = local_90;
    puVar4 = local_80;
    while (puVar4 != (void *)0x0) {
      pvVar7 = (void *)puVar4[3];
      pvVar10 = (void *)*puVar4;
      local_90 = pvVar3;
      if (pvVar7 != (void *)0x0) {
        puVar4[4] = pvVar7;
        operator_delete(pvVar7);
      }
      operator_delete(puVar4);
      pvVar3 = local_90;
      puVar4 = pvVar10;
    }
    local_90 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

