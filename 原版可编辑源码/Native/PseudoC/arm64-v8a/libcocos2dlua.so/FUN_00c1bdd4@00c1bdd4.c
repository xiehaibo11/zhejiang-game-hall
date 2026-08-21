
long FUN_00c1bdd4(undefined8 param_1,long param_2,double *param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  double dVar4;
  
  *(undefined1 *)(param_2 + 10) = 0;
  dVar4 = *param_3;
  uVar3 = (uint)((long)dVar4 >> 0x2f);
  if (uVar3 == 0xfffffffb) {
    lVar2 = FUN_00c1c6dc(param_1,param_2,(ulong)dVar4 & 0x7fffffffffff);
    return lVar2;
  }
  if (uVar3 == 0xfffffff2) {
    if (*(uint *)param_3 < *(uint *)(param_2 + 0x30)) {
      return *(long *)(param_2 + 0x10) + (long)(int)*(uint *)param_3 * 8;
    }
LAB_00c1bef8:
    lVar2 = FUN_00c1c648();
    return lVar2;
  }
  if (uVar3 < 0xfffffff2) {
    dVar4 = *param_3;
    uVar3 = (uint)dVar4;
    if ((double)(int)uVar3 == dVar4) {
      if (uVar3 < *(uint *)(param_2 + 0x30)) {
        return *(long *)(param_2 + 0x10) + (long)(int)uVar3 * 8;
      }
      goto LAB_00c1bef8;
    }
    if (NAN(dVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_00bfaf54(param_1,0x9a);
    }
  }
  else if (dVar4 == -NAN) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfaf54(param_1,0xad);
  }
  lVar2 = FUN_00c1b5b4(param_2,param_3);
  do {
    iVar1 = FUN_00bfb678(lVar2 + 8,param_3);
    if (iVar1 != 0) {
      return lVar2;
    }
    lVar2 = *(long *)(lVar2 + 0x10);
  } while (lVar2 != 0);
  lVar2 = FUN_00c1c458(param_1,param_2,param_3);
  return lVar2;
}

