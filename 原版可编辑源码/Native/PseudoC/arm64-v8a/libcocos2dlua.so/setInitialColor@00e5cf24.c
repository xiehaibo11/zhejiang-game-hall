
/* cocos2d::PURibbonTrailRender::setInitialColor(cocos2d::Vec4 const&) */

void __thiscall
cocos2d::PURibbonTrailRender::setInitialColor(PURibbonTrailRender *this,Vec4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xec) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xe4) = uVar1;
  return;
}

