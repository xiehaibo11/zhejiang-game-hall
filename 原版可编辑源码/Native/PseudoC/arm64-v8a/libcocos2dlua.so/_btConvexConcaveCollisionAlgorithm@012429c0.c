
/* btConvexConcaveCollisionAlgorithm::~btConvexConcaveCollisionAlgorithm() */

void __thiscall
btConvexConcaveCollisionAlgorithm::~btConvexConcaveCollisionAlgorithm
          (btConvexConcaveCollisionAlgorithm *this)

{
  *(undefined ***)this = &PTR__btConvexConcaveCollisionAlgorithm_01734370;
  *(undefined ***)(this + 0x18) = &PTR__btConvexTriangleCallback_017343a8;
  (**(code **)(**(long **)(this + 0x58) + 0x28))
            (*(long **)(this + 0x58),*(undefined8 *)(this + 0x70));
  (**(code **)(**(long **)(this + 0x58) + 0x20))
            (*(long **)(this + 0x58),*(undefined8 *)(this + 0x70));
  btTriangleCallback::~btTriangleCallback((btTriangleCallback *)(this + 0x18));
  btActivatingCollisionAlgorithm::~btActivatingCollisionAlgorithm
            ((btActivatingCollisionAlgorithm *)this);
  return;
}

