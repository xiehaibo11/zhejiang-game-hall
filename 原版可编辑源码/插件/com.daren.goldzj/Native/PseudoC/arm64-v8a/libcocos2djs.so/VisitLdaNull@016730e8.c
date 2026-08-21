
/* v8::internal::compiler::BytecodeGraphBuilder::VisitLdaNull() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitLdaNull(BytecodeGraphBuilder *this)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = JSGraph::NullConstant(*(JSGraph **)(this + 0x10));
  lVar2 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar2 + 0x5c) <
      (ulong)(*(long *)(lVar2 + 0x30) - *(long *)(lVar2 + 0x28) >> 3)) {
    *(undefined8 *)(*(long *)(lVar2 + 0x28) + (long)*(int *)(lVar2 + 0x5c) * 8) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

