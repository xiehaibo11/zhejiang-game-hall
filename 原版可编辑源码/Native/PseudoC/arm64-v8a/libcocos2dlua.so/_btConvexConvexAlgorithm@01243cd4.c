
/* btConvexConvexAlgorithm::~btConvexConvexAlgorithm() */

void __thiscall btConvexConvexAlgorithm::~btConvexConvexAlgorithm(btConvexConvexAlgorithm *this)

{
  *(undefined ***)this = &PTR__btConvexConvexAlgorithm_01734478;
  if ((this[0x20] != (btConvexConvexAlgorithm)0x0) && (*(long *)(this + 0x28) != 0)) {
    (**(code **)(**(long **)(this + 8) + 0x20))();
  }
  btActivatingCollisionAlgorithm::~btActivatingCollisionAlgorithm
            ((btActivatingCollisionAlgorithm *)this);
  operator_delete(this);
  return;
}

