
/* cocos2d::GLView::updateDesignResolutionSize() */

void __thiscall cocos2d::GLView::updateDesignResolutionSize(GLView *this)

{
  Director *pDVar1;
  Size *pSVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = *(float *)(this + 0x24);
  if ((((fVar3 <= 0.0) || (fVar4 = *(float *)(this + 0x28), fVar4 <= 0.0)) ||
      (fVar5 = *(float *)(this + 0x2c), fVar5 <= 0.0)) ||
     (fVar6 = *(float *)(this + 0x30), fVar6 <= 0.0)) {
    return;
  }
  fVar8 = fVar3 / fVar5;
  fVar7 = fVar4 / fVar6;
  *(float *)(this + 0x60) = fVar8;
  *(float *)(this + 100) = fVar7;
  switch(*(undefined4 *)(this + 0x68)) {
  case 1:
    if (fVar8 <= fVar7) {
      fVar8 = fVar7;
    }
    goto LAB_00f7c400;
  case 2:
    if (fVar7 <= fVar8) {
      fVar8 = fVar7;
    }
LAB_00f7c400:
    *(float *)(this + 0x60) = fVar8;
    *(float *)(this + 100) = fVar8;
    fVar7 = fVar8;
    break;
  case 3:
    fVar5 = (float)(int)(fVar3 / fVar7);
    *(float *)(this + 0x60) = fVar7;
    *(float *)(this + 0x2c) = fVar5;
    fVar8 = fVar7;
    break;
  case 4:
    fVar6 = (float)(int)(fVar4 / fVar8);
    *(float *)(this + 100) = fVar8;
    *(float *)(this + 0x30) = fVar6;
    fVar7 = fVar8;
  }
  Rect::setRect((Rect *)(this + 0x34),(fVar3 - fVar5 * fVar8) * 0.5,(fVar4 - fVar6 * fVar7) * 0.5,
                fVar5 * fVar8,fVar6 * fVar7);
  pDVar1 = (Director *)Director::getInstance();
  pSVar2 = (Size *)(**(code **)(*(long *)this + 200))(this);
  Size::operator=((Size *)(pDVar1 + 0x198),pSVar2);
  pDVar1[0x1c0] = (Director)0x1;
  Director::setProjection(pDVar1,*(undefined4 *)(pDVar1 + 0x194));
  glViewport(0,0,(int)*(float *)(this + 0x24),(int)*(float *)(this + 0x28));
  return;
}

