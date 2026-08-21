
/* cocos2d::ClippingRectangleNode::onAfterVisitScissor() */

void __thiscall cocos2d::ClippingRectangleNode::onAfterVisitScissor(ClippingRectangleNode *this)

{
  if (this[0x308] != (ClippingRectangleNode)0x0) {
    glDisable(0xc11);
    return;
  }
  return;
}

