
/* cocostudio::timeline::BoneNode::setVisible(bool) */

void __thiscall cocostudio::timeline::BoneNode::setVisible(BoneNode *this,bool param_1)

{
  if (this[0x1f9] != (BoneNode)param_1) {
    cocos2d::Node::setVisible((Node *)this,param_1);
    if (*(long *)(this + 0x3a8) != 0) {
      *(undefined2 *)(*(long *)(this + 0x3a8) + 0x5b8) = 0x101;
    }
  }
  return;
}

