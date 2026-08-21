
/* cocos2d::LabelTTF::~LabelTTF() */

void __thiscall cocos2d::LabelTTF::~LabelTTF(LabelTTF *this)

{
                    /* catch() { ... } // from try @ 00f12334 with catch @ 00f123c8 */
  *(undefined ***)this = &PTR__LabelTTF_016fef70;
  *(undefined ***)(this + 0x300) = &PTR__LabelTTF_016ff510;
  *(undefined ***)(this + 0x2f8) = &PTR__LabelTTF_016ff4e0;
  if (((byte)this[0x318] & 1) != 0) {
    operator_delete(*(void **)(this + 0x328));
  }
  Node::~Node((Node *)this);
  operator_delete(this);
  return;
}

