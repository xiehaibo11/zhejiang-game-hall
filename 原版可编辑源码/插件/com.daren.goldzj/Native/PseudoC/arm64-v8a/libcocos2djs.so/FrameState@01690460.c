
/* v8::internal::compiler::CommonOperatorBuilder::FrameState(v8::internal::BailoutId,
   v8::internal::compiler::OutputFrameStateCombine, v8::internal::compiler::FrameStateFunctionInfo
   const*) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::FrameState
          (CommonOperatorBuilder *this,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  Zone *this_00;
  Operator *pOVar1;
  
  this_00 = *(Zone **)(this + 8);
  pOVar1 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x50) {
    pOVar1 = (Operator *)Zone::NewExpand(this_00,0x50);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar1 + 0x50;
  }
  Operator::Operator(pOVar1,0x29,0x7c,"FrameState",5,0,0,1,0,0);
  *(undefined4 *)(pOVar1 + 0x30) = param_2;
  *(undefined8 *)(pOVar1 + 0x38) = param_3;
  *(undefined8 *)(pOVar1 + 0x40) = param_4;
  *(undefined ***)pOVar1 = &PTR__Operator_01cccbe8;
  return pOVar1;
}

