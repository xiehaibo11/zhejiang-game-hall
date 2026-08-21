
/* ClipperLib::PolyNode::ChildCount() const */

ulong __thiscall ClipperLib::PolyNode::ChildCount(PolyNode *this)

{
  return (ulong)(*(long *)(this + 0x20) - *(long *)(this + 0x18)) >> 3;
}

