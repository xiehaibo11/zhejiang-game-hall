
/* std::__ndk1::to_wstring(int) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,int param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  ulong *in_x8;
  uint *puVar6;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  uint local_54 [2];
  undefined1 auStack_49 [9];
  uint *puVar7;
  
  uVar3 = (uint)this;
  lVar2 = tpidr_el0;
  puVar5 = local_54;
  puVar4 = (uint *)auStack_49;
  auStack_49._1_8_ = *(long *)(lVar2 + 0x28);
  if ((int)uVar3 < 0) {
    puVar5 = (uint *)((ulong)puVar5 | 1);
    uVar3 = -uVar3;
    local_54[0]._0_1_ = 0x2d;
  }
  if ((9 < (long)puVar4 - (long)puVar5) ||
     (uVar1 = (uint)((0x20 - (int)LZCOUNT(uVar3 | 1)) * 0x4d1) >> 0xc,
     (long)(ulong)((uVar1 - (uVar3 < *(uint *)(&BYTE_0011ec34 + (ulong)uVar1 * 4))) + 1) <=
     (long)puVar4 - (long)puVar5)) {
    puVar4 = (uint *)__itoa::__u32toa(uVar3,(char *)puVar5);
  }
  uVar12 = (long)puVar4 - (long)local_54;
  if (0x3fffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar12 < 5) {
    puVar5 = (uint *)((long)in_x8 + 4);
    *(char *)in_x8 = (char)((int)uVar12 << 1);
  }
  else {
    uVar10 = uVar12 + 4 & 0xfffffffffffffffc;
    puVar5 = operator_new(uVar10 << 2);
    in_x8[1] = uVar12;
    in_x8[2] = (ulong)puVar5;
    *in_x8 = uVar10 | 1;
  }
  if (local_54 != puVar4) {
    uVar12 = (long)puVar4 - (long)local_54;
    puVar7 = local_54;
    puVar11 = puVar5;
    if (7 < uVar12) {
      uVar8 = uVar12 & 0xfffffffffffffff8;
      puVar9 = (ulong *)(puVar5 + 4);
      puVar5 = puVar5 + uVar8;
      puVar7 = local_54 + 1;
      uVar10 = uVar12 & 0xfffffffffffffff8;
      do {
        uVar3 = puVar7[-1];
        uVar1 = *puVar7;
        uVar10 = uVar10 - 8;
        puVar7 = puVar7 + 2;
        uVar13 = (undefined1)(uVar3 >> 8);
        uVar14 = (undefined1)(uVar1 >> 8);
        puVar9[-1] = (ulong)(CONCAT14((char)(uVar3 >> 0x18),uVar3 >> 0x10) & 0xff000000ff);
        puVar9[-2] = (ulong)((uint6)CONCAT14(uVar13,(uint)CONCAT12(uVar13,(ushort)(byte)uVar3)) &
                            0xffff0000ffff);
        puVar9[1] = (ulong)(CONCAT14((char)(uVar1 >> 0x18),uVar1 >> 0x10) & 0xff000000ff);
        *puVar9 = (ulong)((uint6)CONCAT14(uVar14,(uint)CONCAT12(uVar14,(ushort)(byte)uVar1)) &
                         0xffff0000ffff);
        puVar9 = puVar9 + 4;
      } while (uVar10 != 0);
      puVar7 = (uint *)((long)local_54 + uVar8);
      puVar11 = puVar5;
      if (uVar12 == uVar8) goto LAB_00146f80;
    }
    do {
      puVar6 = (uint *)((long)puVar7 + 1);
      puVar5 = puVar11 + 1;
      *puVar11 = (uint)(byte)*puVar7;
      puVar7 = puVar6;
      puVar11 = puVar5;
    } while (puVar6 != puVar4);
  }
LAB_00146f80:
  *puVar5 = 0;
  if (*(long *)(lVar2 + 0x28) == auStack_49._1_8_) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

