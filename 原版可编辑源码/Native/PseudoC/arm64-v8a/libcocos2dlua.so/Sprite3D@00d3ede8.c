
/* cocos2d::Sprite3D::Sprite3D() */

void __thiscall cocos2d::Sprite3D::Sprite3D(Sprite3D *this)

{
                    /* try { // try from 00d3edec to 00e3edfb has its CatchHandler @ 00d3ee38 */
                    /* try { // try from 00d3ee00 to 00e3ee0b has its CatchHandler @ 00d3ee20 */
  Node::Node((Node *)this);
                    /* try { // try from 00d3ee0c to 00e3ee4b has its CatchHandler @ 00d3eda0 */
  *(undefined4 *)(this + 0x340) = 0x3f800000;
  *(undefined ***)this = &PTR__Sprite3D_016d3dd0;
                    /* catch() { ... } // from try @ 00d3ee00 with catch @ 00d3ee20 */
  *(undefined ***)(this + 0x2f8) = &PTR__Sprite3D_016d4320;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x330) = 0;
                    /* catch() { ... } // from try @ 00d3edec with catch @ 00d3ee38 */
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x360) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 0x348) = 0x30300000302;
  AABB::AABB((AABB *)(this + 0x368));
  Mat4::Mat4((Mat4 *)(this + 0x380));
  *(undefined2 *)(this + 0x3c8) = 0;
  *(undefined8 *)(this + 0x3f0) = 0;
  this[0x3c0] = (Sprite3D)0x1;
  *(undefined4 *)(this + 0x3c4) = 0xffffffff;
  this[0x3ca] = (Sprite3D)0x1;
  *(undefined8 *)(this + 0x418) = 0;
  *(undefined8 *)(this + 0x410) = 0;
                    /* try { // try from 00d3ee88 to 00e3ee8b has its CatchHandler @ 00d3eee4 */
  *(undefined8 *)(this + 0x428) = 0;
  *(undefined8 *)(this + 0x420) = 0;
  *(undefined8 *)(this + 0x438) = 0;
  *(undefined8 *)(this + 0x430) = 0;
  return;
}

