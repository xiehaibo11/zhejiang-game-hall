
/* std::__ndk1::to_string(unsigned long) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,ulong param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  ulong *in_x8;
  undefined1 *puVar4;
  ulong uVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_60 [4];
  long *plVar5;
  
  lVar1 = tpidr_el0;
  local_60[3] = *(long *)(lVar1 + 0x28);
  puVar3 = (undefined1 *)__itoa::__u64toa((ulong)this,(char *)local_60);
  uVar11 = (long)puVar3 - (long)local_60;
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar11 < 0x17) {
    puVar8 = (undefined1 *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar11 << 1);
  }
  else {
    uVar10 = uVar11 + 0x10 & 0xfffffffffffffff0;
    puVar8 = operator_new(uVar10);
    in_x8[1] = uVar11;
    in_x8[2] = (ulong)puVar8;
    *in_x8 = uVar10 | 1;
  }
  if (local_60 != (long *)puVar3) {
    uVar11 = (long)puVar3 - (long)local_60;
    plVar5 = local_60;
    puVar9 = puVar8;
    if (0x1f < uVar11) {
      uVar6 = uVar11 & 0xffffffffffffffe0;
      plVar5 = (long *)(puVar8 + 0x10);
      puVar8 = puVar8 + uVar6;
      plVar7 = local_60 + 2;
      uVar10 = uVar6;
      do {
        plVar2 = plVar7 + -1;
        lVar12 = plVar7[-2];
        lVar14 = plVar7[1];
        lVar13 = *plVar7;
        uVar10 = uVar10 - 0x20;
        plVar7 = plVar7 + 4;
        plVar5[-1] = *plVar2;
        plVar5[-2] = lVar12;
        plVar5[1] = lVar14;
        *plVar5 = lVar13;
        plVar5 = plVar5 + 4;
      } while (uVar10 != 0);
      plVar5 = (long *)((long)local_60 + uVar6);
      puVar9 = puVar8;
      if (uVar11 == uVar6) goto LAB_0121070c;
    }
    do {
      puVar4 = (undefined1 *)((long)plVar5 + 1);
      puVar8 = puVar9 + 1;
      *puVar9 = *(undefined1 *)plVar5;
      plVar5 = (long *)puVar4;
      puVar9 = puVar8;
    } while (puVar3 != puVar4);
  }
LAB_0121070c:
  *puVar8 = 0;
  if (*(long *)(lVar1 + 0x28) == local_60[3]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

