
/* btJacobianEntry::btJacobianEntry(btMatrix3x3 const&, btMatrix3x3 const&, btVector3 const&,
   btVector3 const&, btVector3 const&, btVector3 const&, float, btVector3 const&, float) */

void __thiscall
btJacobianEntry::btJacobianEntry
          (btJacobianEntry *this,btMatrix3x3 *param_1,btMatrix3x3 *param_2,btVector3 *param_3,
          btVector3 *param_4,btVector3 *param_5,btVector3 *param_6,float param_7,btVector3 *param_8,
          float param_9)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar2 = *(undefined8 *)param_5;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_5 + 8);
  *(undefined8 *)this = uVar2;
  fVar7 = *(float *)(this + 4);
  fVar3 = *(float *)(this + 8);
  fVar6 = *(float *)this;
  fVar10 = *(float *)(param_3 + 4) * fVar3 - *(float *)(param_3 + 8) * fVar7;
  fVar4 = *(float *)(param_3 + 8) * fVar6 - fVar3 * *(float *)param_3;
  fVar1 = fVar7 * *(float *)param_3 - *(float *)(param_3 + 4) * fVar6;
  fVar5 = fVar10 * *(float *)param_1 + *(float *)(param_1 + 4) * fVar4 +
          fVar1 * *(float *)(param_1 + 8);
  fVar8 = fVar10 * *(float *)(param_1 + 0x10) + fVar4 * *(float *)(param_1 + 0x14) +
          fVar1 * *(float *)(param_1 + 0x18);
  fVar1 = fVar10 * *(float *)(param_1 + 0x20) + fVar4 * *(float *)(param_1 + 0x24) +
          fVar1 * *(float *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x1c) = 0;
  *(float *)(this + 0x10) = fVar5;
  *(float *)(this + 0x14) = fVar8;
  *(float *)(this + 0x18) = fVar1;
  fVar10 = *(float *)param_4 * fVar3 - *(float *)(param_4 + 8) * fVar6;
  fVar4 = *(float *)(param_4 + 4) * fVar6 - *(float *)param_4 * fVar7;
  fVar3 = *(float *)(param_4 + 8) * fVar7 - *(float *)(param_4 + 4) * fVar3;
  fVar6 = *(float *)param_2 * fVar3 + *(float *)(param_2 + 4) * fVar10 +
          fVar4 * *(float *)(param_2 + 8);
  fVar7 = fVar3 * *(float *)(param_2 + 0x10) + fVar10 * *(float *)(param_2 + 0x14) +
          fVar4 * *(float *)(param_2 + 0x18);
  fVar3 = fVar3 * *(float *)(param_2 + 0x20) + fVar10 * *(float *)(param_2 + 0x24) +
          fVar4 * *(float *)(param_2 + 0x28);
  *(undefined4 *)(this + 0x2c) = 0;
  *(float *)(this + 0x20) = fVar6;
  *(float *)(this + 0x24) = fVar7;
  *(float *)(this + 0x28) = fVar3;
  fVar5 = *(float *)param_6 * fVar5;
  fVar4 = *(float *)(param_6 + 8);
  fVar8 = *(float *)(param_6 + 4) * fVar8;
  *(undefined4 *)(this + 0x3c) = 0;
  fVar4 = fVar4 * fVar1;
  *(float *)(this + 0x30) = fVar5;
  *(float *)(this + 0x34) = fVar8;
  *(float *)(this + 0x38) = fVar4;
  fVar1 = *(float *)param_8;
  fVar10 = *(float *)(param_8 + 4);
  fVar9 = *(float *)(param_8 + 8);
  *(float *)(this + 0x40) = fVar1 * fVar6;
  *(float *)(this + 0x44) = fVar10 * fVar7;
  *(undefined4 *)(this + 0x4c) = 0;
  *(float *)(this + 0x48) = fVar9 * fVar3;
  *(float *)(this + 0x50) =
       fVar5 * *(float *)(this + 0x10) + fVar8 * *(float *)(this + 0x14) +
       fVar4 * *(float *)(this + 0x18) + param_7 + param_9 +
       fVar1 * fVar6 * fVar6 + fVar10 * fVar7 * fVar7 + fVar9 * fVar3 * fVar3;
  return;
}

