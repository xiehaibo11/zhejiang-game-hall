
/* void cocos2d::JniHelper::callStaticVoidMethod<int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   float>(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   float) */

void cocos2d::JniHelper::
     callStaticVoidMethod<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>
               (undefined8 param_1_00,basic_string *param_1,basic_string *param_2,uint param_3,
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
  
                    /* try { // try from 00dec6b4 to 00eec6d7 has its CatchHandler @ 00deca08 */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00dec6ec to 00eec6ff has its CatchHandler @ 00dec97c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_e0,param_5);
                    /* try { // try from 00dec700 to 00eec77b has its CatchHandler @ 00dec10c */
  getJNISignature<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>
            (local_c8,param_1_00,param_3,local_e0);
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
  if (((byte)local_e0[0] & 1) != 0) {
                    /* try { // try from 00dec77c to 00eec783 has its CatchHandler @ 00dec944 */
    operator_delete(local_d0);
  }
                    /* try { // try from 00dec784 to 00eec7cf has its CatchHandler @ 00dec10c */
  pbVar11 = *(basic_string **)(param_1 + 0x10);
  pbVar12 = *(basic_string **)(param_2 + 0x10);
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
                    /* try { // try from 00dec7d0 to 00eec7d7 has its CatchHandler @ 00dec940 */
                    /* try { // try from 00dec7d8 to 00eec837 has its CatchHandler @ 00dec10c */
    uStack_78 = 0;
    local_80 = (void *)0x0;
    uStack_68 = 0;
    local_70 = (void *)0x0;
    local_60 = 0x3f800000;
    uVar9 = convert((unordered_map *)&local_80,(JniMethodInfo_ *)&local_98,param_5);
    _JNIEnv::CallStaticVoidMethod
              (p_Var5,p_Var6,(double)(float)param_1_00,local_88,(ulong)param_3,uVar9);
    (**(code **)(*(long *)local_98 + 0xb8))(local_98,p_Stack_90);
    deleteLocalRefs((_JNIEnv *)local_98,(unordered_map *)&local_80);
    pvVar3 = local_80;
    puVar4 = local_70;
    while (puVar4 != (void *)0x0) {
      pvVar10 = (void *)puVar4[3];
      pvVar13 = (void *)*puVar4;
      local_80 = pvVar3;
      if (pvVar10 != (void *)0x0) {
        puVar4[4] = pvVar10;
        operator_delete(pvVar10);
      }
                    /* try { // try from 00dec838 to 00eec83f has its CatchHandler @ 00dec930 */
      operator_delete(puVar4);
                    /* try { // try from 00dec840 to 00eec8b7 has its CatchHandler @ 00dec10c */
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
                    /* try { // try from 00dec8b8 to 00eec8bf has its CatchHandler @ 00dec9c8 */
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00dec8c4 to 00eec8d7 has its CatchHandler @ 00dec938 */
                    /* try { // try from 00dec8dc to 00eec8e7 has its CatchHandler @ 00dec934 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

