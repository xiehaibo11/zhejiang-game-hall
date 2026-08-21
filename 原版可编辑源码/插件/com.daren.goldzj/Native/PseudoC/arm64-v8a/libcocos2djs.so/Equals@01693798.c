
/* v8::internal::compiler::Operator1<v8::internal::MachineRepresentation,
   v8::internal::compiler::OpEqualTo<v8::internal::MachineRepresentation>,
   v8::internal::compiler::OpHash<v8::internal::MachineRepresentation>
   >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<v8::internal::MachineRepresentation,v8::internal::compiler::OpEqualTo<v8::internal::MachineRepresentation>,v8::internal::compiler::OpHash<v8::internal::MachineRepresentation>>
::Equals(Operator1<v8::internal::MachineRepresentation,v8::internal::compiler::OpEqualTo<v8::internal::MachineRepresentation>,v8::internal::compiler::OpHash<v8::internal::MachineRepresentation>>
         *this,Operator *param_1)

{
  if (*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) {
    return this[0x2c] ==
           *(Operator1<v8::internal::MachineRepresentation,v8::internal::compiler::OpEqualTo<v8::internal::MachineRepresentation>,v8::internal::compiler::OpHash<v8::internal::MachineRepresentation>>
             *)(param_1 + 0x2c);
  }
  return false;
}

