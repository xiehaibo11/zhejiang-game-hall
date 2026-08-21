
/* void cocos2d::JniHelper::callStaticVoidMethod<int, bool, int,
   int>(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   > const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, int, bool, int, int) */

void cocos2d::JniHelper::callStaticVoidMethod<int,bool,int,int>
               (basic_string *param_1,basic_string *param_2,int param_3,bool param_4,int param_5,
               int param_6)

{
  char *pcVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  void *pvVar7;
  basic_string *pbVar8;
  basic_string *pbVar9;
  void *pvVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [16];
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
  getJNISignature<int,bool,int,int>
            ((JniHelper *)(ulong)(uint)param_3,(uint)param_4,SUB41(param_5,0),param_6,param_5);
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert(local_c8,0,"(",1);
  local_70 = (void *)puVar5[2];
  uStack_78 = puVar5[1];
  local_80 = (void *)*puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_80,")V",2);
  local_a0 = (char *)puVar5[2];
  uStack_a8 = puVar5[1];
  local_b0 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
                    /* try { // try from 00ddfc1c to 00edfc9b has its CatchHandler @ 00ddfc1c
                       catch() { ... } // from try @ 00ddfc1c with catch @ 00ddfc1c
                       catch() { ... } // from try @ 00ddfcd4 with catch @ 00ddfc1c */
  if (((ulong)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  pbVar8 = *(basic_string **)(param_1 + 0x10);
  pbVar9 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar8 = param_1 + 1;
  }
  if (((byte)*param_2 & 1) == 0) {
    pbVar9 = param_2 + 1;
  }
  pcVar1 = (char *)((ulong)&local_b0 | 1);
  if ((local_b0 & 1) != 0) {
    pcVar1 = local_a0;
  }
  uVar6 = getStaticMethodInfo((JniMethodInfo_ *)&local_98,(char *)pbVar8,(char *)pbVar9,pcVar1);
  if ((uVar6 & 1) == 0) {
    reportError(param_1,param_2,(basic_string *)&local_b0);
  }
  else {
    uStack_78 = 0;
    local_80 = (void *)0x0;
    uStack_68 = 0;
    local_70 = (void *)0x0;
    local_60 = 0x3f800000;
                    /* try { // try from 00ddfc9c to 00edfcab has its CatchHandler @ 00ddfd4c */
    _JNIEnv::CallStaticVoidMethod
              (local_98,p_Stack_90,local_88,(ulong)(uint)param_3,(ulong)param_4,(ulong)(uint)param_5
               ,(ulong)(uint)param_6);
    (**(code **)(*(long *)local_98 + 0xb8))(local_98,p_Stack_90);
    deleteLocalRefs((_JNIEnv *)local_98,(unordered_map *)&local_80);
    pvVar3 = local_80;
    puVar4 = local_70;
                    /* try { // try from 00ddfcc8 to 00edfcd3 has its CatchHandler @ 00ddfd48 */
    while (puVar4 != (void *)0x0) {
      pvVar7 = (void *)puVar4[3];
      pvVar10 = (void *)*puVar4;
      local_80 = pvVar3;
      if (pvVar7 != (void *)0x0) {
        puVar4[4] = pvVar7;
        operator_delete(pvVar7);
      }
                    /* try { // try from 00ddfcd4 to 00edfd87 has its CatchHandler @ 00ddfc1c */
      operator_delete(puVar4);
      pvVar3 = local_80;
      puVar4 = pvVar10;
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
                    /* catch() { ... } // from try @ 00ddfcc8 with catch @ 00ddfd48 */
                    /* catch() { ... } // from try @ 00ddfc9c with catch @ 00ddfd4c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

