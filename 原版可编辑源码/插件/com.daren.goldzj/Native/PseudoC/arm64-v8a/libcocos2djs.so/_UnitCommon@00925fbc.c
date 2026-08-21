
/* cocos2d::renderer::UnitCommon::~UnitCommon() */

void __thiscall cocos2d::renderer::UnitCommon::~UnitCommon(UnitCommon *this)

{
  *(undefined ***)this = &PTR__UnitCommon_01c69640;
  if (*(Object **)(this + 0x10) != (Object *)0x0) {
    se::Object::unroot(*(Object **)(this + 0x10));
    se::RefCounter::decRef(*(RefCounter **)(this + 0x10));
    *(undefined8 *)(this + 0x10) = 0;
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if (*(Object **)(this + 0x28) != (Object *)0x0) {
    se::Object::unroot(*(Object **)(this + 0x28));
    se::RefCounter::decRef(*(RefCounter **)(this + 0x28));
  }
  operator_delete(this);
  return;
}

