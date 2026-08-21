
/* unsigned short std::__ndk1::regex_traits<char>::__lookup_classname<std::__ndk1::__wrap_iter<char
   const*> >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>, bool,
   char) const */

ushort std::__ndk1::regex_traits<char>::__lookup_classname<std::__ndk1::__wrap_iter<char_const*>>
                 (long param_1,char *param_2,char *param_3,byte param_4)

{
  long lVar1;
  ushort uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong local_70;
  ulong local_68;
  char *local_60;
  long local_58;
  char *pcVar6;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar9 = (long)param_3 - (long)param_2;
  local_70 = 0;
  local_68 = 0;
  local_60 = (char *)0x0;
  if (0xffffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar9 < 0x17) {
                    /* try { // try from 009c5d00 to 00ac5de7 has its CatchHandler @ 009c5b1c */
    local_70 = (ulong)(byte)((int)uVar9 << 1);
    pcVar3 = (char *)((ulong)&local_70 | 1);
  }
  else {
    uVar8 = uVar9 + 0x10 & 0xfffffffffffffff0;
    pcVar3 = operator_new(uVar8);
    local_70 = uVar8 | 1;
    local_68 = uVar9;
    local_60 = pcVar3;
  }
  if (param_2 == param_3) goto LAB_009c5dc0;
  pcVar4 = pcVar3;
  pcVar6 = param_2;
  if ((uVar9 < 0x20) || ((pcVar3 < param_3 && (param_2 < pcVar3 + uVar9)))) {
LAB_009c5da8:
    do {
      pcVar5 = pcVar6 + 1;
      *pcVar4 = *pcVar6;
      pcVar4 = pcVar4 + 1;
      pcVar6 = pcVar5;
    } while (param_3 != pcVar5);
  }
  else {
    uVar7 = uVar9 & 0xffffffffffffffe0;
    pcVar4 = param_2 + 0x10;
                    /* catch() { ... } // from try @ 009c5ba0 with catch @ 009c5d78 */
                    /* catch() { ... } // from try @ 009c5b94 with catch @ 009c5d7c */
                    /* catch() { ... } // from try @ 009c5b74 with catch @ 009c5d80 */
    pcVar6 = pcVar3 + 0x10;
    uVar8 = uVar7;
    do {
      pcVar5 = pcVar4 + -8;
      uVar10 = *(undefined8 *)(pcVar4 + -0x10);
      uVar12 = *(undefined8 *)(pcVar4 + 8);
      uVar11 = *(undefined8 *)pcVar4;
      pcVar4 = pcVar4 + 0x20;
                    /* catch() { ... } // from try @ 009c5bac with catch @ 009c5d90 */
      uVar8 = uVar8 - 0x20;
      *(undefined8 *)(pcVar6 + -8) = *(undefined8 *)pcVar5;
      *(undefined8 *)(pcVar6 + -0x10) = uVar10;
      *(undefined8 *)(pcVar6 + 8) = uVar12;
      *(undefined8 *)pcVar6 = uVar11;
      pcVar6 = pcVar6 + 0x20;
    } while (uVar8 != 0);
    pcVar4 = pcVar3 + uVar7;
    pcVar6 = param_2 + uVar7;
    if (uVar7 != uVar9) goto LAB_009c5da8;
  }
  pcVar3 = pcVar3 + ((long)param_3 - (long)param_2);
LAB_009c5dc0:
  *pcVar3 = '\0';
  uVar9 = local_70 >> 1 & 0x7f;
  pcVar3 = (char *)((ulong)&local_70 | 1);
                    /* try { // try from 009c5de8 to 00ac5e3b has its CatchHandler @ 009c5de8
                       catch() { ... } // from try @ 009c5de8 with catch @ 009c5de8
                       catch() { ... } // from try @ 009c5ff8 with catch @ 009c5de8 */
  if ((local_70 & 1) != 0) {
    uVar9 = local_68;
    pcVar3 = local_60;
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),pcVar3,pcVar3 + uVar9);
  pcVar3 = (char *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    pcVar3 = local_60;
  }
  uVar2 = __get_classname(pcVar3,(bool)(param_4 & 1));
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009c5e5c to 00ac5e67 has its CatchHandler @ 009c6048 */
    __stack_chk_fail();
  }
                    /* try { // try from 009c5e3c to 00ac5e53 has its CatchHandler @ 009c6064 */
  return uVar2;
}

