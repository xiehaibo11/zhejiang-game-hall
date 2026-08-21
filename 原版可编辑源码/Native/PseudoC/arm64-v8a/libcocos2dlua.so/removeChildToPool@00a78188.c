
/* fairygui::GList::removeChildToPool(fairygui::GObject*) */

void __thiscall fairygui::GList::removeChildToPool(GList *this,GObject *param_1)

{
  GObjectPool::returnObject(*(GObjectPool **)(this + 0x328),param_1);
  GComponent::removeChild((GComponent *)this,param_1);
  return;
}

