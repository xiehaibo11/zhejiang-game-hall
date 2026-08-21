
/* fairygui::GList::removeChildrenToPool() */

void __thiscall fairygui::GList::removeChildrenToPool(GList *this)

{
  GObject *pGVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)(*(long *)(this + 0x1e8) - *(long *)(this + 0x1e0)) >> 3;
  uVar2 = (uint)uVar3;
  while (0 < (int)uVar2) {
    uVar2 = (int)uVar3 - 1;
    uVar3 = (ulong)uVar2;
    pGVar1 = (GObject *)GComponent::getChildAt((GComponent *)this,uVar2);
    GObjectPool::returnObject(*(GObjectPool **)(this + 0x328),pGVar1);
    (**(code **)(*(long *)this + 0xb8))(this,uVar3);
  }
  return;
}

