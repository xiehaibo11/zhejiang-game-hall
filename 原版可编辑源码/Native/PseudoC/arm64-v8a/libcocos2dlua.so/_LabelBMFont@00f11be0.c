
/* non-virtual thunk to cocos2d::LabelBMFont::~LabelBMFont() */

void __thiscall cocos2d::LabelBMFont::~LabelBMFont(LabelBMFont *this)

{
  *(undefined ***)(this + -0x300) = &PTR__LabelBMFont_016fe948;
  *(undefined ***)this = &PTR__LabelBMFont_016feef8;
  *(undefined ***)(this + -8) = &PTR__LabelBMFont_016feec8;
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
  }
  Node::~Node((Node *)(this + -0x300));
  return;
}

