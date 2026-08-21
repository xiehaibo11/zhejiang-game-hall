
/* _jbyteArray* cocos2d::JniHelper::callObjectByteArrayMethod<>(_jobject*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

_jbyteArray *
cocos2d::JniHelper::callObjectByteArrayMethod<>
          (_jobject *param_1,basic_string *param_2,basic_string *param_3)

{
  char *pcVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  _jbyteArray *p_Var7;
  void *pvVar8;
  basic_string *pbVar9;
  basic_string *pbVar10;
  void *pvVar11;
  ulong local_90;
  ulong uStack_88;
  char *local_80;
  _jobject *local_78;
  undefined8 uStack_70;
  void *local_68;
  void *local_60;
  ulong uStack_58;
  void *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_78 = (_jobject *)0x0;
  uStack_70 = 0;
  local_68 = (void *)0x0;
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_78,0,"(",1);
  local_50 = (void *)puVar5[2];
  uStack_58 = puVar5[1];
  local_60 = (void *)*puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_60,")[B",3);
  local_80 = (char *)puVar5[2];
  uStack_88 = puVar5[1];
  local_90 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if (((ulong)local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (((ulong)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  pbVar9 = *(basic_string **)(param_2 + 0x10);
  pbVar10 = *(basic_string **)(param_3 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar9 = param_2 + 1;
  }
  if (((byte)*param_3 & 1) == 0) {
    pbVar10 = param_3 + 1;
  }
  pcVar1 = (char *)((ulong)&local_90 | 1);
  if ((local_90 & 1) != 0) {
    pcVar1 = local_80;
  }
  uVar6 = getMethodInfo((JniMethodInfo_ *)&local_78,(char *)pbVar9,(char *)pbVar10,pcVar1);
  if ((uVar6 & 1) == 0) {
    reportError(param_2,param_3,(basic_string *)&local_90);
    p_Var7 = (_jbyteArray *)0x0;
  }
  else {
    uStack_58 = 0;
    local_60 = (void *)0x0;
    uStack_48 = 0;
    local_50 = (void *)0x0;
    local_40 = 0x3f800000;
    p_Var7 = (_jbyteArray *)_JNIEnv::CallObjectMethod(local_78,(_jmethodID *)param_1,local_68);
    (**(code **)(*(long *)local_78 + 0xb8))(local_78,uStack_70);
    deleteLocalRefs((_JNIEnv *)local_78,(unordered_map *)&local_60);
    pvVar3 = local_60;
    puVar4 = local_50;
    while (puVar4 != (void *)0x0) {
      pvVar8 = (void *)puVar4[3];
      pvVar11 = (void *)*puVar4;
      local_60 = pvVar3;
      if (pvVar8 != (void *)0x0) {
        puVar4[4] = pvVar8;
        operator_delete(pvVar8);
      }
      operator_delete(puVar4);
      pvVar3 = local_60;
      puVar4 = pvVar11;
    }
    local_60 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return p_Var7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

