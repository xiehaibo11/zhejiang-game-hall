
/* btTriangleMesh::btTriangleMesh(bool, bool) */

void __thiscall btTriangleMesh::btTriangleMesh(btTriangleMesh *this,bool param_1,bool param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  btTriangleMesh *pbVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 8) = 0x3f800000;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x6c) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x8c) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc) = 0x3f8000003f800000;
  *(undefined ***)this = &PTR__btTriangleMesh_017338c0;
  this[0x30] = (btTriangleMesh)0x1;
  this[0x80] = (btTriangleMesh)0x1;
  this[0xa0] = (btTriangleMesh)0x1;
  this[0xc0] = (btTriangleMesh)0x1;
  *(undefined8 *)(this + 0xac) = 0;
  *(undefined8 *)(this + 0xcc) = 0;
  this[0xe0] = (btTriangleMesh)0x1;
  *(undefined8 *)(this + 0xd8) = 0;
  this[0xe8] = (btTriangleMesh)param_1;
  this[0xe9] = (btTriangleMesh)param_2;
  *(undefined4 *)(this + 0xec) = 0;
  lVar5 = btAlignedAllocInternal(0x30,0x10);
  lVar6 = (long)*(int *)(this + 0x1c);
  if (0 < *(int *)(this + 0x1c)) {
    lVar10 = 0;
    do {
      puVar1 = (undefined8 *)(lVar5 + lVar10);
      lVar6 = lVar6 + -1;
      puVar2 = (undefined8 *)(*(long *)(this + 0x28) + lVar10);
      uVar12 = puVar2[4];
      lVar10 = lVar10 + 0x30;
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar12;
      uVar12 = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[2] = uVar12;
      uVar12 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar12;
    } while (lVar6 != 0);
  }
  if (*(void **)(this + 0x28) != (void *)0x0) {
    if (this[0x30] != (btTriangleMesh)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x28));
    }
    *(undefined8 *)(this + 0x28) = 0;
  }
  puVar7 = (undefined4 *)(lVar5 + (long)*(int *)(this + 0x1c) * 0x30);
  this[0x30] = (btTriangleMesh)0x1;
  *(undefined4 *)(this + 0x20) = 1;
  *(long *)(this + 0x28) = lVar5;
  *puVar7 = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar7[4] = 0xc;
  puVar7[5] = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  iVar9 = 2;
  puVar7[8] = 0x10;
  puVar7[9] = 2;
  puVar7[10] = 0;
  *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
  pbVar3 = this + 0xcc;
  if (this[0xe8] != (btTriangleMesh)0x0) {
    pbVar3 = this + 0xac;
  }
  piVar8 = *(int **)(this + 0x28);
  iVar4 = *(int *)pbVar3;
  iVar11 = 6;
  if (this[0xe8] != (btTriangleMesh)0x0) {
    iVar11 = 0xc;
  }
  else {
    iVar9 = 3;
  }
  piVar8[9] = iVar9;
  piVar8[2] = 0;
  piVar8[3] = 0;
  *piVar8 = iVar4 / 3;
  piVar8[4] = iVar11;
  if (this[0xe9] == (btTriangleMesh)0x0) {
    iVar9 = *(int *)(this + 0x8c) / 3;
    iVar11 = 0xc;
  }
  else {
    iVar9 = *(int *)(this + 0x6c);
    iVar11 = 0x10;
  }
  piVar8[5] = iVar9;
  piVar8[6] = 0;
  piVar8[7] = 0;
  piVar8[8] = iVar11;
  return;
}

