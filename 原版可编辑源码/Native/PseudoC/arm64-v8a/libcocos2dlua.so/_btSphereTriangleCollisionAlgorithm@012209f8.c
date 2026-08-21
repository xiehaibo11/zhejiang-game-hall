
/* btSphereTriangleCollisionAlgorithm::~btSphereTriangleCollisionAlgorithm() */

void __thiscall
btSphereTriangleCollisionAlgorithm::~btSphereTriangleCollisionAlgorithm
          (btSphereTriangleCollisionAlgorithm *this)

{
  *(undefined ***)this = &PTR__btSphereTriangleCollisionAlgorithm_017324e0;
  if ((this[0x10] != (btSphereTriangleCollisionAlgorithm)0x0) && (*(long *)(this + 0x18) != 0)) {
    (**(code **)(**(long **)(this + 8) + 0x20))();
  }
  btActivatingCollisionAlgorithm::~btActivatingCollisionAlgorithm
            ((btActivatingCollisionAlgorithm *)this);
  return;
}

