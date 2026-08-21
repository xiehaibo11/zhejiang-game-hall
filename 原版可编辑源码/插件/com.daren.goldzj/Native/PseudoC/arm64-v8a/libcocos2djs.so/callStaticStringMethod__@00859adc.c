
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   cocos2d::JniHelper::callStaticStringMethod<>(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::JniHelper::callStaticStringMethod<>
          (JniHelper *this,basic_string *param_1,basic_string *param_2)

{
  char *pcVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  _jstring *p_Var7;
  void *pvVar8;
  undefined8 *in_x8;
  JniHelper *pJVar9;
  basic_string *pbVar10;
  void *pvVar11;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
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
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
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
                            *)&local_60,")Ljava/lang/String;",0x13);
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
  pJVar9 = *(JniHelper **)(this + 0x10);
  pbVar10 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*this & 1) == 0) {
    pJVar9 = this + 1;
  }
  if (((byte)*param_1 & 1) == 0) {
    pbVar10 = param_1 + 1;
  }
  pcVar1 = (char *)((ulong)&local_90 | 1);
  if ((local_90 & 1) != 0) {
    pcVar1 = local_80;
  }
  uVar6 = getStaticMethodInfo((JniMethodInfo_ *)&local_78,(char *)pJVar9,(char *)pbVar10,pcVar1);
  if ((uVar6 & 1) == 0) {
    reportError((basic_string *)this,param_1,(basic_string *)&local_90);
  }
  else {
    uStack_58 = 0;
    local_60 = (void *)0x0;
    uStack_48 = 0;
    local_50 = (void *)0x0;
    local_40 = 0x3f800000;
    p_Var7 = (_jstring *)_JNIEnv::CallStaticObjectMethod(local_78,p_Stack_70,local_68);
    jstring2string(p_Var7);
    in_x8[2] = local_98;
    in_x8[1] = uStack_a0;
    *in_x8 = local_a8;
    (**(code **)(*(long *)local_78 + 0xb8))(local_78,p_Stack_70);
    (**(code **)(*(long *)local_78 + 0xb8))(local_78,p_Var7);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

