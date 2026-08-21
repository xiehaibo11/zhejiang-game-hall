
/* btSequentialImpulseConstraintSolver::applyAnisotropicFriction(btCollisionObject*, btVector3&,
   int) */

void btSequentialImpulseConstraintSolver::applyAnisotropicFriction
               (btCollisionObject *param_1,btVector3 *param_2,int param_3)

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
  
  if ((param_1 != (btCollisionObject *)0x0) && ((*(uint *)(param_1 + 0xb8) & param_3) != 0)) {
    fVar1 = *(float *)param_2;
    fVar2 = *(float *)(param_2 + 4);
    fVar6 = *(float *)(param_1 + 0x18);
    fVar7 = *(float *)(param_1 + 0x1c);
    fVar10 = *(float *)(param_1 + 0x20);
    fVar4 = *(float *)(param_2 + 8);
    fVar8 = *(float *)(param_1 + 0x28);
    fVar9 = *(float *)(param_1 + 0x2c);
    fVar11 = *(float *)(param_1 + 0x30);
    fVar3 = (*(float *)(param_1 + 8) * fVar1 + fVar6 * fVar2 + fVar8 * fVar4) *
            *(float *)(param_1 + 0xa8);
    fVar5 = (fVar1 * *(float *)(param_1 + 0xc) + fVar2 * fVar7 + fVar4 * fVar9) *
            *(float *)(param_1 + 0xac);
    fVar1 = (fVar1 * *(float *)(param_1 + 0x10) + fVar2 * fVar10 + fVar4 * fVar11) *
            *(float *)(param_1 + 0xb0);
    *(float *)param_2 =
         *(float *)(param_1 + 8) * fVar3 + *(float *)(param_1 + 0xc) * fVar5 +
         *(float *)(param_1 + 0x10) * fVar1;
    *(float *)(param_2 + 4) = fVar6 * fVar3 + fVar7 * fVar5 + fVar10 * fVar1;
    *(float *)(param_2 + 8) = fVar8 * fVar3 + fVar9 * fVar5 + fVar11 * fVar1;
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return;
}

