
/* cocos2d::PURibbonTrailRender::clone() */

PURender * __thiscall cocos2d::PURibbonTrailRender::clone(PURibbonTrailRender *this)

{
  PURender *pPVar1;
  undefined8 uVar2;
  
  pPVar1 = (PURender *)create((basic_string *)(this + 0x110));
  PURender::copyAttributesTo((PURender *)this,pPVar1);
  *(PURibbonTrailRender *)(pPVar1 + 200) = this[200];
  uVar2 = *(undefined8 *)(this + 0xd0);
  pPVar1[0xe1] = (PURender)0x1;
  *(undefined8 *)(pPVar1 + 0xd0) = uVar2;
  uVar2 = *(undefined8 *)(this + 0xd8);
  pPVar1[0xe2] = (PURender)0x1;
  *(undefined8 *)(pPVar1 + 0xd8) = uVar2;
  *(PURibbonTrailRender *)(pPVar1 + 0xe0) = this[0xe0];
  uVar2 = *(undefined8 *)(this + 0xe4);
  *(undefined8 *)(pPVar1 + 0xec) = *(undefined8 *)(this + 0xec);
  *(undefined8 *)(pPVar1 + 0xe4) = uVar2;
  uVar2 = *(undefined8 *)(this + 0xf4);
  *(undefined8 *)(pPVar1 + 0xfc) = *(undefined8 *)(this + 0xfc);
  *(undefined8 *)(pPVar1 + 0xf4) = uVar2;
  return pPVar1;
}

