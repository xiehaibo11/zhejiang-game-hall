
/* btSequentialImpulseConstraintSolver::resolveSplitPenetrationSIMD(btSolverBody&, btSolverBody&,
   btSolverConstraint const&) */

void __thiscall
btSequentialImpulseConstraintSolver::resolveSplitPenetrationSIMD
          (btSequentialImpulseConstraintSolver *this,btSolverBody *param_1,btSolverBody *param_2,
          btSolverConstraint *param_3)

{
  resolveSplitPenetrationImpulseCacheFriendly(this,param_1,param_2,param_3);
  return;
}

