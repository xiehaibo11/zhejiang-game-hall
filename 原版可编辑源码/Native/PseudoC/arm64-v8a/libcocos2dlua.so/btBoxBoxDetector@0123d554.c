
/* btBoxBoxDetector::btBoxBoxDetector(btBoxShape const*, btBoxShape const*) */

void __thiscall
btBoxBoxDetector::btBoxBoxDetector(btBoxBoxDetector *this,btBoxShape *param_1,btBoxShape *param_2)

{
  *(btBoxShape **)(this + 0x10) = param_2;
  *(undefined ***)this = &PTR__btDiscreteCollisionDetectorInterface_017341a0;
  *(btBoxShape **)(this + 8) = param_1;
  return;
}

