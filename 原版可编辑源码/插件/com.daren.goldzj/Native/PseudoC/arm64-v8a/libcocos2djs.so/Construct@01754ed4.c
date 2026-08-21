
/* v8::internal::compiler::JSOperatorBuilder::Construct(unsigned int,
   v8::internal::compiler::CallFrequency const&, v8::internal::compiler::FeedbackSource const&) */

Operator * __thiscall
v8::internal::compiler::JSOperatorBuilder::Construct
          (JSOperatorBuilder *this,uint param_1,CallFrequency *param_2,FeedbackSource *param_3)

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
  uVar6 = *(undefined8 *)(param_3 + 8);
  uVar5 = *(undefined8 *)param_3;
  uVar1 = *(undefined4 *)param_2;
  this_00 = *(Zone **)(this + 8);
  pOVar3 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar3) < 0x50) {
    pOVar3 = (Operator *)Zone::NewExpand(this_00,0x50);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar3 + 0x50;
  }
  Operator::Operator(pOVar3,0x301,0,"JSConstruct",param_1,1,1,1,1,2);
  *(uint *)(pOVar3 + 0x30) = param_1;
  *(undefined4 *)(pOVar3 + 0x34) = uVar1;
  *(undefined ***)pOVar3 = &PTR__Operator_01ccfad8;
  *(undefined8 *)(pOVar3 + 0x40) = uVar6;
  *(undefined8 *)(pOVar3 + 0x38) = uVar5;
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return pOVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

