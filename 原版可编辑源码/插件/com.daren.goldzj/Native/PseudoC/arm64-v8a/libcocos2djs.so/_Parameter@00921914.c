
/* cocos2d::renderer::Technique::Parameter::~Parameter() */

void __thiscall cocos2d::renderer::Technique::Parameter::~Parameter(Parameter *this)

{
  freeValue(this);
  if (((byte)this[0x10] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x20));
  return;
}

