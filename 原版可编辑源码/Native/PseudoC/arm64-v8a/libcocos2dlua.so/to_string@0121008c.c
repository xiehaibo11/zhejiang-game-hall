
/* std::__ndk1::to_string(int) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,int param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  ulong *in_x8;
  char *pcVar7;
  ulong uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char local_54 [8];
  undefined1 auStack_4c [12];
  char *pcVar8;
  
  uVar4 = (uint)this;
  lVar2 = tpidr_el0;
  pcVar6 = local_54;
  pcVar5 = auStack_4c + 3;
  auStack_4c._4_8_ = *(long *)(lVar2 + 0x28);
  if ((int)uVar4 < 0) {
    pcVar6 = (char *)((ulong)pcVar6 | 1);
    uVar4 = -uVar4;
    local_54[0] = '-';
  }
  if ((9 < (long)pcVar5 - (long)pcVar6) ||
     (uVar1 = (uint)((0x20 - (int)LZCOUNT(uVar4 | 1)) * 0x4d1) >> 0xc,
     (long)(int)((uVar1 - (uVar4 < *(uint *)(&DAT_014a487c + (ulong)uVar1 * 4))) + 1) <=
     (long)pcVar5 - (long)pcVar6)) {
    pcVar5 = (char *)__itoa::__u32toa(uVar4,pcVar6);
  }
  uVar13 = (long)pcVar5 - (long)local_54;
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  if (0xffffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar13 < 0x17) {
    pcVar6 = (char *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar13 << 1);
  }
  else {
    uVar12 = uVar13 + 0x10 & 0xfffffffffffffff0;
    pcVar6 = operator_new(uVar12);
    in_x8[1] = uVar13;
    in_x8[2] = (ulong)pcVar6;
    *in_x8 = uVar12 | 1;
  }
  if (local_54 != pcVar5) {
    uVar13 = (long)pcVar5 - (long)local_54;
    pcVar8 = local_54;
    pcVar11 = pcVar6;
    if (0x1f < uVar13) {
      uVar9 = uVar13 & 0xffffffffffffffe0;
      pcVar8 = pcVar6 + 0x10;
      pcVar6 = pcVar6 + uVar9;
      puVar10 = (undefined8 *)(auStack_4c + 8);
      uVar12 = uVar9;
      do {
        puVar3 = puVar10 + -1;
        uVar14 = puVar10[-2];
        uVar16 = puVar10[1];
        uVar15 = *puVar10;
        uVar12 = uVar12 - 0x20;
        puVar10 = puVar10 + 4;
        *(undefined8 *)(pcVar8 + -8) = *puVar3;
        *(undefined8 *)(pcVar8 + -0x10) = uVar14;
        *(undefined8 *)(pcVar8 + 8) = uVar16;
        *(undefined8 *)pcVar8 = uVar15;
        pcVar8 = pcVar8 + 0x20;
      } while (uVar12 != 0);
      pcVar8 = local_54 + uVar9;
      pcVar11 = pcVar6;
      if (uVar13 == uVar9) goto LAB_012101d4;
    }
    do {
      pcVar7 = pcVar8 + 1;
      pcVar6 = pcVar11 + 1;
      *pcVar11 = *pcVar8;
      pcVar8 = pcVar7;
      pcVar11 = pcVar6;
    } while (pcVar5 != pcVar7);
  }
LAB_012101d4:
  *pcVar6 = '\0';
  if (*(long *)(lVar2 + 0x28) == auStack_4c._4_8_) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

