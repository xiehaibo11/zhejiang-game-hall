
void FUN_0119e03c(long param_1,uint param_2,int param_3,int *param_4,long param_5)

{
  ushort *puVar1;
  char cVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  code *__compar;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  
  iVar3 = *param_4;
  iVar5 = param_3 - param_2;
  puVar1 = (ushort *)(param_5 + (long)iVar3 * 0x10);
  *param_4 = iVar3 + 1;
  if (iVar5 == 1) {
    puVar7 = (ushort *)(param_1 + (long)(int)param_2 * 0x10);
    *puVar1 = *puVar7;
    puVar1[1] = puVar7[1];
    puVar1[2] = puVar7[2];
    puVar1[3] = puVar7[3];
    puVar1[4] = puVar7[4];
    puVar1[5] = puVar7[5];
    *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(puVar7 + 6);
  }
  else {
    puVar7 = (ushort *)(param_1 + (long)(int)param_2 * 0x10);
    uVar8 = *puVar7;
    *puVar1 = uVar8;
    uVar9 = puVar7[1];
    puVar1[1] = uVar9;
    uVar10 = puVar7[2];
    puVar1[2] = uVar10;
    uVar11 = puVar7[3];
    puVar1[3] = uVar11;
    uVar12 = puVar7[4];
    puVar1[4] = uVar12;
    uVar13 = puVar7[5];
    puVar1[5] = uVar13;
    if ((int)(param_2 + 1) < param_3) {
      iVar6 = ~param_2 + param_3;
      puVar7 = (ushort *)(param_1 + (long)(int)(param_2 + 1) * 0x10 + 6);
      do {
        uVar4 = puVar7[-3];
        if (uVar4 < uVar8) {
          *puVar1 = uVar4;
          uVar8 = uVar4;
        }
        uVar4 = puVar7[-2];
        if (uVar4 < uVar9) {
          puVar1[1] = uVar4;
          uVar9 = uVar4;
        }
        uVar4 = puVar7[-1];
        if (uVar4 < uVar10) {
          puVar1[2] = uVar4;
          uVar10 = uVar4;
        }
        uVar4 = *puVar7;
        if (uVar11 < uVar4) {
          puVar1[3] = uVar4;
          uVar11 = uVar4;
        }
        uVar4 = puVar7[1];
        if (uVar12 < uVar4) {
          puVar1[4] = uVar4;
          uVar12 = uVar4;
        }
        uVar4 = puVar7[2];
        if (uVar13 < uVar4) {
          puVar1[5] = uVar4;
          uVar13 = uVar4;
        }
        iVar6 = iVar6 + -1;
        puVar7 = puVar7 + 8;
      } while (iVar6 != 0);
    }
    uVar11 = uVar11 - uVar8;
    uVar12 = uVar12 - uVar9;
    uVar8 = uVar12;
    if (uVar12 <= uVar11) {
      uVar8 = uVar11;
    }
    cVar2 = '\x02';
    if ((ushort)(uVar13 - uVar10) <= uVar8) {
      cVar2 = uVar11 < uVar12;
    }
    if (cVar2 == '\0') {
      __compar = FUN_0119e288;
    }
    else if (cVar2 == '\x01') {
      __compar = FUN_0119e2a0;
    }
    else {
      __compar = FUN_0119e2b8;
    }
    qsort((void *)(param_1 + (long)(int)param_2 * 0x10),(long)iVar5,0x10,__compar);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 1;
    }
    iVar5 = param_2 + (iVar5 >> 1);
    FUN_0119e03c(param_1,param_2,iVar5,param_4,param_5);
    FUN_0119e03c(param_1,iVar5,param_3,param_4,param_5);
    *(int *)(param_5 + (long)iVar3 * 0x10 + 0xc) = iVar3 - *param_4;
  }
  return;
}

