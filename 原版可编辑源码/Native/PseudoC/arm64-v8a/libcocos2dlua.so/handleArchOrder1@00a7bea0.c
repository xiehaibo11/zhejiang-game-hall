
/* fairygui::GList::handleArchOrder1() */

void __thiscall fairygui::GList::handleArchOrder1(GList *this)

{
  int iVar1;
  long lVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(int *)(this + 0x250) == 2) {
    fVar8 = *(float *)(*(long *)(this + 0x230) + 0x60);
    fVar6 = (float)GComponent::getViewHeight((GComponent *)this);
    iVar1 = GComponent::numChildren((GComponent *)this);
    if (iVar1 < 1) {
      iVar4 = 0;
    }
    else {
      iVar5 = 0;
      iVar4 = 0;
      fVar3 = 3.4028235e+38;
      do {
        lVar2 = GComponent::getChildAt((GComponent *)this,iVar5);
        if (((this[0x2e1] == (GList)0x0) || (*(char *)(lVar2 + 0xf4) != '\0')) &&
           (fVar7 = ABS(((fVar8 + fVar6 * 0.5) - *(float *)(lVar2 + 0xc4)) +
                        *(float *)(lVar2 + 0xcc) * -0.5), fVar7 < fVar3)) {
          iVar4 = iVar5;
          fVar3 = fVar7;
        }
        iVar5 = iVar5 + 1;
      } while (iVar1 != iVar5);
    }
    GComponent::setApexIndex((GComponent *)this,iVar4);
    return;
  }
  return;
}

