
/* v8::internal::compiler::BytecodeGraphBuilder::AdvanceIteratorsTo(int) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::AdvanceIteratorsTo
          (BytecodeGraphBuilder *this,int param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(this + 0x90);
  if (iVar1 != param_1) {
    do {
      lVar2 = *(long *)(this + 0x80);
      if ((*(int *)(lVar2 + 0x18) != -1) && (*(int *)(lVar2 + 0x20) == iVar1)) {
        *(ulong *)(*(long *)(this + 0x1d8) + 0x10) =
             *(ulong *)(this + 0x1e0) & 0x7fff80000000 | *(ulong *)(lVar2 + 0x28) & 0x7ffffffe;
        SourcePositionTableIterator::Advance(*(SourcePositionTableIterator **)(this + 0x80));
      }
      interpreter::BytecodeArrayIterator::Advance((BytecodeArrayIterator *)(this + 0x88));
      iVar1 = *(int *)(this + 0x90);
    } while (iVar1 != param_1);
  }
  return;
}

