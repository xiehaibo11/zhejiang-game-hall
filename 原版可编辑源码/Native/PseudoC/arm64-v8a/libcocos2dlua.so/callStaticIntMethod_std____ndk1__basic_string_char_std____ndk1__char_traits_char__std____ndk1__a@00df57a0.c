
/* int cocos2d::JniHelper::callStaticIntMethod<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, bool, float, float,
   float>(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   bool, float, float, float) */

int cocos2d::JniHelper::
    callStaticIntMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool,float,float,float>
              (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,basic_string *param_1,
              basic_string *param_2,basic_string *param_6,uint param_7)

{
  char *pcVar1;
  long lVar2;
  _jclass *p_Var3;
  undefined8 *puVar4;
  _jmethodID *p_Var5;
  int iVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  void *pvVar10;
  basic_string *pbVar11;
  basic_string *pbVar12;
  void *pvVar13;
  void *pvVar14;
  ulong uVar15;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  ulong local_d0;
  ulong uStack_c8;
  char *local_c0;
  JniHelper local_b8;
  undefined7 uStack_b7;
  _jmethodID *p_Stack_b0;
  void *local_a8;
  void *local_a0;
  ulong uStack_98;
  void *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  uStack_e8 = 0;
  local_e0 = (void *)0x0;
  local_f0 = 0;
  if (((byte)*param_6 & 1) == 0) {
    local_e0 = *(void **)(param_6 + 0x10);
    uStack_e8 = *(ulong *)(param_6 + 8);
    local_f0 = *(ulong *)param_6;
    goto LAB_00df5878;
  }
  uVar8 = *(ulong *)(param_6 + 8);
  if (0xffffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pvVar14 = *(void **)(param_6 + 0x10);
  if (uVar8 < 0x17) {
    pvVar10 = (void *)((ulong)&local_f0 | 1);
    local_f0 = (ulong)(byte)((int)uVar8 << 1);
    if (uVar8 != 0) goto LAB_00df5864;
  }
  else {
    uVar15 = uVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = operator_new(uVar15);
    local_f0 = uVar15 | 1;
    uStack_e8 = uVar8;
    local_e0 = pvVar10;
LAB_00df5864:
                    /* catch() { ... } // from try @ 00df5894 with catch @ 00df5868 */
    memcpy(pvVar10,pvVar14,uVar8);
  }
  *(undefined1 *)((long)pvVar10 + uVar8) = 0;
LAB_00df5878:
                    /* try { // try from 00df588c to 00ef5893 has its CatchHandler @ 00df58c0 */
  getJNISignature<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool,float,float,float>
            (&local_b8,param_1_00,param_2_00,param_3,&local_f0,param_7 & 1);
                    /* try { // try from 00df5894 to 00ef58db has its CatchHandler @ 00df5868 */
  puVar7 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_b8,0,"(",1);
  uStack_98 = puVar7[1];
  local_a0 = (void *)*puVar7;
  local_90 = (void *)puVar7[2];
                    /* catch() { ... } // from try @ 00df588c with catch @ 00df58c0 */
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_a0,")I",2);
  local_c0 = (char *)puVar7[2];
  uStack_c8 = puVar7[1];
  local_d0 = *puVar7;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (((byte)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  pbVar11 = *(basic_string **)(param_1 + 0x10);
  pbVar12 = *(basic_string **)(param_2 + 0x10);
                    /* try { // try from 00df5928 to 00ef59eb has its CatchHandler @ 00df5928
                       catch(type#1 @ 00000000) { ... } // from try @ 00df5928 with catch @ 00df5928
                       catch(type#1 @ 00000000) { ... } // from try @ 00df5b88 with catch @ 00df5928
                        */
  if (((byte)*param_1 & 1) == 0) {
    pbVar11 = param_1 + 1;
  }
  if (((byte)*param_2 & 1) == 0) {
    pbVar12 = param_2 + 1;
  }
  pcVar1 = (char *)((ulong)&local_d0 | 1);
  if ((local_d0 & 1) != 0) {
    pcVar1 = local_c0;
  }
  uVar8 = getStaticMethodInfo((JniMethodInfo_ *)&local_b8,(char *)pbVar11,(char *)pbVar12,pcVar1);
  p_Var5 = p_Stack_b0;
  if ((uVar8 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df59ec with catch @ 00df5a24
                        */
    reportError(param_1,param_2,(basic_string *)&local_d0);
    iVar6 = 0;
  }
  else {
    p_Var3 = (_jclass *)CONCAT71(uStack_b7,local_b8);
    uStack_98 = 0;
    local_a0 = (void *)0x0;
    uStack_88 = 0;
    local_90 = (void *)0x0;
    local_80 = 0x3f800000;
    uVar9 = convert((unordered_map *)&local_a0,(JniMethodInfo_ *)&local_b8,param_6);
    iVar6 = _JNIEnv::CallStaticIntMethod
                      (p_Var3,p_Var5,(double)(float)param_1_00,(double)(float)param_2_00,
                       (double)(float)param_3,local_a8,uVar9,(ulong)(param_7 & 1));
    (**(code **)(*(long *)CONCAT71(uStack_b7,local_b8) + 0xb8))
              ((long *)CONCAT71(uStack_b7,local_b8),p_Stack_b0);
    deleteLocalRefs((_JNIEnv *)CONCAT71(uStack_b7,local_b8),(unordered_map *)&local_a0);
    pvVar14 = local_a0;
    puVar4 = local_90;
    while (puVar4 != (void *)0x0) {
      pvVar10 = (void *)puVar4[3];
      pvVar13 = (void *)*puVar4;
      local_a0 = pvVar14;
      if (pvVar10 != (void *)0x0) {
                    /* try { // try from 00df59ec to 00ef5a03 has its CatchHandler @ 00df5a24 */
        puVar4[4] = pvVar10;
        operator_delete(pvVar10);
      }
      operator_delete(puVar4);
      pvVar14 = local_a0;
      puVar4 = pvVar13;
    }
    local_a0 = (void *)0x0;
    if (pvVar14 != (void *)0x0) {
      operator_delete(pvVar14);
    }
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
                    /* try { // try from 00df5a84 to 00ef5a87 has its CatchHandler @ 00df5d18 */
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

