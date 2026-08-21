
/* v8::internal::compiler::MachineOperatorBuilder::S8x16Shuffle(unsigned char const*) */

Operator * __thiscall
v8::internal::compiler::MachineOperatorBuilder::S8x16Shuffle
          (MachineOperatorBuilder *this,uchar *param_1)

{
  Zone *this_00;
  Operator *pOVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  this_00 = *(Zone **)this;
  pOVar1 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x40) {
    pOVar1 = (Operator *)Zone::NewExpand(this_00,0x40);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar1 + 0x40;
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  Operator::Operator(pOVar1,0x2a7,0x7c,"Shuffle",2,0,0,1,0,0);
  *(undefined8 *)(pOVar1 + 0x2c) = uVar2;
  *(undefined8 *)(pOVar1 + 0x34) = uVar3;
  *(undefined ***)pOVar1 = &PTR__Operator_01cd9460;
  return pOVar1;
}

