
/* cocos2d::Component::~Component() */

void __thiscall cocos2d::Component::~Component(Component *this)

{
                    /* catch() { ... } // from try @ 00ef2f2c with catch @ 00ef306c */
  *(undefined ***)this = &PTR__Component_016fbe40;
  if (((byte)this[0x30] & 1) != 0) {
                    /* catch() { ... } // from try @ 00ef2f20 with catch @ 00ef308c */
    operator_delete(*(void **)(this + 0x40));
  }
  Ref::~Ref((Ref *)this);
                    /* catch() { ... } // from try @ 00ef2ed4 with catch @ 00ef30a8 */
  operator_delete(this);
  return;
}

