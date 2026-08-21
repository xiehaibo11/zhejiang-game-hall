
/* fairygui::GList::getIndexOnPos1(float&, bool) */

int __thiscall fairygui::GList::getIndexOnPos1(GList *this,float *param_1,bool param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(int *)(this + 0x340) < *(int *)(this + 0x348)) {
LAB_00a7ab44:
    *param_1 = 0.0;
    return 0;
  }
  iVar2 = GComponent::numChildren((GComponent *)this);
  if ((iVar2 < 1) || (param_2)) {
    iVar2 = *(int *)(this + 0x340);
    if (iVar2 < 1) {
      iVar5 = *(int *)(this + 0x348);
      fVar6 = 0.0;
    }
    else {
      uVar1 = *(uint *)(this + 0x2f0);
      iVar3 = 0;
      fVar6 = 0.0;
      do {
        fVar8 = fVar6 + *(float *)(*(long *)(this + 0x368) + (long)iVar3 * 0x18 + 4);
        if (*param_1 < fVar8 + (float)(int)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)))
        goto LAB_00a7aca8;
        iVar5 = *(int *)(this + 0x348);
        fVar6 = fVar8 + (float)(int)uVar1;
        iVar3 = iVar5 + iVar3;
      } while (iVar3 < iVar2);
    }
  }
  else {
    lVar4 = GComponent::getChildAt((GComponent *)this,0);
    uVar1 = *(uint *)(this + 0x2f0);
    fVar6 = *(float *)(lVar4 + 0xc4);
    fVar7 = *param_1;
    fVar8 = 0.0;
    if ((int)uVar1 < 1) {
      fVar8 = (float)(int)-uVar1;
    }
    if (fVar7 < fVar6 + fVar8) {
      iVar3 = *(int *)(this + 0x344);
      do {
        iVar2 = iVar3 - *(int *)(this + 0x348);
        if (iVar2 < 0) goto LAB_00a7ab44;
        iVar3 = iVar3 - *(int *)(this + 0x348);
        fVar6 = fVar6 - (*(float *)(*(long *)(this + 0x368) + (long)iVar2 * 0x18 + 4) +
                        (float)(int)uVar1);
      } while (fVar7 < fVar6);
      goto LAB_00a7aca8;
    }
    iVar3 = *(int *)(this + 0x344);
    iVar2 = *(int *)(this + 0x340);
    if (iVar3 < iVar2) {
      do {
        fVar8 = fVar6 + *(float *)(*(long *)(this + 0x368) + (long)iVar3 * 0x18 + 4);
        if (fVar7 < fVar8 + (float)(int)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)))
        goto LAB_00a7aca8;
        iVar5 = *(int *)(this + 0x348);
        fVar6 = fVar8 + (float)(int)uVar1;
        iVar3 = iVar5 + iVar3;
      } while (iVar3 < iVar2);
    }
    else {
      iVar5 = *(int *)(this + 0x348);
    }
  }
  iVar3 = iVar2 - iVar5;
LAB_00a7aca8:
  *param_1 = fVar6;
  return iVar3;
}

