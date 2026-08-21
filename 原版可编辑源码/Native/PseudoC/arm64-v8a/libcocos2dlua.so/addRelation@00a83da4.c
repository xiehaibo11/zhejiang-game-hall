
/* fairygui::GObject::addRelation(fairygui::GObject*, fairygui::RelationType, bool) */

void __thiscall
fairygui::GObject::addRelation(GObject *this,undefined8 param_1,undefined8 param_3,uint param_4)

{
  Relations::add(*(Relations **)(this + 0x138),param_1,param_3,param_4 & 1);
  return;
}

