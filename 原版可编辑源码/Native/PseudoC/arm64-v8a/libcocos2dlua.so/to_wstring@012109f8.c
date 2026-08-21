
/* std::__ndk1::to_wstring(long) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,long param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong *in_x8;
  byte *pbVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  byte local_5c [20];
  long local_48;
  
  lVar3 = tpidr_el0;
  pbVar5 = local_5c;
  pbVar4 = (byte *)&local_48;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((long)this < 0) {
    pbVar5 = (byte *)((ulong)pbVar5 | 1);
    this = (__ndk1 *)-(long)this;
    local_5c[0] = 0x2d;
  }
  if ((0x13 < (long)pbVar4 - (long)pbVar5) ||
     (uVar2 = (uint)((0x40 - (int)LZCOUNT((ulong)this | 1)) * 0x4d1) >> 0xc,
     (long)(int)((uVar2 - (this < *(__ndk1 **)(&DAT_014a48a8 + (ulong)uVar2 * 8))) + 1) <=
     (long)pbVar4 - (long)pbVar5)) {
    pbVar4 = (byte *)__itoa::__u64toa((ulong)this,(char *)pbVar5);
  }
  uVar10 = (long)pbVar4 - (long)local_5c;
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  if (0x3fffffffffffffef < uVar10) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar10 < 5) {
    puVar9 = (uint *)((long)in_x8 + 4);
    *(char *)in_x8 = (char)((int)uVar10 << 1);
  }
  else {
    if (uVar10 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar11 = uVar10 + 4 & 0xfffffffffffffffc;
    puVar9 = operator_new(uVar11 << 2);
    in_x8[1] = uVar10;
    in_x8[2] = (ulong)puVar9;
    *in_x8 = uVar11 | 1;
  }
  if (local_5c != pbVar4) {
    uVar10 = (long)pbVar4 - (long)local_5c;
    pbVar5 = local_5c;
    puVar8 = puVar9;
    if (1 < uVar10) {
      uVar7 = uVar10 & 0xfffffffffffffffe;
      puVar8 = puVar9 + 1;
      puVar9 = puVar9 + uVar7;
      pbVar5 = (byte *)((ulong)local_5c | 1);
      uVar11 = uVar7;
      do {
        bVar1 = *pbVar5;
        uVar11 = uVar11 - 2;
        puVar8[-1] = (uint)pbVar5[-1];
        *puVar8 = (uint)bVar1;
        puVar8 = puVar8 + 2;
        pbVar5 = pbVar5 + 2;
      } while (uVar11 != 0);
      pbVar5 = local_5c + uVar7;
      puVar8 = puVar9;
      if (uVar10 == uVar7) goto LAB_01210b4c;
    }
    do {
      pbVar6 = pbVar5 + 1;
      puVar9 = puVar8 + 1;
      *puVar8 = (uint)*pbVar5;
      pbVar5 = pbVar6;
      puVar8 = puVar9;
    } while (pbVar4 != pbVar6);
  }
LAB_01210b4c:
  *puVar9 = 0;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

