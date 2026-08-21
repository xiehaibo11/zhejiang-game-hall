
/* v8::internal::compiler::JSOperatorBuilder::CallWithArrayLike(v8::internal::compiler::CallFrequency
   const&, v8::internal::compiler::FeedbackSource const&, v8::internal::SpeculationMode,
   v8::internal::compiler::CallFeedbackRelation) */

Operator * __thiscall
v8::internal::compiler::JSOperatorBuilder::CallWithArrayLike
          (JSOperatorBuilder *this,undefined4 *param_1,undefined8 *param_2,int param_4,int param_5)

{
  undefined4 uVar1;
  long lVar2;
  Zone *this_00;
  Operator *pOVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  uVar6 = param_2[1];
  uVar5 = *param_2;
  uVar1 = *param_1;
  this_00 = *(Zone **)(this + 8);
  pOVar3 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar3) < 0x50) {
    pOVar3 = (Operator *)Zone::NewExpand(this_00,0x50);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar3 + 0x50;
  }
  Operator::Operator(pOVar3,0x2fe,0,"JSCallWithArrayLike",3,1,1,1,1,2);
  *(uint *)(pOVar3 + 0x30) = param_4 << 0x1c | param_5 << 0x1b | 0x40000002;
  *(undefined4 *)(pOVar3 + 0x34) = uVar1;
  *(undefined ***)pOVar3 = &PTR__Operator_01ccfa18;
  *(undefined8 *)(pOVar3 + 0x40) = uVar6;
  *(undefined8 *)(pOVar3 + 0x38) = uVar5;
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return pOVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

