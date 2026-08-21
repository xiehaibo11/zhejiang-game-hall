
/* v8::CpuProfileNode::IsScriptSharedCrossOrigin() const */

uint __thiscall v8::CpuProfileNode::IsScriptSharedCrossOrigin(CpuProfileNode *this)

{
  return **(uint **)(this + 8) >> 0x1f;
}

