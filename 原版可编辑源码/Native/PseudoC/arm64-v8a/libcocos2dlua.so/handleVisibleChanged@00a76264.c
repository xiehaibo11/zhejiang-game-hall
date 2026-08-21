
/* fairygui::GGroup::handleVisibleChanged() */

void __thiscall fairygui::GGroup::handleVisibleChanged(GGroup *this)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  
  if ((*(GComponent **)(this + 0xa0) != (GComponent *)0x0) &&
     (iVar1 = GComponent::numChildren(*(GComponent **)(this + 0xa0)), 0 < iVar1)) {
    iVar3 = 0;
    do {
      plVar2 = (long *)GComponent::getChildAt(*(GComponent **)(this + 0xa0),iVar3);
      if ((GGroup *)plVar2[0x25] == this) {
        (**(code **)(*plVar2 + 0x88))();
      }
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  return;
}

