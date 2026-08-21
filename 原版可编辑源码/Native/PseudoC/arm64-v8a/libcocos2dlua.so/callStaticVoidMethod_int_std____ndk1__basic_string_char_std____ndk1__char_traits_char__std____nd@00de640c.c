
/* WARNING: Type propagation algorithm not settling */
/* void cocos2d::JniHelper::callStaticVoidMethod<int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void cocos2d::JniHelper::
     callStaticVoidMethod<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
               (basic_string *param_1,basic_string *param_2,uint param_3,basic_string *param_4,
               basic_string *param_5)

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
  void *pvVar11;
  basic_string *pbVar12;
  basic_string *pbVar13;
  void *pvVar14;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_f8 [16];
  void *local_e8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e0 [16];
  void *local_d0;
  JniHelper local_c8 [16];
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
                    /* try { // try from 00de644c to 00ee64ef has its CatchHandler @ 00de644c
                       catch() { ... } // from try @ 00de644c with catch @ 00de644c
                       catch() { ... } // from try @ 00de6500 with catch @ 00de644c
                       catch() { ... } // from try @ 00de6704 with catch @ 00de644c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_e0,param_4);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_f8,param_5);
  getJNISignature<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (local_c8,param_3,local_e0,local_f8);
  puVar7 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)local_c8,0,"(",1);
  local_70 = (void *)puVar7[2];
  uStack_78 = puVar7[1];
  local_80 = (void *)*puVar7;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_80,")V",2);
  local_a0 = (char *)puVar7[2];
  uStack_a8 = puVar7[1];
  local_b0 = *puVar7;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if (((ulong)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  if (((byte)local_f8[0] & 1) != 0) {
    operator_delete(local_e8);
  }
  if (((byte)local_e0[0] & 1) != 0) {
                    /* try { // try from 00de64f0 to 00ee64ff has its CatchHandler @ 00de677c */
    operator_delete(local_d0);
  }
  pbVar12 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 00de6500 to 00ee662b has its CatchHandler @ 00de644c */
  pbVar13 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar12 = param_1 + 1;
  }
  if (((byte)*param_2 & 1) == 0) {
    pbVar13 = param_2 + 1;
  }
  pcVar1 = (char *)((ulong)&local_b0 | 1);
  if ((local_b0 & 1) != 0) {
    pcVar1 = local_a0;
  }
  uVar8 = getStaticMethodInfo((JniMethodInfo_ *)&local_98,(char *)pbVar12,(char *)pbVar13,pcVar1);
  p_Var6 = p_Stack_90;
  p_Var5 = local_98;
  if ((uVar8 & 1) == 0) {
    reportError(param_1,param_2,(basic_string *)&local_b0);
  }
  else {
    uStack_78 = 0;
    local_80 = (void *)0x0;
    uStack_68 = 0;
    local_70 = (void *)0x0;
    local_60 = 0x3f800000;
    uVar9 = convert((unordered_map *)&local_80,(JniMethodInfo_ *)&local_98,param_4);
    uVar10 = convert((unordered_map *)&local_80,(JniMethodInfo_ *)&local_98,param_5);
    _JNIEnv::CallStaticVoidMethod(p_Var5,p_Var6,local_88,(ulong)param_3,uVar9,uVar10);
    (**(code **)(*(long *)local_98 + 0xb8))(local_98,p_Stack_90);
    deleteLocalRefs((_JNIEnv *)local_98,(unordered_map *)&local_80);
    pvVar3 = local_80;
    puVar4 = local_70;
    while (puVar4 != (void *)0x0) {
      pvVar11 = (void *)puVar4[3];
      pvVar14 = (void *)*puVar4;
      local_80 = pvVar3;
      if (pvVar11 != (void *)0x0) {
        puVar4[4] = pvVar11;
        operator_delete(pvVar11);
      }
      operator_delete(puVar4);
      pvVar3 = local_80;
      puVar4 = pvVar14;
    }
                    /* try { // try from 00de662c to 00ee6647 has its CatchHandler @ 00de6784 */
    local_80 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
                    /* try { // try from 00de664c to 00ee665b has its CatchHandler @ 00de6780 */
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

