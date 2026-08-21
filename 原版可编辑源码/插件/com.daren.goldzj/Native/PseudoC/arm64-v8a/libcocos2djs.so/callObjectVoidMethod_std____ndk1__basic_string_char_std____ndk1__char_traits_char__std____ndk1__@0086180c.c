
/* void cocos2d::JniHelper::callObjectVoidMethod<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(_jobject*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

void cocos2d::JniHelper::
     callObjectVoidMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
               (_jmethodID *param_1,basic_string *param_2,basic_string *param_3,
               basic_string *param_4)

{
  char *pcVar1;
  long lVar2;
  _jobject *p_Var3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  void *pvVar10;
  basic_string *pbVar11;
  basic_string *pbVar12;
  void *pvVar13;
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
  puVar7 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert(&local_88,0,"(",1);
  local_60 = (void *)puVar7[2];
  uStack_68 = puVar7[1];
  local_70 = (void *)*puVar7;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_70,")V",2);
  local_90 = (char *)puVar7[2];
  uStack_98 = puVar7[1];
  local_a0 = *puVar7;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_88 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_74,CONCAT13(uStack_75,CONCAT21(uStack_77,uStack_78))));
  }
  pbVar11 = *(basic_string **)(param_2 + 0x10);
  pbVar12 = *(basic_string **)(param_3 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar11 = param_2 + 1;
  }
  if (((byte)*param_3 & 1) == 0) {
    pbVar12 = param_3 + 1;
  }
  pcVar1 = (char *)((ulong)&local_a0 | 1);
  if ((local_a0 & 1) != 0) {
    pcVar1 = local_90;
  }
  uVar8 = getMethodInfo((JniMethodInfo_ *)&local_88,(char *)pbVar11,(char *)pbVar12,pcVar1);
  if ((uVar8 & 1) == 0) {
    reportError(param_2,param_3,(basic_string *)&local_a0);
  }
  else {
    p_Var3 = (_jobject *)CONCAT71(uStack_87,local_88);
    uVar4 = CONCAT44(uStack_74,CONCAT13(uStack_75,CONCAT21(uStack_77,uStack_78)));
    uStack_68 = 0;
    local_70 = (void *)0x0;
    uStack_58 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    uVar9 = convert((unordered_map *)&local_70,(JniMethodInfo_ *)&local_88,param_4);
    _JNIEnv::CallVoidMethod(p_Var3,param_1,uVar4,uVar9);
    (**(code **)(*(long *)CONCAT71(uStack_87,local_88) + 0xb8))
              ((long *)CONCAT71(uStack_87,local_88),CONCAT71(uStack_7f,uStack_80));
    deleteLocalRefs((_JNIEnv *)CONCAT71(uStack_87,local_88),(unordered_map *)&local_70);
    pvVar5 = local_70;
    puVar6 = local_60;
    while (puVar6 != (void *)0x0) {
      pvVar10 = (void *)puVar6[3];
      pvVar13 = (void *)*puVar6;
      local_70 = pvVar5;
      if (pvVar10 != (void *)0x0) {
        puVar6[4] = pvVar10;
        operator_delete(pvVar10);
      }
      operator_delete(puVar6);
      pvVar5 = local_70;
      puVar6 = pvVar13;
    }
    local_70 = (void *)0x0;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

