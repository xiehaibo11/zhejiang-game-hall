
/* __JSPlistDelegator::~__JSPlistDelegator() */

void __thiscall __JSPlistDelegator::~__JSPlistDelegator(__JSPlistDelegator *this)

{
  *(undefined ***)this = &PTR____JSPlistDelegator_01c678d8;
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  cocos2d::SAXParser::~SAXParser((SAXParser *)(this + 8));
  operator_delete(this);
  return;
}

