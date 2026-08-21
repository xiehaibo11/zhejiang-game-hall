
/* fairygui::GObject::setGroup(fairygui::GGroup*) */

void __thiscall fairygui::GObject::setGroup(GObject *this,GGroup *param_1)

{
  GGroup *this_00;
  
  this_00 = *(GGroup **)(this + 0x128);
  if (this_00 != param_1) {
    if (this_00 != (GGroup *)0x0) {
      GGroup::setBoundsChangedFlag(this_00,false);
    }
    *(GGroup **)(this + 0x128) = param_1;
    if (param_1 != (GGroup *)0x0) {
      GGroup::setBoundsChangedFlag(param_1,false);
    }
    (**(code **)(*(long *)this + 0x88))(this);
    if (*(GComponent **)(this + 0xa0) != (GComponent *)0x0) {
      GComponent::childStateChanged(*(GComponent **)(this + 0xa0),this);
      return;
    }
  }
  return;
}

