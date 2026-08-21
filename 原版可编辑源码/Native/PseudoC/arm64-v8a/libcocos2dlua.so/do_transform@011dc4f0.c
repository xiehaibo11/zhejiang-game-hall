
/* std::__ndk1::collate<char>::do_transform(char const*, char const*) const */

char * std::__ndk1::collate<char>::do_transform(char *param_1,char *param_2)

{
  char *pcVar1;
  char *in_x2;
  ulong *in_x8;
  char *pcVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar7 = (long)in_x2 - (long)param_2;
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar7 < 0x17) {
    pcVar5 = (char *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar7 << 1);
  }
  else {
    uVar6 = uVar7 + 0x10 & 0xfffffffffffffff0;
    pcVar5 = operator_new(uVar6);
    in_x8[1] = uVar7;
    in_x8[2] = (ulong)pcVar5;
    *in_x8 = uVar6 | 1;
    param_1 = pcVar5;
  }
  if (param_2 != in_x2) {
    pcVar4 = pcVar5;
    if (0x1f < uVar7) {
      uVar3 = uVar7 & 0xffffffffffffffe0;
      pcVar4 = pcVar5 + 0x10;
      pcVar5 = pcVar5 + uVar3;
      pcVar2 = param_2 + 0x10;
      uVar6 = uVar3;
      do {
        pcVar1 = pcVar2 + -8;
        uVar8 = *(undefined8 *)(pcVar2 + -0x10);
        uVar10 = *(undefined8 *)(pcVar2 + 8);
        uVar9 = *(undefined8 *)pcVar2;
        uVar6 = uVar6 - 0x20;
        pcVar2 = pcVar2 + 0x20;
        *(undefined8 *)(pcVar4 + -8) = *(undefined8 *)pcVar1;
        *(undefined8 *)(pcVar4 + -0x10) = uVar8;
        *(undefined8 *)(pcVar4 + 8) = uVar10;
        *(undefined8 *)pcVar4 = uVar9;
        pcVar4 = pcVar4 + 0x20;
      } while (uVar6 != 0);
      param_2 = param_2 + uVar3;
      pcVar4 = pcVar5;
      if (uVar7 == uVar3) goto LAB_011dc5c0;
    }
    do {
      pcVar2 = param_2 + 1;
      pcVar5 = pcVar4 + 1;
      *pcVar4 = *param_2;
      param_2 = pcVar2;
      pcVar4 = pcVar5;
    } while (in_x2 != pcVar2);
  }
LAB_011dc5c0:
  *pcVar5 = '\0';
  return param_1;
}

