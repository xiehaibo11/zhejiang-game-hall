
/* std::__ndk1::collate_byname<char>::do_compare(char const*, char const*, char const*, char const*)
   const */

uint __thiscall
std::__ndk1::collate_byname<char>::do_compare
          (collate_byname<char> *this,char *param_1,char *param_2,char *param_3,char *param_4)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong local_88;
  ulong local_80;
  char *local_78;
  ulong local_70;
  ulong local_68;
  char *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar14 = (long)param_2 - (long)param_1;
  local_70 = 0;
  local_68 = 0;
  local_60 = (char *)0x0;
  if (0xffffffffffffffef < uVar14) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar14 < 0x17) {
    local_70 = (ulong)(byte)((int)uVar14 << 1);
    pcVar4 = (char *)((ulong)&local_70 | 1);
  }
  else {
    uVar13 = uVar14 + 0x10 & 0xfffffffffffffff0;
    pcVar4 = operator_new(uVar13);
    local_70 = uVar13 | 1;
    local_68 = uVar14;
    local_60 = pcVar4;
  }
  if (param_1 != param_2) {
    pcVar8 = pcVar4;
    if (uVar14 < 0x20) {
LAB_01819434:
      do {
        pcVar6 = param_1 + 1;
        *pcVar8 = *param_1;
        param_1 = pcVar6;
        pcVar8 = pcVar8 + 1;
      } while (param_2 != pcVar6);
    }
    else {
      uVar10 = uVar14 & 0xffffffffffffffe0;
      pcVar8 = pcVar4 + 0x10;
      pcVar6 = param_1 + 0x10;
      uVar13 = uVar10;
      do {
        pcVar9 = pcVar6 + -8;
        uVar15 = *(undefined8 *)(pcVar6 + -0x10);
        uVar17 = *(undefined8 *)(pcVar6 + 8);
        uVar16 = *(undefined8 *)pcVar6;
        uVar13 = uVar13 - 0x20;
        pcVar6 = pcVar6 + 0x20;
        *(undefined8 *)(pcVar8 + -8) = *(undefined8 *)pcVar9;
        *(undefined8 *)(pcVar8 + -0x10) = uVar15;
        *(undefined8 *)(pcVar8 + 8) = uVar17;
        *(undefined8 *)pcVar8 = uVar16;
        pcVar8 = pcVar8 + 0x20;
      } while (uVar13 != 0);
      param_1 = param_1 + uVar10;
      pcVar8 = pcVar4 + uVar10;
      if (uVar14 != uVar10) goto LAB_01819434;
    }
    pcVar4 = pcVar4 + uVar14;
  }
  uVar14 = (long)param_4 - (long)param_3;
  *pcVar4 = '\0';
  local_88 = 0;
  local_80 = 0;
  local_78 = (char *)0x0;
  if (0xffffffffffffffef < uVar14) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar14 < 0x17) {
    local_88 = (ulong)(byte)((int)uVar14 << 1);
    pcVar4 = (char *)((ulong)&local_88 | 1);
    uVar13 = local_88;
    pcVar8 = local_78;
    uVar10 = local_70;
    pcVar6 = local_60;
  }
  else {
    uVar13 = uVar14 + 0x10 & 0xfffffffffffffff0;
    pcVar4 = operator_new(uVar13);
    local_80 = uVar14;
    uVar13 = uVar13 | 1;
    pcVar8 = pcVar4;
    uVar10 = local_70;
    pcVar6 = local_60;
  }
  if (param_3 == param_4) goto LAB_01819508;
  pcVar9 = pcVar4;
  if (uVar14 < 0x20) {
LAB_018194f4:
    do {
      pcVar7 = param_3 + 1;
      *pcVar9 = *param_3;
      param_3 = pcVar7;
      pcVar9 = pcVar9 + 1;
    } while (param_4 != pcVar7);
  }
  else {
    uVar11 = uVar14 & 0xffffffffffffffe0;
    pcVar9 = pcVar4 + 0x10;
    pcVar7 = param_3 + 0x10;
    uVar12 = uVar11;
    do {
      pcVar2 = pcVar7 + -8;
      uVar15 = *(undefined8 *)(pcVar7 + -0x10);
      uVar17 = *(undefined8 *)(pcVar7 + 8);
      uVar16 = *(undefined8 *)pcVar7;
      uVar12 = uVar12 - 0x20;
      pcVar7 = pcVar7 + 0x20;
      *(undefined8 *)(pcVar9 + -8) = *(undefined8 *)pcVar2;
      *(undefined8 *)(pcVar9 + -0x10) = uVar15;
      *(undefined8 *)(pcVar9 + 8) = uVar17;
      *(undefined8 *)pcVar9 = uVar16;
      pcVar9 = pcVar9 + 0x20;
    } while (uVar12 != 0);
    param_3 = param_3 + uVar11;
    pcVar9 = pcVar4 + uVar11;
    if (uVar14 != uVar11) goto LAB_018194f4;
  }
  pcVar4 = pcVar4 + uVar14;
LAB_01819508:
  *pcVar4 = '\0';
  pcVar4 = (char *)((ulong)&local_70 | 1);
  if ((uVar10 & 1) != 0) {
    pcVar4 = pcVar6;
  }
  pcVar9 = (char *)((ulong)&local_88 | 1);
  if ((uVar13 & 1) != 0) {
    pcVar9 = pcVar8;
  }
  local_88 = uVar13;
  local_78 = pcVar8;
  local_70 = uVar10;
  local_60 = pcVar6;
  iVar3 = strcoll(pcVar4,pcVar9);
  uVar5 = (uint)(iVar3 != 0);
  if (iVar3 < 0) {
    uVar5 = 0xffffffff;
  }
  if ((uVar13 & 1) != 0) {
    operator_delete(pcVar8);
  }
  if ((uVar10 & 1) != 0) {
    operator_delete(pcVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

