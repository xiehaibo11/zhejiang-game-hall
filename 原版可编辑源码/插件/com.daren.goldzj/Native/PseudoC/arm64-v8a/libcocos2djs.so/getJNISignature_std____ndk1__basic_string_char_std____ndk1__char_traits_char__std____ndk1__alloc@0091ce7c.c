
/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   cocos2d::JniHelper::getJNISignature<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int, bool, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   >(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   int, bool, bool, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void __thiscall
cocos2d::JniHelper::
getJNISignature<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int,bool,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
          (undefined8 *param_1,undefined8 param_2,undefined4 param_3,uint param_4,uint param_5,
          ulong *param_6,ulong *param_7)

{
  long lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  JniHelper local_98 [8];
  ulong local_90;
  char *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined2 uStack_6f;
  undefined1 uStack_6d;
  undefined4 uStack_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x24;
  uStack_6c = 0;
  uStack_77 = 0x697274532f676e;
  uStack_70 = 0x6e;
  uStack_7f = 0x6c2f6176616a4c;
  uStack_78 = 0x61;
  uStack_6f = 0x3b67;
  uStack_6d = 0;
  uStack_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  if ((*param_6 & 1) == 0) {
    local_a0 = (void *)param_6[2];
    uStack_a8 = param_6[1];
    local_b0 = *param_6;
  }
  else {
    uVar5 = param_6[1];
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar4 = (void *)param_6[2];
    if (uVar5 < 0x17) {
      pvVar6 = (void *)((ulong)&local_b0 | 1);
      local_b0 = (ulong)(byte)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_0091cf5c;
    }
    else {
      uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pvVar6 = operator_new(uVar7);
      local_b0 = uVar7 | 1;
      uStack_a8 = uVar5;
      local_a0 = pvVar6;
LAB_0091cf5c:
      memcpy(pvVar6,pvVar4,uVar5);
    }
    *(undefined1 *)((long)pvVar6 + uVar5) = 0;
  }
  uStack_c8 = 0;
  local_c0 = (void *)0x0;
  local_d0 = 0;
  if ((*param_7 & 1) == 0) {
    local_c0 = (void *)param_7[2];
    uStack_c8 = param_7[1];
    local_d0 = *param_7;
    goto LAB_0091cff8;
  }
  uVar5 = param_7[1];
  if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar4 = (void *)param_7[2];
  if (uVar5 < 0x17) {
    pvVar6 = (void *)((ulong)&local_d0 | 1);
    local_d0 = (ulong)(byte)((int)uVar5 << 1);
    if (uVar5 != 0) goto LAB_0091cfe4;
  }
  else {
    uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar6 = operator_new(uVar7);
    local_d0 = uVar7 | 1;
    uStack_c8 = uVar5;
    local_c0 = pvVar6;
LAB_0091cfe4:
    memcpy(pvVar6,pvVar4,uVar5);
  }
  *(undefined1 *)((long)pvVar6 + uVar5) = 0;
LAB_0091cff8:
  getJNISignature<int,bool,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (local_98,param_3,param_4 & 1,param_5 & 1,&local_b0,&local_d0);
  uVar5 = (ulong)((byte)local_98[0] >> 1);
  pcVar2 = (char *)((ulong)local_98 | 1);
  if (((byte)local_98[0] & 1) != 0) {
    uVar5 = local_90;
    pcVar2 = local_88;
  }
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     (&local_80,pcVar2,uVar5);
  uVar9 = puVar3[1];
  uVar8 = *puVar3;
  param_1[2] = puVar3[2];
  param_1[1] = uVar9;
  *param_1 = uVar8;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (((byte)local_80 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70))));
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

