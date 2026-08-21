
/* btConvexHullShape::project6(btTransform const&, btVector3 const&, float&, float&, btVector3&,
   btVector3&) const */

void __thiscall
btConvexHullShape::project6
          (btConvexHullShape *this,btTransform *param_1,btVector3 *param_2,float *param_3,
          float *param_4,btVector3 *param_5,btVector3 *param_6)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  
  *param_3 = 3.4028235e+38;
  *param_4 = -3.4028235e+38;
  uVar1 = (ulong)*(uint *)(this + 0x74);
  if ((int)*(uint *)(this + 0x74) < 1) {
    fVar3 = -3.4028235e+38;
  }
  else {
    lVar2 = 0;
    do {
      uVar10 = *(undefined8 *)((float *)(*(long *)(this + 0x80) + lVar2) + 1);
      fVar3 = *(float *)(*(long *)(this + 0x80) + lVar2) * *(float *)(this + 0x18);
      fVar7 = (float)uVar10 * (float)*(undefined8 *)(this + 0x1c);
      fVar9 = (float)((ulong)uVar10 >> 0x20) * (float)((ulong)*(undefined8 *)(this + 0x1c) >> 0x20);
      fVar4 = fVar3 * *(float *)param_1 + fVar7 * (float)*(undefined8 *)(param_1 + 4) +
              fVar9 * (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) +
              *(float *)(param_1 + 0x30);
      fVar8 = fVar3 * *(float *)(param_1 + 0x10) + fVar7 * (float)*(undefined8 *)(param_1 + 0x14) +
              fVar9 * (float)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) +
              *(float *)(param_1 + 0x34);
      fVar3 = fVar3 * *(float *)(param_1 + 0x20) + fVar7 * (float)*(undefined8 *)(param_1 + 0x24) +
              fVar9 * (float)((ulong)*(undefined8 *)(param_1 + 0x24) >> 0x20) +
              *(float *)(param_1 + 0x38);
      fVar7 = fVar4 * *(float *)param_2 + fVar8 * *(float *)(param_2 + 4) +
              fVar3 * *(float *)(param_2 + 8);
      if (fVar7 < *param_3) {
        *param_3 = fVar7;
        *(float *)param_5 = fVar4;
        *(float *)(param_5 + 4) = fVar8;
        *(float *)(param_5 + 8) = fVar3;
        *(undefined4 *)(param_5 + 0xc) = 0;
      }
      if (*param_4 < fVar7) {
        *param_4 = fVar7;
        *(float *)param_6 = fVar4;
        *(float *)(param_6 + 4) = fVar8;
        *(float *)(param_6 + 8) = fVar3;
        *(undefined4 *)(param_6 + 0xc) = 0;
      }
      uVar1 = uVar1 - 1;
      lVar2 = lVar2 + 0x10;
    } while (uVar1 != 0);
    fVar3 = *param_4;
  }
  fVar4 = *param_3;
  if (fVar3 < fVar4) {
    *param_3 = fVar3;
    *param_4 = fVar4;
    uVar6 = *(undefined8 *)(param_5 + 8);
    uVar10 = *(undefined8 *)param_5;
    uVar5 = *(undefined8 *)param_6;
    *(undefined8 *)(param_5 + 8) = *(undefined8 *)(param_6 + 8);
    *(undefined8 *)param_5 = uVar5;
    *(undefined8 *)(param_6 + 8) = uVar6;
    *(undefined8 *)param_6 = uVar10;
  }
  return;
}

