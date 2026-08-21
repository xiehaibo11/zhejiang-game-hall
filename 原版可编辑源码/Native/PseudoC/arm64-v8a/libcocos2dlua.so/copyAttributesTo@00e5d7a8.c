
/* cocos2d::PURibbonTrailRender::copyAttributesTo(cocos2d::PURibbonTrailRender*) */

void __thiscall
cocos2d::PURibbonTrailRender::copyAttributesTo
          (PURibbonTrailRender *this,PURibbonTrailRender *param_1)

{
  undefined8 uVar1;
  
  PURender::copyAttributesTo((PURender *)this,(PURender *)param_1);
  param_1[200] = this[200];
  uVar1 = *(undefined8 *)(this + 0xd0);
  param_1[0xe1] = (PURibbonTrailRender)0x1;
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  uVar1 = *(undefined8 *)(this + 0xd8);
  param_1[0xe2] = (PURibbonTrailRender)0x1;
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  param_1[0xe0] = this[0xe0];
  uVar1 = *(undefined8 *)(this + 0xe4);
  *(undefined8 *)(param_1 + 0xec) = *(undefined8 *)(this + 0xec);
  *(undefined8 *)(param_1 + 0xe4) = uVar1;
  uVar1 = *(undefined8 *)(this + 0xf4);
  *(undefined8 *)(param_1 + 0xfc) = *(undefined8 *)(this + 0xfc);
  *(undefined8 *)(param_1 + 0xf4) = uVar1;
  return;
}

