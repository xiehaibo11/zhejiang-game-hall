
/* bool cocos2d::JniHelper::callStaticBooleanMethod<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, char
   const*>(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   char const*) */

bool cocos2d::JniHelper::
     callStaticBooleanMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,char_const*>
               (basic_string *param_1,basic_string *param_2,basic_string *param_3,char *param_4)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  _jclass *p_Var4;
  _jmethodID *p_Var5;
  bool bVar6;
  char cVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *pvVar12;
  basic_string *pbVar13;
  basic_string *pbVar14;
  void *pvVar15;
  void *pvVar16;
  ulong uVar17;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d8 [16];
  void *local_c8;
  ulong local_c0;
  ulong uStack_b8;
  char *local_b0;
  _jclass *local_a8;
  _jmethodID *p_Stack_a0;
  undefined8 local_98;
  void *local_90;
  ulong uStack_88;
  void *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 009a4468 to 00aa44fb has its CatchHandler @ 009a4468
                       catch(type#1 @ 00000000) { ... } // from try @ 009a4468 with catch @ 009a4468
                       catch(type#1 @ 00000000) { ... } // from try @ 009a4504 with catch @ 009a4468
                       catch(type#1 @ 00000000) { ... } // from try @ 009a4598 with catch @ 009a4468
                        */
  uStack_e8 = 0;
  local_e0 = (void *)0x0;
  local_f0 = 0;
  if (((byte)*param_3 & 1) == 0) {
    local_e0 = *(void **)(param_3 + 0x10);
    uStack_e8 = *(ulong *)(param_3 + 8);
    local_f0 = *(ulong *)param_3;
    goto LAB_009a4500;
  }
  uVar9 = *(ulong *)(param_3 + 8);
  if (0xffffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar16 = *(void **)(param_3 + 0x10);
  if (uVar9 < 0x17) {
    pvVar12 = (void *)((ulong)&local_f0 | 1);
    local_f0 = (ulong)(byte)((int)uVar9 << 1);
    if (uVar9 != 0) goto LAB_009a44ec;
  }
  else {
    uVar17 = uVar9 + 0x10 & 0xfffffffffffffff0;
    pvVar12 = operator_new(uVar17);
    local_f0 = uVar17 | 1;
    uStack_e8 = uVar9;
    local_e0 = pvVar12;
LAB_009a44ec:
    memcpy(pvVar12,pvVar16,uVar9);
  }
                    /* try { // try from 009a44fc to 00aa4503 has its CatchHandler @ 009a459c */
  *(undefined1 *)((long)pvVar12 + uVar9) = 0;
LAB_009a4500:
                    /* try { // try from 009a4504 to 00aa4557 has its CatchHandler @ 009a4468 */
  getJNISignature<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,char_const*>
            (local_d8,&local_f0,param_4);
  puVar8 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert(local_d8,0,"(",1);
  local_80 = (void *)puVar8[2];
  uStack_88 = puVar8[1];
  local_90 = (void *)*puVar8;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_90,")Z",2);
  local_b0 = (char *)puVar8[2];
                    /* try { // try from 009a4558 to 00aa455f has its CatchHandler @ 009a45b4 */
  uStack_b8 = puVar8[1];
  local_c0 = *puVar8;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (((byte)local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
                    /* try { // try from 009a4590 to 00aa4597 has its CatchHandler @ 009a459c */
  pbVar13 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 009a4598 to 00aa45b7 has its CatchHandler @ 009a4468 */
  pbVar14 = *(basic_string **)(param_2 + 0x10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a44fc with catch @ 009a459c
                       catch(type#1 @ 00000000) { ... } // from try @ 009a4590 with catch @ 009a459c
                        */
  if (((byte)*param_1 & 1) == 0) {
    pbVar13 = param_1 + 1;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a4558 with catch @ 009a45b4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a4608 with catch @ 009a45b8
                        */
  if (((byte)*param_2 & 1) == 0) {
    pbVar14 = param_2 + 1;
  }
  pcVar1 = (char *)((ulong)&local_c0 | 1);
  if ((local_c0 & 1) != 0) {
    pcVar1 = local_b0;
  }
  uVar9 = getStaticMethodInfo((JniMethodInfo_ *)&local_a8,(char *)pbVar13,(char *)pbVar14,pcVar1);
  p_Var5 = p_Stack_a0;
  p_Var4 = local_a8;
  if ((uVar9 & 1) == 0) {
    reportError(param_1,param_2,(basic_string *)&local_c0);
    bVar6 = false;
  }
  else {
    uStack_88 = 0;
    local_90 = (void *)0x0;
    uStack_78 = 0;
    local_80 = (void *)0x0;
    local_70 = 0x3f800000;
    uVar10 = convert((unordered_map *)&local_90,(JniMethodInfo_ *)&local_a8,param_3);
                    /* try { // try from 009a45fc to 00aa4607 has its CatchHandler @ 009a46f4 */
                    /* try { // try from 009a4608 to 00aa46f7 has its CatchHandler @ 009a45b8 */
    uVar11 = convert((unordered_map *)&local_90,(JniMethodInfo_ *)&local_a8,param_4);
    cVar7 = _JNIEnv::CallStaticBooleanMethod(p_Var4,p_Var5,local_98,uVar10,uVar11);
    (**(code **)(*(long *)local_a8 + 0xb8))(local_a8,p_Stack_a0);
    deleteLocalRefs((_JNIEnv *)local_a8,(unordered_map *)&local_90);
    pvVar16 = local_90;
    puVar3 = local_80;
    while (puVar3 != (void *)0x0) {
      pvVar12 = (void *)puVar3[3];
      pvVar15 = (void *)*puVar3;
      local_90 = pvVar16;
      if (pvVar12 != (void *)0x0) {
        puVar3[4] = pvVar12;
        operator_delete(pvVar12);
      }
      operator_delete(puVar3);
      pvVar16 = local_90;
      puVar3 = pvVar15;
    }
    local_90 = (void *)0x0;
    if (pvVar16 != (void *)0x0) {
      operator_delete(pvVar16);
    }
    bVar6 = cVar7 == '\x01';
  }
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a45fc with catch @ 009a46f4
                        */
  return bVar6;
}

