
/* fairygui::GComponent::setChildIndexBefore(fairygui::GObject*, int) */

ulong __thiscall
fairygui::GComponent::setChildIndexBefore(GComponent *this,GObject *param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  GObject *pGVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  
  plVar1 = *(long **)(this + 0x1e0);
  plVar2 = *(long **)(this + 0x1e8);
  plVar7 = plVar2;
  plVar9 = plVar1;
  if (plVar1 != plVar2) {
                    /* try { // try from 00a714d8 to 00b714df has its CatchHandler @ 00a714f4 */
    pGVar5 = (GObject *)*plVar1;
    plVar6 = plVar1;
                    /* try { // try from 00a714e0 to 00b715f3 has its CatchHandler @ 00a70ee8 */
    while ((plVar7 = plVar6, plVar9 = plVar6, pGVar5 != param_1 &&
           (plVar6 = plVar6 + 1, plVar7 = plVar2, plVar9 = plVar2, plVar2 != plVar6))) {
      pGVar5 = (GObject *)*plVar6;
                    /* catch() { ... } // from try @ 00a7123c with catch @ 00a714f4
                       catch() { ... } // from try @ 00a714d8 with catch @ 00a714f4 */
                    /* catch() { ... } // from try @ 00a7121c with catch @ 00a714f8 */
    }
  }
  uVar8 = (uint)((ulong)((long)plVar9 - (long)plVar1) >> 3);
  if (plVar7 == plVar2) {
    uVar8 = 0xffffffff;
  }
  if (*(int *)(param_1 + 0xfc) != 0) {
    return (ulong)uVar8;
  }
                    /* catch() { ... } // from try @ 00a711dc with catch @ 00a7154c */
                    /* catch() { ... } // from try @ 00a710e8 with catch @ 00a71550 */
  iVar4 = param_2;
  if ((0 < (int)*(uint *)(this + 0x274)) &&
     (iVar4 = ~*(uint *)(this + 0x274) + (int)((ulong)((long)plVar2 - (long)plVar1) >> 3),
     param_2 <= iVar4)) {
    iVar4 = param_2;
  }
                    /* catch() { ... } // from try @ 00a70fc8 with catch @ 00a71570
                       catch() { ... } // from try @ 00a713e8 with catch @ 00a71570 */
                    /* catch() { ... } // from try @ 00a711b8 with catch @ 00a71574 */
                    /* catch() { ... } // from try @ 00a710c4 with catch @ 00a71578 */
  uVar3 = moveChild(this,param_1,uVar8,iVar4 - (uint)((int)uVar8 < iVar4));
  return uVar3;
}

