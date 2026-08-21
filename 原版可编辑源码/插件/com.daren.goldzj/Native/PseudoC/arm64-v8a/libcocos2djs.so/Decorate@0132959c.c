
/* v8::internal::compiler::WasmDecorator::Decorate(v8::internal::compiler::Node*) */

void __thiscall v8::internal::compiler::WasmDecorator::Decorate(WasmDecorator *this,Node *param_1)

{
  char *local_30;
  undefined *puStack_28;
  undefined4 local_20;
  ulong local_18;
  
  local_30 = "wasm graph creation";
  puStack_28 = &DAT_01a054c4;
  local_18 = (ulong)(uint)(*(int *)(*(long *)(this + 0x10) + 0x10) -
                          *(int *)(*(long *)(this + 0x10) + 8));
  local_20 = 0;
  NodeOriginTable::SetNodeOrigin(*(NodeOriginTable **)(this + 8),param_1,(NodeOrigin *)&local_30);
  return;
}

