
/* cocos2d::Node::setAnchorPoint(cocos2d::Vec2 const&) */

void __thiscall cocos2d::Node::setAnchorPoint(Node *this,Vec2 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = Vec2::equals((Vec2 *)param_1,this + 0x78);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)param_1;
                    /* catch() { ... } // from try @ 00f23e98 with catch @ 00f23e30 */
    *(undefined8 *)(this + 0x78) = uVar2;
    this[0x150] = (Node)0x1;
    this[0x10c] = (Node)0x1;
    *(float *)(this + 0x70) = *(float *)(this + 0x80) * (float)uVar2;
    *(float *)(this + 0x74) = *(float *)(this + 0x84) * (float)((ulong)uVar2 >> 0x20);
    this[0x161] = (Node)0x1;
  }
                    /* try { // try from 00f23e54 to 01023e5b has its CatchHandler @ 00f23eb4 */
  return;
}

