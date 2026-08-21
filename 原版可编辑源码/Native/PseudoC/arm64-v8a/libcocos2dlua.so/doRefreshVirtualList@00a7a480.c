
/* fairygui::GList::doRefreshVirtualList() */

void __thiscall fairygui::GList::doRefreshVirtualList(GList *this)

{
  uint uVar1;
  int iVar2;
  GList GVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  iVar8 = *(int *)(this + 0x358);
  *(undefined4 *)(this + 0x358) = 0;
  this[0x35c] = (GList)0x1;
  if (iVar8 == 2) {
    uVar1 = *(uint *)(this + 0x2e4);
    if (uVar1 < 2) {
      *(undefined4 *)(this + 0x348) = 1;
    }
    else if (uVar1 == 2) {
      iVar8 = *(int *)(this + 0x2ec);
      if (iVar8 < 1) {
        iVar8 = *(int *)(this + 0x2f4);
        fVar10 = *(float *)(this + 0x350);
        fVar9 = *(float *)(*(long *)(this + 0x230) + 100);
        goto LAB_00a7a564;
      }
LAB_00a7a4fc:
      *(int *)(this + 0x348) = iVar8;
    }
    else if (uVar1 == 3) {
      iVar8 = *(int *)(this + 0x2e8);
      if (0 < iVar8) goto LAB_00a7a4fc;
      iVar8 = *(int *)(this + 0x2f0);
      fVar10 = *(float *)(this + 0x354);
      fVar9 = *(float *)(*(long *)(this + 0x230) + 0x68);
LAB_00a7a564:
      iVar8 = (int)((fVar9 + (float)iVar8) / (fVar10 + (float)iVar8));
      if (iVar8 < 2) {
        iVar8 = 1;
      }
      *(int *)(this + 0x348) = iVar8;
    }
    else {
      iVar8 = *(int *)(this + 0x2ec);
      if ((iVar8 < 1) &&
         (iVar8 = (int)((*(float *)(*(long *)(this + 0x230) + 100) + (float)*(int *)(this + 0x2f4))
                       / (*(float *)(this + 0x350) + (float)*(int *)(this + 0x2f4))), iVar8 < 2)) {
        iVar8 = 1;
      }
      *(int *)(this + 0x348) = iVar8;
      if (*(int *)(this + 0x2e8) < 1) {
        iVar8 = (int)((*(float *)(*(long *)(this + 0x230) + 0x68) + (float)*(int *)(this + 0x2f0)) /
                     (*(float *)(this + 0x354) + (float)*(int *)(this + 0x2f0)));
        if (iVar8 < 2) {
          iVar8 = 1;
        }
        *(int *)(this + 0x34c) = iVar8;
      }
      else {
        *(int *)(this + 0x34c) = *(int *)(this + 0x2e8);
      }
    }
  }
  iVar8 = *(int *)(this + 0x340);
  if (iVar8 < 1) {
    fVar9 = 0.0;
LAB_00a7a680:
    fVar10 = 0.0;
  }
  else {
    iVar4 = *(int *)(this + 0x348);
    lVar5 = (long)iVar4;
    iVar2 = iVar4;
    if (iVar8 <= iVar4) {
      iVar2 = iVar8;
    }
    iVar8 = (int)((float)(int)((float)iVar8 / (float)iVar4) * (float)iVar4);
    switch(*(undefined4 *)(this + 0x2e4)) {
    case 0:
    case 2:
      if (iVar8 < 1) {
        fVar10 = 0.0;
        GVar3 = this[0x300];
      }
      else {
        lVar6 = 0;
        pfVar7 = (float *)(*(long *)(this + 0x368) + 4);
        fVar10 = 0.0;
        do {
          fVar9 = *pfVar7;
          lVar6 = lVar6 + lVar5;
          pfVar7 = pfVar7 + lVar5 * 6;
          fVar10 = fVar10 + fVar9 + (float)*(int *)(this + 0x2f0);
        } while (lVar6 < iVar8);
        if (0.0 < fVar10) {
          fVar10 = fVar10 - (float)*(int *)(this + 0x2f0);
        }
        GVar3 = this[0x300];
      }
      if (GVar3 == (GList)0x0) {
        if (iVar2 < 1) {
          fVar9 = 0.0;
        }
        else {
          lVar5 = 0;
          fVar9 = 0.0;
          pfVar7 = *(float **)(this + 0x368);
          do {
            lVar5 = lVar5 + 1;
            fVar9 = fVar9 + *pfVar7 + (float)*(int *)(this + 0x2f4);
            pfVar7 = pfVar7 + 6;
          } while (lVar5 < iVar2);
          if (0.0 < fVar9) {
            fVar9 = fVar9 - (float)*(int *)(this + 0x2f4);
          }
        }
      }
      else {
        fVar9 = *(float *)(*(long *)(this + 0x230) + 100);
      }
      break;
    case 1:
    case 3:
      if (iVar8 < 1) {
        fVar9 = 0.0;
        GVar3 = this[0x300];
      }
      else {
        pfVar7 = *(float **)(this + 0x368);
        lVar6 = 0;
        fVar9 = 0.0;
        do {
          fVar10 = *pfVar7;
          lVar6 = lVar6 + lVar5;
          pfVar7 = pfVar7 + lVar5 * 6;
          fVar9 = fVar9 + fVar10 + (float)*(int *)(this + 0x2f4);
        } while (lVar6 < iVar8);
        if (0.0 < fVar9) {
          fVar9 = fVar9 - (float)*(int *)(this + 0x2f4);
        }
        GVar3 = this[0x300];
      }
      if (GVar3 != (GList)0x0) {
        fVar10 = *(float *)(*(long *)(this + 0x230) + 0x68);
        break;
      }
      if (0 < iVar2) {
        lVar5 = 0;
        fVar10 = 0.0;
        pfVar7 = (float *)(*(long *)(this + 0x368) + 4);
        do {
          lVar5 = lVar5 + 1;
          fVar10 = fVar10 + *pfVar7 + (float)*(int *)(this + 0x2f0);
          pfVar7 = pfVar7 + 6;
        } while (lVar5 < iVar2);
        if (0.0 < fVar10) {
          fVar10 = fVar10 - (float)*(int *)(this + 0x2f0);
        }
        break;
      }
      goto LAB_00a7a680;
    default:
      iVar2 = *(int *)(this + 0x34c);
      fVar9 = (float)GComponent::getViewWidth((GComponent *)this);
      fVar9 = fVar9 * (float)(int)((float)iVar8 / (float)(iVar2 * iVar4));
      fVar10 = (float)GComponent::getViewHeight((GComponent *)this);
    }
  }
  handleAlign(this,fVar9,fVar10);
  ScrollPane::setContentSize(*(ScrollPane **)(this + 0x230),fVar9,fVar10);
  this[0x35c] = (GList)0x0;
  handleScroll(this,true);
  return;
}

