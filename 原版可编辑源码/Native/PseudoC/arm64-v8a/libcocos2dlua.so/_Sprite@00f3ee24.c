
/* cocos2d::Sprite::~Sprite() */

void __thiscall cocos2d::Sprite::~Sprite(Sprite *this)

{
                    /* try { // try from 00f3ee2c to 0103ee43 has its CatchHandler @ 00f3f4fc */
  *(undefined ***)this = &PTR__Sprite_01710428;
  *(undefined ***)(this + 0x2f8) = &PTR__Sprite_01710aa8;
  if (*(void **)(this + 0x4b0) != (void *)0x0) {
    free(*(void **)(this + 0x4b0));
    *(undefined8 *)(this + 0x4b0) = 0;
  }
  if (*(void **)(this + 0x4b8) != (void *)0x0) {
    free(*(void **)(this + 0x4b8));
    *(undefined8 *)(this + 0x4b8) = 0;
  }
  if (*(Ref **)(this + 0x370) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x370));
  }
  if (*(Ref **)(this + 0x368) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x368));
  }
  if (((byte)this[0x510] & 1) != 0) {
    operator_delete(*(void **)(this + 0x520));
  }
  PolygonInfo::~PolygonInfo((PolygonInfo *)(this + 0x4c0));
  TrianglesCommand::~TrianglesCommand((TrianglesCommand *)(this + 0x378));
  Mat4::~Mat4((Mat4 *)(this + 0x31c));
  Node::~Node((Node *)this);
  return;
}

