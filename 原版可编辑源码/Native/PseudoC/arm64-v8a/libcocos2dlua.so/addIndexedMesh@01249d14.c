
/* btTriangleIndexVertexArray::addIndexedMesh(btIndexedMesh const&, PHY_ScalarType) */

void __thiscall
btTriangleIndexVertexArray::addIndexedMesh
          (btTriangleIndexVertexArray *this,undefined8 *param_1,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  iVar4 = *(int *)(this + 0x1c);
  if (iVar4 == *(int *)(this + 0x20)) {
    iVar2 = iVar4 << 1;
    if (iVar4 == 0) {
      iVar2 = 1;
    }
    if (iVar4 < iVar2) {
      if (iVar2 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = btAlignedAllocInternal((long)iVar2 * 0x30,0x10);
        iVar4 = *(int *)(this + 0x1c);
      }
      if (0 < iVar4) {
        lVar7 = 0;
        lVar5 = (long)iVar4;
        do {
          puVar6 = (undefined8 *)(lVar3 + lVar7);
          lVar5 = lVar5 + -1;
          puVar1 = (undefined8 *)(*(long *)(this + 0x28) + lVar7);
          uVar8 = puVar1[4];
          lVar7 = lVar7 + 0x30;
          puVar6[5] = puVar1[5];
          puVar6[4] = uVar8;
          uVar8 = puVar1[2];
          puVar6[3] = puVar1[3];
          puVar6[2] = uVar8;
          uVar8 = *puVar1;
          puVar6[1] = puVar1[1];
          *puVar6 = uVar8;
        } while (lVar5 != 0);
      }
      if (*(void **)(this + 0x28) != (void *)0x0) {
        if (this[0x30] != (btTriangleIndexVertexArray)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x28));
        }
        *(undefined8 *)(this + 0x28) = 0;
      }
      iVar4 = *(int *)(this + 0x1c);
      this[0x30] = (btTriangleIndexVertexArray)0x1;
      *(long *)(this + 0x28) = lVar3;
      *(int *)(this + 0x20) = iVar2;
    }
  }
  uVar8 = param_1[4];
  puVar6 = (undefined8 *)(*(long *)(this + 0x28) + (long)iVar4 * 0x30);
  puVar6[5] = param_1[5];
  puVar6[4] = uVar8;
  uVar8 = param_1[2];
  puVar6[3] = param_1[3];
  puVar6[2] = uVar8;
  uVar8 = *param_1;
  puVar6[1] = param_1[1];
  *puVar6 = uVar8;
  iVar4 = *(int *)(this + 0x1c);
  *(int *)(this + 0x1c) = iVar4 + 1;
  *(undefined4 *)(*(long *)(this + 0x28) + (long)iVar4 * 0x30 + 0x24) = param_3;
  return;
}

