
/* fairygui::GList::getNumItems() */

ulong __thiscall fairygui::GList::getNumItems(GList *this)

{
  if (this[0x338] != (GList)0x0) {
    return (ulong)*(uint *)(this + 0x33c);
  }
  return (ulong)(*(long *)(this + 0x1e8) - *(long *)(this + 0x1e0)) >> 3;
}

