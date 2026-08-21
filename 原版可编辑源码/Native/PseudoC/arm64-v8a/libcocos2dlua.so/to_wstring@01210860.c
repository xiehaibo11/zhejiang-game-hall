
/* std::__ndk1::to_wstring(int) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,int param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong *in_x8;
  byte *pbVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  byte local_54 [11];
  byte bStack_49;
  long local_48;
  
  uVar4 = (uint)this;
  lVar3 = tpidr_el0;
  pbVar6 = local_54;
  pbVar5 = &bStack_49;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((int)uVar4 < 0) {
    pbVar6 = (byte *)((ulong)pbVar6 | 1);
    uVar4 = -uVar4;
    local_54[0] = 0x2d;
  }
  if ((9 < (long)pbVar5 - (long)pbVar6) ||
     (uVar2 = (uint)((0x20 - (int)LZCOUNT(uVar4 | 1)) * 0x4d1) >> 0xc,
     (long)(int)((uVar2 - (uVar4 < *(uint *)(&DAT_014a487c + (ulong)uVar2 * 4))) + 1) <=
     (long)pbVar5 - (long)pbVar6)) {
    pbVar5 = (byte *)__itoa::__u32toa(uVar4,(char *)pbVar6);
  }
  uVar11 = (long)pbVar5 - (long)local_54;
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  if (0x3fffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar11 < 5) {
    puVar10 = (uint *)((long)in_x8 + 4);
    *(char *)in_x8 = (char)((int)uVar11 << 1);
  }
  else {
    if (uVar11 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar12 = uVar11 + 4 & 0xfffffffffffffffc;
    puVar10 = operator_new(uVar12 << 2);
    in_x8[1] = uVar11;
    in_x8[2] = (ulong)puVar10;
    *in_x8 = uVar12 | 1;
  }
  if (local_54 != pbVar5) {
    uVar11 = (long)pbVar5 - (long)local_54;
    pbVar6 = local_54;
    puVar9 = puVar10;
    if (1 < uVar11) {
      uVar8 = uVar11 & 0xfffffffffffffffe;
      puVar9 = puVar10 + 1;
      puVar10 = puVar10 + uVar8;
      pbVar6 = (byte *)((ulong)local_54 | 1);
      uVar12 = uVar8;
      do {
        bVar1 = *pbVar6;
        uVar12 = uVar12 - 2;
        puVar9[-1] = (uint)pbVar6[-1];
        *puVar9 = (uint)bVar1;
        puVar9 = puVar9 + 2;
        pbVar6 = pbVar6 + 2;
      } while (uVar12 != 0);
      pbVar6 = local_54 + uVar8;
      puVar9 = puVar10;
      if (uVar11 == uVar8) goto LAB_012109b4;
    }
    do {
      pbVar7 = pbVar6 + 1;
      puVar10 = puVar9 + 1;
      *puVar9 = (uint)*pbVar6;
      pbVar6 = pbVar7;
      puVar9 = puVar10;
    } while (pbVar5 != pbVar7);
  }
LAB_012109b4:
  *puVar10 = 0;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

