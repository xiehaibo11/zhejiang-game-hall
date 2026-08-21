
/* v8::internal::compiler::WasmGraphBuilder::AppendToMerge(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::AppendToMerge
          (WasmGraphBuilder *this,Node *param_1,Node *param_2)

{
  Operator *pOVar1;
  uint uVar2;
  
  Node::AppendInput(param_1,*(Zone **)**(undefined8 **)(this + 8),param_2);
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x20) + 8);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
  }
  pOVar1 = (Operator *)
           CommonOperatorBuilder::ResizeMergeOrPhi
                     (*(CommonOperatorBuilder **)(*(long *)(this + 8) + 8),*(Operator **)param_1,
                      uVar2);
  NodeProperties::ChangeOp(param_1,pOVar1);
  return;
}

