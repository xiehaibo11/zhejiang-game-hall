
/* v8::internal::compiler::JSOperatorBuilder::LoadProperty(v8::internal::compiler::FeedbackSource
   const&) */

Operator * __thiscall
v8::internal::compiler::JSOperatorBuilder::LoadProperty
          (JSOperatorBuilder *this,FeedbackSource *param_1)

{
  long lVar1;
  Zone *this_00;
  Operator *pOVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined3 uStack_44;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)param_1;
  this_00 = *(Zone **)(this + 8);
  pOVar2 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar2) < 0x50) {
    pOVar2 = (Operator *)Zone::NewExpand(this_00,0x50);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar2 + 0x50;
  }
  Operator::Operator(pOVar2,0x2e9,0,"JSLoadProperty",2,1,1,1,1,2);
  *(undefined ***)pOVar2 = &PTR__Operator_01ccfb98;
  pOVar2[0x40] = (Operator)0x0;
  *(undefined8 *)(pOVar2 + 0x38) = uVar5;
  *(undefined8 *)(pOVar2 + 0x30) = uVar4;
  *(uint *)(pOVar2 + 0x44) = CONCAT31(uStack_44,local_48._3_1_);
  *(undefined4 *)(pOVar2 + 0x41) = local_48;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return pOVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

