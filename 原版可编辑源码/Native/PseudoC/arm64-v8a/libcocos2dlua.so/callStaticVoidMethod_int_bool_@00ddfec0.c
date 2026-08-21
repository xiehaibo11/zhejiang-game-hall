
/* void cocos2d::JniHelper::callStaticVoidMethod<int, bool>(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int, bool) */

void cocos2d::JniHelper::callStaticVoidMethod<int,bool>
               (basic_string *param_1,basic_string *param_2,int param_3,bool param_4)

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
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [16];
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
  
                    /* try { // try from 00ddfed0 to 00edfed7 has its CatchHandler @ 00ddff68 */
                    /* try { // try from 00ddfed8 to 00edfef7 has its CatchHandler @ 00ddfe08 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00ddfef8 to 00edfeff has its CatchHandler @ 00ddff68 */
                    /* try { // try from 00ddff00 to 00edff1f has its CatchHandler @ 00ddfe08 */
  getJNISignature<int,bool>(param_3,param_4);
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert(local_b8,0,"(",1);
  local_60 = (void *)puVar5[2];
                    /* try { // try from 00ddff20 to 00edff2b has its CatchHandler @ 00ddff68 */
  uStack_68 = puVar5[1];
  local_70 = (void *)*puVar5;
                    /* try { // try from 00ddff2c to 00edff6f has its CatchHandler @ 00ddfe08 */
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_70,")V",2);
  local_90 = (char *)puVar5[2];
  uStack_98 = puVar5[1];
  local_a0 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if (((ulong)local_70 & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ddfed0 with catch @ 00ddff68
                       catch(type#1 @ 00000000) { ... } // from try @ 00ddfef8 with catch @ 00ddff68
                       catch(type#1 @ 00000000) { ... } // from try @ 00ddff20 with catch @ 00ddff68
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ddfe70 with catch @ 00ddff6c
                       catch(type#1 @ 00000000) { ... } // from try @ 00ddfe9c with catch @ 00ddff6c
                        */
    operator_delete(local_60);
  }
  if (((byte)local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  pbVar8 = *(basic_string **)(param_1 + 0x10);
  pbVar9 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar8 = param_1 + 1;
  }
  if (((byte)*param_2 & 1) == 0) {
    pbVar9 = param_2 + 1;
  }
  pcVar1 = (char *)((ulong)&local_a0 | 1);
  if ((local_a0 & 1) != 0) {
    pcVar1 = local_90;
  }
  uVar6 = getStaticMethodInfo((JniMethodInfo_ *)&local_88,(char *)pbVar8,(char *)pbVar9,pcVar1);
  if ((uVar6 & 1) == 0) {
    reportError(param_1,param_2,(basic_string *)&local_a0);
  }
  else {
    uStack_68 = 0;
    local_70 = (void *)0x0;
    uStack_58 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    _JNIEnv::CallStaticVoidMethod(local_88,p_Stack_80,local_78,(ulong)(uint)param_3,(ulong)param_4);
    (**(code **)(*(long *)local_88 + 0xb8))(local_88,p_Stack_80);
    deleteLocalRefs((_JNIEnv *)local_88,(unordered_map *)&local_70);
    pvVar3 = local_70;
    puVar4 = local_60;
    while (puVar4 != (void *)0x0) {
      pvVar7 = (void *)puVar4[3];
      pvVar10 = (void *)*puVar4;
      local_70 = pvVar3;
      if (pvVar7 != (void *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00de009c with catch @ 00de002c
                       catch(type#1 @ 00000000) { ... } // from try @ 00de00cc with catch @ 00de002c
                       catch(type#1 @ 00000000) { ... } // from try @ 00de00fc with catch @ 00de002c
                       catch(type#1 @ 00000000) { ... } // from try @ 00de0124 with catch @ 00de002c
                       catch(type#1 @ 00000000) { ... } // from try @ 00de0150 with catch @ 00de002c
                        */
        puVar4[4] = pvVar7;
        operator_delete(pvVar7);
      }
      operator_delete(puVar4);
      pvVar3 = local_70;
      puVar4 = pvVar10;
    }
    local_70 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
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
                    /* try { // try from 00de0094 to 00ee009b has its CatchHandler @ 00de0190 */
  __stack_chk_fail();
}

