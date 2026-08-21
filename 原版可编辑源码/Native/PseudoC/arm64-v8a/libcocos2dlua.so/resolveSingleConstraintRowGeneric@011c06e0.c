
/* btSequentialImpulseConstraintSolver::resolveSingleConstraintRowGeneric(btSolverBody&,
   btSolverBody&, btSolverConstraint const&) */

void __thiscall
btSequentialImpulseConstraintSolver::resolveSingleConstraintRowGeneric
          (btSequentialImpulseConstraintSolver *this,btSolverBody *param_1,btSolverBody *param_2,
          btSolverConstraint *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)(param_3 + 100);
  fVar2 = *(float *)(param_3 + 0x14);
  fVar3 = *(float *)(param_3 + 0x18);
  fVar1 = ((*(float *)(param_3 + 0x70) - fVar5 * *(float *)(param_3 + 0x74)) -
          (*(float *)(param_3 + 0x10) * *(float *)(param_1 + 0x40) +
           fVar2 * *(float *)(param_1 + 0x44) + fVar3 * *(float *)(param_1 + 0x48) +
          *(float *)param_3 * *(float *)(param_1 + 0x50) +
          (float)*(undefined8 *)(param_3 + 4) * (float)*(undefined8 *)(param_1 + 0x54) +
          (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20) *
          (float)((ulong)*(undefined8 *)(param_1 + 0x54) >> 0x20)) * *(float *)(param_3 + 0x6c)) -
          *(float *)(param_3 + 0x6c) *
          (*(float *)(param_3 + 0x30) * *(float *)(param_2 + 0x40) +
           (float)*(undefined8 *)(param_3 + 0x34) * (float)*(undefined8 *)(param_2 + 0x44) +
           (float)((ulong)*(undefined8 *)(param_3 + 0x34) >> 0x20) *
           (float)((ulong)*(undefined8 *)(param_2 + 0x44) >> 0x20) +
          *(float *)(param_3 + 0x20) * *(float *)(param_2 + 0x50) +
          (float)*(undefined8 *)(param_3 + 0x24) * (float)*(undefined8 *)(param_2 + 0x54) +
          (float)((ulong)*(undefined8 *)(param_3 + 0x24) >> 0x20) *
          (float)((ulong)*(undefined8 *)(param_2 + 0x54) >> 0x20));
  fVar6 = fVar5 + fVar1;
  fVar4 = *(float *)(param_3 + 0x78);
  if ((fVar6 < *(float *)(param_3 + 0x78)) ||
     (fVar4 = *(float *)(param_3 + 0x7c), *(float *)(param_3 + 0x7c) < fVar6)) {
    fVar6 = fVar4;
    fVar1 = fVar6 - fVar5;
  }
  *(float *)(param_3 + 100) = fVar6;
  if (*(long *)(param_1 + 0xf0) != 0) {
    *(float *)(param_1 + 0x40) =
         fVar1 * *(float *)(param_3 + 0x10) * *(float *)(param_1 + 0x80) *
         *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x44) =
         fVar1 * fVar2 * *(float *)(param_1 + 0x84) * *(float *)(param_1 + 0x74) +
         *(float *)(param_1 + 0x44);
    *(float *)(param_1 + 0x48) =
         fVar1 * fVar3 * *(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x78) +
         *(float *)(param_1 + 0x48);
    fVar2 = *(float *)(param_3 + 0x44);
    fVar4 = *(float *)(param_3 + 0x48);
    *(float *)(param_1 + 0x50) =
         fVar1 * *(float *)(param_1 + 0x60) * *(float *)(param_3 + 0x40) +
         *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x54) =
         fVar1 * *(float *)(param_1 + 100) * fVar2 + *(float *)(param_1 + 0x54);
    *(float *)(param_1 + 0x58) =
         fVar1 * *(float *)(param_1 + 0x68) * fVar4 + *(float *)(param_1 + 0x58);
  }
  if (*(long *)(param_2 + 0xf0) != 0) {
    fVar4 = *(float *)(param_3 + 0x34);
    fVar2 = *(float *)(param_3 + 0x38);
    *(float *)(param_2 + 0x40) =
         fVar1 * *(float *)(param_3 + 0x30) * *(float *)(param_2 + 0x80) *
         *(float *)(param_2 + 0x70) + *(float *)(param_2 + 0x40);
    *(float *)(param_2 + 0x44) =
         fVar1 * fVar4 * *(float *)(param_2 + 0x84) * *(float *)(param_2 + 0x74) +
         *(float *)(param_2 + 0x44);
    *(float *)(param_2 + 0x48) =
         fVar1 * fVar2 * *(float *)(param_2 + 0x88) * *(float *)(param_2 + 0x78) +
         *(float *)(param_2 + 0x48);
    fVar4 = *(float *)(param_3 + 0x54);
    fVar2 = *(float *)(param_3 + 0x58);
    *(float *)(param_2 + 0x50) =
         fVar1 * *(float *)(param_2 + 0x60) * *(float *)(param_3 + 0x50) +
         *(float *)(param_2 + 0x50);
    *(float *)(param_2 + 0x54) =
         fVar1 * *(float *)(param_2 + 100) * fVar4 + *(float *)(param_2 + 0x54);
    *(float *)(param_2 + 0x58) =
         fVar1 * *(float *)(param_2 + 0x68) * fVar2 + *(float *)(param_2 + 0x58);
  }
  return;
}

