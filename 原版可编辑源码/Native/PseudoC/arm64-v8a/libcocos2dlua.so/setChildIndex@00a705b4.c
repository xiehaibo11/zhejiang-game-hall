
/* fairygui::GComponent::setChildIndex(fairygui::GObject*, int) */

void __thiscall fairygui::GComponent::setChildIndex(GComponent *this,GObject *param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  GObject *pGVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  
  plVar1 = *(long **)(this + 0x1e0);
  plVar2 = *(long **)(this + 0x1e8);
  plVar6 = plVar2;
  plVar8 = plVar1;
  if (plVar1 != plVar2) {
    pGVar4 = (GObject *)*plVar1;
    plVar5 = plVar1;
                    /* try { // try from 00a705d4 to 00b70627 has its CatchHandler @ 00a705d4
                       catch() { ... } // from try @ 00a705d4 with catch @ 00a705d4
                       catch() { ... } // from try @ 00a706cc with catch @ 00a705d4
                       catch() { ... } // from try @ 00a7072c with catch @ 00a705d4 */
    while ((plVar6 = plVar5, plVar8 = plVar5, pGVar4 != param_1 &&
           (plVar5 = plVar5 + 1, plVar6 = plVar2, plVar8 = plVar2, plVar2 != plVar5))) {
      pGVar4 = (GObject *)*plVar5;
    }
  }
  iVar7 = (int)((ulong)((long)plVar8 - (long)plVar1) >> 3);
  if (plVar6 == plVar2) {
    iVar7 = -1;
  }
                    /* try { // try from 00a70628 to 00b70663 has its CatchHandler @ 00a7076c */
  if (*(int *)(param_1 + 0xfc) != 0) {
    return;
  }
  iVar3 = param_2;
  if ((0 < (int)*(uint *)(this + 0x274)) &&
     (iVar3 = ~*(uint *)(this + 0x274) + (int)((ulong)((long)plVar2 - (long)plVar1) >> 3),
     param_2 <= iVar3)) {
    iVar3 = param_2;
  }
  moveChild(this,param_1,iVar7,iVar3);
  return;
}

