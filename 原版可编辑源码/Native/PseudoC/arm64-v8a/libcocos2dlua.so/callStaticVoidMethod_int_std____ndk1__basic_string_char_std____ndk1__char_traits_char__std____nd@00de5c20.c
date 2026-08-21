
/* WARNING: Type propagation algorithm not settling */
/* void cocos2d::JniHelper::callStaticVoidMethod<int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void cocos2d::JniHelper::
     callStaticVoidMethod<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
               (basic_string *param_1,basic_string *param_2,uint param_3,basic_string *param_4,
               basic_string *param_5,basic_string *param_6,basic_string *param_7)

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
  undefined8 uVar11;
  undefined8 uVar12;
  void *pvVar13;
  basic_string *pbVar14;
  basic_string *pbVar15;
  void *pvVar16;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_148 [16];
  void *local_138;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_130 [16];
  void *local_120;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_118 [16];
  void *local_108;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_100 [16];
  void *local_f0;
  JniHelper local_e8 [16];
  void *local_d8;
  ulong local_d0;
  ulong uStack_c8;
  char *local_c0;
  _jclass *local_b8;
  _jmethodID *p_Stack_b0;
  undefined8 local_a8;
  void *local_a0;
  ulong uStack_98;
  void *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00de5c58 to 00ee5c73 has its CatchHandler @ 00de5ec4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_100,param_4);
                    /* try { // try from 00de5c78 to 00ee5c87 has its CatchHandler @ 00de5ec8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_118,param_5);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_130,param_6);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_148,param_7);
  getJNISignature<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (local_e8,param_3,local_100,local_118,local_130,local_148);
  puVar7 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)local_e8,0,"(",1);
  local_90 = (void *)puVar7[2];
  uStack_98 = puVar7[1];
  local_a0 = (void *)*puVar7;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_a0,")V",2);
  local_c0 = (char *)puVar7[2];
  uStack_c8 = puVar7[1];
  local_d0 = *puVar7;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
                    /* catch() { ... } // from try @ 00de5ba8 with catch @ 00de5e70 */
  }
                    /* catch() { ... } // from try @ 00de5dd0 with catch @ 00de5e74 */
  if (((byte)local_e8[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 00de5d2c with catch @ 00de5e78 */
    operator_delete(local_d8);
  }
  if (((byte)local_148[0] & 1) != 0) {
    operator_delete(local_138);
  }
  if (((byte)local_130[0] & 1) != 0) {
    operator_delete(local_120);
  }
  if (((byte)local_118[0] & 1) != 0) {
    operator_delete(local_108);
                    /* catch() { ... } // from try @ 00de5d74 with catch @ 00de5eb0 */
  }
                    /* catch() { ... } // from try @ 00de5c00 with catch @ 00de5eb4 */
  if (((byte)local_100[0] & 1) != 0) {
    operator_delete(local_f0);
  }
  pbVar14 = *(basic_string **)(param_1 + 0x10);
  pbVar15 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar14 = param_1 + 1;
  }
                    /* try { // try from 00de5d74 to 00ee5d7f has its CatchHandler @ 00de5eb0 */
  if (((byte)*param_2 & 1) == 0) {
    pbVar15 = param_2 + 1;
  }
  pcVar1 = (char *)((ulong)&local_d0 | 1);
  if ((local_d0 & 1) != 0) {
    pcVar1 = local_c0;
  }
  uVar8 = getStaticMethodInfo((JniMethodInfo_ *)&local_b8,(char *)pbVar14,(char *)pbVar15,pcVar1);
  p_Var6 = p_Stack_b0;
  p_Var5 = local_b8;
  if ((uVar8 & 1) == 0) {
                    /* catch() { ... } // from try @ 00de5c58 with catch @ 00de5ec4 */
                    /* catch() { ... } // from try @ 00de5c78 with catch @ 00de5ec8 */
    reportError(param_1,param_2,(basic_string *)&local_d0);
  }
  else {
    uStack_98 = 0;
    local_a0 = (void *)0x0;
    uStack_88 = 0;
    local_90 = (void *)0x0;
    local_80 = 0x3f800000;
    uVar9 = convert((unordered_map *)&local_a0,(JniMethodInfo_ *)&local_b8,param_4);
    uVar10 = convert((unordered_map *)&local_a0,(JniMethodInfo_ *)&local_b8,param_5);
                    /* try { // try from 00de5dd0 to 00ee5e23 has its CatchHandler @ 00de5e74 */
    uVar11 = convert((unordered_map *)&local_a0,(JniMethodInfo_ *)&local_b8,param_6);
    uVar12 = convert((unordered_map *)&local_a0,(JniMethodInfo_ *)&local_b8,param_7);
    _JNIEnv::CallStaticVoidMethod(p_Var5,p_Var6,local_a8,(ulong)param_3,uVar9,uVar10,uVar11,uVar12);
                    /* try { // try from 00de5e24 to 00ee5ef3 has its CatchHandler @ 00de5b50 */
    (**(code **)(*(long *)local_b8 + 0xb8))(local_b8,p_Stack_b0);
    deleteLocalRefs((_JNIEnv *)local_b8,(unordered_map *)&local_a0);
    pvVar3 = local_a0;
    puVar4 = local_90;
    while (puVar4 != (void *)0x0) {
      pvVar13 = (void *)puVar4[3];
      pvVar16 = (void *)*puVar4;
      local_a0 = pvVar3;
      if (pvVar13 != (void *)0x0) {
        puVar4[4] = pvVar13;
        operator_delete(pvVar13);
      }
      operator_delete(puVar4);
      pvVar3 = local_a0;
      puVar4 = pvVar16;
    }
    local_a0 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

