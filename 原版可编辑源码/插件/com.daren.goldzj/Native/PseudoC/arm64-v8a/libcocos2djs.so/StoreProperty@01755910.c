
/* v8::internal::compiler::JSOperatorBuilder::StoreProperty(v8::internal::LanguageMode,
   v8::internal::compiler::FeedbackSource const&) */

Operator * __thiscall
v8::internal::compiler::JSOperatorBuilder::StoreProperty
          (JSOperatorBuilder *this,byte param_2,undefined8 *param_3)

{
  long lVar1;
  Zone *this_00;
  Operator *pOVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_58;
  undefined3 uStack_54;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar5 = param_3[1];
  uVar4 = *param_3;
  this_00 = *(Zone **)(this + 8);
  pOVar2 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar2) < 0x50) {
    pOVar2 = (Operator *)Zone::NewExpand(this_00,0x50);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar2 + 0x50;
  }
  Operator::Operator(pOVar2,0x2ec,0,"JSStoreProperty",3,1,1,0,1,2);
  *(undefined ***)pOVar2 = &PTR__Operator_01ccfb98;
  pOVar2[0x40] = (Operator)(param_2 & 1);
  *(undefined8 *)(pOVar2 + 0x38) = uVar5;
  *(undefined8 *)(pOVar2 + 0x30) = uVar4;
  *(uint *)(pOVar2 + 0x44) = CONCAT31(uStack_54,local_58._3_1_);
  *(undefined4 *)(pOVar2 + 0x41) = local_58;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return pOVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

