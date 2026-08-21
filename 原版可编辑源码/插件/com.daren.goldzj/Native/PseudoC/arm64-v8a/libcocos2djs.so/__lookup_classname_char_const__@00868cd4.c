
/* unsigned short std::__ndk1::regex_traits<char>::__lookup_classname<char const*>(char const*, char
   const*, bool, char) const */

ushort std::__ndk1::regex_traits<char>::__lookup_classname<char_const*>
                 (char *param_1,char *param_2,bool param_3,char param_4)

{
  long lVar1;
  char *pcVar2;
  ushort uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong local_70;
  ulong local_68;
  char *local_60;
  long local_58;
  
  pcVar5 = (char *)(ulong)param_3;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar10 = (long)pcVar5 - (long)param_2;
  local_70 = 0;
  local_68 = 0;
  local_60 = (char *)0x0;
  if (0xffffffffffffffef < uVar10) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar10 < 0x17) {
    local_70 = (ulong)(byte)((int)uVar10 << 1);
    pcVar4 = (char *)((ulong)&local_70 | 1);
  }
  else {
    uVar9 = uVar10 + 0x10 & 0xfffffffffffffff0;
    pcVar4 = operator_new(uVar9);
    local_70 = uVar9 | 1;
    local_68 = uVar10;
    local_60 = pcVar4;
  }
  if (param_2 == pcVar5) goto LAB_00868dc8;
  pcVar7 = pcVar4;
  if (uVar10 < 0x20) {
LAB_00868db4:
    do {
      pcVar6 = param_2 + 1;
      *pcVar7 = *param_2;
      param_2 = pcVar6;
      pcVar7 = pcVar7 + 1;
    } while (pcVar5 != pcVar6);
  }
  else {
    uVar8 = uVar10 & 0xffffffffffffffe0;
    pcVar7 = pcVar4 + 0x10;
    pcVar6 = param_2 + 0x10;
    uVar9 = uVar8;
    do {
      pcVar2 = pcVar6 + -8;
      uVar11 = *(undefined8 *)(pcVar6 + -0x10);
      uVar13 = *(undefined8 *)(pcVar6 + 8);
      uVar12 = *(undefined8 *)pcVar6;
      uVar9 = uVar9 - 0x20;
      pcVar6 = pcVar6 + 0x20;
      *(undefined8 *)(pcVar7 + -8) = *(undefined8 *)pcVar2;
      *(undefined8 *)(pcVar7 + -0x10) = uVar11;
      *(undefined8 *)(pcVar7 + 8) = uVar13;
      *(undefined8 *)pcVar7 = uVar12;
      pcVar7 = pcVar7 + 0x20;
    } while (uVar9 != 0);
    param_2 = param_2 + uVar8;
    pcVar7 = pcVar4 + uVar8;
    if (uVar10 != uVar8) goto LAB_00868db4;
  }
  pcVar4 = pcVar4 + uVar10;
LAB_00868dc8:
  *pcVar4 = '\0';
  uVar10 = local_70 >> 1 & 0x7f;
  pcVar5 = (char *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    uVar10 = local_68;
    pcVar5 = local_60;
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),pcVar5,pcVar5 + uVar10);
  pcVar5 = (char *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    pcVar5 = local_60;
  }
  uVar3 = __get_classname(pcVar5,(bool)(param_4 & 1));
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}

