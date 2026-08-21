
/* std::__ndk1::to_string(long) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong *in_x8;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long local_5c [2];
  long local_48;
  
  lVar2 = tpidr_el0;
  plVar5 = local_5c;
  plVar4 = &local_48;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((long)this < 0) {
    plVar5 = (long *)((ulong)plVar5 | 1);
    this = (__ndk1 *)-(long)this;
    local_5c[0]._0_1_ = 0x2d;
  }
  if ((0x13 < (long)plVar4 - (long)plVar5) ||
     (uVar1 = (uint)((0x40 - (int)LZCOUNT((ulong)this | 1)) * 0x4d1) >> 0xc,
     (long)(int)((uVar1 - (this < *(__ndk1 **)(&DAT_014a48a8 + (ulong)uVar1 * 8))) + 1) <=
     (long)plVar4 - (long)plVar5)) {
    plVar4 = (long *)__itoa::__u64toa((ulong)this,(char *)plVar5);
  }
  uVar13 = (long)plVar4 - (long)local_5c;
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  if (0xffffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar13 < 0x17) {
    puVar10 = (undefined1 *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar13 << 1);
  }
  else {
    uVar12 = uVar13 + 0x10 & 0xfffffffffffffff0;
    puVar10 = operator_new(uVar12);
    in_x8[1] = uVar13;
    in_x8[2] = (ulong)puVar10;
    *in_x8 = uVar12 | 1;
  }
  if (local_5c != plVar4) {
    uVar13 = (long)plVar4 - (long)local_5c;
    plVar5 = local_5c;
    puVar11 = puVar10;
    if (0x1f < uVar13) {
      uVar7 = uVar13 & 0xffffffffffffffe0;
      puVar8 = (undefined8 *)(puVar10 + 0x10);
      puVar10 = puVar10 + uVar7;
      puVar9 = (undefined8 *)&stack0xffffffffffffffb4;
      uVar12 = uVar7;
      do {
        puVar3 = puVar9 + -1;
        uVar14 = puVar9[-2];
        uVar16 = puVar9[1];
        uVar15 = *puVar9;
        uVar12 = uVar12 - 0x20;
        puVar9 = puVar9 + 4;
        puVar8[-1] = *puVar3;
        puVar8[-2] = uVar14;
        puVar8[1] = uVar16;
        *puVar8 = uVar15;
        puVar8 = puVar8 + 4;
      } while (uVar12 != 0);
      plVar5 = (long *)((long)local_5c + uVar7);
      puVar11 = puVar10;
      if (uVar13 == uVar7) goto LAB_01210354;
    }
    do {
      plVar6 = (long *)((long)plVar5 + 1);
      puVar10 = puVar11 + 1;
      *puVar11 = (char)*plVar5;
      plVar5 = plVar6;
      puVar11 = puVar10;
    } while (plVar4 != plVar6);
  }
LAB_01210354:
  *puVar10 = 0;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

