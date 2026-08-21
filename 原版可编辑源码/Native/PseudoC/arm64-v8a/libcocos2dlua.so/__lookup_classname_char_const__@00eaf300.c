
/* unsigned short std::__ndk1::regex_traits<char>::__lookup_classname<char const*>(char const*, char
   const*, bool, char) const */

ushort std::__ndk1::regex_traits<char>::__lookup_classname<char_const*>
                 (char *param_1,char *param_2,bool param_3,char param_4)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  ushort uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong local_70;
  ulong local_68;
  char *local_60;
  long local_58;
  
  pcVar8 = (char *)(ulong)param_3;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar13 = (long)pcVar8 - (long)param_2;
  local_68 = 0;
  local_60 = (char *)0x0;
  local_70 = 0;
  if (0xffffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar13 < 0x17) {
    uVar1 = (int)uVar13 << 1;
    uVar9 = (ulong)uVar1;
    local_70 = (ulong)(byte)uVar1;
    pcVar6 = (char *)((ulong)&local_70 | 1);
  }
  else {
    uVar9 = uVar13 + 0x10 & 0xfffffffffffffff0;
    pcVar6 = operator_new(uVar9);
    uVar9 = uVar9 | 1;
    local_68 = uVar13;
    local_70 = uVar9;
    local_60 = pcVar6;
  }
  if (param_2 != pcVar8) {
    pcVar7 = pcVar6;
    if (0x1f < uVar13) {
      uVar11 = uVar13 & 0xffffffffffffffe0;
      pcVar7 = pcVar6 + 0x10;
      pcVar6 = pcVar6 + uVar11;
      pcVar10 = param_2 + 0x10;
      uVar12 = uVar11;
      do {
        pcVar3 = pcVar10 + -8;
        uVar14 = *(undefined8 *)(pcVar10 + -0x10);
        uVar16 = *(undefined8 *)(pcVar10 + 8);
        uVar15 = *(undefined8 *)pcVar10;
        uVar12 = uVar12 - 0x20;
        pcVar10 = pcVar10 + 0x20;
        *(undefined8 *)(pcVar7 + -8) = *(undefined8 *)pcVar3;
        *(undefined8 *)(pcVar7 + -0x10) = uVar14;
        *(undefined8 *)(pcVar7 + 8) = uVar16;
        *(undefined8 *)pcVar7 = uVar15;
        pcVar7 = pcVar7 + 0x20;
      } while (uVar12 != 0);
      pcVar7 = pcVar6;
      param_2 = param_2 + uVar11;
      if (uVar13 == uVar11) goto LAB_00eaf3ec;
    }
    do {
      pcVar10 = param_2 + 1;
      pcVar6 = pcVar7 + 1;
      *pcVar7 = *param_2;
      pcVar7 = pcVar6;
      param_2 = pcVar10;
    } while (pcVar8 != pcVar10);
  }
LAB_00eaf3ec:
  *pcVar6 = '\0';
  bVar4 = (uVar9 & 1) != 0;
  pcVar8 = (char *)((ulong)&local_70 | 1);
  if (bVar4) {
    pcVar8 = local_60;
  }
  uVar13 = (ulong)((uint)uVar9 >> 1 & 0x7f);
  if (bVar4) {
    uVar13 = local_68;
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),pcVar8,pcVar8 + uVar13);
  pcVar8 = (char *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    pcVar8 = local_60;
  }
  uVar5 = __get_classname(pcVar8,(bool)(param_4 & 1));
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

