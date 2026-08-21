
/* v8::internal::compiler::WasmGraphBuilder::BuildWasmCall(v8::internal::Signature<v8::internal::wasm::ValueType>*,
   v8::internal::Vector<v8::internal::compiler::Node*>,
   v8::internal::Vector<v8::internal::compiler::Node*>, int, v8::internal::compiler::Node*,
   v8::internal::compiler::WasmGraphBuilder::UseRetpoline) */

Node * v8::internal::compiler::WasmGraphBuilder::BuildWasmCall
                 (long param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                 byte param_9)

{
  Graph *this;
  CallDescriptor *pCVar1;
  undefined8 uVar2;
  Node *pNVar3;
  Operator *pOVar4;
  ulong uVar5;
  ulong uVar6;
  Node *local_60;
  undefined8 uStack_58;
  
  pCVar1 = (CallDescriptor *)
           GetWasmCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(param_1 + 8),param_2,param_9 & 1,0);
  uVar2 = CommonOperatorBuilder::Call
                    (*(CommonOperatorBuilder **)(*(long *)(param_1 + 8) + 8),pCVar1);
  pNVar3 = (Node *)BuildCallNode(param_1,param_2,param_3,param_4,param_7,param_8,uVar2);
  uVar6 = *param_2;
  if (uVar6 != 0) {
    if (uVar6 == 1) {
      *param_5 = pNVar3;
    }
    else {
      uVar5 = 0;
      do {
        this = (Graph *)**(undefined8 **)(param_1 + 8);
        pOVar4 = (Operator *)
                 CommonOperatorBuilder::Projection
                           ((CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[1],uVar5);
        uStack_58 = *(undefined8 *)(**(long **)(param_1 + 8) + 8);
        local_60 = pNVar3;
        uVar2 = Graph::NewNode(this,pOVar4,2,&local_60,false);
        param_5[uVar5] = uVar2;
        uVar5 = uVar5 + 1;
      } while (uVar6 != uVar5);
    }
  }
  return pNVar3;
}

