
/* v8::internal::compiler::WasmGraphBuilder::IsPhiWithMerge(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

bool __thiscall
v8::internal::compiler::WasmGraphBuilder::IsPhiWithMerge
          (WasmGraphBuilder *this,Node *param_1,Node *param_2)

{
  bool bVar1;
  Node *pNVar2;
  
  if ((param_1 == (Node *)0x0) || (1 < *(ushort *)(*(long *)param_1 + 0x10) - 0x23)) {
    bVar1 = false;
  }
  else {
    pNVar2 = (Node *)NodeProperties::GetControlInput(param_1,0);
    bVar1 = pNVar2 == param_2;
  }
  return bVar1;
}

