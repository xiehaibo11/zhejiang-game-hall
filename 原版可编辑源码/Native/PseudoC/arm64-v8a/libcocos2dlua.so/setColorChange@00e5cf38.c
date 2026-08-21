
/* cocos2d::PURibbonTrailRender::setColorChange(cocos2d::Vec4 const&) */

void __thiscall
cocos2d::PURibbonTrailRender::setColorChange(PURibbonTrailRender *this,Vec4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xfc) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xf4) = uVar1;
  return;
}

