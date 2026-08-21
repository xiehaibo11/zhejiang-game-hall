
undefined8 FUN_00c1c788(undefined8 param_1,long param_2,double *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  double *pdVar6;
  double dVar7;
  double local_8;
  
  uVar1 = (uint)((long)*param_3 >> 0x2f);
  if (uVar1 == 0xfffffff2) {
    uVar3 = *(uint *)param_3;
    uVar1 = *(uint *)(param_2 + 0x30);
    if (uVar3 < uVar1) {
LAB_00c1c8f4:
      uVar5 = (ulong)(uVar3 + 1);
      goto LAB_00c1c824;
    }
    local_8 = (double)(int)uVar3;
    pdVar6 = &local_8;
  }
  else {
    pdVar6 = param_3;
    if (uVar1 < 0xfffffff2) {
      uVar1 = *(uint *)(param_2 + 0x30);
      uVar3 = (uint)*param_3;
      if ((uVar3 < uVar1) && (*param_3 == (double)(int)uVar3)) goto LAB_00c1c8f4;
    }
  }
  if (*pdVar6 == -NAN) {
    uVar1 = *(uint *)(param_2 + 0x30);
    uVar5 = 0;
  }
  else {
    lVar4 = FUN_00c1b5b4(param_2,pdVar6);
    do {
      iVar2 = FUN_00bfb678(lVar4 + 8,pdVar6);
      if (iVar2 != 0) {
        uVar1 = *(uint *)(param_2 + 0x30);
        uVar5 = (ulong)(uVar1 + 1 + (int)(lVar4 - *(long *)(param_2 + 0x28) >> 3) * -0x55555555);
        goto LAB_00c1c824;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
    } while (lVar4 != 0);
    if (*(uint *)((long)pdVar6 + 4) != 0xfffe7fff) {
                    /* WARNING: Subroutine does not return */
      FUN_00bfaf54(param_1,0xc0);
    }
    uVar1 = *(uint *)(param_2 + 0x30);
    uVar5 = (ulong)*(uint *)pdVar6;
  }
LAB_00c1c824:
  if ((uint)uVar5 < uVar1) {
    lVar4 = uVar5 << 3;
    if (*(long *)(*(long *)(param_2 + 0x10) + uVar5 * 8) != -1) {
LAB_00c1c8fc:
      *(uint *)param_3 = (uint)uVar5;
      *(uint *)((long)param_3 + 4) = 0xfff90000;
      param_3[1] = *(double *)(lVar4 + *(long *)(param_2 + 0x10));
      return 1;
    }
    uVar5 = (ulong)((uint)uVar5 + 1);
    lVar4 = uVar5 << 3;
    for (; (uint)uVar5 < uVar1; uVar5 = (ulong)((uint)uVar5 + 1)) {
      if (*(long *)(lVar4 + *(long *)(param_2 + 0x10)) != -1) goto LAB_00c1c8fc;
      lVar4 = lVar4 + 8;
    }
  }
  uVar1 = (int)uVar5 - uVar1;
  if (uVar1 <= *(uint *)(param_2 + 0x34)) {
    pdVar6 = (double *)(*(long *)(param_2 + 0x28) + (ulong)uVar1 * 0x18);
    dVar7 = *pdVar6;
    while( true ) {
      if (dVar7 != -NAN) {
        *param_3 = pdVar6[1];
        param_3[1] = *pdVar6;
        return 1;
      }
      uVar1 = uVar1 + 1;
      if (*(uint *)(param_2 + 0x34) < uVar1) break;
      pdVar6 = (double *)(*(long *)(param_2 + 0x28) + (ulong)uVar1 * 0x18);
      dVar7 = *pdVar6;
    }
  }
  return 0;
}

