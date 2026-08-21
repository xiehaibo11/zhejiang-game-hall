
/* cocos2d::FileUtils::getPathForFilename(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void cocos2d::FileUtils::getPathForFilename
               (basic_string *param_1,basic_string *param_2,basic_string *param_3)

{
  basic_string *pbVar1;
  basic_string bVar2;
  long lVar3;
  basic_string *in_x3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *__dest;
  char *pcVar7;
  ulong uVar8;
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
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_80,param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_a0,"");
  uVar6 = *(ulong *)(param_2 + 8);
  pbVar1 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
    uVar6 = (ulong)((byte)*param_2 >> 1);
  }
  if (uVar6 == 0) goto LAB_00f6a7fc;
  uVar5 = uVar6;
  do {
    uVar4 = uVar5;
    if (uVar4 == 0) goto LAB_00f6a7fc;
    uVar5 = uVar4 - 1;
  } while (pbVar1[uVar4 - 1] != (basic_string)0x2f);
  if (uVar5 == 0xffffffffffffffff) goto LAB_00f6a7fc;
  if (uVar4 <= uVar6) {
    uVar6 = uVar4;
  }
  uStack_b0 = 0;
  local_a8 = (char *)0x0;
  local_b8 = 0;
  if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar6 < 0x17) {
    pcVar7 = (char *)((ulong)&local_b8 | 1);
    local_b8 = (ulong)(byte)((int)uVar6 << 1);
    if (uVar6 != 0) goto LAB_00f6a6cc;
  }
  else {
    uVar8 = uVar6 + 0x10 & 0xfffffffffffffff0;
    pcVar7 = operator_new(uVar8);
    local_b8 = uVar8 | 1;
    uStack_b0 = uVar6;
    local_a8 = pcVar7;
LAB_00f6a6cc:
    memcpy(pcVar7,pbVar1,uVar6);
  }
  pcVar7[uVar6] = '\0';
  if ((local_a0 & 1) != 0) {
    *local_90 = '\0';
    uStack_98 = 0;
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
  }
  uStack_98 = uStack_b0;
  local_a0 = local_b8;
  local_90 = local_a8;
  bVar2 = *param_2;
  uStack_b0 = 0;
  local_a8 = (undefined1 *)0x0;
  local_b8 = 0;
  uVar6 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar6 = *(ulong *)(param_2 + 8);
  }
  if (uVar6 <= uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  uVar6 = uVar6 - uVar4;
  pbVar1 = param_2 + 1;
  if (((byte)bVar2 & 1) != 0) {
    pbVar1 = *(basic_string **)(param_2 + 0x10);
  }
  if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar6 < 0x17) {
    __dest = (undefined1 *)((ulong)&local_b8 | 1);
    local_b8 = (ulong)(byte)((int)uVar6 << 1);
    if (uVar6 != 0) goto LAB_00f6a7a8;
  }
  else {
    uVar5 = uVar6 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    local_b8 = uVar5 | 1;
    uStack_b0 = uVar6;
    local_a8 = __dest;
LAB_00f6a7a8:
    memcpy(__dest,pbVar1 + uVar4,uVar6);
  }
  __dest[uVar6] = 0;
  if (((byte)local_80._0_1_ & 1) != 0) {
    *local_70 = 0;
    uStack_78 = 0;
    if (((byte)local_80._0_1_ & 1) != 0) {
      operator_delete(local_70);
    }
  }
  uStack_78 = uStack_b0;
  local_80 = local_b8;
  local_70 = local_a8;
LAB_00f6a7fc:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(in_x8,in_x3);
  uVar6 = local_a0 >> 1 & 0x7f;
  pcVar7 = (char *)((ulong)&local_a0 | 1);
  if ((local_a0 & 1) != 0) {
    uVar6 = uStack_98;
    pcVar7 = local_90;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(in_x8,pcVar7,uVar6);
  uVar6 = *(ulong *)(param_3 + 8);
  pbVar1 = *(basic_string **)(param_3 + 0x10);
  if (((byte)*param_3 & 1) == 0) {
    pbVar1 = param_3 + 1;
    uVar6 = (ulong)((byte)*param_3 >> 1);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(in_x8,(char *)pbVar1,uVar6);
  (**(code **)(*(long *)param_1 + 0x200))(&local_b8,param_1);
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
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

