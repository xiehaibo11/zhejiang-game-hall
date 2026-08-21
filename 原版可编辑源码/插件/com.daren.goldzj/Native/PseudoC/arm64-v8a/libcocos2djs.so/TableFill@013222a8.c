
/* v8::internal::compiler::WasmGraphBuilder::TableFill(unsigned int, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::TableFill
          (WasmGraphBuilder *this,uint param_1,Node *param_2,Node *param_3,Node *param_4)

{
  Graph *this_00;
  Operator *pOVar1;
  undefined8 uVar2;
  Node *local_60;
  undefined8 local_58;
  Node *pNStack_50;
  undefined8 local_48;
  
  this_00 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::NumberConstant
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],(double)param_1);
  local_60 = (Node *)0x0;
  local_60 = (Node *)Graph::NewNode(this_00,pOVar1,0,&local_60,false);
  local_58 = BuildConvertUint32ToSmiWithSaturation(this,param_2,FLAG_wasm_max_table_size);
  pNStack_50 = param_3;
  local_48 = BuildConvertUint32ToSmiWithSaturation(this,param_4,FLAG_wasm_max_table_size);
  uVar2 = MachineGraph::IntPtrConstant(*(MachineGraph **)(this + 8),0);
  BuildCallToRuntimeWithContext
            (this,0x1d6,uVar2,&local_60,4,*(undefined8 *)(this + 0x20),
             **(undefined8 **)(this + 0x18));
  return;
}

