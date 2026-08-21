
/* std::__ndk1::to_string(unsigned int) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,uint param_1)

{
  long lVar1;
  undefined8 *puVar2;
  char *pcVar3;
  ulong *in_x8;
  char *pcVar4;
  ulong uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char local_54 [8];
  undefined1 auStack_4c [12];
  char *pcVar5;
  
  lVar1 = tpidr_el0;
  auStack_4c._4_8_ = *(long *)(lVar1 + 0x28);
  pcVar3 = (char *)__itoa::__u32toa((uint)this,local_54);
  uVar11 = (long)pcVar3 - (long)local_54;
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar11 < 0x17) {
    pcVar8 = (char *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar11 << 1);
  }
  else {
    uVar10 = uVar11 + 0x10 & 0xfffffffffffffff0;
    pcVar8 = operator_new(uVar10);
    in_x8[1] = uVar11;
    in_x8[2] = (ulong)pcVar8;
    *in_x8 = uVar10 | 1;
  }
  if (local_54 != pcVar3) {
    uVar11 = (long)pcVar3 - (long)local_54;
    pcVar5 = local_54;
    pcVar9 = pcVar8;
    if (0x1f < uVar11) {
      uVar6 = uVar11 & 0xffffffffffffffe0;
      pcVar5 = pcVar8 + 0x10;
      pcVar8 = pcVar8 + uVar6;
      puVar7 = (undefined8 *)(auStack_4c + 8);
      uVar10 = uVar6;
      do {
        puVar2 = puVar7 + -1;
        uVar12 = puVar7[-2];
        uVar14 = puVar7[1];
        uVar13 = *puVar7;
        uVar10 = uVar10 - 0x20;
        puVar7 = puVar7 + 4;
        *(undefined8 *)(pcVar5 + -8) = *puVar2;
        *(undefined8 *)(pcVar5 + -0x10) = uVar12;
        *(undefined8 *)(pcVar5 + 8) = uVar14;
        *(undefined8 *)pcVar5 = uVar13;
        pcVar5 = pcVar5 + 0x20;
      } while (uVar10 != 0);
      pcVar5 = local_54 + uVar6;
      pcVar9 = pcVar8;
      if (uVar11 == uVar6) goto LAB_012105f0;
    }
    do {
      pcVar4 = pcVar5 + 1;
      pcVar8 = pcVar9 + 1;
      *pcVar9 = *pcVar5;
      pcVar5 = pcVar4;
      pcVar9 = pcVar8;
    } while (pcVar3 != pcVar4);
  }
LAB_012105f0:
  *pcVar8 = '\0';
  if (*(long *)(lVar1 + 0x28) == auStack_4c._4_8_) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

