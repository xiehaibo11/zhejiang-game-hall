
/* fairygui::GList::itemIndexToChildIndex(int) */

ulong __thiscall fairygui::GList::itemIndexToChildIndex(GList *this,int param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  if (this[0x338] != (GList)0x0) {
    if (*(int *)(this + 0x2e4) == 4) {
      uVar3 = GComponent::getChildIndex
                        ((GComponent *)this,
                         *(GObject **)(*(long *)(this + 0x368) + (long)param_1 * 0x18 + 8));
      return uVar3;
    }
    if ((this[0x339] != (GList)0x0) && (iVar1 = *(int *)(this + 0x33c), 0 < iVar1)) {
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = *(int *)(this + 0x344) / iVar1;
      }
      iVar2 = *(int *)(this + 0x344) - iVar2 * iVar1;
      if (iVar2 <= param_1) {
        iVar1 = 0;
      }
      return (ulong)(uint)((param_1 - iVar2) + iVar1);
    }
    param_1 = param_1 - *(int *)(this + 0x344);
  }
  return (ulong)(uint)param_1;
}

