
/* cocos2d::FileUtils::getPathForFilename(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void cocos2d::FileUtils::getPathForFilename
               (basic_string *param_1,basic_string *param_2,basic_string *param_3)

{
  basic_string bVar1;
  long lVar2;
  bool bVar3;
  byte *in_x3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  ulong uVar4;
  void *__src;
  ulong uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  basic_string *pbVar6;
  char *pcVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong local_b8;
  ulong uStack_b0;
  char *local_a8;
  ulong local_a0;
  ulong uStack_98;
  char *local_90;
  ulong local_80;
  ulong uStack_78;
  undefined1 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (undefined1 *)0x0;
  bVar1 = *param_2;
  if (((byte)bVar1 & 1) == 0) {
    uVar5 = *(ulong *)(param_2 + 8);
    local_70 = *(undefined1 **)(param_2 + 0x10);
    uStack_78 = *(ulong *)(param_2 + 8);
    local_80 = *(ulong *)param_2;
    pbVar6 = *(basic_string **)(param_2 + 0x10);
  }
  else {
    uVar5 = *(ulong *)(param_2 + 8);
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pbVar6 = *(basic_string **)(param_2 + 0x10);
    if (uVar5 < 0x17) {
      puVar8 = (undefined1 *)((ulong)&local_80 | 1);
      local_80 = (ulong)(byte)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_008729a0;
    }
    else {
      uVar9 = uVar5 + 0x10 & 0xfffffffffffffff0;
      puVar8 = operator_new(uVar9);
      local_80 = uVar9 | 1;
      uStack_78 = uVar5;
      local_70 = puVar8;
LAB_008729a0:
      memcpy(puVar8,pbVar6,uVar5);
    }
    puVar8[uVar5] = 0;
  }
  bVar3 = ((byte)bVar1 & 1) != 0;
  uVar9 = (ulong)((byte)bVar1 >> 1);
  if (bVar3) {
    uVar9 = uVar5;
  }
  if (!bVar3) {
    pbVar6 = param_2 + 1;
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = (char *)0x0;
  uVar5 = uVar9;
  do {
    uVar4 = uVar5;
    if (uVar4 == 0) goto LAB_00872b80;
    uVar5 = uVar4 - 1;
  } while (pbVar6[uVar4 - 1] != (basic_string)0x2f);
  if (uVar4 - 1 != 0xffffffffffffffff) {
    uVar5 = uVar9;
    if (uVar4 <= uVar9) {
      uVar5 = uVar4;
    }
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = (char *)0x0;
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar5 < 0x17) {
      pcVar7 = (char *)((ulong)&local_b8 | 1);
      local_b8 = (ulong)(byte)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_00872a88;
    }
    else {
      uVar10 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pcVar7 = operator_new(uVar10);
      local_b8 = uVar10 | 1;
      uStack_b0 = uVar5;
      local_a8 = pcVar7;
LAB_00872a88:
      memcpy(pcVar7,pbVar6,uVar5);
    }
    uStack_98 = uStack_b0;
    local_a0 = local_b8;
    pcVar7[uVar5] = '\0';
    uVar5 = uVar9 - uVar4;
    local_b8 = 0;
    uStack_b0 = 0;
    local_90 = local_a8;
    local_a8 = (undefined1 *)0x0;
    if (uVar9 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar5 < 0x17) {
      puVar8 = (undefined1 *)((ulong)&local_b8 | 1);
      local_b8 = (ulong)(byte)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_00872b24;
    }
    else {
      uVar9 = uVar5 + 0x10 & 0xfffffffffffffff0;
      puVar8 = operator_new(uVar9);
      local_b8 = uVar9 | 1;
      uStack_b0 = uVar5;
      local_a8 = puVar8;
LAB_00872b24:
      memcpy(puVar8,pbVar6 + uVar4,uVar5);
    }
    puVar8[uVar5] = 0;
    if ((local_80 & 1) != 0) {
      *local_70 = 0;
      uStack_78 = 0;
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
    }
    local_70 = local_a8;
    uStack_78 = uStack_b0;
    local_80 = local_b8;
  }
LAB_00872b80:
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  *(undefined8 *)in_x8 = 0;
  if ((*in_x3 & 1) == 0) {
    uVar12 = *(undefined8 *)(in_x3 + 8);
    uVar11 = *(undefined8 *)in_x3;
    *(undefined8 *)(in_x8 + 0x10) = *(undefined8 *)(in_x3 + 0x10);
    *(undefined8 *)(in_x8 + 8) = uVar12;
    *(undefined8 *)in_x8 = uVar11;
    goto LAB_00872c04;
  }
  uVar5 = *(ulong *)(in_x3 + 8);
  if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(in_x3 + 0x10);
  if (uVar5 < 0x17) {
    __dest = in_x8 + 1;
    *in_x8 = SUB41((int)uVar5 << 1,0);
    if (uVar5 != 0) goto LAB_00872bf0;
  }
  else {
    uVar9 = uVar5 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar9);
    *(ulong *)(in_x8 + 8) = uVar5;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (in_x8 + 0x10) = __dest;
    *(ulong *)in_x8 = uVar9 | 1;
LAB_00872bf0:
    memcpy(__dest,__src,uVar5);
  }
  __dest[uVar5] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
LAB_00872c04:
  uVar5 = local_a0 >> 1 & 0x7f;
  pcVar7 = (char *)((ulong)&local_a0 | 1);
  if ((local_a0 & 1) != 0) {
    uVar5 = uStack_98;
    pcVar7 = local_90;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(in_x8,pcVar7,uVar5);
  uVar5 = *(ulong *)(param_3 + 8);
  pbVar6 = *(basic_string **)(param_3 + 0x10);
  if (((byte)*param_3 & 1) == 0) {
    pbVar6 = param_3 + 1;
    uVar5 = (ulong)((byte)*param_3 >> 1);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(in_x8,(char *)pbVar6,uVar5);
  (**(code **)(*(long *)param_1 + 0x180))(&local_b8,param_1);
  if (((byte)*in_x8 & 1) == 0) {
    *(undefined2 *)in_x8 = 0;
  }
  else {
    **(undefined1 **)(in_x8 + 0x10) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    if (((byte)*in_x8 & 1) != 0) {
      operator_delete(*(void **)(in_x8 + 0x10));
      *(undefined8 *)in_x8 = 0;
    }
  }
  *(ulong *)(in_x8 + 8) = uStack_b0;
  *(ulong *)in_x8 = local_b8;
  *(char **)(in_x8 + 0x10) = local_a8;
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

