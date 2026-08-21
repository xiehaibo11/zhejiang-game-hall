
/* cocos2d::Node::setPositionNormalized(cocos2d::Vec2 const&) */

void __thiscall cocos2d::Node::setPositionNormalized(Node *this,Vec2 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = Vec2::equals((Vec2 *)(this + 0x5c),param_1);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)param_1;
    *(undefined2 *)(this + 100) = 0x101;
    this[0x150] = (Node)0x1;
    this[0x10c] = (Node)0x1;
    *(undefined8 *)(this + 0x5c) = uVar2;
    this[0x161] = (Node)0x1;
  }
  return;
}

