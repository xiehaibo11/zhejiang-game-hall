
/* v8::internal::compiler::WasmGraphBuilder::BuildWasmReturnCall(v8::internal::Signature<v8::internal::wasm::ValueType>*,
   v8::internal::Vector<v8::internal::compiler::Node*>, int, v8::internal::compiler::Node*,
   v8::internal::compiler::WasmGraphBuilder::UseRetpoline) */

Node * v8::internal::compiler::WasmGraphBuilder::BuildWasmReturnCall
                 (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,uint param_7)

{
  Graph *this;
  CommonOperatorBuilder *this_00;
  CallDescriptor *pCVar1;
  undefined8 uVar2;
  Node *pNVar3;
  Operator *pOVar4;
  Node *local_48;
  
  pCVar1 = (CallDescriptor *)
           GetWasmCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(param_1 + 8),param_2,param_7 & 1,0);
  uVar2 = CommonOperatorBuilder::TailCall
                    (*(CommonOperatorBuilder **)(*(long *)(param_1 + 8) + 8),pCVar1);
  pNVar3 = (Node *)BuildCallNode(param_1,param_2,param_3,param_4,param_5,param_6,uVar2);
  this = (Graph *)**(undefined8 **)(param_1 + 8);
  this_00 = (CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[1];
  if (*(long *)(this + 0x10) == 0) {
    pOVar4 = (Operator *)CommonOperatorBuilder::End(this_00,1);
    local_48 = pNVar3;
    uVar2 = Graph::NewNode(this,pOVar4,1,&local_48,false);
    *(undefined8 *)(this + 0x10) = uVar2;
  }
  else {
    NodeProperties::MergeControlToEnd(this,this_00,pNVar3);
  }
  return pNVar3;
}

