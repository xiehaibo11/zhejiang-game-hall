
void jinit_downsampler(long *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  
  puVar8 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0xa8);
  param_1[0x44] = (long)puVar8;
  *puVar8 = FUN_010e610c;
  puVar8[1] = FUN_010e6110;
  *(undefined4 *)(puVar8 + 2) = 0;
  if (*(int *)((long)param_1 + 300) != 0) {
    puVar9 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar9 + 5) = 0x1a;
    (*(code *)*puVar9)(param_1);
  }
  if (0 < *(int *)((long)param_1 + 0x5c)) {
    lVar10 = 0;
    piVar11 = (int *)(param_1[0xd] + 0x28);
    bVar7 = true;
    do {
      iVar6 = (int)param_1[0x2c];
      iVar2 = *(int *)((long)param_1 + 0x164);
      iVar3 = 0;
      if ((int)param_1[0x2d] != 0) {
        iVar3 = (piVar11[-1] * piVar11[-8]) / (int)param_1[0x2d];
      }
      iVar4 = 0;
      if (*(int *)((long)param_1 + 0x16c) != 0) {
        iVar4 = (*piVar11 * piVar11[-7]) / *(int *)((long)param_1 + 0x16c);
      }
      *(int *)((long)puVar8 + lVar10 * 4 + 0x68) = iVar4;
      if ((iVar6 == iVar3) && (iVar2 == iVar4)) {
        if (*(int *)((long)param_1 + 0x134) == 0) {
          puVar8[lVar10 + 3] = FUN_010e6414;
        }
        else {
          puVar8[lVar10 + 3] = FUN_010e61b4;
          *(undefined4 *)(puVar8 + 2) = 1;
        }
      }
      else if ((iVar6 == iVar3 * 2) && (iVar2 == iVar4)) {
        bVar7 = false;
        puVar8[lVar10 + 3] = FUN_010e64c8;
      }
      else if ((iVar6 == iVar3 * 2) && (iVar2 == iVar4 * 2)) {
        if (*(int *)((long)param_1 + 0x134) == 0) {
          puVar8[lVar10 + 3] = FUN_010e68a0;
        }
        else {
          puVar8[lVar10 + 3] = FUN_010e6610;
          *(undefined4 *)(puVar8 + 2) = 1;
        }
      }
      else {
        iVar5 = 0;
        if (iVar3 != 0) {
          iVar5 = iVar6 / iVar3;
        }
        if (iVar6 == iVar5 * iVar3) {
          iVar6 = 0;
          if (iVar4 != 0) {
            iVar6 = iVar2 / iVar4;
          }
          if (iVar2 == iVar6 * iVar4) {
            puVar1 = (undefined1 *)((long)puVar8 + lVar10 + 0x9a);
            bVar7 = false;
            puVar8[lVar10 + 3] = FUN_010e6a14;
            puVar1[-10] = (char)iVar5;
            *puVar1 = (char)iVar6;
            goto LAB_010e609c;
          }
        }
        puVar9 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar9 + 5) = 0x27;
        (*(code *)*puVar9)(param_1);
      }
LAB_010e609c:
      lVar10 = lVar10 + 1;
      piVar11 = piVar11 + 0x18;
    } while (lVar10 < *(int *)((long)param_1 + 0x5c));
    if ((!bVar7) && (*(int *)((long)param_1 + 0x134) != 0)) {
      lVar10 = *param_1;
      *(undefined4 *)(lVar10 + 0x28) = 0x65;
                    /* WARNING: Could not recover jumptable at 0x010e60ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar10 + 8))(param_1,0);
      return;
    }
  }
  return;
}

