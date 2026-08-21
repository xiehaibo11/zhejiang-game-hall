
void FUN_00c1dfa8(undefined8 param_1,double *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  uVar5 = (uint)((long)*param_2 >> 0x2f);
  if ((0xfffffff2 < uVar5) &&
     ((uVar5 != 0xfffffffb || (iVar3 = FUN_00c1f7ac((ulong)*param_2 & 0x7fffffffffff), iVar3 == 0)))
     ) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfaf54(param_1,0x2c9);
  }
  uVar5 = (uint)((long)param_2[1] >> 0x2f);
  if ((0xfffffff2 < uVar5) &&
     ((uVar5 != 0xfffffffb ||
      (iVar3 = FUN_00c1f7ac((ulong)param_2[1] & 0x7fffffffffff,param_2 + 1), iVar3 == 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfaf54(param_1,0x2ee);
  }
  dVar4 = param_2[2];
  uVar5 = (uint)((long)dVar4 >> 0x2f);
  if (0xfffffff2 < uVar5) {
    if ((uVar5 != 0xfffffffb) ||
       (iVar3 = FUN_00c1f7ac((ulong)dVar4 & 0x7fffffffffff,param_2 + 2), iVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00bfaf54(param_1,0x30b);
    }
    dVar4 = param_2[2];
  }
  iVar3 = (int)((long)*param_2 >> 0x2f);
  if (iVar3 == -0xe) {
    iVar6 = *(int *)param_2;
    bVar2 = true;
  }
  else {
    iVar6 = (int)*param_2;
    bVar2 = *param_2 == (double)iVar6;
  }
  iVar7 = (int)((long)param_2[1] >> 0x2f);
  iVar8 = (int)((long)dVar4 >> 0x2f);
  if (iVar7 == -0xe) {
    iVar10 = *(int *)(param_2 + 1);
    cVar1 = bVar2 + '\x01';
  }
  else {
    iVar10 = (int)param_2[1];
    cVar1 = bVar2 + (param_2[1] == (double)iVar10);
  }
  if (iVar8 == -0xe) {
    cVar1 = cVar1 + '\x01';
    iVar9 = *(int *)(param_2 + 2);
  }
  else {
    iVar9 = (int)param_2[2];
    cVar1 = (param_2[2] == (double)iVar9) + cVar1;
  }
  if (cVar1 != '\x03') {
    if (cVar1 != '\0') {
      if (iVar3 == -0xe) {
        *param_2 = (double)*(int *)param_2;
      }
      if (iVar7 == -0xe) {
        param_2[1] = (double)*(int *)(param_2 + 1);
      }
      if (iVar8 == -0xe) {
        param_2[2] = (double)*(int *)(param_2 + 2);
        return;
      }
    }
    return;
  }
  *(int *)param_2 = iVar6;
  *(int *)((long)param_2 + 4) = -0x70000;
  *(int *)(param_2 + 1) = iVar10;
  *(int *)((long)param_2 + 0xc) = -0x70000;
  *(int *)(param_2 + 2) = iVar9;
  *(int *)((long)param_2 + 0x14) = -0x70000;
  return;
}

