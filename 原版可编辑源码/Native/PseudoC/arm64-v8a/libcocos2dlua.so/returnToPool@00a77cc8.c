
/* fairygui::GList::returnToPool(fairygui::GObject*) */

void __thiscall fairygui::GList::returnToPool(GList *this,GObject *param_1)

{
  GObjectPool::returnObject(*(GObjectPool **)(this + 0x328),param_1);
  return;
}

