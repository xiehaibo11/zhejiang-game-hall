
/* fairygui::GGroup::GGroup() */

void __thiscall fairygui::GGroup::GGroup(GGroup *this)

{
  GObject::GObject((GObject *)this);
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined2 *)(this + 0x1e8) = 0;
  *(undefined ***)this = &PTR__GGroup_016a5918;
  *(undefined8 *)(this + 0x1ec) = 0xaffffffff;
  *(undefined2 *)(this + 500) = 0;
  *(undefined8 *)(this + 0x1f8) = 0xffffffff;
  *(undefined4 *)(this + 0x200) = 0;
  this[0xbc] = (GGroup)0x1;
  return;
}

