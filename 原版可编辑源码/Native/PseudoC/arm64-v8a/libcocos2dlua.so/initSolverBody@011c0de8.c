
/* btSequentialImpulseConstraintSolver::initSolverBody(btSolverBody*, btCollisionObject*, float) */

void __thiscall
btSequentialImpulseConstraintSolver::initSolverBody
          (btSequentialImpulseConstraintSolver *this,btSolverBody *param_1,
          btCollisionObject *param_2,float param_3)

{
  btCollisionObject *pbVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (param_2 == (btCollisionObject *)0x0) {
    pbVar1 = (btCollisionObject *)0x0;
  }
  else {
    pbVar1 = (btCollisionObject *)0x0;
    if (((byte)param_2[0x100] & 2) != 0) {
      pbVar1 = param_2;
    }
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (pbVar1 == (btCollisionObject *)0x0) {
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)param_1 = 0x3f800000;
    *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
    *(undefined8 *)(param_1 + 100) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x70) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x78) = 0x3f800000;
    return;
  }
  uVar3 = *(undefined8 *)(pbVar1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pbVar1 + 0x10);
  *(undefined8 *)param_1 = uVar3;
  uVar3 = *(undefined8 *)(pbVar1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(pbVar1 + 0x20);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  uVar3 = *(undefined8 *)(pbVar1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(pbVar1 + 0x30);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  uVar3 = *(undefined8 *)(pbVar1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(pbVar1 + 0x40);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  fVar2 = *(float *)(pbVar1 + 0x174);
  fVar4 = *(float *)(pbVar1 + 0x178);
  fVar5 = *(float *)(pbVar1 + 0x17c);
  fVar6 = *(float *)(pbVar1 + 0x180);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(btCollisionObject **)(param_1 + 0xf0) = pbVar1;
  *(float *)(param_1 + 0x80) = fVar2 * fVar4;
  *(float *)(param_1 + 0x84) = fVar2 * fVar5;
  *(float *)(param_1 + 0x88) = fVar2 * fVar6;
  uVar3 = *(undefined8 *)(pbVar1 + 0x250);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(pbVar1 + 600);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  uVar3 = *(undefined8 *)(pbVar1 + 0x178);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(pbVar1 + 0x180);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  uVar3 = *(undefined8 *)(pbVar1 + 0x154);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(pbVar1 + 0x15c);
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  uVar3 = *(undefined8 *)(pbVar1 + 0x164);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(pbVar1 + 0x16c);
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  fVar2 = *(float *)(pbVar1 + 0x174);
  fVar4 = *(float *)(pbVar1 + 0x1b8);
  fVar5 = *(float *)(pbVar1 + 0x1bc);
  fVar6 = *(float *)(pbVar1 + 0x1c0);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(float *)(param_1 + 0xd0) = fVar2 * fVar4 * param_3;
  *(float *)(param_1 + 0xd4) = fVar2 * fVar5 * param_3;
  *(float *)(param_1 + 0xd8) = fVar2 * fVar6 * param_3;
  fVar2 = *(float *)(pbVar1 + 0x1c8);
  fVar6 = *(float *)(pbVar1 + 0x128);
  fVar9 = *(float *)(pbVar1 + 300);
  fVar4 = *(float *)(pbVar1 + 0x1cc);
  fVar7 = *(float *)(pbVar1 + 0x138);
  fVar11 = *(float *)(pbVar1 + 0x13c);
  fVar5 = *(float *)(pbVar1 + 0x1d0);
  fVar8 = *(float *)(pbVar1 + 0x148);
  fVar10 = *(float *)(pbVar1 + 0x14c);
  *(float *)(param_1 + 0xe0) =
       (*(float *)(pbVar1 + 0x124) * fVar2 + *(float *)(pbVar1 + 0x134) * fVar4 +
       *(float *)(pbVar1 + 0x144) * fVar5) * param_3;
  *(float *)(param_1 + 0xe4) = (fVar2 * fVar6 + fVar4 * fVar7 + fVar5 * fVar8) * param_3;
  *(float *)(param_1 + 0xe8) = (fVar2 * fVar9 + fVar4 * fVar11 + fVar5 * fVar10) * param_3;
  *(undefined4 *)(param_1 + 0xec) = 0;
  return;
}

