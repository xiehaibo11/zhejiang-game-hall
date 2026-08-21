
/* btConvexPlaneCollisionAlgorithm::~btConvexPlaneCollisionAlgorithm() */

void __thiscall
btConvexPlaneCollisionAlgorithm::~btConvexPlaneCollisionAlgorithm
          (btConvexPlaneCollisionAlgorithm *this)

{
  *(undefined ***)this = &PTR__btConvexPlaneCollisionAlgorithm_017345e0;
  if ((this[0x10] != (btConvexPlaneCollisionAlgorithm)0x0) && (*(long *)(this + 0x18) != 0)) {
    (**(code **)(**(long **)(this + 8) + 0x20))();
  }
  operator_delete(this);
  return;
}

