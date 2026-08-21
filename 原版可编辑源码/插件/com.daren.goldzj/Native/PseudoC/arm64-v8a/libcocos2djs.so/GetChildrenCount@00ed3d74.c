
/* v8::CpuProfileNode::GetChildrenCount() const */

ulong __thiscall v8::CpuProfileNode::GetChildrenCount(CpuProfileNode *this)

{
  return (ulong)(*(long *)(this + 0x50) - *(long *)(this + 0x48)) >> 3;
}

