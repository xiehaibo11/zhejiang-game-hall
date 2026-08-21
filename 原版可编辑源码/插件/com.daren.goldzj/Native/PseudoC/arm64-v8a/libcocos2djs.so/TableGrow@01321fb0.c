
/* v8::internal::compiler::WasmGraphBuilder::TableGrow(unsigned int, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::TableGrow
          (WasmGraphBuilder *this,uint param_1,Node *param_2,Node *param_3)

{
  Operator *pOVar1;
  undefined8 uVar2;
  Node *pNVar3;
  Graph *pGVar4;
  Node *local_58;
  Node *pNStack_50;
  undefined8 local_48;
  Node *local_40;
  undefined8 uStack_38;
  
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::NumberConstant
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],(double)param_1);
  local_58 = (Node *)0x0;
  local_58 = (Node *)Graph::NewNode(pGVar4,pOVar1,0,&local_58,false);
  pNStack_50 = param_2;
  local_48 = BuildConvertUint32ToSmiWithSaturation(this,param_3,FLAG_wasm_max_table_size);
  uVar2 = MachineGraph::IntPtrConstant(*(MachineGraph **)(this + 8),0);
  pNVar3 = (Node *)BuildCallToRuntimeWithContext
                             (this,0x1d5,uVar2,&local_58,3,*(undefined8 *)(this + 0x20),
                              **(undefined8 **)(this + 0x18));
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::TruncateInt64ToInt32
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  local_40 = pNVar3;
  pNVar3 = (Node *)Graph::NewNode(pGVar4,pOVar1,1,&local_40,false);
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word32Sar
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  uStack_38 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),1);
  local_40 = pNVar3;
  Graph::NewNode(pGVar4,pOVar1,2,&local_40,false);
  return;
}

