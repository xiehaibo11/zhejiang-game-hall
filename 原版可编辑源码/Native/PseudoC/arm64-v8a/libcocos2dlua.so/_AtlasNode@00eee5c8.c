
/* non-virtual thunk to cocos2d::AtlasNode::~AtlasNode() */

void __thiscall cocos2d::AtlasNode::~AtlasNode(AtlasNode *this)

{
  *(undefined ***)(this + -0x2f8) = &PTR__AtlasNode_016fa528;
  *(undefined ***)this = &PTR__AtlasNode_016faa90;
  if (*(Ref **)(this + 0x20) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x20));
  }
  QuadCommand::~QuadCommand((QuadCommand *)(this + 0x48));
  Node::~Node((Node *)(this + -0x2f8));
  return;
}

