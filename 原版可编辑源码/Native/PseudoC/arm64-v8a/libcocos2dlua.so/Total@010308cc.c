
/* ClipperLib::PolyTree::Total() const */

ulong __thiscall ClipperLib::PolyTree::Total(PolyTree *this)

{
  return (ulong)(*(long *)(this + 0x50) - *(long *)(this + 0x48)) >> 3;
}

