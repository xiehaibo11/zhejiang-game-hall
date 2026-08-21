
/* v8::internal::compiler::WasmGraphBuilder::Simd8x16ShuffleOp(unsigned char const*,
   v8::internal::compiler::Node* const*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::Simd8x16ShuffleOp
          (WasmGraphBuilder *this,uchar *param_1,Node **param_2)

{
  Operator *pOVar1;
  Graph *this_00;
  Node *local_30;
  Node *pNStack_28;
  
  this[0x60] = (WasmGraphBuilder)0x1;
  this_00 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::S8x16Shuffle
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],param_1);
  local_30 = *param_2;
  pNStack_28 = param_2[1];
  Graph::NewNode(this_00,pOVar1,2,&local_30,false);
  return;
}

