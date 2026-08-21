
/* btSequentialImpulseConstraintSolver::~btSequentialImpulseConstraintSolver() */

void __thiscall
btSequentialImpulseConstraintSolver::~btSequentialImpulseConstraintSolver
          (btSequentialImpulseConstraintSolver *this)

{
  ~btSequentialImpulseConstraintSolver(this);
  btAlignedFreeInternal(this);
  return;
}

