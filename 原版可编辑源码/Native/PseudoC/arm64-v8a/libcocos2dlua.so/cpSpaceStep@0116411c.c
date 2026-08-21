
void cpSpaceStep(undefined8 param_1,int *param_2)

{
  uint *puVar1;
  int *piVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  long lVar10;
  float fVar11;
  float __y;
  int iVar12;
  int iVar13;
  float fVar14;
  
  __y = (float)param_1;
  if (__y == 0.0) {
    return;
  }
  puVar1 = *(uint **)(param_2 + 0x1c);
  piVar2 = *(int **)(param_2 + 0x1e);
  fVar14 = (float)param_2[0xd];
  param_2[0xd] = (int)__y;
  param_2[0xc] = param_2[0xc] + 1;
  piVar9 = *(int **)(param_2 + 0xe);
  if (0 < *piVar2) {
    lVar10 = 0;
    do {
      lVar7 = *(long *)(*(long *)(piVar2 + 2) + lVar10 * 8);
      *(undefined4 *)(lVar7 + 0x90) = 1;
      cVar3 = cpBodyIsSleeping(*(undefined8 *)(lVar7 + 0x28));
      if ((cVar3 == '\0') &&
         (cVar3 = cpBodyIsSleeping(*(undefined8 *)(lVar7 + 0x30)), cVar3 == '\0')) {
        cpArbiterUnthread(lVar7);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *piVar2);
  }
  *piVar2 = 0;
  param_2[0x28] = param_2[0x28] + 1;
  if (0 < *piVar9) {
    lVar10 = 0;
    do {
      (**(code **)(*(long *)(*(long *)(piVar9 + 2) + lVar10 * 8) + 8))(param_1);
      lVar10 = lVar10 + 1;
    } while (lVar10 < *piVar9);
  }
  cpSpacePushFreshContactBuffer(param_2);
  (**(code **)(**(long **)(param_2 + 0x1a) + 0x10))(*(long **)(param_2 + 0x1a),cpShapeUpdateFunc,0);
  (**(code **)(**(long **)(param_2 + 0x1a) + 0x40))
            (*(long **)(param_2 + 0x1a),cpSpaceCollideShapes,param_2);
  cpSpaceUnlock(param_2,0);
  cpSpaceProcessComponents(param_1,param_2);
  param_2[0x28] = param_2[0x28] + 1;
  cpHashSetFilter(*(undefined8 *)(param_2 + 0x22),cpSpaceArbiterSetFilter,param_2);
  iVar12 = param_2[6];
  fVar11 = powf((float)param_2[7],__y);
  if (0 < *piVar2) {
    lVar10 = 0;
    do {
      cpArbiterPreStep(param_1,iVar12,1.0 - fVar11,
                       *(undefined8 *)(*(long *)(piVar2 + 2) + lVar10 * 8));
      lVar10 = lVar10 + 1;
    } while (lVar10 < *piVar2);
  }
  if (0 < (int)*puVar1) {
    lVar10 = 0;
    do {
      puVar8 = *(undefined8 **)(*(long *)(puVar1 + 2) + lVar10 * 8);
      if ((code *)puVar8[8] != (code *)0x0) {
        (*(code *)puVar8[8])(puVar8,param_2);
      }
      (**(code **)*puVar8)(param_1,puVar8);
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)*puVar1);
  }
  fVar11 = powf((float)param_2[3],__y);
  if (0 < *piVar9) {
    iVar12 = param_2[1];
    iVar13 = param_2[2];
    lVar10 = 0;
    do {
      (*(code *)**(undefined8 **)(*(long *)(piVar9 + 2) + lVar10 * 8))(iVar12,iVar13,fVar11,param_1)
      ;
      lVar10 = lVar10 + 1;
    } while (lVar10 < *piVar9);
  }
  if (fVar14 != 0.0) {
    fVar14 = __y / fVar14;
  }
  if (0 < *piVar2) {
    lVar10 = 0;
    do {
      cpArbiterApplyCachedImpulse(fVar14,*(undefined8 *)(*(long *)(piVar2 + 2) + lVar10 * 8));
      lVar10 = lVar10 + 1;
    } while (lVar10 < *piVar2);
  }
  uVar4 = (ulong)*puVar1;
  if (0 < (int)*puVar1) {
    lVar10 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(puVar1 + 2) + lVar10 * 8) + 8))(fVar14);
      uVar4 = (ulong)(int)*puVar1;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (long)uVar4);
  }
  if (0 < *param_2) {
    iVar12 = 0;
    do {
      if (0 < *piVar2) {
        lVar10 = 0;
        do {
          cpArbiterApplyImpulse(*(undefined8 *)(*(long *)(piVar2 + 2) + lVar10 * 8));
          lVar10 = lVar10 + 1;
        } while (lVar10 < *piVar2);
        uVar4 = (ulong)*puVar1;
      }
      if (0 < (int)uVar4) {
        lVar10 = 0;
        do {
          (**(code **)(**(long **)(*(long *)(puVar1 + 2) + lVar10 * 8) + 0x10))(param_1);
          uVar4 = (ulong)(int)*puVar1;
          lVar10 = lVar10 + 1;
        } while (lVar10 < (long)uVar4);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < *param_2);
  }
  if (0 < (int)uVar4) {
    lVar10 = 0;
    do {
      lVar7 = *(long *)(*(long *)(puVar1 + 2) + lVar10 * 8);
      pcVar6 = *(code **)(lVar7 + 0x48);
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(lVar7,param_2);
        uVar4 = (ulong)*puVar1;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)uVar4);
  }
  if (0 < *piVar2) {
    lVar10 = 0;
    do {
      lVar7 = *(long *)(*(long *)(piVar2 + 2) + lVar10 * 8);
      lVar5 = *(long *)(lVar7 + 0x70);
      (**(code **)(lVar5 + 0x20))(lVar7,param_2,*(undefined8 *)(lVar5 + 0x30));
      lVar10 = lVar10 + 1;
    } while (lVar10 < *piVar2);
  }
  cpSpaceUnlock(param_2,1);
  return;
}

