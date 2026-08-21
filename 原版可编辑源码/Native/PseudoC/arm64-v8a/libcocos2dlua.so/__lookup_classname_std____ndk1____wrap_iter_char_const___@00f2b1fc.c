
/* unsigned short std::__ndk1::regex_traits<char>::__lookup_classname<std::__ndk1::__wrap_iter<char
   const*> >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>, bool,
   char) const */

ushort std::__ndk1::regex_traits<char>::__lookup_classname<std::__ndk1::__wrap_iter<char_const*>>
                 (long param_1,char *param_2,char *param_3,byte param_4)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  ushort uVar5;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong local_70;
  ulong local_68;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar12 = (long)param_3 - (long)param_2;
  local_68 = 0;
  local_60 = (char *)0x0;
  local_70 = 0;
  if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar12 < 0x17) {
    uVar1 = (int)uVar12 << 1;
    uVar7 = (ulong)uVar1;
    local_70 = (ulong)(byte)uVar1;
    pcVar6 = (char *)((ulong)&local_70 | 1);
  }
  else {
    uVar7 = uVar12 + 0x10 & 0xfffffffffffffff0;
    pcVar6 = operator_new(uVar7);
    uVar7 = uVar7 | 1;
    local_68 = uVar12;
    local_70 = uVar7;
    local_60 = pcVar6;
  }
  if (param_2 != param_3) {
    if ((0x1f < uVar12) && ((param_3 <= pcVar6 || (pcVar6 + uVar12 <= param_2)))) {
      uVar9 = uVar12 & 0xffffffffffffffe0;
      pcVar8 = param_2 + 0x10;
      pcVar11 = pcVar6 + uVar9;
      param_2 = param_2 + uVar9;
      pcVar6 = pcVar6 + 0x10;
      uVar10 = uVar9;
      do {
        pcVar3 = pcVar8 + -8;
        uVar13 = *(undefined8 *)(pcVar8 + -0x10);
        uVar15 = *(undefined8 *)(pcVar8 + 8);
        uVar14 = *(undefined8 *)pcVar8;
        pcVar8 = pcVar8 + 0x20;
        uVar10 = uVar10 - 0x20;
        *(undefined8 *)(pcVar6 + -8) = *(undefined8 *)pcVar3;
        *(undefined8 *)(pcVar6 + -0x10) = uVar13;
        *(undefined8 *)(pcVar6 + 8) = uVar15;
        *(undefined8 *)pcVar6 = uVar14;
        pcVar6 = pcVar6 + 0x20;
      } while (uVar10 != 0);
      pcVar6 = pcVar11;
      if (uVar9 == uVar12) goto LAB_00f2b308;
    }
    do {
      pcVar11 = param_2 + 1;
      pcVar8 = pcVar6 + 1;
      *pcVar6 = *param_2;
      pcVar6 = pcVar8;
      param_2 = pcVar11;
    } while (param_3 != pcVar11);
  }
LAB_00f2b308:
  *pcVar6 = '\0';
  bVar4 = (uVar7 & 1) != 0;
  pcVar6 = (char *)((ulong)&local_70 | 1);
  if (bVar4) {
    pcVar6 = local_60;
  }
  uVar12 = (ulong)((uint)uVar7 >> 1 & 0x7f);
  if (bVar4) {
    uVar12 = local_68;
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),pcVar6,pcVar6 + uVar12);
  pcVar6 = (char *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    pcVar6 = local_60;
  }
  uVar5 = __get_classname(pcVar6,(bool)(param_4 & 1));
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

