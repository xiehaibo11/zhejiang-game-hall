
/* non-virtual thunk to cocos2d::LabelTTF::~LabelTTF() */

void __thiscall cocos2d::LabelTTF::~LabelTTF(LabelTTF *this)

{
                    /* catch() { ... } // from try @ 00f1233c with catch @ 00f12304 */
  *(undefined ***)(this + -0x2f8) = &PTR__LabelTTF_016fef70;
  *(undefined ***)(this + 8) = &PTR__LabelTTF_016ff510;
  *(undefined ***)this = &PTR__LabelTTF_016ff4e0;
                    /* try { // try from 00f12334 to 0101233b has its CatchHandler @ 00f123c8 */
  if (((byte)this[0x20] & 1) != 0) {
                    /* try { // try from 00f1233c to 010123e3 has its CatchHandler @ 00f12304 */
    operator_delete(*(void **)(this + 0x30));
  }
  Node::~Node((Node *)(this + -0x2f8));
  return;
}

