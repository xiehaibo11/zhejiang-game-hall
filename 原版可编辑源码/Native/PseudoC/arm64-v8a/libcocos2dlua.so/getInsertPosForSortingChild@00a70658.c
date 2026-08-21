
/* fairygui::GComponent::getInsertPosForSortingChild(fairygui::GObject*) */

void __thiscall fairygui::GComponent::getInsertPosForSortingChild(GComponent *this,GObject *param_1)

{
  long lVar1;
  ulong uVar2;
  GObject *pGVar3;
  
  uVar2 = 0;
  lVar1 = *(long *)(this + 0x1e8) - *(long *)(this + 0x1e0);
  if (lVar1 != 0) {
    do {
      pGVar3 = *(GObject **)(*(long *)(this + 0x1e0) + uVar2 * 8);
      if ((pGVar3 != param_1) && (*(int *)(param_1 + 0xfc) < *(int *)(pGVar3 + 0xfc))) {
        return;
      }
                    /* try { // try from 00a70670 to 00b706cb has its CatchHandler @ 00a70770 */
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulong)(lVar1 >> 3));
  }
  return;
}

