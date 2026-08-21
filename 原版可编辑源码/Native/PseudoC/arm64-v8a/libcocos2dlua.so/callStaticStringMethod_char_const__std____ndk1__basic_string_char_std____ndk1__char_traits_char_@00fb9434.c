
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   cocos2d::JniHelper::callStaticStringMethod<char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, char const*, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void __thiscall
cocos2d::JniHelper::
callStaticStringMethod<char_const*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
          (undefined8 *param_1_00,JniHelper *this,basic_string *param_1,char *param_2,
          basic_string *param_3)

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
  undefined8 uVar10;
  _jstring *p_Var11;
  void *pvVar12;
  JniHelper *pJVar13;
  basic_string *pbVar14;
  void *pvVar15;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e0 [16];
  void *local_d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8;
  undefined7 uStack_c7;
  undefined8 uStack_c0;
  void *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  char *local_a0;
  _jclass *local_98;
  _jmethodID *p_Stack_90;
  undefined8 local_88;
  void *local_80;
  ulong uStack_78;
  void *local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *param_1_00 = 0;
  param_1_00[1] = 0;
  param_1_00[2] = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_e0,param_3);
  getJNISignature<char_const*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (&local_c8,param_2,local_e0);
  puVar7 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert(&local_c8,0,"(",1);
  local_70 = (void *)puVar7[2];
  uStack_78 = puVar7[1];
  local_80 = (void *)*puVar7;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_80,")Ljava/lang/String;",0x13);
  local_a0 = (char *)puVar7[2];
  uStack_a8 = puVar7[1];
  local_b0 = *puVar7;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if (((ulong)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (((byte)local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  if (((byte)local_e0[0] & 1) != 0) {
    operator_delete(local_d0);
  }
  pJVar13 = *(JniHelper **)(this + 0x10);
  pbVar14 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*this & 1) == 0) {
    pJVar13 = this + 1;
  }
  if (((byte)*param_1 & 1) == 0) {
    pbVar14 = param_1 + 1;
  }
  pcVar1 = (char *)((ulong)&local_b0 | 1);
  if ((local_b0 & 1) != 0) {
    pcVar1 = local_a0;
  }
  uVar8 = getStaticMethodInfo((JniMethodInfo_ *)&local_98,(char *)pJVar13,(char *)pbVar14,pcVar1);
  p_Var6 = p_Stack_90;
  p_Var5 = local_98;
  if ((uVar8 & 1) == 0) {
    reportError((basic_string *)this,param_1,(basic_string *)&local_b0);
  }
  else {
    uStack_78 = 0;
    local_80 = (void *)0x0;
    uStack_68 = 0;
    local_70 = (void *)0x0;
    local_60 = 0x3f800000;
    uVar9 = convert((unordered_map *)&local_80,(JniMethodInfo_ *)&local_98,param_2);
    uVar10 = convert((unordered_map *)&local_80,(JniMethodInfo_ *)&local_98,param_3);
    p_Var11 = (_jstring *)_JNIEnv::CallStaticObjectMethod(p_Var5,p_Var6,local_88,uVar9,uVar10);
    jstring2string(p_Var11);
    param_1_00[2] = local_b8;
    param_1_00[1] = uStack_c0;
    *param_1_00 = CONCAT71(uStack_c7,local_c8);
    (**(code **)(*(long *)local_98 + 0xb8))(local_98,p_Stack_90);
    (**(code **)(*(long *)local_98 + 0xb8))(local_98,p_Var11);
    deleteLocalRefs((_JNIEnv *)local_98,(unordered_map *)&local_80);
    pvVar3 = local_80;
    puVar4 = local_70;
    while (puVar4 != (void *)0x0) {
      pvVar12 = (void *)puVar4[3];
      pvVar15 = (void *)*puVar4;
      local_80 = pvVar3;
      if (pvVar12 != (void *)0x0) {
        puVar4[4] = pvVar12;
        operator_delete(pvVar12);
      }
      operator_delete(puVar4);
      pvVar3 = local_80;
      puVar4 = pvVar15;
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

