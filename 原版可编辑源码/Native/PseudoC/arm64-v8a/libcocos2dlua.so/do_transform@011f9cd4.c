
/* std::__ndk1::collate_byname<char>::do_transform(char const*, char const*) const */

void std::__ndk1::collate_byname<char>::do_transform(char *param_1,char *param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  size_t __n;
  char *in_x2;
  ulong *in_x8;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong local_60;
  ulong local_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar10 = (long)in_x2 - (long)param_2;
  local_58 = 0;
  local_50 = (char *)0x0;
  local_60 = 0;
  if (0xffffffffffffffef < uVar10) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar10 < 0x17) {
    uVar9 = 0;
    local_60 = (ulong)(byte)((int)uVar10 << 1);
    pcVar3 = (char *)((ulong)&local_60 | 1);
  }
  else {
    uVar9 = uVar10 + 0x10 & 0xfffffffffffffff0;
    pcVar3 = operator_new(uVar9);
    local_60 = uVar9 | 1;
    local_58 = uVar10;
    uVar9 = local_60;
    local_50 = pcVar3;
  }
  if (param_2 != in_x2) {
    pcVar4 = pcVar3;
    if (0x1f < uVar10) {
      uVar6 = uVar10 & 0xffffffffffffffe0;
      pcVar4 = pcVar3 + 0x10;
      pcVar3 = pcVar3 + uVar6;
      pcVar5 = param_2 + 0x10;
      uVar7 = uVar6;
      do {
        pcVar2 = pcVar5 + -8;
        uVar11 = *(undefined8 *)(pcVar5 + -0x10);
        uVar13 = *(undefined8 *)(pcVar5 + 8);
        uVar12 = *(undefined8 *)pcVar5;
        uVar7 = uVar7 - 0x20;
        pcVar5 = pcVar5 + 0x20;
        *(undefined8 *)(pcVar4 + -8) = *(undefined8 *)pcVar2;
        *(undefined8 *)(pcVar4 + -0x10) = uVar11;
        *(undefined8 *)(pcVar4 + 8) = uVar13;
        *(undefined8 *)pcVar4 = uVar12;
        pcVar4 = pcVar4 + 0x20;
      } while (uVar7 != 0);
      pcVar4 = pcVar3;
      param_2 = param_2 + uVar6;
      if (uVar10 == uVar6) goto LAB_011f9db8;
    }
    do {
      pcVar5 = param_2 + 1;
      pcVar3 = pcVar4 + 1;
      *pcVar4 = *param_2;
      pcVar4 = pcVar3;
      param_2 = pcVar5;
    } while (in_x2 != pcVar5);
  }
LAB_011f9db8:
  *pcVar3 = '\0';
  pcVar3 = (char *)((ulong)&local_60 | 1);
  if ((uVar9 & 1) != 0) {
    pcVar3 = local_50;
  }
  __n = strxfrm((char *)0x0,pcVar3,0);
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pbVar8 = (byte *)((long)in_x8 + 1);
    *(byte *)in_x8 = (byte)((int)__n << 1);
    if (__n == 0) goto LAB_011f9e3c;
  }
  else {
    uVar10 = __n + 0x10 & 0xfffffffffffffff0;
    pbVar8 = operator_new(uVar10);
    in_x8[1] = __n;
    in_x8[2] = (ulong)pbVar8;
    *in_x8 = uVar10 | 1;
  }
  memset(pbVar8,0,__n);
LAB_011f9e3c:
  pbVar8[__n] = 0;
  uVar10 = in_x8[1];
  pbVar8 = (byte *)in_x8[2];
  pcVar3 = (char *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    pcVar3 = local_50;
  }
  if (((byte)*in_x8 & 1) == 0) {
    pbVar8 = (byte *)((long)in_x8 + 1);
    uVar10 = (ulong)(byte)((byte)*in_x8 >> 1);
  }
  strxfrm((char *)pbVar8,pcVar3,uVar10 + 1);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

