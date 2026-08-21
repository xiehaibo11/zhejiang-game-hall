
/* btCapsuleShape::batchedUnitVectorGetSupportingVertexWithoutMargin(btVector3 const*, btVector3*,
   int) const */

void __thiscall
btCapsuleShape::batchedUnitVectorGetSupportingVertexWithoutMargin
          (btCapsuleShape *this,btVector3 *param_1,btVector3 *param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  btVector3 *pbVar4;
  btVector3 *pbVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_70 [4];
  
  if (0 < param_3) {
    uVar1 = *(uint *)(this + 0x40);
    uVar3 = (ulong)(uint)param_3;
    fVar10 = *(float *)(this + (long)((int)(uVar1 + 2) % 3) * 4 + 0x28);
    pbVar4 = param_1 + 4;
    pbVar5 = param_2 + 8;
    while( true ) {
      uVar3 = uVar3 - 1;
      uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
      local_70[0] = 0.0;
      local_70[1] = 0.0;
      local_70[2] = 0.0;
      local_70[3] = 0.0;
      *(undefined4 *)((long)local_70 + uVar2) = *(undefined4 *)(this + uVar2 + 0x28);
      fVar12 = fVar10 * *(float *)(pbVar4 + -4) + local_70[0];
      fVar13 = fVar10 * (float)*(undefined8 *)pbVar4 + local_70[1];
      fVar14 = fVar10 * (float)((ulong)*(undefined8 *)pbVar4 >> 0x20) + local_70[2];
      fVar6 = (float)(**(code **)(*(long *)this + 0x60))(this);
      fVar7 = *(float *)(pbVar4 + -4);
      uVar8 = *(undefined8 *)pbVar4;
      fVar11 = (float)((ulong)uVar8 >> 0x20);
      fVar12 = fVar12 - fVar6 * fVar7;
      fVar13 = fVar13 - (float)uVar8 * fVar6;
      fVar14 = fVar14 - fVar11 * fVar6;
      fVar11 = fVar7 * fVar12 + (float)uVar8 * fVar13 + fVar11 * fVar14;
      fVar6 = -1e+18;
      if (-1e+18 < fVar11) {
        *(float *)(pbVar5 + -8) = fVar12;
        *(ulong *)(pbVar5 + -4) = CONCAT44(fVar14,fVar13);
        *(undefined4 *)(pbVar5 + 4) = 0;
        fVar7 = *(float *)(pbVar4 + -4);
        uVar8 = *(undefined8 *)pbVar4;
        fVar6 = fVar11;
      }
      local_70[0] = 0.0;
      local_70[1] = 0.0;
      local_70[2] = 0.0;
      local_70[3] = 0.0;
      local_70[*(int *)(this + 0x40)] = -*(float *)(this + (long)*(int *)(this + 0x40) * 4 + 0x28);
      fVar7 = fVar10 * fVar7 + local_70[0];
      fVar11 = fVar10 * (float)uVar8 + local_70[1];
      fVar13 = fVar10 * (float)((ulong)uVar8 >> 0x20) + local_70[2];
      fVar12 = (float)(**(code **)(*(long *)this + 0x60))(this);
      fVar14 = (float)*(undefined8 *)pbVar4;
      fVar9 = (float)((ulong)*(undefined8 *)pbVar4 >> 0x20);
      fVar7 = fVar7 - fVar12 * *(float *)(pbVar4 + -4);
      fVar11 = fVar11 - fVar14 * fVar12;
      fVar13 = fVar13 - fVar9 * fVar12;
      if (fVar6 < *(float *)(pbVar4 + -4) * fVar7 + fVar14 * fVar11 + fVar9 * fVar13) {
        *(float *)(pbVar5 + -8) = fVar7;
        *(ulong *)(pbVar5 + -4) = CONCAT44(fVar13,fVar11);
        *(undefined4 *)(pbVar5 + 4) = 0;
      }
      if (uVar3 == 0) break;
      uVar1 = *(uint *)(this + 0x40);
      pbVar4 = pbVar4 + 0x10;
      pbVar5 = pbVar5 + 0x10;
    }
  }
  return;
}

