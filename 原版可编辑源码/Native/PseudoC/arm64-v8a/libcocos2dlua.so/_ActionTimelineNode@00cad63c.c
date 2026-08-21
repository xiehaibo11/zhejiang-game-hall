
/* cocostudio::timeline::ActionTimelineNode::~ActionTimelineNode() */

void __thiscall
cocostudio::timeline::ActionTimelineNode::~ActionTimelineNode(ActionTimelineNode *this)

{
  cocos2d::Node::~Node((Node *)this);
  operator_delete(this);
  return;
}

