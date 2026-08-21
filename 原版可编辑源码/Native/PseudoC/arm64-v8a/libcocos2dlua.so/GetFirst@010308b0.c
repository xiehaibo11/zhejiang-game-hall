
/* ClipperLib::PolyTree::GetFirst() const */

undefined8 __thiscall ClipperLib::PolyTree::GetFirst(PolyTree *this)

{
  if (*(undefined8 **)(this + 0x18) != *(undefined8 **)(this + 0x20)) {
    return **(undefined8 **)(this + 0x18);
  }
  return 0;
}

