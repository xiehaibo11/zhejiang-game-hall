
/* v8::internal::compiler::CommonOperatorReducer::CommonOperatorReducer(v8::internal::compiler::AdvancedReducer::Editor*,
   v8::internal::compiler::Graph*, v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::CommonOperatorBuilder*, v8::internal::compiler::MachineOperatorBuilder*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::CommonOperatorReducer::CommonOperatorReducer
          (CommonOperatorReducer *this,Editor *param_1,Graph *param_2,JSHeapBroker *param_3,
          CommonOperatorBuilder *param_4,MachineOperatorBuilder *param_5,Zone *param_6)

{
  Operator *pOVar1;
  long lVar2;
  Node *local_18;
  
  *(Graph **)(this + 0x10) = param_2;
  *(JSHeapBroker **)(this + 0x18) = param_3;
  *(CommonOperatorBuilder **)(this + 0x20) = param_4;
  *(MachineOperatorBuilder **)(this + 0x28) = param_5;
  *(undefined ***)this = &PTR__Reducer_01cca838;
  *(Editor **)(this + 8) = param_1;
  pOVar1 = (Operator *)CommonOperatorBuilder::Dead(param_4);
  local_18 = (Node *)0x0;
  lVar2 = Graph::NewNode(param_2,pOVar1,0,&local_18,false);
  *(long *)(this + 0x30) = lVar2;
  *(Zone **)(this + 0x38) = param_6;
  *(undefined8 *)(lVar2 + 8) = 1;
  return;
}

