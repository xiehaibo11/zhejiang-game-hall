
/* cocos2d::LabelTTF::~LabelTTF() */

void __thiscall cocos2d::LabelTTF::~LabelTTF(LabelTTF *this)

{
                    /* catch() { ... } // from try @ 00f120e0 with catch @ 00f122b0 */
                    /* catch() { ... } // from try @ 00f11f3c with catch @ 00f122b4 */
                    /* catch() { ... } // from try @ 00f120f0 with catch @ 00f122c4 */
                    /* catch() { ... } // from try @ 00f11f4c with catch @ 00f122c8 */
  *(undefined ***)this = &PTR__LabelTTF_016fef70;
  *(undefined ***)(this + 0x300) = &PTR__LabelTTF_016ff510;
  *(undefined ***)(this + 0x2f8) = &PTR__LabelTTF_016ff4e0;
  if (((byte)this[0x318] & 1) != 0) {
    operator_delete(*(void **)(this + 0x328));
  }
  Node::~Node((Node *)this);
  return;
}

