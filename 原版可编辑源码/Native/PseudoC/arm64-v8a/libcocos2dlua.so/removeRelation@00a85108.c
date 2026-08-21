
/* fairygui::GObject::removeRelation(fairygui::GObject*, fairygui::RelationType) */

void fairygui::GObject::removeRelation(long param_1)

{
  Relations::remove(*(Relations **)(param_1 + 0x138));
  return;
}

