
/* non-virtual thunk to cocos2d::LabelTTF::~LabelTTF() */

void __thiscall cocos2d::LabelTTF::~LabelTTF(LabelTTF *this)

{
  Node *this_00;
  
  this_00 = (Node *)(this + -0x300);
  *(undefined ***)this_00 = &PTR__LabelTTF_016fef70;
  *(undefined ***)this = &PTR__LabelTTF_016ff510;
  *(undefined ***)(this + -8) = &PTR__LabelTTF_016ff4e0;
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  Node::~Node(this_00);
  operator_delete(this_00);
  return;
}

