
/* fairygui::GList::setSelectedIndex(int) */

void __thiscall fairygui::GList::setSelectedIndex(GList *this,int param_1)

{
  int iVar1;
  
  if (-1 < param_1) {
    if (this[0x338] == (GList)0x0) {
      iVar1 = (int)((ulong)(*(long *)(this + 0x1e8) - *(long *)(this + 0x1e0)) >> 3);
    }
    else {
      iVar1 = *(int *)(this + 0x33c);
    }
    if (param_1 < iVar1) {
      if (*(int *)(this + 0x304) != 0) {
        clearSelection(this);
      }
      addSelection(this,param_1,false);
      return;
    }
  }
  clearSelection(this);
  return;
}

