
/* btCompoundShape::removeChildShapeByIndex(int) */

void __thiscall btCompoundShape::removeChildShapeByIndex(btCompoundShape *this,int param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  *(int *)(this + 0x60) = *(int *)(this + 0x60) + 1;
  if (*(btDbvt **)(this + 0x58) != (btDbvt *)0x0) {
    btDbvt::remove(*(btDbvt **)(this + 0x58),
                   *(btDbvtNode **)(*(long *)(this + 0x28) + (long)param_1 * 0x58 + 0x50));
  }
  puVar3 = (undefined8 *)(*(long *)(this + 0x28) + (long)param_1 * 0x58);
  uVar11 = puVar3[1];
  uVar5 = *puVar3;
  lVar2 = (long)*(int *)(this + 0x1c) * 0x58 + -0x58;
  puVar1 = (undefined8 *)(*(long *)(this + 0x28) + lVar2);
  uVar12 = puVar3[3];
  uVar6 = puVar3[2];
  uVar13 = puVar3[5];
  uVar7 = puVar3[4];
  uVar14 = puVar3[7];
  uVar8 = puVar3[6];
  uVar4 = puVar3[10];
  uVar15 = puVar3[9];
  uVar9 = puVar3[8];
  uVar10 = *puVar1;
  puVar3[1] = puVar1[1];
  *puVar3 = uVar10;
  uVar10 = puVar1[2];
  puVar3[3] = puVar1[3];
  puVar3[2] = uVar10;
  uVar10 = puVar1[4];
  puVar3[5] = puVar1[5];
  puVar3[4] = uVar10;
  uVar10 = puVar1[6];
  puVar3[7] = puVar1[7];
  puVar3[6] = uVar10;
  uVar10 = puVar1[8];
  puVar3[9] = puVar1[9];
  puVar3[8] = uVar10;
  puVar3[10] = puVar1[10];
  puVar1 = (undefined8 *)(*(long *)(this + 0x28) + lVar2);
  puVar1[1] = uVar11;
  *puVar1 = uVar5;
  puVar1[3] = uVar12;
  puVar1[2] = uVar6;
  puVar1[5] = uVar13;
  puVar1[4] = uVar7;
  puVar1[7] = uVar14;
  puVar1[6] = uVar8;
  puVar1[10] = uVar4;
  puVar1[9] = uVar15;
  puVar1[8] = uVar9;
  if (*(long *)(this + 0x58) != 0) {
    *(int *)(*(long *)(*(long *)(this + 0x28) + (long)param_1 * 0x58 + 0x50) + 0x28) = param_1;
  }
  *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + -1;
  return;
}

