
/* fairygui::GGroup::handleAlphaChanged() */

void __thiscall fairygui::GGroup::handleAlphaChanged(GGroup *this)

{
  int iVar1;
  GObject *this_00;
  int iVar2;
  
  GObject::handleAlphaChanged((GObject *)this);
  if ((this[0x98] == (GGroup)0x0) &&
     (iVar1 = GComponent::numChildren(*(GComponent **)(this + 0xa0)), 0 < iVar1)) {
    iVar2 = 0;
    do {
      this_00 = (GObject *)GComponent::getChildAt(*(GComponent **)(this + 0xa0),iVar2);
      if (*(GGroup **)(this_00 + 0x128) == this) {
        GObject::setAlpha(this_00,*(float *)(this + 0xec));
      }
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  return;
}

