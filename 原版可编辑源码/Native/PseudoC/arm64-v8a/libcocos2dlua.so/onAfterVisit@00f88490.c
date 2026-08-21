
/* cocos2d::StencilStateManager::onAfterVisit() */

void __thiscall cocos2d::StencilStateManager::onAfterVisit(StencilStateManager *this)

{
  glStencilFunc(*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x10),
                *(undefined4 *)(this + 0x14));
  glStencilOp(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x20)
             );
  glStencilMask(*(undefined4 *)(this + 8));
  if (this[5] == (StencilStateManager)0x0) {
    glDisable(0xb90);
  }
  s_layer = s_layer + -1;
  return;
}

