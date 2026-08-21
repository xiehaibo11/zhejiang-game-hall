
/* v8::internal::compiler::BytecodeGraphBuilder::UpdateSourcePosition(int) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::UpdateSourcePosition
          (BytecodeGraphBuilder *this,int param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x80);
  if ((*(int *)(lVar1 + 0x18) != -1) && (*(int *)(lVar1 + 0x20) == param_1)) {
    *(ulong *)(*(long *)(this + 0x1d8) + 0x10) =
         *(ulong *)(this + 0x1e0) & 0x7fff80000000 | *(ulong *)(lVar1 + 0x28) & 0x7ffffffe;
    SourcePositionTableIterator::Advance(*(SourcePositionTableIterator **)(this + 0x80));
    return;
  }
  return;
}

