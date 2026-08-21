
/* void cocos2d::JniHelper::callStaticVoidMethod<char const*, bool>(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, char const*, bool) */

void cocos2d::JniHelper::callStaticVoidMethod<char_const*,bool>
               (basic_string *param_1,basic_string *param_2,char *param_3,bool param_4)

{
  char *pcVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  _jclass *p_Var5;
  _jmethodID *p_Var6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  void *pvVar10;
  basic_string *pbVar11;
  basic_string *pbVar12;
  void *pvVar13;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [16];
  void *local_a8;
  ulong local_a0;
  ulong uStack_98;
  char *local_90;
  _jclass *local_88;
  _jmethodID *p_Stack_80;
  undefined8 local_78;
  void *local_70;
  ulong uStack_68;
  void *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  getJNISignature<char_const*,bool>(param_3,param_4);
  puVar7 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert(local_b8,0,"(",1);
  local_60 = (void *)puVar7[2];
  uStack_68 = puVar7[1];
  local_70 = (void *)*puVar7;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_70,")V",2);
  local_90 = (char *)puVar7[2];
  uStack_98 = puVar7[1];
  local_a0 = *puVar7;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  pbVar11 = *(basic_string **)(param_1 + 0x10);
  pbVar12 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar11 = param_1 + 1;
  }
  if (((byte)*param_2 & 1) == 0) {
    pbVar12 = param_2 + 1;
  }
  pcVar1 = (char *)((ulong)&local_a0 | 1);
  if ((local_a0 & 1) != 0) {
    pcVar1 = local_90;
  }
  uVar8 = getStaticMethodInfo((JniMethodInfo_ *)&local_88,(char *)pbVar11,(char *)pbVar12,pcVar1);
  p_Var6 = p_Stack_80;
  p_Var5 = local_88;
  if ((uVar8 & 1) == 0) {
    reportError(param_1,param_2,(basic_string *)&local_a0);
  }
  else {
    uStack_68 = 0;
    local_70 = (void *)0x0;
    uStack_58 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    uVar9 = convert((unordered_map *)&local_70,(JniMethodInfo_ *)&local_88,param_3);
    _JNIEnv::CallStaticVoidMethod(p_Var5,p_Var6,local_78,uVar9,(ulong)param_4);
    (**(code **)(*(long *)local_88 + 0xb8))(local_88,p_Stack_80);
    deleteLocalRefs((_JNIEnv *)local_88,(unordered_map *)&local_70);
    pvVar3 = local_70;
    puVar4 = local_60;
    while (puVar4 != (void *)0x0) {
      pvVar10 = (void *)puVar4[3];
      pvVar13 = (void *)*puVar4;
      local_70 = pvVar3;
      if (pvVar10 != (void *)0x0) {
        puVar4[4] = pvVar10;
        operator_delete(pvVar10);
      }
      operator_delete(puVar4);
      pvVar3 = local_70;
      puVar4 = pvVar13;
    }
    local_70 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
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

