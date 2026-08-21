
/* fairygui::GObject::setSortingOrder(int) */

void __thiscall fairygui::GObject::setSortingOrder(GObject *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0xfc);
  uVar1 = param_1 & (param_1 >> 0x1f ^ 0xffffffffU);
  if (uVar2 != uVar1) {
    *(uint *)(this + 0xfc) = uVar1;
    if (*(GComponent **)(this + 0xa0) != (GComponent *)0x0) {
      GComponent::childSortingOrderChanged(*(GComponent **)(this + 0xa0),this,uVar2,uVar1);
      return;
    }
  }
  return;
}

