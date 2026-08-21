
/* v8::internal::compiler::MachineOperatorBuilder::StackSlot(int, int) */

Operator * __thiscall
v8::internal::compiler::MachineOperatorBuilder::StackSlot
          (MachineOperatorBuilder *this,int param_1,int param_2)

{
  Zone *this_00;
  Operator *pOVar1;
  
  if ((param_1 == 4) && (param_2 == 0)) {
    pOVar1 = (Operator *)(*(long *)(this + 8) + 0x4f80);
  }
  else if ((param_1 == 8) && (param_2 == 0)) {
    pOVar1 = (Operator *)(*(long *)(this + 8) + 0x4fb8);
  }
  else if ((param_1 == 0x10) && (param_2 == 0)) {
    pOVar1 = (Operator *)(*(long *)(this + 8) + 0x4ff0);
  }
  else if ((param_1 == 4) && (param_2 == 4)) {
    pOVar1 = (Operator *)(*(long *)(this + 8) + 0x5028);
  }
  else if ((param_1 == 8) && (param_2 == 8)) {
    pOVar1 = (Operator *)(*(long *)(this + 8) + 0x5060);
  }
  else if ((param_1 == 0x10) && (param_2 == 0x10)) {
    pOVar1 = (Operator *)(*(long *)(this + 8) + 0x5098);
  }
  else {
    this_00 = *(Zone **)this;
    pOVar1 = *(Operator **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x38) {
      pOVar1 = (Operator *)Zone::NewExpand(this_00,0x38);
    }
    else {
      *(Operator **)(this_00 + 0x10) = pOVar1 + 0x38;
    }
    Operator::Operator(pOVar1,0x1ad,0x60,"StackSlot",0,0,0,1,0,0);
    *(ulong *)(pOVar1 + 0x2c) = CONCAT44(param_2,param_1);
    *(undefined ***)pOVar1 = &PTR__Operator_01cd5fb8;
  }
  return pOVar1;
}

