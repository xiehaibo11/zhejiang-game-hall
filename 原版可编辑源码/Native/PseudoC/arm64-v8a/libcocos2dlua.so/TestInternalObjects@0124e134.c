
/* TestInternalObjects(btTransform const&, btTransform const&, btVector3 const&, btVector3 const&,
   btConvexPolyhedron const&, btConvexPolyhedron const&, float) */

bool TestInternalObjects(btTransform *param_1,btTransform *param_2,btVector3 *param_3,
                        btVector3 *param_4,btConvexPolyhedron *param_5,btConvexPolyhedron *param_6,
                        float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  ulong uVar11;
  
  fVar3 = *(float *)param_4;
  fVar4 = *(float *)(param_4 + 4);
  fVar5 = *(float *)(param_4 + 8);
  uVar10 = *(ulong *)(param_5 + 0x7c);
  fVar6 = (float)*(undefined8 *)(param_1 + 4) * fVar3 +
          (float)*(undefined8 *)(param_1 + 0x14) * fVar4 +
          (float)*(undefined8 *)(param_1 + 0x24) * fVar5;
  fVar7 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) * fVar3 +
          (float)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) * fVar4 +
          (float)((ulong)*(undefined8 *)(param_1 + 0x24) >> 0x20) * fVar5;
  uVar10 = uVar10 ^ (uVar10 ^ CONCAT44(-(float)(uVar10 >> 0x20),-(float)uVar10)) &
                    CONCAT44(-(uint)(fVar7 < 0.0),-(uint)(fVar6 < 0.0));
  uVar11 = *(ulong *)(param_6 + 0x7c);
  fVar8 = (float)*(undefined8 *)(param_2 + 4) * fVar3 +
          (float)*(undefined8 *)(param_2 + 0x14) * fVar4 +
          (float)*(undefined8 *)(param_2 + 0x24) * fVar5;
  fVar9 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) * fVar3 +
          (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20) * fVar4 +
          (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20) * fVar5;
  uVar11 = uVar11 ^ (uVar11 ^ CONCAT44(-(float)(uVar11 >> 0x20),-(float)uVar11)) &
                    CONCAT44(-(uint)(fVar9 < 0.0),-(uint)(fVar8 < 0.0));
  fVar1 = *(float *)param_3 * fVar3 + *(float *)(param_3 + 4) * fVar4 +
          *(float *)(param_3 + 8) * fVar5;
  fVar2 = fVar3 * *(float *)param_1 + fVar4 * *(float *)(param_1 + 0x10) +
          fVar5 * *(float *)(param_1 + 0x20);
  fVar4 = fVar3 * *(float *)param_2 + fVar4 * *(float *)(param_2 + 0x10) +
          fVar5 * *(float *)(param_2 + 0x20);
  fVar3 = -*(float *)(param_5 + 0x78);
  if (0.0 <= fVar2) {
    fVar3 = *(float *)(param_5 + 0x78);
  }
  fVar5 = -*(float *)(param_6 + 0x78);
  if (0.0 <= fVar4) {
    fVar5 = *(float *)(param_6 + 0x78);
  }
  fVar3 = fVar2 * fVar3 + fVar6 * (float)uVar10 + fVar7 * (float)(uVar10 >> 0x20);
  fVar2 = fVar4 * fVar5 + fVar8 * (float)uVar11 + fVar9 * (float)(uVar11 >> 0x20);
  if (fVar3 <= *(float *)(param_5 + 0x88)) {
    fVar3 = *(float *)(param_5 + 0x88);
  }
  if (fVar2 <= *(float *)(param_6 + 0x88)) {
    fVar2 = *(float *)(param_6 + 0x88);
  }
  fVar4 = fVar1 + fVar3 + fVar2;
  fVar1 = (fVar3 + fVar2) - fVar1;
  if (fVar1 <= fVar4) {
    fVar4 = fVar1;
  }
  return fVar4 <= param_7;
}

