
/* std::__ndk1::to_wstring(long long) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,longlong param_1)

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
  uint local_5c [5];
  long local_48;
  uint *puVar7;
  
  lVar2 = tpidr_el0;
  puVar5 = local_5c;
  puVar4 = (uint *)&local_48;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((long)this < 0) {
    puVar5 = (uint *)((ulong)puVar5 | 1);
    this = (__ndk1 *)-(long)this;
    local_5c[0]._0_1_ = 0x2d;
  }
  if ((0x13 < (long)puVar4 - (long)puVar5) ||
     (uVar1 = (uint)((0x40 - (int)LZCOUNT((ulong)this | 1)) * 0x4d1) >> 0xc,
     (long)(ulong)((uVar1 - (this < *(__ndk1 **)(&BYTE_0011ec60 + (ulong)uVar1 * 8))) + 1) <=
     (long)puVar4 - (long)puVar5)) {
    puVar4 = (uint *)__itoa::__u64toa((ulong)this,(char *)puVar5);
  }
  uVar12 = (long)puVar4 - (long)local_5c;
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
  if (local_5c != puVar4) {
    uVar12 = (long)puVar4 - (long)local_5c;
    puVar7 = local_5c;
    puVar11 = puVar5;
    if (7 < uVar12) {
      uVar8 = uVar12 & 0xfffffffffffffff8;
      puVar9 = (ulong *)(puVar5 + 4);
      puVar5 = puVar5 + uVar8;
      puVar7 = local_5c + 1;
      uVar10 = uVar12 & 0xfffffffffffffff8;
      do {
        uVar1 = puVar7[-1];
        uVar3 = *puVar7;
        uVar10 = uVar10 - 8;
        puVar7 = puVar7 + 2;
        uVar13 = (undefined1)(uVar1 >> 8);
        uVar14 = (undefined1)(uVar3 >> 8);
        puVar9[-1] = (ulong)(CONCAT14((char)(uVar1 >> 0x18),uVar1 >> 0x10) & 0xff000000ff);
        puVar9[-2] = (ulong)((uint6)CONCAT14(uVar13,(uint)CONCAT12(uVar13,(ushort)(byte)uVar1)) &
                            0xffff0000ffff);
        puVar9[1] = (ulong)(CONCAT14((char)(uVar3 >> 0x18),uVar3 >> 0x10) & 0xff000000ff);
        *puVar9 = (ulong)((uint6)CONCAT14(uVar14,(uint)CONCAT12(uVar14,(ushort)(byte)uVar3)) &
                         0xffff0000ffff);
        puVar9 = puVar9 + 4;
      } while (uVar10 != 0);
      puVar7 = (uint *)((long)local_5c + uVar8);
      puVar11 = puVar5;
      if (uVar12 == uVar8) goto LAB_001472a8;
    }
    do {
      puVar6 = (uint *)((long)puVar7 + 1);
      puVar5 = puVar11 + 1;
      *puVar11 = (uint)(byte)*puVar7;
      puVar7 = puVar6;
      puVar11 = puVar5;
    } while (puVar6 != puVar4);
  }
LAB_001472a8:
  *puVar5 = 0;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

