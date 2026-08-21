
/* void cocos2d::JniHelper::callStaticVoidMethod<char const*, char
   const*>(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char const*, char const*)
    */

void cocos2d::JniHelper::callStaticVoidMethod<char_const*,char_const*>
               (basic_string *param_1,basic_string *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  long lVar2;
  _jclass *p_Var3;
  _jmethodID *p_Var4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *pvVar10;
  undefined8 uVar11;
  basic_string *pbVar12;
  basic_string *pbVar13;
  void *pvVar14;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a0;
  ulong uStack_98;
  char *local_90;
  JniMethodInfo_ local_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined2 uStack_77;
  undefined1 uStack_75;
  undefined4 uStack_74;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined2 uStack_5f;
  undefined1 uStack_5d;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uStack_5c = 0;
  local_70 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x24;
  uStack_5f = 0x3b67;
  uStack_67 = 0x697274532f676e;
  uStack_60 = 0x6e;
  uStack_6f = 0x6c2f6176616a4c;
  uStack_68 = 0x61;
  uStack_5d = 0;
  uStack_74 = 0;
  local_88 = (JniMethodInfo_)0x24;
  uStack_77 = 0x3b67;
  uStack_7f = 0x697274532f676e;
  uStack_78 = 0x6e;
  uStack_87 = 0x6c2f6176616a4c;
  uStack_80 = 0x61;
  uStack_75 = 0;
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append(&local_70,(char *)((ulong)&local_88 | 1),0x12);
  local_b0 = (void *)puVar5[2];
  uStack_b8 = puVar5[1];
  local_c0 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if (((byte)local_88 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_74,CONCAT13(uStack_75,CONCAT21(uStack_77,uStack_78))));
  }
  if (((byte)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,CONCAT13(uStack_5d,CONCAT21(uStack_5f,uStack_60))));
  }
  puVar6 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_c0,0,"(",1);
  uVar11 = puVar6[2];
  uStack_68 = (undefined1)puVar6[1];
  uStack_67 = (undefined7)((ulong)puVar6[1] >> 8);
  local_70 = SUB81(*puVar6,0);
  uStack_6f = (undefined7)((ulong)*puVar6 >> 8);
  uStack_60 = (undefined1)uVar11;
  uStack_5f = (undefined2)((ulong)uVar11 >> 8);
  uStack_5d = (undefined1)((ulong)uVar11 >> 0x18);
  uStack_5c = (undefined4)((ulong)uVar11 >> 0x20);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append(&local_70,")V",2);
  local_90 = (char *)puVar5[2];
  uStack_98 = puVar5[1];
  local_a0 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if (((byte)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,CONCAT13(uStack_5d,CONCAT21(uStack_5f,uStack_60))));
  }
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  pbVar12 = *(basic_string **)(param_1 + 0x10);
  pbVar13 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar12 = param_1 + 1;
  }
  if (((byte)*param_2 & 1) == 0) {
    pbVar13 = param_2 + 1;
  }
  pcVar1 = (char *)((ulong)&local_a0 | 1);
  if ((local_a0 & 1) != 0) {
    pcVar1 = local_90;
  }
  uVar7 = getStaticMethodInfo(&local_88,(char *)pbVar12,(char *)pbVar13,pcVar1);
  if ((uVar7 & 1) == 0) {
    reportError(param_1,param_2,(basic_string *)&local_a0);
  }
  else {
    p_Var3 = (_jclass *)CONCAT71(uStack_87,local_88);
    p_Var4 = (_jmethodID *)CONCAT71(uStack_7f,uStack_80);
    uVar11 = CONCAT44(uStack_74,CONCAT13(uStack_75,CONCAT21(uStack_77,uStack_78)));
    uStack_68 = 0;
    uStack_67 = 0;
    local_70 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    uStack_6f = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_5f = 0;
    uStack_5d = 0;
    uStack_5c = 0;
    local_50 = 0x3f800000;
    uVar8 = convert((unordered_map *)&local_70,&local_88,param_3);
    uVar9 = convert((unordered_map *)&local_70,&local_88,param_4);
    _JNIEnv::CallStaticVoidMethod(p_Var3,p_Var4,uVar11,uVar8,uVar9);
    (**(code **)(*(long *)CONCAT71(uStack_87,local_88) + 0xb8))
              ((long *)CONCAT71(uStack_87,local_88),CONCAT71(uStack_7f,uStack_80));
    deleteLocalRefs((_JNIEnv *)CONCAT71(uStack_87,local_88),(unordered_map *)&local_70);
    puVar6 = (void *)CONCAT44(uStack_5c,CONCAT13(uStack_5d,CONCAT21(uStack_5f,uStack_60)));
    while (puVar6 != (void *)0x0) {
      pvVar10 = (void *)puVar6[3];
      pvVar14 = (void *)*puVar6;
      if (pvVar10 != (void *)0x0) {
        puVar6[4] = pvVar10;
        operator_delete(pvVar10);
      }
      operator_delete(puVar6);
      puVar6 = pvVar14;
    }
    pvVar10 = (void *)CONCAT71(uStack_6f,local_70);
    local_70 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    uStack_6f = 0;
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
    }
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

