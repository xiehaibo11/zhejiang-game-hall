
/* InplaceSolverIslandCallback::~InplaceSolverIslandCallback() */

void __thiscall
InplaceSolverIslandCallback::~InplaceSolverIslandCallback(InplaceSolverIslandCallback *this)

{
  ~InplaceSolverIslandCallback(this);
  operator_delete(this);
  return;
}

