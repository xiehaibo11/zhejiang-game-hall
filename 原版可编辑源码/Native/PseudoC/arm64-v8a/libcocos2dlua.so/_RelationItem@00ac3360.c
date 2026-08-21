
/* fairygui::RelationItem::~RelationItem() */

void __thiscall fairygui::RelationItem::~RelationItem(RelationItem *this)

{
  GObject *pGVar1;
  void *pvVar2;
  
  pGVar1 = (GObject *)WeakPtr::ptr((WeakPtr *)(this + 8));
  releaseRefTarget(this,pGVar1);
  cocos2d::Vec4::~Vec4((Vec4 *)(this + 0x28));
  pvVar2 = *(void **)(this + 0x10);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar2;
    operator_delete(pvVar2);
  }
  WeakPtr::~WeakPtr((WeakPtr *)(this + 8));
  return;
}

