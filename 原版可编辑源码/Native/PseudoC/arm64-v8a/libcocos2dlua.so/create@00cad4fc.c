
/* cocostudio::timeline::ActionTimelineNode::create(cocos2d::Node*,
   cocostudio::timeline::ActionTimeline*) */

Node * cocostudio::timeline::ActionTimelineNode::create(Node *param_1,ActionTimeline *param_2)

{
  Node *this;
  
  this = operator_new(0x310,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    cocos2d::Node::Node(this);
    *(Node **)(this + 0x2f8) = param_1;
    *(ActionTimeline **)(this + 0x300) = param_2;
    *(undefined ***)this = &PTR__ActionTimelineNode_016cc780;
    if (param_1 != (Node *)0x0) {
      (**(code **)(*(long *)param_1 + 0x270))(param_1);
      (**(code **)(*(long *)this + 0x208))(this,*(undefined8 *)(this + 0x2f8));
    }
    cocos2d::Ref::autorelease((Ref *)this);
  }
  return this;
}

