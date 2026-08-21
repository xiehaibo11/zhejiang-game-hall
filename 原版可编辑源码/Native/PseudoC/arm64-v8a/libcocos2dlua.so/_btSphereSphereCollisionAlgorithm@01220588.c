
/* btSphereSphereCollisionAlgorithm::~btSphereSphereCollisionAlgorithm() */

void __thiscall
btSphereSphereCollisionAlgorithm::~btSphereSphereCollisionAlgorithm
          (btSphereSphereCollisionAlgorithm *this)

{
  *(undefined ***)this = &PTR__btSphereSphereCollisionAlgorithm_01732480;
  if ((this[0x10] != (btSphereSphereCollisionAlgorithm)0x0) && (*(long *)(this + 0x18) != 0)) {
    (**(code **)(**(long **)(this + 8) + 0x20))();
  }
  btActivatingCollisionAlgorithm::~btActivatingCollisionAlgorithm
            ((btActivatingCollisionAlgorithm *)this);
  return;
}

