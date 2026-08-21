
/* cocostudio::GUIReader::getVersionInteger(char const*) */

int __thiscall cocostudio::GUIReader::getVersionInteger(GUIReader *this,char *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  char *pcVar15;
  char *pcVar16;
  ulong uVar17;
  char *pcVar18;
  ulong uVar19;
  ulong local_e0;
  ulong uStack_d8;
  char *local_d0;
  ulong local_c8;
  ulong uStack_c0;
  char *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  char *local_a0;
  ulong local_98;
  ulong local_90;
  char *local_88;
  ulong local_80;
  ulong uStack_78;
  undefined1 *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_80,param_1);
  uVar6 = local_80;
  uVar19 = local_80 >> 1 & 0x7f;
  uVar2 = uVar19;
  if ((local_80 & 1) != 0) {
    uVar2 = uStack_78;
  }
  uVar5 = local_80 & 1;
  uVar13 = local_80 & 1;
  if (uVar2 < 7) {
    iVar10 = 0;
    goto joined_r0x00c5ff4c;
  }
  pcVar18 = (char *)((ulong)&local_80 | 1);
  puVar1 = pcVar18;
  if ((local_80 & 1) != 0) {
    puVar1 = local_70;
  }
  pvVar11 = memchr(puVar1,0x2e,uVar2);
  uVar12 = (long)pvVar11 - (long)puVar1;
  if (pvVar11 == (void *)0x0) {
    uVar12 = 0xffffffffffffffff;
  }
  if (uVar12 <= uVar2) {
    uVar2 = uVar12;
  }
  local_90 = 0;
  local_88 = (char *)0x0;
  local_98 = 0;
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar2 < 0x17) {
    pcVar15 = (char *)((ulong)&local_98 | 1);
    local_98 = (ulong)(byte)((int)uVar2 << 1);
    if (uVar2 != 0) goto LAB_00c5f9d4;
  }
  else {
    uVar17 = uVar2 + 0x10 & 0xfffffffffffffff0;
    pcVar15 = operator_new(uVar17);
    local_98 = uVar17 | 1;
    local_90 = uVar2;
    local_88 = pcVar15;
LAB_00c5f9d4:
    memcpy(pcVar15,puVar1,uVar2);
  }
  uVar12 = uVar12 + 1;
  if (uVar5 != 0) {
    uVar19 = uStack_78;
  }
  pcVar15[uVar2] = '\0';
  uStack_a8 = 0;
  local_a0 = (undefined1 *)0x0;
  local_b0 = 0;
  if (uVar19 < uVar12) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  puVar1 = pcVar18;
  if (uVar13 != 0) {
    puVar1 = local_70;
  }
  uVar2 = uVar19 - uVar12;
  if (uVar19 - 1 <= uVar19 - uVar12) {
    uVar2 = uVar19 - 1;
  }
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar2 < 0x17) {
    puVar14 = (undefined1 *)((ulong)&local_b0 | 1);
    local_b0 = (ulong)(byte)((int)uVar2 << 1);
    if (uVar2 != 0) goto LAB_00c5fa70;
    *puVar14 = 0;
  }
  else {
    uVar19 = uVar2 + 0x10 & 0xfffffffffffffff0;
    puVar14 = operator_new(uVar19);
    local_b0 = uVar19 | 1;
    uStack_a8 = uVar2;
    local_a0 = puVar14;
LAB_00c5fa70:
    memcpy(puVar14,puVar1 + uVar12,uVar2);
    puVar14[uVar2] = 0;
  }
  if ((uVar6 & 1) != 0) {
    *local_70 = 0;
    uStack_78 = 0;
    if (((byte)local_80._0_1_ & 1) != 0) {
      operator_delete(local_70);
    }
  }
  uVar5 = uStack_a8;
  uVar6 = local_b0;
  uStack_78 = uStack_a8;
  local_80 = local_b0;
  local_70 = local_a0;
  uVar19 = local_b0 >> 1 & 0x7f;
  pcVar15 = pcVar18;
  uVar2 = uVar19;
  if ((local_b0 & 1) != 0) {
    pcVar15 = local_a0;
    uVar2 = uStack_a8;
  }
  if (uVar2 == 0) {
    uVar13 = 0xffffffffffffffff;
  }
  else {
    pvVar11 = memchr(pcVar15,0x2e,uVar2);
    uVar13 = (long)pvVar11 - (long)pcVar15;
    if (pvVar11 == (void *)0x0) {
      uVar13 = 0xffffffffffffffff;
    }
  }
  if (uVar13 <= uVar2) {
    uVar2 = uVar13;
  }
  uStack_a8 = 0;
  local_a0 = (char *)0x0;
  local_b0 = 0;
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar2 < 0x17) {
    pcVar16 = (char *)((ulong)&local_b0 | 1);
    local_b0 = (ulong)(byte)((int)uVar2 << 1);
    if (uVar2 != 0) goto LAB_00c5fb50;
  }
  else {
    uVar12 = uVar2 + 0x10 & 0xfffffffffffffff0;
    pcVar16 = operator_new(uVar12);
    local_b0 = uVar12 | 1;
    uStack_a8 = uVar2;
    local_a0 = pcVar16;
LAB_00c5fb50:
    memcpy(pcVar16,pcVar15,uVar2);
  }
  uVar13 = uVar13 + 1;
  if ((uVar6 & 1) != 0) {
    uVar19 = uVar5;
  }
  pcVar16[uVar2] = '\0';
  uStack_c0 = 0;
  local_b8 = (undefined1 *)0x0;
  local_c8 = 0;
  if (uVar19 < uVar13) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  puVar1 = pcVar18;
  if ((uVar6 & 1) != 0) {
    puVar1 = local_70;
  }
  uVar2 = uVar19 - uVar13;
  if (uVar19 - 1 <= uVar19 - uVar13) {
    uVar2 = uVar19 - 1;
  }
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar2 < 0x17) {
    puVar14 = (undefined1 *)((ulong)&local_c8 | 1);
    local_c8 = (ulong)(byte)((int)uVar2 << 1);
    if (uVar2 != 0) goto LAB_00c5fbec;
    *puVar14 = 0;
  }
  else {
    uVar19 = uVar2 + 0x10 & 0xfffffffffffffff0;
    puVar14 = operator_new(uVar19);
    local_c8 = uVar19 | 1;
    uStack_c0 = uVar2;
    local_b8 = puVar14;
LAB_00c5fbec:
    memcpy(puVar14,puVar1 + uVar13,uVar2);
    puVar14[uVar2] = 0;
  }
  if ((uVar6 & 1) != 0) {
    *local_70 = 0;
    uStack_78 = 0;
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
  }
  uVar5 = uStack_c0;
  uVar6 = local_c8;
  uStack_78 = uStack_c0;
  local_80 = local_c8;
  local_70 = local_b8;
  uVar19 = local_c8 >> 1 & 0x7f;
  pcVar15 = pcVar18;
  uVar2 = uVar19;
  if ((local_c8 & 1) != 0) {
    pcVar15 = local_b8;
    uVar2 = uStack_c0;
  }
  if (uVar2 == 0) {
    uVar13 = 0xffffffffffffffff;
  }
  else {
    pvVar11 = memchr(pcVar15,0x2e,uVar2);
    uVar13 = (long)pvVar11 - (long)pcVar15;
    if (pvVar11 == (void *)0x0) {
      uVar13 = 0xffffffffffffffff;
    }
  }
  if (uVar13 <= uVar2) {
    uVar2 = uVar13;
  }
  uStack_c0 = 0;
  local_b8 = (char *)0x0;
  local_c8 = 0;
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar2 < 0x17) {
    pcVar16 = (char *)((ulong)&local_c8 | 1);
    local_c8 = (ulong)(byte)((int)uVar2 << 1);
    if (uVar2 != 0) goto LAB_00c5fccc;
  }
  else {
    uVar12 = uVar2 + 0x10 & 0xfffffffffffffff0;
    pcVar16 = operator_new(uVar12);
    local_c8 = uVar12 | 1;
    uStack_c0 = uVar2;
    local_b8 = pcVar16;
LAB_00c5fccc:
    memcpy(pcVar16,pcVar15,uVar2);
  }
  uVar13 = uVar13 + 1;
  if ((uVar6 & 1) != 0) {
    uVar19 = uVar5;
  }
  pcVar16[uVar2] = '\0';
  uStack_d8 = 0;
  local_d0 = (undefined1 *)0x0;
  local_e0 = 0;
  if (uVar19 < uVar13) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  puVar1 = pcVar18;
  if ((uVar6 & 1) != 0) {
    puVar1 = local_70;
  }
  uVar2 = uVar19 - uVar13;
  if (uVar19 - 1 <= uVar19 - uVar13) {
    uVar2 = uVar19 - 1;
  }
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar2 < 0x17) {
    puVar14 = (undefined1 *)((ulong)&local_e0 | 1);
    local_e0 = (ulong)(byte)((int)uVar2 << 1);
    if (uVar2 != 0) goto LAB_00c5fd68;
    *puVar14 = 0;
  }
  else {
    uVar19 = uVar2 + 0x10 & 0xfffffffffffffff0;
    puVar14 = operator_new(uVar19);
    local_e0 = uVar19 | 1;
    uStack_d8 = uVar2;
    local_d0 = puVar14;
LAB_00c5fd68:
    memcpy(puVar14,puVar1 + uVar13,uVar2);
    puVar14[uVar2] = 0;
  }
  if ((uVar6 & 1) != 0) {
    *local_70 = 0;
    uStack_78 = 0;
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
  }
  uStack_78 = uStack_d8;
  local_80 = local_e0;
  local_70 = local_d0;
  uVar2 = local_e0 >> 1 & 0x7f;
  if ((local_e0 & 1) != 0) {
    pcVar18 = local_d0;
    uVar2 = uStack_d8;
  }
  if (uVar2 == 0) {
    uVar19 = 0xffffffffffffffff;
  }
  else {
    pvVar11 = memchr(pcVar18,0x2e,uVar2);
    uVar19 = (long)pvVar11 - (long)pcVar18;
    if (pvVar11 == (void *)0x0) {
      uVar19 = 0xffffffffffffffff;
    }
  }
  if (uVar19 <= uVar2) {
    uVar2 = uVar19;
  }
  uStack_d8 = 0;
  local_d0 = (char *)0x0;
  local_e0 = 0;
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar2 < 0x17) {
    pcVar15 = (char *)((ulong)&local_e0 | 1);
    local_e0 = (ulong)(byte)((int)uVar2 << 1);
    if (uVar2 != 0) goto LAB_00c5fe48;
  }
  else {
    uVar19 = uVar2 + 0x10 & 0xfffffffffffffff0;
    pcVar15 = operator_new(uVar19);
    local_e0 = uVar19 | 1;
    uStack_d8 = uVar2;
    local_d0 = pcVar15;
LAB_00c5fe48:
    memcpy(pcVar15,pcVar18,uVar2);
  }
  pcVar18 = (char *)((ulong)&local_98 | 1);
  if ((local_98 & 1) != 0) {
    pcVar18 = local_88;
  }
  pcVar15[uVar2] = '\0';
  iVar7 = atoi(pcVar18);
  pcVar18 = (char *)((ulong)&local_b0 | 1);
  if ((local_b0 & 1) != 0) {
    pcVar18 = local_a0;
  }
  iVar8 = atoi(pcVar18);
  bVar3 = (byte)local_c8;
  pcVar18 = (char *)((ulong)&local_c8 | 1);
  if ((local_c8 & 1) != 0) {
    pcVar18 = local_b8;
  }
  iVar9 = atoi(pcVar18);
  pcVar15 = local_d0;
  uVar2 = local_e0;
  pcVar18 = (char *)((ulong)&local_e0 | 1);
  if ((local_e0 & 1) != 0) {
    pcVar18 = local_d0;
  }
  iVar10 = atoi(pcVar18);
  if ((uVar2 & 1) != 0) {
    operator_delete(pcVar15);
    bVar3 = (byte)local_c8;
  }
  if ((bVar3 & 1) != 0) {
    operator_delete(local_b8);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  iVar10 = iVar7 * 1000 + iVar8 * 100 + iVar9 * 10 + iVar10;
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
joined_r0x00c5ff4c:
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar10;
}

