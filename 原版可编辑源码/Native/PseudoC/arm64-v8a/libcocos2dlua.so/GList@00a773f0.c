
/* fairygui::GList::GList() */

void __thiscall fairygui::GList::GList(GList *this)

{
  GObjectPool *this_00;
  
  GComponent::GComponent((GComponent *)this);
  *(undefined ***)this = &PTR__GList_016a5be0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined2 *)(this + 0x2e0) = 1;
  *(undefined8 *)(this + 0x2e4) = 0;
  *(undefined8 *)(this + 0x2f4) = 0;
  *(undefined8 *)(this + 0x2ec) = 0;
  *(undefined4 *)(this + 0x2fc) = 0;
  this[0x300] = (GList)0x1;
  *(undefined8 *)(this + 0x30c) = 0;
  *(undefined8 *)(this + 0x304) = 0;
  *(undefined8 *)(this + 0x31c) = 0;
  *(undefined8 *)(this + 0x314) = 0;
  *(undefined8 *)(this + 0x329) = 0;
  *(undefined8 *)(this + 0x321) = 0;
  *(undefined4 *)(this + 0x334) = 0xffffffff;
  *(undefined2 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x33c) = 0;
  *(undefined4 *)(this + 0x344) = 0xffffffff;
  *(undefined4 *)(this + 0x360) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined8 *)(this + 0x368) = 0;
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x355) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  this[0x259] = (GList)0x1;
  GComponent::setOpaque((GComponent *)this,true);
  this_00 = operator_new(0x28);
  GObjectPool::GObjectPool(this_00);
  *(GObjectPool **)(this + 0x328) = this_00;
  return;
}

