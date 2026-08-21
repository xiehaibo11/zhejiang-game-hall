
/* fairygui::GComponent::numChildren() const */

ulong __thiscall fairygui::GComponent::numChildren(GComponent *this)

{
  return (ulong)(*(long *)(this + 0x1e8) - *(long *)(this + 0x1e0)) >> 3;
}

