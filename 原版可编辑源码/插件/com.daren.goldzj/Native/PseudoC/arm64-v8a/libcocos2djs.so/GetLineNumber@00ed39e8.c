
/* v8::CpuProfileNode::GetLineNumber() const */

int __thiscall v8::CpuProfileNode::GetLineNumber(CpuProfileNode *this)

{
  if (*(int *)(this + 0x40) != 0) {
    return *(int *)(this + 0x40);
  }
  return *(int *)(*(long *)(this + 8) + 0x18);
}

