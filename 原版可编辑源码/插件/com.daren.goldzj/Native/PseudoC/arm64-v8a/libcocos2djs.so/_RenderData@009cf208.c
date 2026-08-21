
/* cocos2d::renderer::RenderData::~RenderData() */

void __thiscall cocos2d::renderer::RenderData::~RenderData(RenderData *this)

{
  *(undefined ***)this = &PTR__RenderData_01c6b6d8;
  if (*(Object **)(this + 0x28) != (Object *)0x0) {
    se::Object::unroot(*(Object **)(this + 0x28));
    se::RefCounter::decRef(*(RefCounter **)(this + 0x28));
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 8) = 0;
  }
  if (*(Object **)(this + 0x30) != (Object *)0x0) {
    se::Object::unroot(*(Object **)(this + 0x30));
    se::RefCounter::decRef(*(RefCounter **)(this + 0x30));
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}

