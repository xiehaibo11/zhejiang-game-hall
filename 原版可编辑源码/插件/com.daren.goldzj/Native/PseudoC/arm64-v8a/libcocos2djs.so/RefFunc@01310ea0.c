
/* v8::internal::compiler::WasmGraphBuilder::RefFunc(unsigned int) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::RefFunc(WasmGraphBuilder *this,uint param_1)

{
  Graph *this_00;
  Operator *pOVar1;
  undefined8 uVar2;
  Node *local_28;
  
  this_00 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::NumberConstant
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],(double)param_1);
  local_28 = (Node *)0x0;
  local_28 = (Node *)Graph::NewNode(this_00,pOVar1,0,&local_28,false);
  uVar2 = MachineGraph::IntPtrConstant(*(MachineGraph **)(this + 8),0);
  BuildCallToRuntimeWithContext
            (this,0x1d0,uVar2,&local_28,1,*(undefined8 *)(this + 0x20),
             **(undefined8 **)(this + 0x18));
  return;
}

