
/* void cocos2d::JniHelper::callObjectVoidMethod<float, float>(_jobject*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, float, float) */

void cocos2d::JniHelper::callObjectVoidMethod<float,float>
               (_jobject *param_1,basic_string *param_2,basic_string *param_3,float param_4,
               float param_5)

{
  char *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  void *pvVar7;
  basic_string *pbVar8;
  basic_string *pbVar9;
  void *pvVar10;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a0;
  ulong uStack_98;
  char *local_90;
  _jobject *local_88;
  undefined8 uStack_80;
  void *local_78;
  undefined1 *local_70;
  ulong uStack_68;
  void *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uStack_68 = 0;
  uStack_80 = 0;
  local_60 = (void *)0x0;
  local_70 = &DAT_00004602;
  local_78 = (void *)0x0;
  local_88 = (_jobject *)&DAT_00004602;
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_70,(char *)((ulong)&local_88 | 1),1);
  local_b0 = (void *)puVar5[2];
  uStack_b8 = puVar5[1];
  local_c0 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if (((ulong)local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_c0,0,"(",1);
  local_60 = (void *)puVar5[2];
  uStack_68 = puVar5[1];
  local_70 = (undefined1 *)*puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_70,")V",2);
  local_90 = (char *)puVar5[2];
  uStack_98 = puVar5[1];
  local_a0 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  pbVar8 = *(basic_string **)(param_2 + 0x10);
  pbVar9 = *(basic_string **)(param_3 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar8 = param_2 + 1;
  }
  if (((byte)*param_3 & 1) == 0) {
    pbVar9 = param_3 + 1;
  }
  pcVar1 = (char *)((ulong)&local_a0 | 1);
  if ((local_a0 & 1) != 0) {
    pcVar1 = local_90;
  }
  uVar6 = getMethodInfo((JniMethodInfo_ *)&local_88,(char *)pbVar8,(char *)pbVar9,pcVar1);
  if ((uVar6 & 1) == 0) {
    reportError(param_2,param_3,(basic_string *)&local_a0);
  }
  else {
    uStack_68 = 0;
    local_70 = (void *)0x0;
    uStack_58 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    _JNIEnv::CallVoidMethod(local_88,(_jmethodID *)param_1,(double)param_4,(double)param_5,local_78)
    ;
    (**(code **)(*(long *)local_88 + 0xb8))(local_88,uStack_80);
    deleteLocalRefs((_JNIEnv *)local_88,(unordered_map *)&local_70);
    puVar3 = local_70;
    puVar4 = local_60;
    while (puVar4 != (void *)0x0) {
      pvVar7 = (void *)puVar4[3];
      pvVar10 = (void *)*puVar4;
      local_70 = puVar3;
      if (pvVar7 != (void *)0x0) {
        puVar4[4] = pvVar7;
        operator_delete(pvVar7);
      }
      operator_delete(puVar4);
      puVar3 = local_70;
      puVar4 = pvVar10;
    }
    local_70 = (undefined1 *)0x0;
    if (puVar3 != (void *)0x0) {
      operator_delete(puVar3);
    }
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

