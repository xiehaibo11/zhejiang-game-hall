
/* v8::internal::compiler::CsaLoadElimination::ReduceCall(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::CsaLoadElimination::ReduceCall(CsaLoadElimination *this,Node *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  plVar1 = (long *)NodeProperties::GetValueInput(param_1,0);
  if (*(short *)(*plVar1 + 0x10) == 0x1b) {
    uVar4 = *(undefined8 *)(*plVar1 + 0x30);
    uVar2 = ExternalReference::check_object_type();
    uVar3 = internal::operator==(uVar4,uVar2);
    if ((uVar3 & 1) != 0) {
      PropagateInputState(this,param_1);
      return;
    }
  }
  else {
    ExternalReference::check_object_type();
  }
  ReduceOtherNode(this,param_1);
  return;
}

