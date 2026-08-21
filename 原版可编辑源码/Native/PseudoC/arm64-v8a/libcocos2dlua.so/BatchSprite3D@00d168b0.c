
/* cocos2d::BatchSprite3D::BatchSprite3D() */

void __thiscall cocos2d::BatchSprite3D::BatchSprite3D(BatchSprite3D *this)

{
  Node::Node((Node *)this);
  this[0x2f8] = (BatchSprite3D)0x0;
  *(undefined ***)this = &PTR__BatchSprite3D_016d27b8;
  *(undefined8 *)(this + 0x2fc) = 0x3f800000c7c34f80;
  AABB::AABB((AABB *)(this + 0x304));
  AABB::AABB((AABB *)(this + 0x31c));
  *(undefined8 *)(this + 0x368) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x360) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x338) = 0;
  return;
}

