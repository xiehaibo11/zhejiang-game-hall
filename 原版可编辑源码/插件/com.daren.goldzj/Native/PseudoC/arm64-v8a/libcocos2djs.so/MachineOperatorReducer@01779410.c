
/* v8::internal::compiler::MachineOperatorReducer::MachineOperatorReducer(v8::internal::compiler::AdvancedReducer::Editor*,
   v8::internal::compiler::MachineGraph*, bool) */

void __thiscall
v8::internal::compiler::MachineOperatorReducer::MachineOperatorReducer
          (MachineOperatorReducer *this,Editor *param_1,MachineGraph *param_2,bool param_3)

{
  *(Editor **)(this + 8) = param_1;
  *(MachineGraph **)(this + 0x10) = param_2;
  this[0x18] = (MachineOperatorReducer)param_3;
  *(undefined ***)this = &PTR__MachineOperatorReducer_01cd0088;
  return;
}

