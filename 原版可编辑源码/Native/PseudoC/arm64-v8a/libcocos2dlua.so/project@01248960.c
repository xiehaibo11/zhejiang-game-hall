
/* btConvexPolyhedron::project(btTransform const&, btVector3 const&, float&, float&, btVector3&,
   btVector3&) const */

void __thiscall
btConvexPolyhedron::project
          (btConvexPolyhedron *this,btTransform *param_1,btVector3 *param_2,float *param_3,
          float *param_4,btVector3 *param_5,btVector3 *param_6)

{
  float *pfVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  *param_3 = 3.4028235e+38;
  *param_4 = -3.4028235e+38;
  uVar2 = (ulong)*(uint *)(this + 0xc);
  if ((int)*(uint *)(this + 0xc) < 1) {
    fVar4 = -3.4028235e+38;
  }
  else {
    lVar3 = 0;
    do {
      pfVar1 = (float *)(*(long *)(this + 0x18) + lVar3);
      fVar9 = *pfVar1;
      fVar11 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar8 = fVar9 * *(float *)(param_1 + 0x10) + fVar11 * *(float *)(param_1 + 0x14) +
              fVar10 * *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x34);
      fVar4 = fVar9 * *(float *)param_1 + fVar11 * *(float *)(param_1 + 4) +
              fVar10 * *(float *)(param_1 + 8) + *(float *)(param_1 + 0x30);
      fVar9 = fVar9 * *(float *)(param_1 + 0x20) + fVar11 * *(float *)(param_1 + 0x24) +
              fVar10 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x38);
      fVar10 = fVar4 * *(float *)param_2 + fVar8 * *(float *)(param_2 + 4) +
               fVar9 * *(float *)(param_2 + 8);
      if (fVar10 < *param_3) {
        *param_3 = fVar10;
        *(float *)param_5 = fVar4;
        *(float *)(param_5 + 4) = fVar8;
        *(float *)(param_5 + 8) = fVar9;
        *(undefined4 *)(param_5 + 0xc) = 0;
      }
      if (*param_4 < fVar10) {
        *param_4 = fVar10;
        *(float *)param_6 = fVar4;
        *(float *)(param_6 + 4) = fVar8;
        *(float *)(param_6 + 8) = fVar9;
        *(undefined4 *)(param_6 + 0xc) = 0;
      }
      uVar2 = uVar2 - 1;
      lVar3 = lVar3 + 0x10;
    } while (uVar2 != 0);
    fVar4 = *param_4;
  }
  fVar8 = *param_3;
  if (fVar4 < fVar8) {
    *param_3 = fVar4;
    *param_4 = fVar8;
    uVar7 = *(undefined8 *)(param_5 + 8);
    uVar5 = *(undefined8 *)param_5;
    uVar6 = *(undefined8 *)param_6;
    *(undefined8 *)(param_5 + 8) = *(undefined8 *)(param_6 + 8);
    *(undefined8 *)param_5 = uVar6;
    *(undefined8 *)(param_6 + 8) = uVar7;
    *(undefined8 *)param_6 = uVar5;
  }
  return;
}

