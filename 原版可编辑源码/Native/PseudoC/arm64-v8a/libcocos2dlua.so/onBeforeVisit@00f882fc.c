
/* cocos2d::StencilStateManager::onBeforeVisit() */

void __thiscall cocos2d::StencilStateManager::onBeforeVisit(StencilStateManager *this)

{
  undefined4 uVar1;
  uint uVar2;
  StencilStateManager SVar3;
  undefined4 uVar4;
  
  s_layer = s_layer + 1;
  uVar2 = 1 << (ulong)(s_layer & 0x1f);
  *(uint *)(this + 0x30) = uVar2 - 1 | uVar2;
  SVar3 = (StencilStateManager)glIsEnabled(0xb90);
  this[5] = SVar3;
  glGetIntegerv(0xb98,this + 8);
  glGetIntegerv(0xb92,this + 0xc);
  glGetIntegerv(0xb97,this + 0x10);
  glGetIntegerv(0xb93,this + 0x14);
  glGetIntegerv(0xb94,this + 0x18);
  glGetIntegerv(0xb95,this + 0x1c);
  glGetIntegerv(0xb96,this + 0x20);
  glEnable(0xb90);
  glStencilMask(uVar2);
  glGetBooleanv(0xb72,this + 0x24);
  glDepthMask(0);
  RenderState::StateBlock::setDepthWrite(RenderState::StateBlock::_defaultState,false);
  glStencilFunc(0x200,uVar2,uVar2);
  uVar4 = 0x1e01;
  uVar1 = 0;
  if (this[4] != (StencilStateManager)0x0) {
    uVar1 = uVar4;
  }
  glStencilOp(uVar1,0x1e00,0x1e00);
  drawFullScreenQuadClearStencil();
  glStencilFunc(0x200,uVar2,uVar2);
  if (this[4] != (StencilStateManager)0x0) {
    uVar4 = 0;
  }
  glStencilOp(uVar4,0x1e00,0x1e00);
  return;
}

