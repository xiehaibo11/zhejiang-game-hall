
void jinit_d_main_controller(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  int *piVar12;
  
  puVar3 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x88);
  param_1[0x49] = (long)puVar3;
  *puVar3 = FUN_01100620;
  if (param_2 != 0) {
    puVar8 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar8 + 5) = 3;
    (*(code *)*puVar8)(param_1);
  }
  iVar10 = *(int *)((long)param_1 + 0x1ac);
  if (*(int *)(param_1[0x50] + 0x10) == 0) {
    iVar7 = (int)param_1[7];
    iVar2 = iVar10;
  }
  else {
    if (iVar10 < 2) {
      puVar8 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar8 + 5) = 0x30;
      (*(code *)*puVar8)(param_1);
      iVar10 = *(int *)((long)param_1 + 0x1ac);
    }
    lVar11 = param_1[0x49];
    lVar4 = (**(code **)param_1[1])(param_1,1,(long)(int)param_1[7] << 4);
    *(long *)(lVar11 + 0x68) = lVar4;
    iVar7 = (int)param_1[7];
    *(long *)(lVar11 + 0x70) = lVar4 + (long)iVar7 * 8;
    if (0 < iVar7) {
      lVar4 = 0;
      piVar12 = (int *)(param_1[0x26] + 0x28);
      do {
        iVar2 = 0;
        if (*(int *)((long)param_1 + 0x1ac) != 0) {
          iVar2 = (*piVar12 * piVar12[-7]) / *(int *)((long)param_1 + 0x1ac);
        }
        uVar1 = iVar2 * (iVar10 + 4);
        lVar5 = (**(code **)param_1[1])
                          (param_1,1,
                           -(ulong)((uVar1 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                           (ulong)(uVar1 * 2) << 3);
        lVar5 = lVar5 + (long)iVar2 * 8;
        lVar9 = lVar4 * 8;
        lVar4 = lVar4 + 1;
        *(long *)(*(long *)(lVar11 + 0x68) + lVar9) = lVar5;
        *(long *)(*(long *)(lVar11 + 0x70) + lVar9) = lVar5 + (long)(int)uVar1 * 8;
        iVar7 = (int)param_1[7];
        piVar12 = piVar12 + 0x18;
      } while (lVar4 < iVar7);
    }
    iVar10 = *(int *)((long)param_1 + 0x1ac);
    iVar2 = iVar10 + 2;
  }
  if (0 < iVar7) {
    lVar4 = 2;
    piVar12 = (int *)(param_1[0x26] + 0x28);
    while( true ) {
      iVar7 = 0;
      if (iVar10 != 0) {
        iVar7 = (*piVar12 * piVar12[-7]) / iVar10;
      }
      uVar6 = (**(code **)(param_1[1] + 0x10))(param_1,1,piVar12[-1] * piVar12[-3],iVar7 * iVar2);
      puVar3[lVar4] = uVar6;
      if ((long)(int)param_1[7] <= lVar4 + -1) break;
      iVar10 = *(int *)((long)param_1 + 0x1ac);
      lVar4 = lVar4 + 1;
      piVar12 = piVar12 + 0x18;
    }
  }
  return;
}

