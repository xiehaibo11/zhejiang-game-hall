
/* btDefaultMotionState::setWorldTransform(btTransform const&) */

void __thiscall
btDefaultMotionState::setWorldTransform(btDefaultMotionState *this,btTransform *param_1)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  fVar5 = *(float *)(this + 0x48);
  fVar6 = *(float *)(this + 0x58);
  fVar4 = *(float *)param_1;
  fVar1 = *(float *)(param_1 + 4);
  fVar14 = *(float *)(param_1 + 0x10);
  fVar15 = *(float *)(param_1 + 0x14);
  fVar18 = *(float *)(param_1 + 0x20);
  fVar20 = *(float *)(param_1 + 0x24);
  fVar10 = (float)*(undefined8 *)(this + 0x4c);
  fVar11 = (float)((ulong)*(undefined8 *)(this + 0x4c) >> 0x20);
  fVar12 = (float)*(undefined8 *)(this + 0x5c);
  fVar13 = (float)((ulong)*(undefined8 *)(this + 0x5c) >> 0x20);
  fVar3 = *(float *)(this + 0x68);
  fVar2 = *(float *)(param_1 + 8);
  fVar17 = *(float *)(param_1 + 0x18);
  fVar16 = *(float *)(this + 0x78);
  fVar23 = *(float *)(this + 0x7c);
  fVar22 = *(float *)(param_1 + 0x28);
  fVar7 = *(float *)(this + 0x80);
  fVar8 = (float)*(undefined8 *)(this + 0x6c);
  fVar9 = (float)((ulong)*(undefined8 *)(this + 0x6c) >> 0x20);
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  fVar21 = *(float *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(float *)(this + 8) = fVar5 * fVar4 + fVar6 * fVar1 + fVar3 * fVar2;
  *(ulong *)(this + 0xc) =
       CONCAT44(fVar11 * fVar4 + fVar13 * fVar1 + fVar9 * fVar2,
                fVar10 * fVar4 + fVar12 * fVar1 + fVar8 * fVar2);
  *(float *)(this + 0x18) = fVar5 * fVar14 + fVar6 * fVar15 + fVar3 * fVar17;
  *(ulong *)(this + 0x1c) =
       CONCAT44(fVar11 * fVar14 + fVar13 * fVar15 + fVar9 * fVar17,
                fVar10 * fVar14 + fVar12 * fVar15 + fVar8 * fVar17);
  *(float *)(this + 0x28) = fVar5 * fVar18 + fVar6 * fVar20 + fVar3 * fVar22;
  *(ulong *)(this + 0x2c) =
       CONCAT44(fVar11 * fVar18 + fVar13 * fVar20 + fVar9 * fVar22,
                fVar10 * fVar18 + fVar12 * fVar20 + fVar8 * fVar22);
  *(float *)(this + 0x40) = fVar18 * fVar16 + fVar20 * fVar23 + fVar22 * fVar7 + fVar21;
  *(ulong *)(this + 0x38) =
       CONCAT44((float)((ulong)uVar19 >> 0x20) + fVar14 * fVar16 + fVar15 * fVar23 + fVar17 * fVar7,
                (float)uVar19 + fVar4 * fVar16 + fVar1 * fVar23 + fVar2 * fVar7);
  *(undefined4 *)(this + 0x44) = 0;
  return;
}

