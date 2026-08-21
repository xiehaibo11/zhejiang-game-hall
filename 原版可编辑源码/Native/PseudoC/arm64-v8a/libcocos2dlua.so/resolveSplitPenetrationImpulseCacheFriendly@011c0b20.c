
/* btSequentialImpulseConstraintSolver::resolveSplitPenetrationImpulseCacheFriendly(btSolverBody&,
   btSolverBody&, btSolverConstraint const&) */

void __thiscall
btSequentialImpulseConstraintSolver::resolveSplitPenetrationImpulseCacheFriendly
          (btSequentialImpulseConstraintSolver *this,btSolverBody *param_1,btSolverBody *param_2,
          btSolverConstraint *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(float *)(param_3 + 0x80) != 0.0) {
    gNumSplitImpulseRecoveries = gNumSplitImpulseRecoveries + 1;
    fVar1 = *(float *)(param_3 + 0x60);
    fVar7 = *(float *)(param_3 + 0x78);
    fVar3 = *(float *)(param_3 + 0x14);
    fVar5 = *(float *)(param_3 + 0x18);
    fVar4 = ((*(float *)(param_3 + 0x80) - fVar1 * *(float *)(param_3 + 0x74)) -
            (*(float *)(param_3 + 0x10) * *(float *)(param_1 + 0x90) +
             fVar3 * *(float *)(param_1 + 0x94) + fVar5 * *(float *)(param_1 + 0x98) +
            *(float *)param_3 * *(float *)(param_1 + 0xa0) +
            (float)*(undefined8 *)(param_3 + 4) * (float)*(undefined8 *)(param_1 + 0xa4) +
            (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20) *
            (float)((ulong)*(undefined8 *)(param_1 + 0xa4) >> 0x20)) * *(float *)(param_3 + 0x6c)) -
            *(float *)(param_3 + 0x6c) *
            (*(float *)(param_3 + 0x30) * *(float *)(param_2 + 0x90) +
             (float)*(undefined8 *)(param_3 + 0x34) * (float)*(undefined8 *)(param_2 + 0x94) +
             (float)((ulong)*(undefined8 *)(param_3 + 0x34) >> 0x20) *
             (float)((ulong)*(undefined8 *)(param_2 + 0x94) >> 0x20) +
            *(float *)(param_3 + 0x20) * *(float *)(param_2 + 0xa0) +
            (float)*(undefined8 *)(param_3 + 0x24) * (float)*(undefined8 *)(param_2 + 0xa4) +
            (float)((ulong)*(undefined8 *)(param_3 + 0x24) >> 0x20) *
            (float)((ulong)*(undefined8 *)(param_2 + 0xa4) >> 0x20));
    fVar6 = fVar1 + fVar4;
    fVar2 = fVar7;
    if (fVar7 <= fVar6) {
      fVar2 = fVar6;
    }
    *(float *)(param_3 + 0x60) = fVar2;
    fVar2 = fVar7 - fVar1;
    if (fVar7 <= fVar6) {
      fVar2 = fVar4;
    }
    if (*(long *)(param_1 + 0xf0) != 0) {
      *(float *)(param_1 + 0x90) =
           fVar2 * *(float *)(param_3 + 0x10) * *(float *)(param_1 + 0x80) *
           *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x90);
      *(float *)(param_1 + 0x94) =
           fVar2 * fVar3 * *(float *)(param_1 + 0x84) * *(float *)(param_1 + 0x74) +
           *(float *)(param_1 + 0x94);
      *(float *)(param_1 + 0x98) =
           fVar2 * fVar5 * *(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x78) +
           *(float *)(param_1 + 0x98);
      fVar3 = *(float *)(param_3 + 0x44);
      fVar1 = *(float *)(param_3 + 0x48);
      *(float *)(param_1 + 0xa0) =
           fVar2 * *(float *)(param_1 + 0x60) * *(float *)(param_3 + 0x40) +
           *(float *)(param_1 + 0xa0);
      *(float *)(param_1 + 0xa4) =
           fVar2 * *(float *)(param_1 + 100) * fVar3 + *(float *)(param_1 + 0xa4);
      *(float *)(param_1 + 0xa8) =
           fVar2 * *(float *)(param_1 + 0x68) * fVar1 + *(float *)(param_1 + 0xa8);
    }
    if (*(long *)(param_2 + 0xf0) != 0) {
      fVar1 = *(float *)(param_3 + 0x34);
      fVar3 = *(float *)(param_3 + 0x38);
      *(float *)(param_2 + 0x90) =
           fVar2 * *(float *)(param_3 + 0x30) * *(float *)(param_2 + 0x80) *
           *(float *)(param_2 + 0x70) + *(float *)(param_2 + 0x90);
      *(float *)(param_2 + 0x94) =
           fVar2 * fVar1 * *(float *)(param_2 + 0x84) * *(float *)(param_2 + 0x74) +
           *(float *)(param_2 + 0x94);
      *(float *)(param_2 + 0x98) =
           fVar2 * fVar3 * *(float *)(param_2 + 0x88) * *(float *)(param_2 + 0x78) +
           *(float *)(param_2 + 0x98);
      fVar1 = *(float *)(param_3 + 0x54);
      fVar3 = *(float *)(param_3 + 0x58);
      *(float *)(param_2 + 0xa0) =
           fVar2 * *(float *)(param_2 + 0x60) * *(float *)(param_3 + 0x50) +
           *(float *)(param_2 + 0xa0);
      *(float *)(param_2 + 0xa4) =
           fVar2 * *(float *)(param_2 + 100) * fVar1 + *(float *)(param_2 + 0xa4);
      *(float *)(param_2 + 0xa8) =
           fVar2 * *(float *)(param_2 + 0x68) * fVar3 + *(float *)(param_2 + 0xa8);
    }
  }
  return;
}

