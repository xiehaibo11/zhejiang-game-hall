
/* bool cocos2d::JniHelper::callStaticBooleanMethod<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

bool cocos2d::JniHelper::
     callStaticBooleanMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
               (basic_string *param_1,basic_string *param_2,basic_string *param_3)

{
  char *pcVar1;
  long lVar2;
  _jclass *p_Var3;
  _jmethodID *p_Var4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  bool bVar8;
  char cVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  void *pvVar13;
  basic_string *pbVar14;
  basic_string *pbVar15;
  void *pvVar16;
  ulong local_a0;
  ulong uStack_98;
  char *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined2 uStack_77;
  undefined1 uStack_75;
  undefined4 uStack_74;
  void *local_70;
  ulong uStack_68;
  void *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_88 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x24;
  uStack_74 = 0;
  uStack_7f = 0x697274532f676e;
  uStack_78 = 0x6e;
  uStack_87 = 0x6c2f6176616a4c;
  uStack_80 = 0x61;
  uStack_77 = 0x3b67;
  uStack_75 = 0;
  puVar10 = (ulong *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::insert(&local_88,0,"(",1);
  local_60 = (void *)puVar10[2];
  uStack_68 = puVar10[1];
  local_70 = (void *)*puVar10;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  puVar10 = (ulong *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)&local_70,")Z",2);
  local_90 = (char *)puVar10[2];
  uStack_98 = puVar10[1];
  local_a0 = *puVar10;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_88 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_74,CONCAT13(uStack_75,CONCAT21(uStack_77,uStack_78))));
  }
  pbVar14 = *(basic_string **)(param_1 + 0x10);
  pbVar15 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar14 = param_1 + 1;
  }
  if (((byte)*param_2 & 1) == 0) {
    pbVar15 = param_2 + 1;
  }
  pcVar1 = (char *)((ulong)&local_a0 | 1);
  if ((local_a0 & 1) != 0) {
    pcVar1 = local_90;
  }
  uVar11 = getStaticMethodInfo((JniMethodInfo_ *)&local_88,(char *)pbVar14,(char *)pbVar15,pcVar1);
  if ((uVar11 & 1) == 0) {
    reportError(param_1,param_2,(basic_string *)&local_a0);
    bVar8 = false;
  }
  else {
    p_Var3 = (_jclass *)CONCAT71(uStack_87,local_88);
    p_Var4 = (_jmethodID *)CONCAT71(uStack_7f,uStack_80);
    uVar5 = CONCAT44(uStack_74,CONCAT13(uStack_75,CONCAT21(uStack_77,uStack_78)));
    uStack_68 = 0;
    local_70 = (void *)0x0;
    uStack_58 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    uVar12 = convert((unordered_map *)&local_70,(JniMethodInfo_ *)&local_88,param_3);
    cVar9 = _JNIEnv::CallStaticBooleanMethod(p_Var3,p_Var4,uVar5,uVar12);
    (**(code **)(*(long *)CONCAT71(uStack_87,local_88) + 0xb8))
              ((long *)CONCAT71(uStack_87,local_88),CONCAT71(uStack_7f,uStack_80));
    deleteLocalRefs((_JNIEnv *)CONCAT71(uStack_87,local_88),(unordered_map *)&local_70);
    pvVar6 = local_70;
    puVar7 = local_60;
    while (puVar7 != (void *)0x0) {
      pvVar13 = (void *)puVar7[3];
      pvVar16 = (void *)*puVar7;
      local_70 = pvVar6;
      if (pvVar13 != (void *)0x0) {
        puVar7[4] = pvVar13;
        operator_delete(pvVar13);
      }
      operator_delete(puVar7);
      pvVar6 = local_70;
      puVar7 = pvVar16;
    }
    local_70 = (void *)0x0;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
    bVar8 = cVar9 == '\x01';
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar8;
}

