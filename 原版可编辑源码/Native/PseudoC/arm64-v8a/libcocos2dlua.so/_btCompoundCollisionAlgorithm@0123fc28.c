
/* btCompoundCollisionAlgorithm::~btCompoundCollisionAlgorithm() */

void __thiscall
btCompoundCollisionAlgorithm::~btCompoundCollisionAlgorithm(btCompoundCollisionAlgorithm *this)

{
  ~btCompoundCollisionAlgorithm(this);
  operator_delete(this);
  return;
}

