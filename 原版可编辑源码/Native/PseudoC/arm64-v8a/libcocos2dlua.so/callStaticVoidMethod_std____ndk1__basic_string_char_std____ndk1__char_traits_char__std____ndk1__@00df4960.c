
/* void cocos2d::JniHelper::callStaticVoidMethod<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   bool>(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   bool) */

void cocos2d::JniHelper::
     callStaticVoidMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>
               (basic_string *param_1,basic_string *param_2,basic_string *param_3,uint param_4)

{
  char *pcVar1;
  long lVar2;
  _jclass *p_Var3;
  _jmethodID *p_Var4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 uVar9;
  basic_string *pbVar10;
  basic_string *pbVar11;
  void *pvVar12;
  ulong uVar13;
  ulong local_110;
  ulong uStack_108;
  void *local_100;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  ulong local_d0;
  ulong uStack_c8;
  char *local_c0;
  _jclass *local_b8;
  _jmethodID *p_Stack_b0;
  void *local_a8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined2 uStack_8f;
  undefined1 uStack_8d;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_70;
  
                    /* catch() { ... } // from try @ 00df4894 with catch @ 00df4964 */
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uStack_108 = 0;
  local_100 = (void *)0x0;
  local_110 = 0;
  if (((byte)*param_3 & 1) == 0) {
    local_100 = *(void **)(param_3 + 0x10);
    uStack_108 = *(ulong *)(param_3 + 8);
    local_110 = *(ulong *)param_3;
    goto LAB_00df4a24;
  }
  uVar7 = *(ulong *)(param_3 + 8);
  if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pvVar8 = *(void **)(param_3 + 0x10);
  if (uVar7 < 0x17) {
    pvVar12 = (void *)((ulong)&local_110 | 1);
    local_110 = (ulong)(byte)((int)uVar7 << 1);
    if (uVar7 != 0) goto LAB_00df4a10;
  }
  else {
    uVar13 = uVar7 + 0x10 & 0xfffffffffffffff0;
    pvVar12 = operator_new(uVar13);
    local_110 = uVar13 | 1;
    uStack_108 = uVar7;
    local_100 = pvVar12;
LAB_00df4a10:
    memcpy(pvVar12,pvVar8,uVar7);
  }
  *(undefined1 *)((long)pvVar12 + uVar7) = 0;
LAB_00df4a24:
  local_a0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x24;
  uStack_8c = 0;
  uStack_8f = 0x3b67;
                    /* try { // try from 00df4a44 to 00ef4a9f has its CatchHandler @ 00df4a44
                       catch() { ... } // from try @ 00df4a44 with catch @ 00df4a44
                       catch() { ... } // from try @ 00df4aa8 with catch @ 00df4a44 */
  p_Stack_b0 = (_jmethodID *)0x0;
  uStack_8d = 0;
  local_a8 = (void *)0x0;
  uStack_97 = 0x697274532f676e;
  uStack_90 = 0x6e;
  uStack_9f = 0x6c2f6176616a4c;
  uStack_98 = 0x61;
  local_b8 = (_jclass *)&DAT_00005a02;
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append(&local_a0,(char *)((ulong)&local_b8 | 1),1);
  local_e0 = (void *)puVar5[2];
  uStack_e8 = puVar5[1];
  local_f0 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
                    /* try { // try from 00df4aa0 to 00ef4aa7 has its CatchHandler @ 00df4b1c */
  if (((byte)local_a0 & 1) != 0) {
                    /* try { // try from 00df4aa8 to 00ef4b2f has its CatchHandler @ 00df4a44 */
    operator_delete((void *)CONCAT44(uStack_8c,CONCAT13(uStack_8d,CONCAT21(uStack_8f,uStack_90))));
  }
  puVar6 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_f0,0,"(",1);
  uVar9 = puVar6[2];
  uStack_98 = (undefined1)puVar6[1];
  uStack_97 = (undefined7)((ulong)puVar6[1] >> 8);
  local_a0 = SUB81(*puVar6,0);
  uStack_9f = (undefined7)((ulong)*puVar6 >> 8);
  uStack_90 = (undefined1)uVar9;
  uStack_8f = (undefined2)((ulong)uVar9 >> 8);
  uStack_8d = (undefined1)((ulong)uVar9 >> 0x18);
  uStack_8c = (undefined4)((ulong)uVar9 >> 0x20);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append(&local_a0,")V",2);
  local_c0 = (char *)puVar5[2];
  uStack_c8 = puVar5[1];
  local_d0 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if (((byte)local_a0 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_8c,CONCAT13(uStack_8d,CONCAT21(uStack_8f,uStack_90))));
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  if ((local_110 & 1) != 0) {
    operator_delete(local_100);
  }
  pbVar10 = *(basic_string **)(param_1 + 0x10);
  pbVar11 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar10 = param_1 + 1;
  }
  if (((byte)*param_2 & 1) == 0) {
    pbVar11 = param_2 + 1;
  }
  pcVar1 = (char *)((ulong)&local_d0 | 1);
  if ((local_d0 & 1) != 0) {
    pcVar1 = local_c0;
  }
  uVar7 = getStaticMethodInfo((JniMethodInfo_ *)&local_b8,(char *)pbVar10,(char *)pbVar11,pcVar1);
  pvVar8 = local_a8;
  p_Var4 = p_Stack_b0;
  p_Var3 = local_b8;
  if ((uVar7 & 1) == 0) {
    reportError(param_1,param_2,(basic_string *)&local_d0);
  }
  else {
    uStack_98 = 0;
    uStack_97 = 0;
    local_a0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    uStack_9f = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_8f = 0;
    uStack_8d = 0;
    uStack_8c = 0;
    local_80 = 0x3f800000;
    uVar9 = convert((unordered_map *)&local_a0,(JniMethodInfo_ *)&local_b8,param_3);
    _JNIEnv::CallStaticVoidMethod(p_Var3,p_Var4,pvVar8,uVar9,(ulong)(param_4 & 1));
    (**(code **)(*(long *)local_b8 + 0xb8))(local_b8,p_Stack_b0);
    deleteLocalRefs((_JNIEnv *)local_b8,(unordered_map *)&local_a0);
    puVar6 = (void *)CONCAT44(uStack_8c,CONCAT13(uStack_8d,CONCAT21(uStack_8f,uStack_90)));
    while (puVar6 != (void *)0x0) {
      pvVar8 = (void *)puVar6[3];
      pvVar12 = (void *)*puVar6;
      if (pvVar8 != (void *)0x0) {
        puVar6[4] = pvVar8;
        operator_delete(pvVar8);
      }
      operator_delete(puVar6);
      puVar6 = pvVar12;
    }
    pvVar8 = (void *)CONCAT71(uStack_9f,local_a0);
    local_a0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    uStack_9f = 0;
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

