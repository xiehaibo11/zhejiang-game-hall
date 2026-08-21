
/* fairygui::GComponent::swapChildrenAt(int, int) */

void __thiscall fairygui::GComponent::swapChildrenAt(GComponent *this,int param_1,int param_2)

{
  int iVar1;
  GObject *pGVar2;
  long *plVar3;
  long *plVar4;
  GObject *pGVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  GObject *pGVar10;
  
  plVar3 = *(long **)(this + 0x1e0);
  plVar4 = *(long **)(this + 0x1e8);
  pGVar2 = (GObject *)plVar3[param_1];
  pGVar10 = (GObject *)plVar3[param_2];
  plVar7 = plVar3;
  if (plVar3 != plVar4) {
    pGVar5 = (GObject *)*plVar3;
    plVar9 = plVar3;
                    /* try { // try from 00a71674 to 00b716bf has its CatchHandler @ 00a71674
                       catch() { ... } // from try @ 00a71674 with catch @ 00a71674
                       catch() { ... } // from try @ 00a716c4 with catch @ 00a71674 */
    while ((plVar7 = plVar9, pGVar5 != pGVar2 &&
           (plVar9 = plVar9 + 1, plVar7 = plVar4, plVar4 != plVar9))) {
      pGVar5 = (GObject *)*plVar9;
    }
  }
  iVar8 = (int)((ulong)((long)plVar7 - (long)plVar3) >> 3);
  if (plVar7 == plVar4) {
    iVar8 = -1;
  }
  if (*(int *)(pGVar2 + 0xfc) == 0) {
                    /* try { // try from 00a716c0 to 00b716c3 has its CatchHandler @ 00a716f8 */
                    /* try { // try from 00a716c4 to 00b7170b has its CatchHandler @ 00a71674 */
    iVar1 = param_2;
    if ((0 < (int)*(uint *)(this + 0x274)) &&
       (iVar1 = ~*(uint *)(this + 0x274) + (int)((ulong)((long)plVar4 - (long)plVar3) >> 3),
       param_2 <= iVar1)) {
      iVar1 = param_2;
    }
    moveChild(this,pGVar2,iVar8,iVar1);
    plVar3 = *(long **)(this + 0x1e0);
    plVar4 = *(long **)(this + 0x1e8);
  }
  plVar7 = plVar4;
  plVar9 = plVar3;
                    /* catch() { ... } // from try @ 00a716c0 with catch @ 00a716f8 */
  if (plVar4 != plVar3) {
    pGVar2 = (GObject *)*plVar3;
    plVar6 = plVar3;
                    /* try { // try from 00a7170c to 00b717f3 has its CatchHandler @ 00a7170c
                       catch() { ... } // from try @ 00a7170c with catch @ 00a7170c
                       catch() { ... } // from try @ 00a71874 with catch @ 00a7170c */
    while ((plVar7 = plVar6, plVar9 = plVar6, pGVar2 != pGVar10 &&
           (plVar6 = plVar6 + 1, plVar7 = plVar4, plVar9 = plVar4, plVar4 != plVar6))) {
      pGVar2 = (GObject *)*plVar6;
    }
  }
  iVar8 = (int)((ulong)((long)plVar9 - (long)plVar3) >> 3);
  if (plVar7 == plVar4) {
    iVar8 = -1;
  }
  if (*(int *)(pGVar10 + 0xfc) != 0) {
    return;
  }
  iVar1 = param_1;
  if ((0 < (int)*(uint *)(this + 0x274)) &&
     (iVar1 = ~*(uint *)(this + 0x274) + (int)((ulong)((long)plVar4 - (long)plVar3) >> 3),
     param_1 <= iVar1)) {
    iVar1 = param_1;
  }
  moveChild(this,pGVar10,iVar8,iVar1);
  return;
}

