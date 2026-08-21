
/* fairygui::GList::scrollToView(int, bool, bool) */

void __thiscall fairygui::GList::scrollToView(GList *this,int param_1,bool param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  GObject *pGVar8;
  ScrollPane *pSVar9;
  Rect *pRVar10;
  long lVar11;
  float *pfVar12;
  float *pfVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  Rect aRStack_78 [16];
  Rect aRStack_68 [16];
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (this[0x338] == (GList)0x0) {
    pGVar8 = (GObject *)GComponent::getChildAt((GComponent *)this,param_1);
    pSVar9 = *(ScrollPane **)(this + 0x230);
    if ((pSVar9 != (ScrollPane *)0x0) ||
       ((*(long *)(this + 0xa0) != 0 &&
        (pSVar9 = *(ScrollPane **)(*(long *)(this + 0xa0) + 0x230), pSVar9 != (ScrollPane *)0x0))))
    {
      ScrollPane::scrollToView(pSVar9,pGVar8,param_2,param_3);
    }
  }
  else if (*(int *)(this + 0x33c) != 0) {
    if (*(int *)(this + 0x358) != 0) {
      doRefreshVirtualList(this);
      lVar7 = cocos2d::Director::getInstance();
      cocos2d::Scheduler::unschedule
                (*(_func_void_float **)(lVar7 + 0xa0),(Ref *)__selector_doRefreshVirtualList);
    }
    if (this[0x339] != (GList)0x0) {
      iVar1 = *(int *)(this + 0x33c);
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = *(int *)(this + 0x344) / iVar1;
      }
      param_1 = (int)((double)iVar1 * (double)iVar3 + (double)param_1);
    }
    cocos2d::Rect::Rect(aRStack_68);
    lVar14 = *(long *)(this + 0x368);
    lVar7 = (long)param_1;
    pfVar13 = (float *)(lVar14 + (long)param_1 * 0x18);
    switch(*(undefined4 *)(this + 0x2e4)) {
    case 0:
    case 2:
      iVar1 = *(int *)(this + 0x348);
      fVar16 = 0.0;
      if (iVar1 <= param_1) {
        lVar11 = (long)(iVar1 + -1);
        pfVar13 = (float *)(lVar14 + (long)(iVar1 + -1) * 0x18 + 4);
        fVar16 = 0.0;
        do {
          fVar15 = *pfVar13;
          lVar11 = lVar11 + iVar1;
          pfVar13 = pfVar13 + (long)iVar1 * 6;
          fVar16 = fVar16 + fVar15 + (float)*(int *)(this + 0x2f0);
        } while (lVar11 < lVar7);
      }
      fVar17 = *(float *)(this + 0x350);
      fVar18 = *(float *)(lVar14 + lVar7 * 0x18 + 4);
      fVar15 = 0.0;
      break;
    case 1:
    case 3:
      iVar1 = *(int *)(this + 0x348);
      fVar15 = 0.0;
      if (iVar1 <= param_1) {
        lVar11 = (long)(iVar1 + -1);
        pfVar12 = (float *)(lVar14 + (long)(iVar1 + -1) * 0x18);
        fVar15 = 0.0;
        do {
          fVar17 = *pfVar12;
          lVar11 = lVar11 + iVar1;
          pfVar12 = pfVar12 + (long)iVar1 * 6;
          fVar15 = fVar15 + fVar17 + (float)*(int *)(this + 0x2f4);
        } while (lVar11 < lVar7);
      }
      fVar17 = *pfVar13;
      fVar18 = *(float *)(this + 0x354);
      fVar16 = 0.0;
      break;
    default:
      iVar1 = 0;
      if (*(int *)(this + 0x34c) * *(int *)(this + 0x348) != 0) {
        iVar1 = param_1 / (*(int *)(this + 0x34c) * *(int *)(this + 0x348));
      }
      fVar15 = (float)GComponent::getViewWidth((GComponent *)this);
      iVar3 = *(int *)(this + 0x348);
      fVar17 = *pfVar13;
      iVar2 = *(int *)(this + 0x34c);
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = param_1 / iVar3;
      }
      fVar18 = *(float *)(lVar14 + lVar7 * 0x18 + 4);
      iVar5 = 0;
      if (iVar2 != 0) {
        iVar5 = iVar4 / iVar2;
      }
      fVar15 = fVar15 * (float)iVar1 +
               (fVar17 + (float)*(int *)(this + 0x2f4)) * (float)(param_1 - iVar4 * iVar3);
      fVar16 = (fVar18 + (float)*(int *)(this + 0x2f0)) * (float)(iVar4 - iVar5 * iVar2);
    }
    cocos2d::Rect::setRect(aRStack_68,fVar15,fVar16,fVar17,fVar18);
    pSVar9 = *(ScrollPane **)(this + 0x230);
    if (pSVar9 == (ScrollPane *)0x0) {
      if ((*(long *)(this + 0xa0) == 0) ||
         (pSVar9 = *(ScrollPane **)(*(long *)(this + 0xa0) + 0x230), pSVar9 == (ScrollPane *)0x0))
      goto LAB_00a78c28;
      GObject::transformRect(this,(GObject *)aRStack_68);
      pRVar10 = aRStack_78;
    }
    else {
      pRVar10 = aRStack_68;
    }
    ScrollPane::scrollToView(pSVar9,pRVar10,param_2,true);
  }
LAB_00a78c28:
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

