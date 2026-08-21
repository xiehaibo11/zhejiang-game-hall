
/* btQuantizedBvh::mergeInternalNodeAabb(int, btVector3 const&, btVector3 const&) */

void __thiscall
btQuantizedBvh::mergeInternalNodeAabb
          (btQuantizedBvh *this,int param_1,btVector3 *param_2,btVector3 *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  ushort *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (this[0x40] == (btQuantizedBvh)0x0) {
    lVar4 = *(long *)(this + 0x78);
    lVar5 = (long)param_1;
    pfVar6 = (float *)(lVar4 + lVar5 * 0x40);
    if (*(float *)param_2 < *pfVar6) {
      *pfVar6 = *(float *)param_2;
    }
    if (*(float *)(param_2 + 4) < pfVar6[1]) {
      pfVar6[1] = *(float *)(param_2 + 4);
    }
    lVar1 = lVar4 + lVar5 * 0x40;
    pfVar6 = (float *)(lVar1 + 8);
    if (*(float *)(param_2 + 8) < *pfVar6) {
      *pfVar6 = *(float *)(param_2 + 8);
    }
    pfVar6 = (float *)(lVar1 + 0xc);
    if (*(float *)(param_2 + 0xc) < *pfVar6) {
      *pfVar6 = *(float *)(param_2 + 0xc);
    }
    lVar1 = lVar4 + lVar5 * 0x40;
    pfVar6 = (float *)(lVar1 + 0x10);
    if (*pfVar6 < *(float *)param_3) {
      *pfVar6 = *(float *)param_3;
    }
    pfVar6 = (float *)(lVar1 + 0x14);
    if (*pfVar6 < *(float *)(param_3 + 4)) {
      *pfVar6 = *(float *)(param_3 + 4);
    }
    lVar4 = lVar4 + lVar5 * 0x40;
    pfVar6 = (float *)(lVar4 + 0x18);
    if (*pfVar6 < *(float *)(param_3 + 8)) {
      *pfVar6 = *(float *)(param_3 + 8);
    }
    pfVar6 = (float *)(lVar4 + 0x1c);
    if (*pfVar6 < *(float *)(param_3 + 0xc)) {
      *pfVar6 = *(float *)(param_3 + 0xc);
    }
  }
  else {
    lVar4 = *(long *)(this + 0xb8);
    fVar8 = *(float *)(param_2 + 4);
    fVar10 = *(float *)(this + 0xc);
    fVar13 = *(float *)(param_3 + 4);
    fVar11 = *(float *)(param_2 + 8);
    fVar12 = *(float *)(this + 0x10);
    fVar14 = *(float *)(param_3 + 8);
    fVar15 = *(float *)(this + 0x2c);
    puVar7 = (ushort *)(lVar4 + (long)param_1 * 0x10);
    fVar9 = *(float *)(this + 0x30);
    uVar2 = (int)((*(float *)param_2 - *(float *)(this + 8)) * *(float *)(this + 0x28)) & 0xfffe;
    uVar3 = (int)((*(float *)param_3 - *(float *)(this + 8)) * *(float *)(this + 0x28) + 1.0) | 1;
    lVar5 = (long)param_1;
    if (uVar2 < *puVar7) {
      *puVar7 = (ushort)uVar2;
    }
    lVar1 = lVar4 + lVar5 * 0x10;
    puVar7 = (ushort *)(lVar1 + 6);
    uVar2 = (int)((fVar8 - fVar10) * fVar15) & 0xfffe;
    if (*puVar7 < uVar3) {
      *puVar7 = (ushort)uVar3;
    }
    puVar7 = (ushort *)(lVar1 + 2);
    uVar3 = (int)((fVar13 - fVar10) * fVar15 + 1.0) | 1;
    if (uVar2 < *puVar7) {
      *puVar7 = (ushort)uVar2;
    }
    lVar1 = lVar4 + lVar5 * 0x10;
    puVar7 = (ushort *)(lVar1 + 8);
    uVar2 = (int)((fVar11 - fVar12) * fVar9) & 0xfffe;
    if (*puVar7 < uVar3) {
      *puVar7 = (ushort)uVar3;
    }
    puVar7 = (ushort *)(lVar1 + 4);
    uVar3 = (int)((fVar14 - fVar12) * fVar9 + 1.0) | 1;
    if (uVar2 < *puVar7) {
      *puVar7 = (ushort)uVar2;
    }
    puVar7 = (ushort *)(lVar4 + lVar5 * 0x10 + 10);
    if (*puVar7 < uVar3) {
      *puVar7 = (ushort)uVar3;
      return;
    }
  }
  return;
}

