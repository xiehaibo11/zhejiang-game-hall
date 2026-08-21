
/* cocos2d::Sprite::Sprite() */

void __thiscall cocos2d::Sprite::Sprite(Sprite *this)

{
  Node::Node((Node *)this);
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  this[0x31a] = (Sprite)0x0;
  *(undefined ***)this = &PTR__Sprite_01710428;
  *(undefined ***)(this + 0x2f8) = &PTR__Sprite_01710aa8;
  Mat4::Mat4((Mat4 *)(this + 0x31c));
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined8 *)(this + 0x368) = 0;
  TrianglesCommand::TrianglesCommand((TrianglesCommand *)(this + 0x378));
  Rect::Rect((Rect *)(this + 0x408));
                    /* try { // try from 00f3ed24 to 0103ed47 has its CatchHandler @ 00f3f504 */
  Rect::Rect((Rect *)(this + 0x41c),0.0,0.0,1.0,1.0);
  *(undefined4 *)(this + 0x42c) = 0;
  *(undefined8 *)(this + 0x430) = 0x3f8000003f800000;
                    /* try { // try from 00f3ed58 to 0103ed6f has its CatchHandler @ 00f3f500 */
  Size::Size((Size *)(this + 0x438),(Size *)&Size::ZERO);
  *(undefined8 *)(this + 0x448) = 0;
  *(undefined8 *)(this + 0x440) = 0;
  Vec3::Vec3((Vec3 *)(this + 0x450));
  Color4B::Color4B((Color4B *)(this + 0x45c));
  *(undefined8 *)(this + 0x460) = 0;
  Vec3::Vec3((Vec3 *)(this + 0x468));
  Color4B::Color4B((Color4B *)(this + 0x474));
  *(undefined8 *)(this + 0x478) = 0;
  Vec3::Vec3((Vec3 *)(this + 0x480));
  Color4B::Color4B((Color4B *)(this + 0x48c));
  *(undefined8 *)(this + 0x490) = 0;
  Vec3::Vec3((Vec3 *)(this + 0x498));
  Color4B::Color4B((Color4B *)(this + 0x4a4));
  *(undefined8 *)(this + 0x4b0) = 0;
  *(undefined8 *)(this + 0x4a8) = 0;
  *(undefined8 *)(this + 0x4b8) = 0;
  PolygonInfo::PolygonInfo((PolygonInfo *)(this + 0x4c0));
  *(undefined8 *)(this + 0x510) = 0;
  *(undefined8 *)(this + 0x520) = 0;
  *(undefined8 *)(this + 0x518) = 0;
  this[0x50b] = (Sprite)0x1;
  this[0x52c] = (Sprite)0x1;
  return;
}

