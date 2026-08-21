
/* non-virtual thunk to cocos2d::JumpTiles3D::~JumpTiles3D() */

void __thiscall cocos2d::JumpTiles3D::~JumpTiles3D(JumpTiles3D *this)

{
  Action::~Action((Action *)(this + -0x28));
                    /* catch() { ... } // from try @ 00eeb614 with catch @ 00eeb6b0 */
  operator_delete((Action *)(this + -0x28));
  return;
}

