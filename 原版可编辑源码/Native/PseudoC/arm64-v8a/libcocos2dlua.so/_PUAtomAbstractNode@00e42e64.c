
/* cocos2d::PUAtomAbstractNode::~PUAtomAbstractNode() */

void __thiscall cocos2d::PUAtomAbstractNode::~PUAtomAbstractNode(PUAtomAbstractNode *this)

{
  *(undefined ***)this = &PTR__PUAtomAbstractNode_016f2040;
  if (((byte)this[0x38] & 1) != 0) {
    operator_delete(*(void **)(this + 0x48));
  }
  *(undefined ***)this = &PTR__PUAbstractNode_016f20f8;
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
  }
  operator_delete(this);
  return;
}

