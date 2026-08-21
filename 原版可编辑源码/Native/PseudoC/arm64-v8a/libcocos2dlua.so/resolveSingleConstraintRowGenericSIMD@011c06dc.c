
/* btSequentialImpulseConstraintSolver::resolveSingleConstraintRowGenericSIMD(btSolverBody&,
   btSolverBody&, btSolverConstraint const&) */

void btSequentialImpulseConstraintSolver::resolveSingleConstraintRowGenericSIMD
               (btSolverBody *param_1,btSolverBody *param_2,btSolverConstraint *param_3)

{
  btSolverConstraint *in_x3;
  
  resolveSingleConstraintRowGeneric
            ((btSequentialImpulseConstraintSolver *)param_1,param_2,(btSolverBody *)param_3,in_x3);
  return;
}

