
/* v8::internal::compiler::CommonOperatorBuilder::Call(v8::internal::compiler::CallDescriptor
   const*) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::Call
          (CommonOperatorBuilder *this,CallDescriptor *param_1)

{
  CallDescriptor CVar1;
  bool bVar2;
  Zone *this_00;
  Operator *pOVar3;
  
  this_00 = *(Zone **)(this + 8);
  pOVar3 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar3) < 0x40) {
    pOVar3 = (Operator *)Zone::NewExpand(this_00,0x40);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar3 + 0x40;
  }
  CVar1 = param_1[0x28];
  bVar2 = (~(byte)CVar1 & 0x7c) != 0;
  Operator::Operator(pOVar3,0x31,CVar1,"Call",
                     (*(undefined8 **)(param_1 + 0x10))[1] + ((ulong)*(uint *)(param_1 + 0x48) & 1)
                     + 1,bVar2,(~(byte)CVar1 & 0x70) != 0,**(undefined8 **)(param_1 + 0x10),bVar2,
                     ((byte)CVar1 >> 4 ^ 0xff) & 2);
  *(CallDescriptor **)(pOVar3 + 0x30) = param_1;
  *(undefined ***)pOVar3 = &PTR__Operator_01ccc7a8;
  return pOVar3;
}

