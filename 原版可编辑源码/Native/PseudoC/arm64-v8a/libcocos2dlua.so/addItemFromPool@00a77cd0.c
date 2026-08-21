
/* fairygui::GList::addItemFromPool(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall fairygui::GList::addItemFromPool(GList *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  GObject *this_00;
  
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  pbVar2 = (basic_string *)(this + 0x308);
  if (uVar1 != 0) {
    pbVar2 = param_1;
  }
  this_00 = (GObject *)GObjectPool::getObject(*(GObjectPool **)(this + 0x328),pbVar2);
  if (this_00 != (GObject *)0x0) {
    GObject::setVisible(this_00,true);
  }
  GComponent::addChild((GComponent *)this,this_00);
  return;
}

