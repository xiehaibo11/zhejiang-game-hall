
/* void cocos2d::JniHelper::callObjectVoidMethod<float, float, float, float>(_jobject*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, float, float, float, float) */

void cocos2d::JniHelper::callObjectVoidMethod<float,float,float,float>
               (_jobject *param_1,basic_string *param_2,basic_string *param_3,float param_4,
               float param_5,float param_6,float param_7)

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
  ulong local_b0;
  ulong uStack_a8;
  char *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  void *local_88;
  void *local_80;
  ulong uStack_78;
  void *local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  getJNISignature<float,float,float,float>((JniHelper *)param_1,param_4,param_5,param_6,param_7);
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert(&local_98,0,"(",1);
  local_70 = (void *)puVar5[2];
  uStack_78 = puVar5[1];
  local_80 = (void *)*puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_80,")V",2);
  local_a0 = (char *)puVar5[2];
  uStack_a8 = puVar5[1];
  local_b0 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if (((ulong)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (((byte)local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  pbVar8 = *(basic_string **)(param_2 + 0x10);
  pbVar9 = *(basic_string **)(param_3 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar8 = param_2 + 1;
  }
  if (((byte)*param_3 & 1) == 0) {
    pbVar9 = param_3 + 1;
  }
  pcVar1 = (char *)((ulong)&local_b0 | 1);
  if ((local_b0 & 1) != 0) {
    pcVar1 = local_a0;
  }
  uVar6 = getMethodInfo((JniMethodInfo_ *)&local_98,(char *)pbVar8,(char *)pbVar9,pcVar1);
  if ((uVar6 & 1) == 0) {
    reportError(param_2,param_3,(basic_string *)&local_b0);
  }
  else {
    uStack_78 = 0;
    local_80 = (void *)0x0;
    uStack_68 = 0;
    local_70 = (void *)0x0;
    local_60 = 0x3f800000;
    _JNIEnv::CallVoidMethod
              ((_jobject *)CONCAT71(uStack_97,local_98),(_jmethodID *)param_1,(double)param_4,
               (double)param_5,(double)param_6,(double)param_7,local_88);
    (**(code **)(*(long *)CONCAT71(uStack_97,local_98) + 0xb8))
              ((long *)CONCAT71(uStack_97,local_98),uStack_90);
    deleteLocalRefs((_JNIEnv *)CONCAT71(uStack_97,local_98),(unordered_map *)&local_80);
    pvVar3 = local_80;
    puVar4 = local_70;
    while (puVar4 != (void *)0x0) {
      pvVar7 = (void *)puVar4[3];
      pvVar10 = (void *)*puVar4;
      local_80 = pvVar3;
      if (pvVar7 != (void *)0x0) {
        puVar4[4] = pvVar7;
        operator_delete(pvVar7);
      }
      operator_delete(puVar4);
      pvVar3 = local_80;
      puVar4 = pvVar10;
    }
    local_80 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

