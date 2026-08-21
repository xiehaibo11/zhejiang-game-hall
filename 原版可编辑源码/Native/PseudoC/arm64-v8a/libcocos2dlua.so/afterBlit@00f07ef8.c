
/* cocos2d::Grid3D::afterBlit() */

void __thiscall cocos2d::Grid3D::afterBlit(Grid3D *this)

{
  if (this[0x90] != (Grid3D)0x0) {
    if (this[0x91] == (Grid3D)0x0) {
      glDisable(0xb71);
    }
    else {
      glEnable(0xb71);
    }
    RenderState::StateBlock::setDepthTest(RenderState::StateBlock::_defaultState,(bool)this[0x91]);
    glDepthMask(this[0x92]);
    RenderState::StateBlock::setDepthWrite(RenderState::StateBlock::_defaultState,(bool)this[0x92]);
    return;
  }
  return;
}

