
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   cocos2d::JniHelper::callStaticStringMethod<char const*, float,
   float>(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char const*, float, float)
    */

void __thiscall
cocos2d::JniHelper::callStaticStringMethod<char_const*,float,float>
          (JniHelper *this,basic_string *param_1,basic_string *param_2,char *param_3,float param_4,
          float param_5)

{
  char *pcVar1;
  long lVar2;
  _jclass *p_Var3;
  void *pvVar4;
  undefined8 *puVar5;
  _jmethodID *p_Var6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  _jstring *p_Var10;
  void *pvVar11;
  undefined8 *in_x8;
  JniHelper *pJVar12;
  basic_string *pbVar13;
  void *pvVar14;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulong local_b0;
  ulong uStack_a8;
  char *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98;
  undefined7 uStack_97;
  _jmethodID *p_Stack_90;
  void *local_88;
  void *local_80;
  ulong uStack_78;
  void *local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  getJNISignature<char_const*,float,float>((char *)param_2,param_4,param_5);
  puVar7 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert(&local_98,0,"(",1);
  uStack_78 = puVar7[1];
  local_80 = (void *)*puVar7;
  local_70 = (void *)puVar7[2];
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
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
  if (((byte)local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  pJVar12 = *(JniHelper **)(this + 0x10);
  pbVar13 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*this & 1) == 0) {
    pJVar12 = this + 1;
  }
  if (((byte)*param_1 & 1) == 0) {
    pbVar13 = param_1 + 1;
  }
  pcVar1 = (char *)((ulong)&local_b0 | 1);
  if ((local_b0 & 1) != 0) {
    pcVar1 = local_a0;
  }
  uVar8 = getStaticMethodInfo((JniMethodInfo_ *)&local_98,(char *)pJVar12,(char *)pbVar13,pcVar1);
  p_Var6 = p_Stack_90;
  if ((uVar8 & 1) == 0) {
    reportError((basic_string *)this,param_1,(basic_string *)&local_b0);
  }
  else {
    p_Var3 = (_jclass *)CONCAT71(uStack_97,local_98);
    uStack_78 = 0;
    local_80 = (void *)0x0;
    uStack_68 = 0;
    local_70 = (void *)0x0;
    local_60 = 0x3f800000;
    uVar9 = convert((unordered_map *)&local_80,(JniMethodInfo_ *)&local_98,(char *)param_2);
    p_Var10 = (_jstring *)
              _JNIEnv::CallStaticObjectMethod
                        (p_Var3,p_Var6,(double)param_4,(double)param_5,local_88,uVar9);
    jstring2string(p_Var10);
    in_x8[2] = local_b8;
    in_x8[1] = uStack_c0;
    *in_x8 = local_c8;
    (**(code **)(*(long *)CONCAT71(uStack_97,local_98) + 0xb8))
              ((long *)CONCAT71(uStack_97,local_98),p_Stack_90);
    (**(code **)(*(long *)CONCAT71(uStack_97,local_98) + 0xb8))
              ((long *)CONCAT71(uStack_97,local_98),p_Var10);
    deleteLocalRefs((_JNIEnv *)CONCAT71(uStack_97,local_98),(unordered_map *)&local_80);
    pvVar4 = local_80;
    puVar5 = local_70;
    while (puVar5 != (void *)0x0) {
      pvVar11 = (void *)puVar5[3];
      pvVar14 = (void *)*puVar5;
      local_80 = pvVar4;
      if (pvVar11 != (void *)0x0) {
        puVar5[4] = pvVar11;
        operator_delete(pvVar11);
      }
      operator_delete(puVar5);
      pvVar4 = local_80;
      puVar5 = pvVar14;
    }
    local_80 = (void *)0x0;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

