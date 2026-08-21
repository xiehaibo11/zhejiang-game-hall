
/* cocos2d::ui::RichElementCustomNode::~RichElementCustomNode() */

void __thiscall
cocos2d::ui::RichElementCustomNode::~RichElementCustomNode(RichElementCustomNode *this)

{
  *(undefined ***)this = &PTR__RichElementCustomNode_0169e168;
                    /* catch() { ... } // from try @ 0099b348 with catch @ 0099ba80 */
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
  Ref::~Ref((Ref *)this);
  return;
}

