
void jinit_upsampler(long *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  code *pcVar13;
  int *piVar14;
  
  puVar9 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x100);
  param_1[0x50] = (long)puVar9;
  *puVar9 = FUN_00d9089c;
  puVar9[1] = FUN_00d908b4;
  *(undefined4 *)(puVar9 + 2) = 0;
  if ((int)param_1[0x32] != 0) {
    puVar11 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar11 + 5) = 0x1a;
    (*(code *)*puVar11)(param_1);
  }
  if (0 < (int)param_1[7]) {
    lVar12 = 0;
    piVar14 = (int *)(param_1[0x26] + 0x24);
    do {
      iVar2 = piVar14[-7];
      iVar3 = *piVar14;
      lVar8 = param_1[0x35];
      iVar4 = (int)param_1[0x34];
      iVar6 = 0;
      if (*(int *)((long)param_1 + 0x1ac) != 0) {
        iVar6 = (piVar14[1] * piVar14[-6]) / *(int *)((long)param_1 + 0x1ac);
      }
      iVar5 = *(int *)((long)param_1 + 0x1a4);
      *(int *)((long)puVar9 + lVar12 * 4 + 0xc0) = iVar6;
      if (piVar14[4] == 0) {
        puVar9[lVar12 + 0xd] = FUN_00d90a04;
      }
      else {
        iVar7 = 0;
        if ((int)lVar8 != 0) {
          iVar7 = (iVar3 * iVar2) / (int)lVar8;
        }
        if ((iVar7 == iVar4) && (iVar6 == iVar5)) {
          puVar9[lVar12 + 0xd] = FUN_00d90a0c;
        }
        else {
          if ((iVar7 << 1 == iVar4) && (iVar6 == iVar5)) {
            puVar9[lVar12 + 0xd] = FUN_00d90a14;
          }
          else if ((iVar7 << 1 == iVar4) && (iVar6 << 1 == iVar5)) {
            puVar9[lVar12 + 0xd] = FUN_00d90b14;
          }
          else {
            iVar2 = 0;
            if (iVar7 != 0) {
              iVar2 = iVar4 / iVar7;
            }
            if (iVar4 == iVar2 * iVar7) {
              iVar3 = 0;
              if (iVar6 != 0) {
                iVar3 = iVar5 / iVar6;
              }
              if (iVar5 == iVar3 * iVar6) {
                puVar1 = (undefined1 *)((long)puVar9 + lVar12 + 0xf2);
                puVar9[lVar12 + 0xd] = FUN_00d90c6c;
                puVar1[-10] = (char)iVar2;
                *puVar1 = (char)iVar3;
                goto LAB_00d9083c;
              }
            }
            puVar11 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar11 + 5) = 0x27;
            (*(code *)*puVar11)(param_1);
          }
LAB_00d9083c:
          pcVar13 = *(code **)(param_1[1] + 0x10);
          uVar10 = jround_up((int)param_1[0x11],(long)(int)param_1[0x34]);
          uVar10 = (*pcVar13)(param_1,1,uVar10,*(undefined4 *)((long)param_1 + 0x1a4));
          puVar9[lVar12 + 3] = uVar10;
        }
      }
      lVar12 = lVar12 + 1;
      piVar14 = piVar14 + 0x18;
    } while (lVar12 < (int)param_1[7]);
  }
  return;
}

