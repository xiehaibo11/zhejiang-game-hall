
long * FUN_00c1c458(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar1 = (long *)FUN_00c1b5b4(param_2,param_3);
  if ((*plVar1 != -1) || (*(int *)(param_2 + 0x34) == 0)) {
    plVar5 = *(long **)(param_2 + 0x38);
    if (*(long **)(param_2 + 0x28) == plVar5) {
LAB_00c1c4cc:
      FUN_00c1c1d8(param_1,param_2,param_3);
      plVar1 = (long *)FUN_00c1bdd4(param_1,param_2,param_3);
      return plVar1;
    }
    lVar2 = plVar5[-2];
    while (plVar5 = plVar5 + -3, lVar2 != -1) {
      if (*(long **)(param_2 + 0x28) == plVar5) goto LAB_00c1c4cc;
      lVar2 = plVar5[-2];
    }
    *(long **)(param_2 + 0x38) = plVar5;
    plVar3 = (long *)FUN_00c1b5b4(param_2,plVar1 + 1);
    if (plVar3 == plVar1) {
      plVar5[2] = plVar1[2];
      plVar1[2] = (long)plVar5;
      plVar1 = plVar5;
    }
    else {
      do {
        plVar6 = plVar3;
        plVar3 = (long *)plVar6[2];
      } while (plVar3 != plVar1);
      plVar6[2] = (long)plVar5;
      lVar4 = *plVar1;
      lVar2 = plVar1[2];
      plVar5[1] = plVar1[1];
      plVar5[2] = lVar2;
      *plVar5 = lVar4;
      plVar1[2] = 0;
      *plVar1 = -1;
      plVar3 = (long *)plVar5[2];
      while (plVar6 = plVar3, plVar6 != (long *)0x0) {
        if ((((int)(plVar6[1] >> 0x2f) == -5) && (*plVar6 != -1)) &&
           (plVar1 == (long *)((ulong)(*(uint *)(param_2 + 0x34) &
                                      *(uint *)((plVar6[1] & 0x7fffffffffffU) + 0xc)) * 0x18 +
                              *(long *)(param_2 + 0x28)))) {
          plVar5[2] = plVar6[2];
          plVar6[2] = plVar1[2];
          plVar1[2] = (long)plVar6;
          plVar6 = plVar5;
        }
        plVar5 = plVar6;
        plVar3 = (long *)plVar6[2];
      }
    }
  }
  lVar2 = *param_3;
  plVar1[1] = lVar2;
  if (lVar2 == -0x8000000000000000) {
    plVar1[1] = 0;
  }
  if ((*(byte *)(param_2 + 8) >> 2 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xfb;
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(lVar2 + 0x50);
    *(long *)(lVar2 + 0x50) = param_2;
  }
  return plVar1;
}

