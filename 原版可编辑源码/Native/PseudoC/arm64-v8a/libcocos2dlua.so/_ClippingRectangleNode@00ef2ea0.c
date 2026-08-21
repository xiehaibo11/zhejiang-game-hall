
/* cocos2d::ClippingRectangleNode::~ClippingRectangleNode() */

void __thiscall cocos2d::ClippingRectangleNode::~ClippingRectangleNode(ClippingRectangleNode *this)

{
  *(undefined ***)this = &PTR__ClippingRectangleNode_016fb838;
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x360));
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x310));
                    /* try { // try from 00ef2ed4 to 00ff2edb has its CatchHandler @ 00ef30a8 */
  Node::~Node((Node *)this);
                    /* try { // try from 00ef2edc to 00ff2f1f has its CatchHandler @ 00ef2e84 */
  operator_delete(this);
  return;
}

