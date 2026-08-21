
/* fairygui::GComponent::getChildIndex(fairygui::GObject const*) const */

undefined4 __thiscall fairygui::GComponent::getChildIndex(GComponent *this,GObject *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  GObject *pGVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar1 = *(long **)(this + 0x1e0);
  plVar2 = *(long **)(this + 0x1e8);
  plVar6 = plVar2;
  plVar7 = plVar1;
  if (plVar1 != plVar2) {
    pGVar4 = (GObject *)*plVar1;
    plVar5 = plVar1;
                    /* try { // try from 00a71194 to 00b711ab has its CatchHandler @ 00a715a0 */
    while ((plVar6 = plVar5, plVar7 = plVar5, pGVar4 != param_1 &&
           (plVar5 = plVar5 + 1, plVar6 = plVar2, plVar7 = plVar2, plVar2 != plVar5))) {
      pGVar4 = (GObject *)*plVar5;
    }
  }
  uVar3 = (undefined4)((ulong)((long)plVar7 - (long)plVar1) >> 3);
                    /* try { // try from 00a711dc to 00b711f3 has its CatchHandler @ 00a7154c */
  if (plVar6 == plVar2) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

