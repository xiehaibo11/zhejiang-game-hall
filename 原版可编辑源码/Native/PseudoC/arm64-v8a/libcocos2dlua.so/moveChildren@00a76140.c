
/* fairygui::GGroup::moveChildren(float, float) */

void __thiscall fairygui::GGroup::moveChildren(GGroup *this,float param_1,float param_2)

{
  int iVar1;
  GObject *this_00;
  int iVar2;
  
  if (((*(uint *)(this + 0x1d8) & 1) == 0) && (*(GComponent **)(this + 0xa0) != (GComponent *)0x0))
  {
    *(uint *)(this + 0x1d8) = *(uint *)(this + 0x1d8) | 1;
    iVar1 = GComponent::numChildren(*(GComponent **)(this + 0xa0));
    if (0 < iVar1) {
      iVar2 = 0;
      do {
        this_00 = (GObject *)GComponent::getChildAt(*(GComponent **)(this + 0xa0),iVar2);
        if (*(GGroup **)(this_00 + 0x128) == this) {
          GObject::setPosition
                    (this_00,*(float *)(this_00 + 0xc0) + param_1,
                     *(float *)(this_00 + 0xc4) + param_2);
        }
        iVar2 = iVar2 + 1;
      } while (iVar1 != iVar2);
    }
    *(uint *)(this + 0x1d8) = *(uint *)(this + 0x1d8) & 2;
  }
  return;
}

