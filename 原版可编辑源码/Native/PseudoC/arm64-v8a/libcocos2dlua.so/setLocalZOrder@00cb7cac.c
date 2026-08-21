
/* cocostudio::timeline::BoneNode::setLocalZOrder(int) */

void __thiscall cocostudio::timeline::BoneNode::setLocalZOrder(BoneNode *this,int param_1)

{
  cocos2d::Node::setLocalZOrder((Node *)this,param_1);
  if (*(long *)(this + 0x3a8) != 0) {
    *(undefined1 *)(*(long *)(this + 0x3a8) + 0x5b9) = 1;
  }
  return;
}

