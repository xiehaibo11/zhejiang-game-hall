
/* cocostudio::BatchNode::~BatchNode() */

void __thiscall cocostudio::BatchNode::~BatchNode(BatchNode *this)

{
  *(undefined ***)this = &PTR__BatchNode_016c9028;
  if (*(long **)(this + 0x2f8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x2f8) + 8))();
  }
  *(undefined8 *)(this + 0x2f8) = 0;
  cocos2d::Node::~Node((Node *)this);
  operator_delete(this);
  return;
}

