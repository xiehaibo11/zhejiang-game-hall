
/* v8::internal::compiler::WasmGraphBuilder::SetSourcePosition(v8::internal::compiler::Node*, int)
    */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::SetSourcePosition
          (WasmGraphBuilder *this,Node *param_1,int param_2)

{
  if (*(SourcePositionTable **)(this + 0x78) != (SourcePositionTable *)0x0) {
    SourcePositionTable::SetSourcePosition
              (*(SourcePositionTable **)(this + 0x78),param_1,
               (-(ulong)(param_2 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_2 + 1U) << 1) &
               0xffff80007fffffff);
    return;
  }
  return;
}

