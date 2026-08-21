
/* v8::internal::compiler::JSOperatorBuilder::Call(unsigned long,
   v8::internal::compiler::CallFrequency const&, v8::internal::compiler::FeedbackSource const&,
   v8::internal::ConvertReceiverMode, v8::internal::SpeculationMode,
   v8::internal::compiler::CallFeedbackRelation) */

Operator * __thiscall
v8::internal::compiler::JSOperatorBuilder::Call
          (JSOperatorBuilder *this,uint param_2_00,undefined4 *param_2,undefined8 *param_3,
          int param_5,int param_6,int param_7)

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
  uVar6 = param_3[1];
  uVar5 = *param_3;
  uVar1 = *param_2;
  this_00 = *(Zone **)(this + 8);
  pOVar3 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar3) < 0x50) {
    pOVar3 = (Operator *)Zone::NewExpand(this_00,0x50);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar3 + 0x50;
  }
  Operator::Operator(pOVar3,0x2fc,0,"JSCall",param_2_00 & 0x7ffffff,1,1,1,1,2);
  *(uint *)(pOVar3 + 0x30) = param_2_00 | param_5 << 0x1d | param_6 << 0x1c | param_7 << 0x1b;
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

