
/* cocostudio::timeline::BoneNode::~BoneNode() */

void __thiscall cocostudio::timeline::BoneNode::~BoneNode(BoneNode *this)

{
  ~BoneNode(this);
  operator_delete(this);
  return;
}

