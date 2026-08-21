
/* fairygui::RelationItem::setTarget(fairygui::GObject*) */

void __thiscall fairygui::RelationItem::setTarget(RelationItem *this,GObject *param_1)

{
  GObject *pGVar1;
  
  pGVar1 = (GObject *)WeakPtr::ptr((WeakPtr *)(this + 8));
  if (pGVar1 != param_1) {
    if (pGVar1 != (GObject *)0x0) {
      releaseRefTarget(this,pGVar1);
    }
    WeakPtr::operator=((WeakPtr *)(this + 8),param_1);
    if (param_1 != (GObject *)0x0) {
      addRefTarget(this,param_1);
      return;
    }
  }
  return;
}

