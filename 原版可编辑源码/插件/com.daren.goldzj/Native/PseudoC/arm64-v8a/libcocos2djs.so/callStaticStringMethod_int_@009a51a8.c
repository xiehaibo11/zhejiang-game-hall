
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   cocos2d::JniHelper::callStaticStringMethod<int>(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int) */

void __thiscall
cocos2d::JniHelper::callStaticStringMethod<int>
          (JniHelper *this,basic_string *param_1,basic_string *param_2,int param_3)

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
  undefined1 *local_b8;
  undefined8 uStack_b0;
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
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  uStack_b0 = 0;
  local_a8 = (void *)0x0;
  local_b8 = &DAT_00004902;
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_b8,0,"(",1);
  local_60 = (void *)puVar5[2];
  uStack_68 = puVar5[1];
  local_70 = (void *)*puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_70,")Ljava/lang/String;",0x13);
  local_90 = (char *)puVar5[2];
  uStack_98 = puVar5[1];
  local_a0 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  pJVar9 = *(JniHelper **)(this + 0x10);
  pbVar10 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*this & 1) == 0) {
    pJVar9 = this + 1;
  }
  if (((byte)*param_1 & 1) == 0) {
    pbVar10 = param_1 + 1;
  }
  pcVar1 = (char *)((ulong)&local_a0 | 1);
  if ((local_a0 & 1) != 0) {
    pcVar1 = local_90;
  }
  uVar6 = getStaticMethodInfo((JniMethodInfo_ *)&local_88,(char *)pJVar9,(char *)pbVar10,pcVar1);
  if ((uVar6 & 1) == 0) {
    reportError((basic_string *)this,param_1,(basic_string *)&local_a0);
  }
  else {
    uStack_68 = 0;
    local_70 = (void *)0x0;
    uStack_58 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
                    /* try { // try from 009a52d0 to 00aa53b3 has its CatchHandler @ 009a5110 */
    p_Var7 = (_jstring *)
             _JNIEnv::CallStaticObjectMethod
                       (local_88,p_Stack_80,local_78,(ulong)param_2 & 0xffffffff);
    jstring2string(p_Var7);
    in_x8[2] = local_a8;
    in_x8[1] = uStack_b0;
    *in_x8 = local_b8;
    (**(code **)(*(long *)local_88 + 0xb8))(local_88,p_Stack_80);
    (**(code **)(*(long *)local_88 + 0xb8))(local_88,p_Var7);
    deleteLocalRefs((_JNIEnv *)local_88,(unordered_map *)&local_70);
    pvVar3 = local_70;
    puVar4 = local_60;
    while (puVar4 != (void *)0x0) {
      pvVar8 = (void *)puVar4[3];
      pvVar11 = (void *)*puVar4;
      local_70 = pvVar3;
      if (pvVar8 != (void *)0x0) {
        puVar4[4] = pvVar8;
        operator_delete(pvVar8);
      }
                    /* catch() { ... } // from try @ 009a5190 with catch @ 009a5344 */
      operator_delete(puVar4);
                    /* catch() { ... } // from try @ 009a5184 with catch @ 009a5348 */
                    /* catch() { ... } // from try @ 009a5164 with catch @ 009a534c */
      pvVar3 = local_70;
      puVar4 = pvVar11;
    }
    local_70 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
                    /* catch() { ... } // from try @ 009a519c with catch @ 009a535c */
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
                    /* try { // try from 009a53b4 to 00aa540b has its CatchHandler @ 009a53b4
                       catch() { ... } // from try @ 009a53b4 with catch @ 009a53b4
                       catch() { ... } // from try @ 009a553c with catch @ 009a53b4
                       catch() { ... } // from try @ 009a5684 with catch @ 009a53b4
                       catch() { ... } // from try @ 009a56a0 with catch @ 009a53b4 */
  __stack_chk_fail();
}

