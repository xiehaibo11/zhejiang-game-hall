
void noise_codebook_quant(void *param_1)

{
  long lVar1;
  long lVar2;
  uint in_w6;
  long in_x7;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 *puVar7;
  short *psVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  short asStack_50 [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  uVar10 = (ulong)in_w6;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = -(uVar10 * 2 + 0xf & 0x3fffffff0);
  residue_percep_zero16();
  if (0 < (int)in_w6) {
    if (in_w6 < 8) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar10 & 0xfffffff8;
      puVar5 = (undefined8 *)((long)&local_48 + lVar2);
      puVar7 = (undefined8 *)(in_x7 + 0x10);
      uVar9 = uVar3;
      do {
        uVar11 = puVar5[-1];
        uVar12 = *puVar5;
        puVar5 = puVar5 + 2;
        uVar9 = uVar9 - 8;
        puVar7[-1] = CONCAT44((short)((ulong)uVar11 >> 0x30) * 0x100 +
                              (int)((ulong)puVar7[-1] >> 0x20),
                              (short)((ulong)uVar11 >> 0x20) * 0x100 + (int)puVar7[-1]);
        puVar7[-2] = CONCAT44((short)((ulong)uVar11 >> 0x10) * 0x100 +
                              (int)((ulong)puVar7[-2] >> 0x20),
                              (short)uVar11 * 0x100 + (int)puVar7[-2]);
        puVar7[1] = CONCAT44((short)((ulong)uVar12 >> 0x30) * 0x100 +
                             (int)((ulong)puVar7[1] >> 0x20),
                             (short)((ulong)uVar12 >> 0x20) * 0x100 + (int)puVar7[1]);
        *puVar7 = CONCAT44((short)((ulong)uVar12 >> 0x10) * 0x100 + (int)((ulong)*puVar7 >> 0x20),
                           (short)uVar12 * 0x100 + (int)*puVar7);
        puVar7 = puVar7 + 4;
      } while (uVar9 != 0);
      if (uVar3 == uVar10) goto LAB_00108754;
    }
    lVar4 = uVar10 - uVar3;
    piVar6 = (int *)(in_x7 + uVar3 * 4);
    psVar8 = (short *)((long)asStack_50 + uVar3 * 2 + lVar2);
    do {
      lVar4 = lVar4 + -1;
      *piVar6 = *piVar6 + *psVar8 * 0x100;
      piVar6 = piVar6 + 1;
      psVar8 = psVar8 + 1;
    } while (lVar4 != 0);
  }
LAB_00108754:
  memset(param_1,0,-(ulong)(in_w6 >> 0x1f) & 0xfffffffe00000000 | uVar10 << 1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

