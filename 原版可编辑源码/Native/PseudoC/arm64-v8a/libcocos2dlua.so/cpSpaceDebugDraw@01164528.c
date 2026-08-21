
void cpSpaceDebugDraw(long param_1,long param_2)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  
  uVar2 = *(uint *)(param_2 + 0x28);
  if ((uVar2 & 1) != 0) {
    cpSpaceEachShape(param_1,FUN_01164688,param_2);
    uVar2 = *(uint *)(param_2 + 0x28);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    cpSpaceEachConstraint(param_1,FUN_011648a4,param_2);
    uVar2 = *(uint *)(param_2 + 0x28);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    piVar6 = *(int **)(param_1 + 0x78);
    iVar3 = *piVar6;
    if (0 < iVar3) {
      pcVar7 = *(code **)(param_2 + 8);
      uVar4 = *(undefined8 *)(param_2 + 0x68);
      uVar11 = *(undefined4 *)(param_2 + 0x60);
      uVar12 = *(undefined4 *)(param_2 + 100);
      uVar13 = *(undefined4 *)(param_2 + 0x58);
      uVar14 = *(undefined4 *)(param_2 + 0x5c);
      lVar5 = 0;
      do {
        lVar8 = *(long *)(*(long *)(piVar6 + 2) + lVar5 * 8);
        if (0 < *(int *)(lVar8 + 0x58)) {
          lVar9 = 0;
          lVar10 = 0;
          fVar15 = *(float *)(lVar8 + 0x68) + *(float *)(lVar8 + 0x68);
          fVar16 = *(float *)(lVar8 + 0x6c) + *(float *)(lVar8 + 0x6c);
          do {
            pfVar1 = (float *)(*(long *)(lVar8 + 0x60) + lVar9);
            (*pcVar7)((*(float *)(*(long *)(lVar8 + 0x28) + 0x28) + *pfVar1) - fVar15,
                      (*(float *)(*(long *)(lVar8 + 0x28) + 0x2c) + pfVar1[1]) - fVar16,
                      *(float *)(*(long *)(lVar8 + 0x30) + 0x28) + fVar15 + pfVar1[2],
                      *(float *)(*(long *)(lVar8 + 0x30) + 0x2c) + fVar16 + pfVar1[3],uVar13,uVar14,
                      uVar11,uVar12,uVar4);
            lVar10 = lVar10 + 1;
            lVar9 = lVar9 + 0x38;
          } while (lVar10 < *(int *)(lVar8 + 0x58));
          iVar3 = *piVar6;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar3);
    }
  }
  return;
}

