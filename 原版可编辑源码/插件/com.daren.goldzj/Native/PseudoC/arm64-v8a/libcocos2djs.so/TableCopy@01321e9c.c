
/* v8::internal::compiler::WasmGraphBuilder::TableCopy(unsigned int, unsigned int,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*, int)
    */

void v8::internal::compiler::WasmGraphBuilder::TableCopy
               (uint param_1,uint param_2,Node *param_3,Node *param_4,Node *param_5,int param_6)

{
  Graph *pGVar1;
  WasmGraphBuilder *this;
  Operator *pOVar2;
  undefined8 uVar3;
  Node *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  Node *local_48;
  
  this = (WasmGraphBuilder *)(ulong)param_1;
  pGVar1 = (Graph *)**(undefined8 **)(this + 8);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::NumberConstant
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],(double)param_2);
  local_70 = (Node *)0x0;
  local_70 = (Node *)Graph::NewNode(pGVar1,pOVar2,0,&local_70,false);
  pGVar1 = (Graph *)**(undefined8 **)(this + 8);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::NumberConstant
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],
                      (double)((ulong)param_3 & 0xffffffff));
  local_48 = (Node *)0x0;
  local_68 = Graph::NewNode(pGVar1,pOVar2,0,&local_48,false);
  local_60 = BuildConvertUint32ToSmiWithSaturation(this,param_4,FLAG_wasm_max_table_size);
  local_58 = BuildConvertUint32ToSmiWithSaturation(this,param_5,FLAG_wasm_max_table_size);
  local_50 = BuildConvertUint32ToSmiWithSaturation
                       (this,(Node *)(ulong)(uint)param_6,FLAG_wasm_max_table_size);
  uVar3 = MachineGraph::IntPtrConstant(*(MachineGraph **)(this + 8),0);
  BuildCallToRuntimeWithContext
            (this,0x1d4,uVar3,&local_70,5,*(undefined8 *)(this + 0x20),
             **(undefined8 **)(this + 0x18));
  return;
}

