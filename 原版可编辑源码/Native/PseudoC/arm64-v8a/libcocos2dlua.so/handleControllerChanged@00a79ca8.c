
/* fairygui::GList::handleControllerChanged(fairygui::GController*) */

void __thiscall fairygui::GList::handleControllerChanged(GList *this,GController *param_1)

{
  int iVar1;
  int iVar2;
  
  GComponent::handleControllerChanged((GComponent *)this,param_1);
  if (*(GController **)(this + 800) != param_1) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x70);
  if (-1 < iVar1) {
    if (this[0x338] == (GList)0x0) {
      iVar2 = (int)((ulong)(*(long *)(this + 0x1e8) - *(long *)(this + 0x1e0)) >> 3);
    }
    else {
      iVar2 = *(int *)(this + 0x33c);
    }
    if (iVar1 < iVar2) {
      if (*(int *)(this + 0x304) != 0) {
        clearSelection(this);
      }
      addSelection(this,iVar1,false);
      return;
    }
  }
  clearSelection(this);
  return;
}

