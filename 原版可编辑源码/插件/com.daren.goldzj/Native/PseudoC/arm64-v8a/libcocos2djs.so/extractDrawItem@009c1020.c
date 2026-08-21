
/* cocos2d::renderer::Model::extractDrawItem(cocos2d::renderer::DrawItem&) const */

void __thiscall cocos2d::renderer::Model::extractDrawItem(Model *this,DrawItem *param_1)

{
  Model *pMVar1;
  
  pMVar1 = this + 0x50;
  if (this[0x70] != (Model)0x0) {
    pMVar1 = (Model *)0x0;
  }
  *(Model **)param_1 = this;
  *(Model **)(param_1 + 8) = pMVar1;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(this + 0x48);
  return;
}

