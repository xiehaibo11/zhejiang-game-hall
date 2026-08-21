
/* fairygui::GObject::setVisible(bool) */

void __thiscall fairygui::GObject::setVisible(GObject *this,bool param_1)

{
  GGroup *this_00;
  
  if (this[0xf4] != (GObject)param_1) {
    this[0xf4] = (GObject)param_1;
    (**(code **)(*(long *)this + 0x88))();
    if (*(GComponent **)(this + 0xa0) != (GComponent *)0x0) {
      GComponent::setBoundsChangedFlag(*(GComponent **)(this + 0xa0));
    }
    this_00 = *(GGroup **)(this + 0x128);
    if ((this_00 != (GGroup *)0x0) && (this_00[0x1e8] != (GGroup)0x0)) {
      GGroup::setBoundsChangedFlag(this_00,false);
      return;
    }
  }
  return;
}

