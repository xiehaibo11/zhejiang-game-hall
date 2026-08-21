
undefined8 FUN_00c2dc90(long param_1)

{
  long lVar1;
  double *pdVar2;
  uint uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = FUN_00c29e20(param_1,1);
  lVar4 = (ulong)*(uint *)(lVar1 + 0x30) - 1;
  if ((ulong)*(uint *)(lVar1 + 0x30) != 0) {
    do {
      if (*(long *)(*(long *)(lVar1 + 0x10) + lVar4 * 8) != -1) {
        dVar5 = (double)(int)lVar4;
        goto LAB_00c2dcdc;
      }
      lVar4 = lVar4 + -1;
    } while (lVar4 != -1);
  }
  dVar5 = 0.0;
LAB_00c2dcdc:
  pdVar2 = (double *)(*(long *)(lVar1 + 0x28) + 8 + (ulong)*(uint *)(lVar1 + 0x34) * 0x18);
  do {
    if ((pdVar2[-1] != -NAN) && (uVar3 = (uint)((long)*pdVar2 >> 0x2f), uVar3 < 0xfffffff3)) {
      if (uVar3 == 0xfffffff2) {
        dVar6 = (double)*(int *)pdVar2;
      }
      else {
        dVar6 = *pdVar2;
      }
      if (dVar5 < dVar6) {
        dVar5 = dVar6;
      }
    }
    pdVar2 = pdVar2 + -3;
  } while (pdVar2 != (double *)(*(long *)(lVar1 + 0x28) + -0x10));
  *(double *)(*(long *)(param_1 + 0x28) + -8) = dVar5;
  return 1;
}

