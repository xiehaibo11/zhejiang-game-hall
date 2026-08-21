
/* v8::internal::compiler::NodeMatcher::IsComparison() const */

bool __thiscall v8::internal::compiler::NodeMatcher::IsComparison(NodeMatcher *this)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(**(long **)this + 0x10);
  if (uVar1 - 0x2b1 < 6 || uVar1 - 0x6f < 0xd) {
    return true;
  }
  return uVar1 - 0x14b < 0x10;
}

