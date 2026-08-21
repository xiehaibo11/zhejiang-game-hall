
/* void cocos2d::JniHelper::callStaticVoidMethod<int, int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int, int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void cocos2d::JniHelper::
     callStaticVoidMethod<int,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
               (basic_string *param_1,basic_string *param_2,uint param_3,uint param_4,
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
  void *pvVar10;
  basic_string *pbVar11;
  basic_string *pbVar12;
  void *pvVar13;
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
                    /* try { // try from 00ddf1b4 to 00edf1bf has its CatchHandler @ 00ddf3e4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_e0,param_5);
  getJNISignature<int,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (local_c8,param_3,param_4,local_e0);
  puVar7 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)local_c8,0,"(",1);
                    /* try { // try from 00ddf1f8 to 00edf1ff has its CatchHandler @ 00ddf3e0 */
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
                    /* try { // try from 00ddf238 to 00edf23f has its CatchHandler @ 00ddf3dc */
  *puVar7 = 0;
  if (((ulong)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  if (((byte)local_e0[0] & 1) != 0) {
    operator_delete(local_d0);
  }
  pbVar11 = *(basic_string **)(param_1 + 0x10);
  pbVar12 = *(basic_string **)(param_2 + 0x10);
                    /* try { // try from 00ddf274 to 00edf27f has its CatchHandler @ 00ddf3d8 */
  if (((byte)*param_1 & 1) == 0) {
    pbVar11 = param_1 + 1;
  }
  if (((byte)*param_2 & 1) == 0) {
    pbVar12 = param_2 + 1;
  }
  pcVar1 = (char *)((ulong)&local_b0 | 1);
  if ((local_b0 & 1) != 0) {
    pcVar1 = local_a0;
  }
  uVar8 = getStaticMethodInfo((JniMethodInfo_ *)&local_98,(char *)pbVar11,(char *)pbVar12,pcVar1);
  p_Var6 = p_Stack_90;
  p_Var5 = local_98;
  if ((uVar8 & 1) == 0) {
    reportError(param_1,param_2,(basic_string *)&local_b0);
  }
  else {
                    /* try { // try from 00ddf2ac to 00edf2af has its CatchHandler @ 00ddf3b4 */
    uStack_78 = 0;
    local_80 = (void *)0x0;
    uStack_68 = 0;
    local_70 = (void *)0x0;
    local_60 = 0x3f800000;
    uVar9 = convert((unordered_map *)&local_80,(JniMethodInfo_ *)&local_98,param_5);
    _JNIEnv::CallStaticVoidMethod(p_Var5,p_Var6,local_88,(ulong)param_3,(ulong)param_4,uVar9);
                    /* try { // try from 00ddf2e4 to 00edf2ef has its CatchHandler @ 00ddf3b8 */
    (**(code **)(*(long *)local_98 + 0xb8))(local_98,p_Stack_90);
    deleteLocalRefs((_JNIEnv *)local_98,(unordered_map *)&local_80);
    pvVar3 = local_80;
    puVar4 = local_70;
    while (puVar4 != (void *)0x0) {
                    /* try { // try from 00ddf31c to 00edf32b has its CatchHandler @ 00ddf414 */
      pvVar10 = (void *)puVar4[3];
      pvVar13 = (void *)*puVar4;
      local_80 = pvVar3;
      if (pvVar10 != (void *)0x0) {
        puVar4[4] = pvVar10;
                    /* try { // try from 00ddf32c to 00edf48f has its CatchHandler @ 00dded0c */
        operator_delete(pvVar10);
      }
      operator_delete(puVar4);
      pvVar3 = local_80;
      puVar4 = pvVar13;
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
                    /* catch() { ... } // from try @ 00ddf2ac with catch @ 00ddf3b4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00ddf2e4 with catch @ 00ddf3b8 */
  __stack_chk_fail();
}

