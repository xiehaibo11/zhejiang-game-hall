
/* float* cocos2d::JniHelper::callStaticFloatArrayMethod<>(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

float * cocos2d::JniHelper::callStaticFloatArrayMethod<>
                  (basic_string *param_1,basic_string *param_2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  void *pvVar9;
  basic_string *pbVar10;
  basic_string *pbVar11;
  undefined1 *puVar12;
  void *pvVar13;
  ulong local_90;
  ulong uStack_88;
  char *local_80;
  _jclass *local_78;
  _jmethodID *p_Stack_70;
  void *local_68;
  void *local_60;
  ulong uStack_58;
  void *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_78 = (_jclass *)0x0;
  p_Stack_70 = (_jmethodID *)0x0;
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
                            *)&local_60,")[F",3);
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
  pbVar10 = *(basic_string **)(param_1 + 0x10);
  pbVar11 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar10 = param_1 + 1;
  }
  if (((byte)*param_2 & 1) == 0) {
    pbVar11 = param_2 + 1;
  }
  pcVar1 = (char *)((ulong)&local_90 | 1);
  if ((local_90 & 1) != 0) {
    pcVar1 = local_80;
  }
  uVar6 = getStaticMethodInfo((JniMethodInfo_ *)&local_78,(char *)pbVar10,(char *)pbVar11,pcVar1);
  if ((uVar6 & 1) == 0) {
    reportError(param_1,param_2,(basic_string *)&local_90);
    puVar12 = (undefined1 *)0x0;
  }
  else {
    uStack_58 = 0;
    local_60 = (void *)0x0;
    uStack_48 = 0;
    local_50 = (void *)0x0;
    local_40 = 0x3f800000;
    uVar7 = _JNIEnv::CallStaticObjectMethod(local_78,p_Stack_70,local_68);
    uVar4 = (**(code **)(*(long *)local_78 + 0x558))(local_78,uVar7);
    if ((int)uVar4 < 0x21) {
      pvVar8 = (void *)(**(code **)(*(long *)local_78 + 0x5e8))(local_78,uVar7,0);
      if (pvVar8 != (void *)0x0) {
        memcpy(callStaticFloatArrayMethod<>(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)
               ::ret,pvVar8,-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2);
        (**(code **)(*(long *)local_78 + 0x628))(local_78,uVar7,pvVar8,0);
      }
    }
    (**(code **)(*(long *)local_78 + 0xb8))(local_78,p_Stack_70);
    deleteLocalRefs((_JNIEnv *)local_78,(unordered_map *)&local_60);
    pvVar8 = local_60;
    puVar3 = local_50;
    while (puVar3 != (void *)0x0) {
      pvVar9 = (void *)puVar3[3];
      pvVar13 = (void *)*puVar3;
      local_60 = pvVar8;
      if (pvVar9 != (void *)0x0) {
        puVar3[4] = pvVar9;
        operator_delete(pvVar9);
      }
      operator_delete(puVar3);
      pvVar8 = local_60;
      puVar3 = pvVar13;
    }
    local_60 = (void *)0x0;
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
    puVar12 = callStaticFloatArrayMethod<>(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)
              ::ret;
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (float *)puVar12;
}

