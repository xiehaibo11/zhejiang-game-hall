
/* cocos2d::Node::setContentSize(cocos2d::Size const&) */

void __thiscall cocos2d::Node::setContentSize(Node *this,Size *param_1)

{
  ulong uVar1;
  
  uVar1 = Size::equals(param_1,(Size *)(this + 0x80));
                    /* try { // try from 00f23e8c to 01023e97 has its CatchHandler @ 00f23ebc */
  if ((uVar1 & 1) == 0) {
                    /* try { // try from 00f23e98 to 01023edf has its CatchHandler @ 00f23e30 */
    Size::operator=((Size *)(this + 0x80),param_1);
    this[0x88] = (Node)0x1;
    this[0x150] = (Node)0x1;
    this[0x10c] = (Node)0x1;
                    /* catch() { ... } // from try @ 00f23e54 with catch @ 00f23eb4 */
    *(ulong *)(this + 0x70) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0x80) >> 0x20) *
                  (float)((ulong)*(undefined8 *)(this + 0x78) >> 0x20),
                  (float)*(undefined8 *)(this + 0x80) * (float)*(undefined8 *)(this + 0x78));
    this[0x161] = (Node)0x1;
  }
                    /* catch() { ... } // from try @ 00f23e8c with catch @ 00f23ebc */
  return;
}

