
/* int cocos2d::JniHelper::callStaticIntMethod<int, int, int, int,
   float>(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int, int, int, int, float)
    */

int cocos2d::JniHelper::callStaticIntMethod<int,int,int,int,float>
              (basic_string *param_1,basic_string *param_2,int param_3,int param_4,int param_5,
              int param_6,float param_7)

{
  char *pcVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong *puVar6;
  ulong uVar7;
  void *pvVar8;
  basic_string *pbVar9;
  basic_string *pbVar10;
  void *pvVar11;
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
  getJNISignature<int,int,int,int,float>
            ((JniHelper *)(ulong)(uint)param_3,param_4,param_5,param_6,param_5,param_7);
  puVar6 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert(local_c8,0,"(",1);
  local_70 = (void *)puVar6[2];
  uStack_78 = puVar6[1];
  local_80 = (void *)*puVar6;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  puVar6 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_80,")I",2);
  local_a0 = (char *)puVar6[2];
  uStack_a8 = puVar6[1];
  local_b0 = *puVar6;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  if (((ulong)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  pbVar9 = *(basic_string **)(param_1 + 0x10);
  pbVar10 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar9 = param_1 + 1;
  }
  if (((byte)*param_2 & 1) == 0) {
    pbVar10 = param_2 + 1;
  }
  pcVar1 = (char *)((ulong)&local_b0 | 1);
  if ((local_b0 & 1) != 0) {
    pcVar1 = local_a0;
  }
  uVar7 = getStaticMethodInfo((JniMethodInfo_ *)&local_98,(char *)pbVar9,(char *)pbVar10,pcVar1);
  if ((uVar7 & 1) == 0) {
    reportError(param_1,param_2,(basic_string *)&local_b0);
    iVar5 = 0;
  }
  else {
    uStack_78 = 0;
    local_80 = (void *)0x0;
    uStack_68 = 0;
    local_70 = (void *)0x0;
    local_60 = 0x3f800000;
    iVar5 = _JNIEnv::CallStaticIntMethod
                      (local_98,p_Stack_90,(double)param_7,local_88,(ulong)(uint)param_3,
                       (ulong)(uint)param_4,(ulong)(uint)param_5,(ulong)(uint)param_6);
    (**(code **)(*(long *)local_98 + 0xb8))(local_98,p_Stack_90);
    deleteLocalRefs((_JNIEnv *)local_98,(unordered_map *)&local_80);
    pvVar3 = local_80;
    puVar4 = local_70;
                    /* try { // try from 00dec10c to 00eec2cb has its CatchHandler @ 00dec10c
                       catch() { ... } // from try @ 00dec10c with catch @ 00dec10c
                       catch() { ... } // from try @ 00dec2d4 with catch @ 00dec10c
                       catch() { ... } // from try @ 00dec410 with catch @ 00dec10c
                       catch() { ... } // from try @ 00dec53c with catch @ 00dec10c
                       catch() { ... } // from try @ 00dec700 with catch @ 00dec10c
                       catch() { ... } // from try @ 00dec784 with catch @ 00dec10c
                       catch() { ... } // from try @ 00dec7d8 with catch @ 00dec10c
                       catch() { ... } // from try @ 00dec840 with catch @ 00dec10c
                       catch() { ... } // from try @ 00dec8e8 with catch @ 00dec10c */
    while (puVar4 != (void *)0x0) {
      pvVar8 = (void *)puVar4[3];
      pvVar11 = (void *)*puVar4;
      local_80 = pvVar3;
      if (pvVar8 != (void *)0x0) {
        puVar4[4] = pvVar8;
        operator_delete(pvVar8);
      }
      operator_delete(puVar4);
      pvVar3 = local_80;
      puVar4 = pvVar11;
    }
    local_80 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}

