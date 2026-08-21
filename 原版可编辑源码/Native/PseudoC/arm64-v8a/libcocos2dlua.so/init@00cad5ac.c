
/* cocostudio::timeline::ActionTimelineNode::init(cocos2d::Node*,
   cocostudio::timeline::ActionTimeline*) */

undefined8 __thiscall
cocostudio::timeline::ActionTimelineNode::init
          (ActionTimelineNode *this,Node *param_1,ActionTimeline *param_2)

{
  *(Node **)(this + 0x2f8) = param_1;
  *(ActionTimeline **)(this + 0x300) = param_2;
  if (param_1 != (Node *)0x0) {
    (**(code **)(*(long *)param_1 + 0x270))(param_1);
    (**(code **)(*(long *)this + 0x208))(this,*(undefined8 *)(this + 0x2f8));
  }
  return 1;
}

