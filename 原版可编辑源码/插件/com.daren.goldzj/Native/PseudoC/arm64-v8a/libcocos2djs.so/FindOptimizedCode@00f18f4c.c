
/* v8::internal::Deoptimizer::FindOptimizedCode() */

void __thiscall v8::internal::Deoptimizer::FindOptimizedCode(Deoptimizer *this)

{
  int iVar1;
  
  iVar1 = FindDeoptimizingCode(this,*(ulong *)(this + 0x20));
  if (iVar1 != 0) {
    return;
  }
  Isolate::FindCodeObject(*(Isolate **)this,*(ulong *)(this + 0x20));
  return;
}

