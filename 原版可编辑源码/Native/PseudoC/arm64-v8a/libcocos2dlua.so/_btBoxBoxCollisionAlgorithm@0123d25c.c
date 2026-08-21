
/* btBoxBoxCollisionAlgorithm::~btBoxBoxCollisionAlgorithm() */

void __thiscall
btBoxBoxCollisionAlgorithm::~btBoxBoxCollisionAlgorithm(btBoxBoxCollisionAlgorithm *this)

{
  *(undefined ***)this = &PTR__btBoxBoxCollisionAlgorithm_01734140;
  if ((this[0x10] != (btBoxBoxCollisionAlgorithm)0x0) && (*(long *)(this + 0x18) != 0)) {
    (**(code **)(**(long **)(this + 8) + 0x20))();
  }
  btActivatingCollisionAlgorithm::~btActivatingCollisionAlgorithm
            ((btActivatingCollisionAlgorithm *)this);
  return;
}

