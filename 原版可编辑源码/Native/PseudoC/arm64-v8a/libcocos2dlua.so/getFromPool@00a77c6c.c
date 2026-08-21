
/* fairygui::GList::getFromPool(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

GObject * __thiscall fairygui::GList::getFromPool(GList *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  GObject *this_00;
  
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  pbVar2 = (basic_string *)(this + 0x308);
                    /* catch() { ... } // from try @ 00a77c60 with catch @ 00a77c98 */
  if (uVar1 != 0) {
    pbVar2 = param_1;
  }
  this_00 = (GObject *)GObjectPool::getObject(*(GObjectPool **)(this + 0x328),pbVar2);
  if (this_00 != (GObject *)0x0) {
                    /* try { // try from 00a77cac to 00b77e6b has its CatchHandler @ 00a77cac
                       catch() { ... } // from try @ 00a77cac with catch @ 00a77cac
                       catch() { ... } // from try @ 00a77eec with catch @ 00a77cac */
    GObject::setVisible(this_00,true);
  }
  return this_00;
}

