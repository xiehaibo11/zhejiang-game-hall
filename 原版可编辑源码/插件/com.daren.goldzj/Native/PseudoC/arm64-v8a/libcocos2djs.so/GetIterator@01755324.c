
/* v8::internal::compiler::JSOperatorBuilder::GetIterator(v8::internal::compiler::FeedbackSource
   const&, v8::internal::compiler::FeedbackSource const&) */

Operator * __thiscall
v8::internal::compiler::JSOperatorBuilder::GetIterator
          (JSOperatorBuilder *this,FeedbackSource *param_1,FeedbackSource *param_2)

{
  long lVar1;
  Zone *this_00;
  Operator *pOVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)param_1;
  uVar7 = *(undefined8 *)(param_2 + 8);
  uVar5 = *(undefined8 *)param_2;
  this_00 = *(Zone **)(this + 8);
  pOVar2 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar2) < 0x58) {
    pOVar2 = (Operator *)Zone::NewExpand(this_00,0x58);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar2 + 0x58;
  }
  Operator::Operator(pOVar2,0x30b,0,"JSGetIterator",1,1,1,1,1,2);
  *(undefined ***)pOVar2 = &PTR__Operator_01ccfbd8;
  *(undefined8 *)(pOVar2 + 0x38) = uVar6;
  *(undefined8 *)(pOVar2 + 0x30) = uVar4;
  *(undefined8 *)(pOVar2 + 0x48) = uVar7;
  *(undefined8 *)(pOVar2 + 0x40) = uVar5;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return pOVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

