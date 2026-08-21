
/* cocos2d::PUScaleAffector::~PUScaleAffector() */

void __thiscall cocos2d::PUScaleAffector::~PUScaleAffector(PUScaleAffector *this)

{
  *(undefined ***)this = &PTR__PUScaleAffector_016efc90;
  if (*(long **)(this + 0xb0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xb0) + 8))();
    *(undefined8 *)(this + 0xb0) = 0;
  }
  if (*(long **)(this + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xb8) + 8))();
    *(undefined8 *)(this + 0xb8) = 0;
  }
  if (*(long **)(this + 0xc0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xc0) + 8))();
    *(undefined8 *)(this + 0xc0) = 0;
  }
  if (*(long **)(this + 200) != (long *)0x0) {
    (**(code **)(**(long **)(this + 200) + 8))();
    *(undefined8 *)(this + 200) = 0;
  }
  PUAffector::~PUAffector((PUAffector *)this);
  return;
}

