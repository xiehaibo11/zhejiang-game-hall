
/* std::__ndk1::to_wstring(unsigned long long) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,ulonglong param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  ulong *in_x8;
  byte *pbVar5;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  uint local_60 [6];
  long local_48;
  uint *puVar6;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pbVar4 = (byte *)__itoa::__u64toa((ulong)this,(char *)local_60);
  uVar12 = (long)pbVar4 - (long)local_60;
  if (0x3fffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar12 < 5) {
    puVar10 = (uint *)((long)in_x8 + 4);
    *(char *)in_x8 = (char)((int)uVar12 << 1);
  }
  else {
    uVar9 = uVar12 + 4 & 0xfffffffffffffffc;
    puVar10 = operator_new(uVar9 << 2);
    in_x8[1] = uVar12;
    in_x8[2] = (ulong)puVar10;
    *in_x8 = uVar9 | 1;
  }
  if (local_60 != (uint *)pbVar4) {
    uVar12 = (long)pbVar4 - (long)local_60;
    puVar6 = local_60;
    puVar11 = puVar10;
    if (7 < uVar12) {
      uVar7 = uVar12 & 0xfffffffffffffff8;
      puVar8 = (ulong *)(puVar10 + 4);
      puVar10 = puVar10 + uVar7;
      puVar6 = local_60 + 1;
      uVar9 = uVar12 & 0xfffffffffffffff8;
      do {
        uVar2 = puVar6[-1];
        uVar3 = *puVar6;
        uVar9 = uVar9 - 8;
        puVar6 = puVar6 + 2;
        uVar13 = (undefined1)(uVar2 >> 8);
        uVar14 = (undefined1)(uVar3 >> 8);
        puVar8[-1] = (ulong)(CONCAT14((char)(uVar2 >> 0x18),uVar2 >> 0x10) & 0xff000000ff);
        puVar8[-2] = (ulong)((uint6)CONCAT14(uVar13,(uint)CONCAT12(uVar13,(ushort)(byte)uVar2)) &
                            0xffff0000ffff);
        puVar8[1] = (ulong)(CONCAT14((char)(uVar3 >> 0x18),uVar3 >> 0x10) & 0xff000000ff);
        *puVar8 = (ulong)((uint6)CONCAT14(uVar14,(uint)CONCAT12(uVar14,(ushort)(byte)uVar3)) &
                         0xffff0000ffff);
        puVar8 = puVar8 + 4;
      } while (uVar9 != 0);
      puVar6 = (uint *)((long)local_60 + uVar7);
      puVar11 = puVar10;
      if (uVar12 == uVar7) goto LAB_00147638;
    }
    do {
      pbVar5 = (byte *)((long)puVar6 + 1);
      puVar10 = puVar11 + 1;
      *puVar11 = (uint)*(byte *)puVar6;
      puVar6 = (uint *)pbVar5;
      puVar11 = puVar10;
    } while (pbVar5 != pbVar4);
  }
LAB_00147638:
  *puVar10 = 0;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

