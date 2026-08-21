
/* cocos2d::ClippingNode::hasContent() const */

bool __thiscall cocos2d::ClippingNode::hasContent(ClippingNode *this)

{
  return 0 < *(long *)(this + 0x180) - *(long *)(this + 0x178);
}

