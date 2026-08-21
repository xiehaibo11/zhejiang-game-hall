
/* cocos2d::DrawNode::clear() */

void __thiscall cocos2d::DrawNode::clear(DrawNode *this)

{
  *(undefined4 *)(this + 0x314) = 0;
  *(undefined4 *)(this + 0x348) = 0;
  *(undefined4 *)(this + 0x324) = 0;
  this[0x450] = (DrawNode)0x1;
  *(undefined2 *)(this + 0x451) = 0x101;
  *(undefined4 *)(this + 0x454) = *(undefined4 *)(this + 0x458);
  return;
}

