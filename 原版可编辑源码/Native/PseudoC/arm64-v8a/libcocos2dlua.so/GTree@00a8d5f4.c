
/* fairygui::GTree::GTree() */

void __thiscall fairygui::GTree::GTree(GTree *this)

{
  GList::GList((GList *)this);
  *(undefined8 *)(this + 0x3a0) = 0;
  *(undefined8 *)(this + 0x3d0) = 0;
  *(undefined8 *)(this + 1000) = 0;
  *(undefined4 *)(this + 0x3f0) = 0;
  *(undefined4 *)(this + 0x3e0) = 0x1e;
  *(undefined ***)this = &PTR__GTree_016a6fc8;
  this[0x3f4] = (GTree)0x0;
  return;
}

