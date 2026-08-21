
/* cocos2d::Component::~Component() */

void __thiscall cocos2d::Component::~Component(Component *this)

{
                    /* catch() { ... } // from try @ 00ef2f44 with catch @ 00ef3038 */
  *(undefined ***)this = &PTR__Component_016fbe40;
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  Ref::~Ref((Ref *)this);
  return;
}

