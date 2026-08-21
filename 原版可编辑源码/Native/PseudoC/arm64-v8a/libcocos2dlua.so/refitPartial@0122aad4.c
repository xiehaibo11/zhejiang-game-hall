
/* btOptimizedBvh::refitPartial(btStridingMeshInterface*, btVector3 const&, btVector3 const&) */

void __thiscall
btOptimizedBvh::refitPartial
          (btOptimizedBvh *this,btStridingMeshInterface *param_1,btVector3 *param_2,
          btVector3 *param_3)

{
  ushort *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar4 = *(int *)(this + 0xd4);
  if (0 < iVar4) {
    fVar7 = *(float *)param_2;
    fVar8 = *(float *)(param_2 + 4);
    fVar9 = *(float *)(this + 8);
    fVar10 = *(float *)(this + 0xc);
    fVar11 = *(float *)(param_2 + 8);
    fVar12 = *(float *)(this + 0x10);
    fVar13 = *(float *)param_3;
    fVar15 = *(float *)(param_3 + 4);
    fVar17 = *(float *)(param_3 + 8);
    fVar14 = *(float *)(this + 0x28);
    fVar16 = *(float *)(this + 0x2c);
    fVar18 = *(float *)(this + 0x30);
    lVar5 = 0;
    lVar6 = 0;
    do {
      puVar1 = (ushort *)(*(long *)(this + 0xe0) + lVar5);
      if ((((((int)((fVar7 - fVar9) * fVar14) & 0xfffeU) <= (uint)puVar1[3]) &&
           ((uint)*puVar1 <= ((int)(fVar14 * (fVar13 - fVar9) + 1.0) | 1U))) &&
          (((int)((fVar11 - fVar12) * fVar18) & 0xfffeU) <= (uint)puVar1[5])) &&
         ((((uint)puVar1[2] <= ((int)(fVar18 * (fVar17 - fVar12) + 1.0) | 1U) &&
           (((int)((fVar8 - fVar10) * fVar16) & 0xfffeU) <= (uint)puVar1[4])) &&
          ((uint)puVar1[1] <= ((int)(fVar16 * (fVar15 - fVar10) + 1.0) | 1U))))) {
        puVar2 = (undefined2 *)(*(long *)(this + 0xe0) + lVar5);
        updateBvhNodes((btStridingMeshInterface *)this,(int)param_1,*(int *)(puVar2 + 6),
                       *(int *)(puVar2 + 8) + *(int *)(puVar2 + 6));
        puVar3 = (undefined2 *)(*(long *)(this + 0xb8) + (long)*(int *)(puVar2 + 6) * 0x10);
        *puVar2 = *puVar3;
        puVar1[1] = puVar3[1];
        puVar1[2] = puVar3[2];
        puVar1[3] = puVar3[3];
        puVar1[4] = puVar3[4];
        puVar1[5] = puVar3[5];
        iVar4 = *(int *)(this + 0xd4);
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar6 < iVar4);
  }
  return;
}

