
/* btDefaultCollisionConfiguration::btDefaultCollisionConfiguration(btDefaultCollisionConstructionInfo
   const&) */

void __thiscall
btDefaultCollisionConfiguration::btDefaultCollisionConfiguration
          (btDefaultCollisionConfiguration *this,btDefaultCollisionConstructionInfo *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  CreateFunc *this_00;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  
  *(undefined ***)this = &PTR__btDefaultCollisionConfiguration_01731f70;
  lVar5 = btAlignedAllocInternal(0x168,0x10);
  *(undefined4 *)(lVar5 + 0x134) = 0x38d1b717;
  *(byte *)(lVar5 + 0x14c) = *(byte *)(lVar5 + 0x14c) & 0xf0;
  *(long *)(this + 0x30) = lVar5;
  puVar4 = &btMinkowskiPenetrationDepthSolver::vtable;
  if (*(int *)(param_1 + 0x1c) != 0) {
    puVar4 = &btGjkEpaPenetrationDepthSolver::vtable;
  }
  puVar6 = (undefined8 *)btAlignedAllocInternal(8,0x10);
  *puVar6 = puVar4 + 0x10;
  *(undefined8 **)(this + 0x38) = puVar6;
  this_00 = (CreateFunc *)btAlignedAllocInternal(0x28,0x10);
  btConvexConvexAlgorithm::CreateFunc::CreateFunc
            (this_00,*(btVoronoiSimplexSolver **)(this + 0x30),
             *(btConvexPenetrationDepthSolver **)(this + 0x38));
  *(CreateFunc **)(this + 0x40) = this_00;
  puVar6 = (undefined8 *)btAlignedAllocInternal(0x10,0x10);
  *(undefined1 *)(puVar6 + 1) = 0;
  *puVar6 = &PTR__btCollisionAlgorithmCreateFunc_01731fd8;
  *(undefined8 **)(this + 0x48) = puVar6;
  puVar6 = (undefined8 *)btAlignedAllocInternal(0x10,0x10);
  *(undefined1 *)(puVar6 + 1) = 0;
  *puVar6 = &PTR__btCollisionAlgorithmCreateFunc_01732028;
  *(undefined8 **)(this + 0x50) = puVar6;
  puVar6 = (undefined8 *)btAlignedAllocInternal(0x10,0x10);
  *(undefined1 *)(puVar6 + 1) = 0;
  *puVar6 = &PTR__btCollisionAlgorithmCreateFunc_01732068;
  *(undefined8 **)(this + 0x58) = puVar6;
  puVar6 = (undefined8 *)btAlignedAllocInternal(0x10,0x10);
  *(undefined1 *)(puVar6 + 1) = 0;
  *puVar6 = &PTR__btCollisionAlgorithmCreateFunc_017320a8;
  *(undefined8 **)(this + 0x60) = puVar6;
  puVar6 = (undefined8 *)btAlignedAllocInternal(0x10,0x10);
  *(undefined1 *)(puVar6 + 1) = 0;
  *puVar6 = &PTR__btCollisionAlgorithmCreateFunc_017320e8;
  *(undefined8 **)(this + 0x68) = puVar6;
  puVar6 = (undefined8 *)btAlignedAllocInternal(0x10,0x10);
  *(undefined1 *)(puVar6 + 1) = 0;
  *puVar6 = &PTR__btCollisionAlgorithmCreateFunc_01732128;
  *(undefined8 **)(this + 0x70) = puVar6;
  puVar6 = (undefined8 *)btAlignedAllocInternal(0x10,0x10);
  *(undefined1 *)(puVar6 + 1) = 0;
  *puVar6 = &PTR__btCollisionAlgorithmCreateFunc_01732168;
  *(undefined8 **)(this + 0x78) = puVar6;
  puVar6 = (undefined8 *)btAlignedAllocInternal(0x10,0x10);
  *(undefined1 *)(puVar6 + 1) = 0;
  *puVar6 = &PTR__btCollisionAlgorithmCreateFunc_017321a8;
  *(undefined8 **)(this + 0x98) = puVar6;
  puVar6 = (undefined8 *)btAlignedAllocInternal(0x10,0x10);
  *puVar6 = &PTR__btCollisionAlgorithmCreateFunc_017321a8;
  *(undefined8 **)(this + 0xa0) = puVar6;
  *(undefined1 *)(puVar6 + 1) = 1;
  puVar6 = (undefined8 *)btAlignedAllocInternal(0x10,0x10);
  *(undefined1 *)(puVar6 + 1) = 0;
  *puVar6 = &PTR__btCollisionAlgorithmCreateFunc_017321e8;
  *(undefined8 **)(this + 0x90) = puVar6;
  puVar6 = (undefined8 *)btAlignedAllocInternal(0x18,0x10);
  *(undefined1 *)(puVar6 + 1) = 0;
  *(undefined8 *)((long)puVar6 + 0xc) = 1;
  *puVar6 = &PTR__btCollisionAlgorithmCreateFunc_01732228;
  *(undefined8 **)(this + 0xb0) = puVar6;
  puVar6 = (undefined8 *)btAlignedAllocInternal(0x18,0x10);
  *puVar6 = &PTR__btCollisionAlgorithmCreateFunc_01732228;
  *(undefined8 *)((long)puVar6 + 0xc) = 1;
  *(undefined8 **)(this + 0xa8) = puVar6;
  *(undefined1 *)(puVar6 + 1) = 1;
  iVar2 = *(int *)(param_1 + 0x18);
  lVar5 = *(long *)param_1;
  if (iVar2 < 0x79) {
    iVar2 = 0x78;
  }
  if (lVar5 == 0) {
    this[0x18] = (btDefaultCollisionConfiguration)0x1;
    piVar7 = (int *)btAlignedAllocInternal(0x20,0x10);
    iVar9 = *(int *)(param_1 + 0x10);
    *piVar7 = 0x330;
    piVar7[1] = iVar9;
    puVar6 = (undefined8 *)btAlignedAllocInternal((ulong)(uint)(iVar9 * 0x330),0x10);
    iVar9 = piVar7[1];
    *(undefined8 **)(piVar7 + 4) = puVar6;
    *(undefined8 **)(piVar7 + 6) = puVar6;
    piVar7[2] = iVar9;
    if (iVar9 != 1) {
      iVar3 = *piVar7;
      iVar8 = 1 - iVar9;
      puVar10 = puVar6;
      do {
        puVar1 = (undefined8 *)((long)puVar10 + (long)iVar3);
        iVar8 = iVar8 + 1;
        *puVar10 = puVar1;
        puVar10 = puVar1;
      } while (iVar8 != 0);
      puVar6 = (undefined8 *)((long)puVar6 + ((ulong)(iVar9 - 2) + 1) * (long)iVar3);
    }
    *puVar6 = 0;
    *(int **)(this + 0x10) = piVar7;
    lVar5 = *(long *)(param_1 + 8);
  }
  else {
    this[0x18] = (btDefaultCollisionConfiguration)0x0;
    *(long *)(this + 0x10) = lVar5;
    lVar5 = *(long *)(param_1 + 8);
  }
  if (lVar5 == 0) {
    this[0x28] = (btDefaultCollisionConfiguration)0x1;
    piVar7 = (int *)btAlignedAllocInternal(0x20,0x10);
    iVar9 = *(int *)(param_1 + 0x14);
    *piVar7 = iVar2;
    piVar7[1] = iVar9;
    puVar6 = (undefined8 *)btAlignedAllocInternal((ulong)(uint)(iVar9 * iVar2),0x10);
    iVar2 = piVar7[1];
    *(undefined8 **)(piVar7 + 4) = puVar6;
    *(undefined8 **)(piVar7 + 6) = puVar6;
    piVar7[2] = iVar2;
    if (iVar2 != 1) {
      iVar8 = *piVar7;
      iVar9 = 1 - iVar2;
      puVar10 = puVar6;
      do {
        puVar1 = (undefined8 *)((long)puVar10 + (long)iVar8);
        iVar9 = iVar9 + 1;
        *puVar10 = puVar1;
        puVar10 = puVar1;
      } while (iVar9 != 0);
      puVar6 = (undefined8 *)((long)puVar6 + ((ulong)(iVar2 - 2) + 1) * (long)iVar8);
    }
    *puVar6 = 0;
    *(int **)(this + 0x20) = piVar7;
  }
  else {
    this[0x28] = (btDefaultCollisionConfiguration)0x0;
    *(long *)(this + 0x20) = lVar5;
  }
  return;
}

