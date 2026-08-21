
/* fairygui::GList::setSelectionOnEvent(fairygui::GObject*, fairygui::InputEvent*) */

void __thiscall
fairygui::GList::setSelectionOnEvent(GList *this,GObject *param_1,InputEvent *param_2)

{
  long lVar1;
  GList GVar2;
  GObject GVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  GController *pGVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  int iVar12;
  GButton *pGVar13;
  long lVar14;
  
  if (param_1 == (GObject *)0x0) {
    return;
  }
  lVar6 = __dynamic_cast(param_1,&GObject::typeinfo,&GButton::typeinfo,0);
  if (lVar6 == 0) {
    return;
  }
  if (*(int *)(this + 0x304) == 3) {
    return;
  }
  this[0x330] = (GList)0x1;
  iVar5 = GComponent::getChildIndex((GComponent *)this,param_1);
  GVar2 = this[0x338];
  if (GVar2 == (GList)0x0) {
LAB_00a79754:
    iVar9 = iVar5;
    iVar5 = *(int *)(this + 0x304);
    if (iVar5 == 0) goto LAB_00a79788;
LAB_00a7975c:
    if ((*(ushort *)(param_2 + 0x2c) >> 2 & 1) == 0) {
      GVar3 = param_1[0x33c];
      if ((iVar5 != 2) && ((*(ushort *)(param_2 + 0x2c) & 1) == 0)) {
        clearSelectionExcept(this,param_1);
        if (GVar3 == (GObject)0x0) goto LAB_00a797cc;
        goto LAB_00a797e4;
      }
      bVar4 = GVar3 == (GObject)0x0;
      goto LAB_00a797dc;
    }
    if (param_1[0x33c] == (GObject)0x0) {
      iVar5 = *(int *)(this + 0x334);
      if (iVar5 != -1) {
        iVar12 = iVar5;
        if (iVar9 <= iVar5) {
          iVar12 = iVar9;
        }
        if (iVar5 <= iVar9) {
          iVar5 = iVar9;
        }
        if (GVar2 == (GList)0x0) {
          iVar10 = (int)((ulong)(*(long *)(this + 0x1e8) - *(long *)(this + 0x1e0)) >> 3);
        }
        else {
          iVar10 = *(int *)(this + 0x33c);
        }
        if (iVar10 + -1 <= iVar5) {
          if (GVar2 == (GList)0x0) {
            iVar5 = (int)((ulong)(*(long *)(this + 0x1e8) - *(long *)(this + 0x1e0)) >> 3);
          }
          else {
            iVar5 = *(int *)(this + 0x33c);
          }
          iVar5 = iVar5 + -1;
        }
        if (GVar2 == (GList)0x0) {
          if (iVar12 <= iVar5) {
            do {
              lVar6 = GComponent::getChildAt((GComponent *)this,iVar12);
              if (((lVar6 != 0) &&
                  (pGVar13 = (GButton *)
                             __dynamic_cast(lVar6,&GObject::typeinfo,&GButton::typeinfo,0),
                  pGVar13 != (GButton *)0x0)) && (pGVar13[0x33c] == (GButton)0x0)) {
                GButton::setSelected(pGVar13,true);
              }
              bVar4 = iVar12 < iVar5;
              iVar12 = iVar12 + 1;
            } while (bVar4);
          }
        }
        else if (iVar12 <= iVar5) {
          lVar6 = (long)iVar12 + -1;
          lVar14 = ((long)iVar12 + (long)iVar12 * 2) * 8;
          do {
            lVar1 = *(long *)(this + 0x368) + lVar14;
            pGVar13 = *(GButton **)(lVar1 + 8);
            if ((pGVar13 != (GButton *)0x0) &&
               (lVar8 = __dynamic_cast(pGVar13,&GObject::typeinfo,&GButton::typeinfo,0), lVar8 != 0)
               ) {
              GButton::setSelected(pGVar13,true);
            }
            lVar6 = lVar6 + 1;
            lVar14 = lVar14 + 0x18;
            *(undefined1 *)(lVar1 + 0x14) = 1;
          } while (lVar6 < iVar5);
        }
        goto LAB_00a797e8;
      }
      goto LAB_00a797cc;
    }
  }
  else {
    iVar9 = *(int *)(this + 0x344);
    if (*(int *)(this + 0x2e4) != 4) {
      iVar5 = iVar9 + iVar5;
      if ((this[0x339] != (GList)0x0) && (iVar9 = *(int *)(this + 0x33c), 0 < iVar9)) {
        iVar12 = 0;
        if (iVar9 != 0) {
          iVar12 = iVar5 / iVar9;
        }
        iVar5 = iVar5 - iVar12 * iVar9;
      }
      goto LAB_00a79754;
    }
    if (*(int *)(this + 0x340) <= iVar9) goto LAB_00a79754;
    lVar6 = (long)*(int *)(this + 0x340) - (long)iVar9;
    plVar11 = (long *)(*(long *)(this + 0x368) + (long)iVar9 * 0x18 + 8);
    if (*plVar11 != 0) goto LAB_00a7971c;
    do {
      do {
        iVar9 = iVar9 + 1;
        lVar6 = lVar6 + -1;
        plVar11 = plVar11 + 3;
        if (lVar6 == 0) goto LAB_00a79754;
      } while (*plVar11 == 0);
LAB_00a7971c:
      bVar4 = 0 < iVar5;
      iVar5 = iVar5 + -1;
    } while (bVar4);
    iVar5 = *(int *)(this + 0x304);
    if (iVar5 != 0) goto LAB_00a7975c;
LAB_00a79788:
    if (param_1[0x33c] == (GObject)0x0) {
      clearSelectionExcept(this,param_1);
LAB_00a797cc:
      bVar4 = true;
LAB_00a797dc:
      GButton::setSelected((GButton *)param_1,bVar4);
    }
  }
LAB_00a797e4:
  *(int *)(this + 0x334) = iVar9;
LAB_00a797e8:
  if (((param_1[0x33c] != (GObject)0x0) &&
      (pGVar7 = *(GController **)(this + 800), pGVar7 != (GController *)0x0)) &&
     ((pGVar7[0x60] == (GController)0x0 &&
      (iVar5 = GController::getPageCount(pGVar7), iVar9 < iVar5)))) {
    pGVar7 = *(GController **)(this + 800);
    *(undefined8 *)(this + 800) = 0;
    GController::setSelectedIndex(pGVar7,iVar9,true);
    *(GController **)(this + 800) = pGVar7;
  }
  return;
}

