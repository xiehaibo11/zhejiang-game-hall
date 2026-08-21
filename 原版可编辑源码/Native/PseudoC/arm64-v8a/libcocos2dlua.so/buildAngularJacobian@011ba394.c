
/* btGeneric6DofConstraint::buildAngularJacobian(btJacobianEntry&, btVector3 const&) */

void __thiscall
btGeneric6DofConstraint::buildAngularJacobian
          (btGeneric6DofConstraint *this,btJacobianEntry *param_1,btVector3 *param_2)

{
  long lVar1;
  long lVar2;
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  lVar1 = *(long *)(this + 0x28);
  lVar2 = *(long *)(this + 0x30);
  fVar3 = *(float *)(lVar1 + 8);
  fVar4 = *(float *)(lVar1 + 0xc);
  fVar5 = *(float *)(lVar1 + 0x18);
  fVar6 = *(float *)(lVar1 + 0x1c);
  fVar7 = *(float *)(lVar1 + 0x28);
  fVar8 = *(float *)(lVar1 + 0x2c);
  fVar9 = *(float *)(lVar1 + 0x10);
  fVar10 = *(float *)(lVar1 + 0x20);
  fVar11 = *(float *)(lVar1 + 0x30);
  fVar12 = *(float *)(lVar2 + 8);
  fVar13 = *(float *)(lVar2 + 0xc);
  fVar14 = *(float *)(lVar2 + 0x18);
  fVar15 = *(float *)(lVar2 + 0x1c);
  fVar16 = *(float *)(lVar2 + 0x28);
  fVar17 = *(float *)(lVar2 + 0x2c);
  fVar18 = *(float *)(lVar2 + 0x10);
  fVar19 = *(float *)(lVar2 + 0x20);
  fVar20 = *(float *)(lVar2 + 0x30);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  fVar21 = *(float *)param_2;
  fVar22 = *(float *)(param_2 + 4);
  fVar23 = *(float *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  fVar3 = fVar3 * fVar21 + fVar5 * fVar22 + fVar7 * fVar23;
  fVar4 = fVar4 * fVar21 + fVar6 * fVar22 + fVar8 * fVar23;
  fVar6 = fVar9 * fVar21 + fVar10 * fVar22 + fVar11 * fVar23;
  *(float *)(param_1 + 0x10) = fVar3;
  *(float *)(param_1 + 0x14) = fVar4;
  *(float *)(param_1 + 0x18) = fVar6;
  fVar5 = *(float *)param_2;
  fVar7 = *(float *)(param_2 + 4);
  fVar8 = *(float *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  fVar5 = -fVar5;
  fVar9 = (fVar12 * fVar5 - fVar14 * fVar7) - fVar16 * fVar8;
  fVar12 = (fVar13 * fVar5 - fVar15 * fVar7) - fVar17 * fVar8;
  fVar8 = (fVar18 * fVar5 - fVar19 * fVar7) - fVar20 * fVar8;
  *(float *)(param_1 + 0x20) = fVar9;
  *(float *)(param_1 + 0x24) = fVar12;
  *(float *)(param_1 + 0x28) = fVar8;
  fVar10 = *(float *)(lVar1 + 0x1a8);
  fVar13 = *(float *)(lVar1 + 0x1ac);
  fVar14 = *(float *)(lVar1 + 0x1b0);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  fVar10 = fVar3 * fVar10;
  fVar13 = fVar4 * fVar13;
  fVar14 = fVar6 * fVar14;
  *(float *)(param_1 + 0x30) = fVar10;
  *(float *)(param_1 + 0x34) = fVar13;
  *(float *)(param_1 + 0x38) = fVar14;
  fVar5 = fVar9 * *(float *)(lVar2 + 0x1a8);
  fVar7 = fVar12 * *(float *)(lVar2 + 0x1ac);
  fVar11 = fVar8 * *(float *)(lVar2 + 0x1b0);
  *(float *)(param_1 + 0x40) = fVar5;
  *(float *)(param_1 + 0x44) = fVar7;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(float *)(param_1 + 0x48) = fVar11;
  *(float *)(param_1 + 0x50) =
       fVar3 * fVar10 + fVar4 * fVar13 + fVar6 * fVar14 +
       fVar9 * fVar5 + fVar12 * fVar7 + fVar8 * fVar11;
  return;
}

