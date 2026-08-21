
/* cocos2d::PUAbstractNode::~PUAbstractNode() */

void __thiscall cocos2d::PUAbstractNode::~PUAbstractNode(PUAbstractNode *this)

{
  *(undefined ***)this = &PTR__PUAbstractNode_016f20f8;
  if (((byte)this[8] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}

