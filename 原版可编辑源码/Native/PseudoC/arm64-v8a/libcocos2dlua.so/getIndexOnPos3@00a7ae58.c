
/* fairygui::GList::getIndexOnPos3(float&, bool) */

int fairygui::GList::getIndexOnPos3(float *param_1,bool param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  ulong uVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  
  pfVar4 = (float *)(ulong)param_2;
  if ((int)param_1[0xd0] < (int)param_1[0xd2]) {
    iVar7 = 0;
    *pfVar4 = 0.0;
  }
  else {
    fVar8 = (float)GComponent::getViewWidth((GComponent *)param_1);
    fVar1 = param_1[0xd2];
    uVar5 = (ulong)(uint)fVar1;
    iVar7 = (int)(*pfVar4 / fVar8);
    iVar3 = (int)param_1[0xd3] * (int)fVar1 * iVar7;
    fVar8 = fVar8 * (float)iVar7;
    if (0 < (int)fVar1) {
      fVar2 = param_1[0xbd];
      iVar7 = iVar7 * (int)param_1[0xd3] * (int)fVar1;
                    /* try { // try from 00a7aed4 to 00b7af1f has its CatchHandler @ 00a7aed4
                       catch() { ... } // from try @ 00a7aed4 with catch @ 00a7aed4
                       catch() { ... } // from try @ 00a7af24 with catch @ 00a7aed4 */
      pfVar6 = (float *)(*(long *)(param_1 + 0xda) + (long)iVar3 * 0x18);
      do {
        if (*pfVar4 < fVar8 + *pfVar6 +
                      (float)(int)((uint)fVar2 & ((int)fVar2 >> 0x1f ^ 0xffffffffU)))
        goto LAB_00a7af10;
        fVar8 = fVar8 + *pfVar6 + (float)(int)fVar2;
        iVar7 = iVar7 + 1;
        uVar5 = uVar5 - 1;
        pfVar6 = pfVar6 + 6;
      } while (uVar5 != 0);
    }
    iVar7 = (int)fVar1 + iVar3 + -1;
LAB_00a7af10:
    *pfVar4 = fVar8;
  }
  return iVar7;
}

