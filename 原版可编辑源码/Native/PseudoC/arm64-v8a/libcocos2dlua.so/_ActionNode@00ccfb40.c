
/* cocostudio::ActionNode::~ActionNode() */

void __thiscall cocostudio::ActionNode::~ActionNode(ActionNode *this)

{
  ~ActionNode(this);
  operator_delete(this);
  return;
}

