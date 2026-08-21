
/* cocos2d::FontDefinition::~FontDefinition() */

void __thiscall cocos2d::FontDefinition::~FontDefinition(FontDefinition *this)

{
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}

