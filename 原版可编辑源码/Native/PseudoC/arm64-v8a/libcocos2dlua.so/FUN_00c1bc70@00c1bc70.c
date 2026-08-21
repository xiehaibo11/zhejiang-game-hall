
long FUN_00c1bc70(long param_1,long param_2,double *param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  double dVar4;
  
  dVar4 = *param_3;
  uVar3 = (uint)((long)dVar4 >> 0x2f);
  if (uVar3 == 0xfffffffb) {
    lVar2 = (ulong)(*(uint *)(param_2 + 0x34) & *(uint *)(((ulong)dVar4 & 0x7fffffffffff) + 0xc)) *
            0x18 + *(long *)(param_2 + 0x28);
    do {
      if (((int)((long)*(ulong *)(lVar2 + 8) >> 0x2f) == -5) &&
         (((ulong)dVar4 & 0x7fffffffffff) == (*(ulong *)(lVar2 + 8) & 0x7fffffffffff))) {
        return lVar2;
      }
      lVar2 = *(long *)(lVar2 + 0x10);
    } while (lVar2 != 0);
    goto LAB_00c1bd00;
  }
  if (uVar3 == 0xfffffff2) {
    uVar3 = *(uint *)param_3;
    if (uVar3 < *(uint *)(param_2 + 0x30)) {
      lVar2 = *(long *)(param_2 + 0x10) + (long)(int)uVar3 * 8;
    }
    else {
      lVar2 = FUN_00c1bbc0(param_2,uVar3);
    }
joined_r0x00c1bd7c:
    if (lVar2 != 0) {
      return lVar2;
    }
  }
  else {
    if (uVar3 < 0xfffffff2) {
      uVar3 = (uint)*param_3;
      if ((double)(int)uVar3 == *param_3) {
        if (uVar3 < *(uint *)(param_2 + 0x30)) {
          lVar2 = *(long *)(param_2 + 0x10) + (long)(int)uVar3 * 8;
        }
        else {
          lVar2 = FUN_00c1bbc0(param_2,uVar3);
        }
        goto joined_r0x00c1bd7c;
      }
    }
    else if (dVar4 == -NAN) goto LAB_00c1bd00;
    lVar2 = FUN_00c1b5b4(param_2,param_3);
    do {
      iVar1 = FUN_00bfb678(lVar2 + 8,param_3);
      if (iVar1 != 0) {
        return lVar2;
      }
      lVar2 = *(long *)(lVar2 + 0x10);
    } while (lVar2 != 0);
  }
LAB_00c1bd00:
  return *(long *)(param_1 + 0x10) + 0xe8;
}

