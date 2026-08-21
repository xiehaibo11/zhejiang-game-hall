
/* fairygui::GComponent::childSortingOrderChanged(fairygui::GObject*, int, int) */

void __thiscall
fairygui::GComponent::childSortingOrderChanged
          (GComponent *this,GObject *param_1,int param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  GObject *pGVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  if (param_3 == 0) {
    iVar3 = *(int *)(this + 0x274);
    plVar1 = *(long **)(this + 0x1e0);
    plVar2 = *(long **)(this + 0x1e8);
    iVar4 = iVar3 + -1;
    *(int *)(this + 0x274) = iVar4;
    plVar11 = plVar2;
    plVar12 = plVar1;
    if (plVar1 != plVar2) {
      pGVar9 = (GObject *)*plVar1;
      plVar10 = plVar1;
      while ((plVar11 = plVar10, plVar12 = plVar10, pGVar9 != param_1 &&
             (plVar10 = plVar10 + 1, plVar11 = plVar2, plVar12 = plVar2, plVar2 != plVar10))) {
        pGVar9 = (GObject *)*plVar10;
      }
    }
                    /* try { // try from 00a723b8 to 00b72453 has its CatchHandler @ 00a72250 */
    iVar8 = (int)((ulong)((long)plVar12 - (long)plVar1) >> 3);
    if (plVar11 == plVar2) {
      iVar8 = -1;
    }
    if (*(int *)(param_1 + 0xfc) != 0) {
      return;
    }
    iVar6 = (int)((ulong)((long)plVar2 - (long)plVar1) >> 3);
    iVar5 = iVar6;
    if ((0 < iVar4) && (iVar5 = iVar6 - iVar3, iVar6 <= iVar5)) {
      iVar5 = iVar6;
    }
  }
  else {
    if (param_2 == 0) {
      *(int *)(this + 0x274) = *(int *)(this + 0x274) + 1;
    }
    plVar1 = *(long **)(this + 0x1e0);
    plVar2 = *(long **)(this + 0x1e8);
    plVar11 = plVar2;
    plVar12 = plVar1;
    if (plVar1 != plVar2) {
      pGVar9 = (GObject *)*plVar1;
      plVar10 = plVar1;
      while ((plVar11 = plVar10, plVar12 = plVar10, pGVar9 != param_1 &&
             (plVar10 = plVar10 + 1, plVar11 = plVar2, plVar12 = plVar2, plVar2 != plVar10))) {
        pGVar9 = (GObject *)*plVar10;
      }
    }
    iVar8 = (int)((ulong)((long)plVar12 - (long)plVar1) >> 3);
    if (plVar11 == plVar2) {
      iVar8 = -1;
    }
    uVar7 = 0;
    if ((long)plVar2 - (long)plVar1 != 0) {
      do {
                    /* try { // try from 00a72384 to 00b723b7 has its CatchHandler @ 00a72408 */
        if (((GObject *)plVar1[uVar7] != param_1) &&
           (*(int *)(param_1 + 0xfc) < *(int *)((GObject *)plVar1[uVar7] + 0xfc))) break;
        uVar7 = uVar7 + 1;
                    /* try { // try from 00a7236c to 00b7237f has its CatchHandler @ 00a72404 */
      } while (uVar7 < (ulong)((long)plVar2 - (long)plVar1 >> 3));
    }
    iVar5 = (int)uVar7;
    if (iVar8 < iVar5) {
      moveChild(this,param_1,iVar8,iVar5 + -1);
      return;
    }
  }
  moveChild(this,param_1,iVar8,iVar5);
  return;
}

