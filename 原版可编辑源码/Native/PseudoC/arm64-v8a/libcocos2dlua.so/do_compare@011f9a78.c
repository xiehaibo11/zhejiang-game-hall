
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
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
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
  local_68 = 0;
  local_60 = (char *)0x0;
  local_70 = 0;
  if (0xffffffffffffffef < uVar14) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar14 < 0x17) {
    uVar13 = 0;
    local_70 = (ulong)(byte)((int)uVar14 << 1);
    pcVar4 = (char *)((ulong)&local_70 | 1);
  }
  else {
    uVar13 = uVar14 + 0x10 & 0xfffffffffffffff0;
    pcVar4 = operator_new(uVar13);
    local_70 = uVar13 | 1;
    local_68 = uVar14;
    uVar13 = local_70;
    local_60 = pcVar4;
  }
  if (param_1 != param_2) {
    pcVar5 = pcVar4;
    if (0x1f < uVar14) {
      uVar10 = uVar14 & 0xffffffffffffffe0;
      pcVar5 = pcVar4 + 0x10;
      pcVar4 = pcVar4 + uVar10;
      pcVar8 = param_1 + 0x10;
      uVar12 = uVar10;
      do {
        pcVar6 = pcVar8 + -8;
        uVar15 = *(undefined8 *)(pcVar8 + -0x10);
        uVar17 = *(undefined8 *)(pcVar8 + 8);
        uVar16 = *(undefined8 *)pcVar8;
        uVar12 = uVar12 - 0x20;
        pcVar8 = pcVar8 + 0x20;
        *(undefined8 *)(pcVar5 + -8) = *(undefined8 *)pcVar6;
        *(undefined8 *)(pcVar5 + -0x10) = uVar15;
        *(undefined8 *)(pcVar5 + 8) = uVar17;
        *(undefined8 *)pcVar5 = uVar16;
        pcVar5 = pcVar5 + 0x20;
      } while (uVar12 != 0);
      pcVar5 = pcVar4;
      param_1 = param_1 + uVar10;
      if (uVar14 == uVar10) goto LAB_011f9b64;
    }
    do {
      pcVar8 = param_1 + 1;
      pcVar4 = pcVar5 + 1;
      *pcVar5 = *param_1;
      pcVar5 = pcVar4;
      param_1 = pcVar8;
    } while (param_2 != pcVar8);
  }
LAB_011f9b64:
  uVar14 = (long)param_4 - (long)param_3;
  *pcVar4 = '\0';
  local_80 = 0;
  local_78 = (char *)0x0;
  local_88 = 0;
  if (0xffffffffffffffef < uVar14) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar14 < 0x17) {
    uVar12 = 0;
    local_88 = (ulong)(byte)((int)uVar14 << 1);
    pcVar4 = (char *)((ulong)&local_88 | 1);
    pcVar5 = local_78;
    pcVar8 = local_60;
  }
  else {
    uVar12 = uVar14 + 0x10 & 0xfffffffffffffff0;
    pcVar4 = operator_new(uVar12);
    local_88 = uVar12 | 1;
    local_80 = uVar14;
    uVar12 = local_88;
    pcVar5 = pcVar4;
    pcVar8 = local_60;
  }
  if (param_3 != param_4) {
    pcVar6 = pcVar4;
    if (0x1f < uVar14) {
      uVar11 = uVar14 & 0xffffffffffffffe0;
      pcVar6 = pcVar4 + 0x10;
      pcVar4 = pcVar4 + uVar11;
      pcVar9 = param_3 + 0x10;
      uVar10 = uVar11;
      do {
        pcVar2 = pcVar9 + -8;
        uVar15 = *(undefined8 *)(pcVar9 + -0x10);
        uVar17 = *(undefined8 *)(pcVar9 + 8);
        uVar16 = *(undefined8 *)pcVar9;
        uVar10 = uVar10 - 0x20;
        pcVar9 = pcVar9 + 0x20;
        *(undefined8 *)(pcVar6 + -8) = *(undefined8 *)pcVar2;
        *(undefined8 *)(pcVar6 + -0x10) = uVar15;
        *(undefined8 *)(pcVar6 + 8) = uVar17;
        *(undefined8 *)pcVar6 = uVar16;
        pcVar6 = pcVar6 + 0x20;
      } while (uVar10 != 0);
      pcVar6 = pcVar4;
      param_3 = param_3 + uVar11;
      if (uVar14 == uVar11) goto LAB_011f9c1c;
    }
    do {
      pcVar9 = param_3 + 1;
      pcVar4 = pcVar6 + 1;
      *pcVar6 = *param_3;
      pcVar6 = pcVar4;
      param_3 = pcVar9;
    } while (param_4 != pcVar9);
  }
LAB_011f9c1c:
  *pcVar4 = '\0';
  pcVar4 = (char *)((ulong)&local_70 | 1);
  if ((uVar13 & 1) != 0) {
    pcVar4 = pcVar8;
  }
  pcVar6 = (char *)((ulong)&local_88 | 1);
  if ((uVar12 & 1) != 0) {
    pcVar6 = pcVar5;
  }
  local_78 = pcVar5;
  local_60 = pcVar8;
  iVar3 = strcoll(pcVar4,pcVar6);
  uVar7 = (uint)(iVar3 != 0);
  if (iVar3 < 0) {
    uVar7 = 0xffffffff;
  }
  if ((uVar12 & 1) != 0) {
    operator_delete(pcVar5);
  }
  if ((uVar13 & 1) != 0) {
    operator_delete(pcVar8);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

