
/* v8::internal::compiler::JSOperatorBuilder::StoreGlobal(v8::internal::LanguageMode,
   v8::internal::Handle<v8::internal::Name> const&, v8::internal::compiler::FeedbackSource const&)
    */

Operator * __thiscall
v8::internal::compiler::JSOperatorBuilder::StoreGlobal
          (JSOperatorBuilder *this,byte param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  Zone *this_00;
  Operator *pOVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_40;
  undefined3 uStack_3c;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar6 = param_4[1];
  uVar5 = *param_4;
  uVar4 = *param_3;
  this_00 = *(Zone **)(this + 8);
  pOVar2 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar2) < 0x58) {
    pOVar2 = (Operator *)Zone::NewExpand(this_00,0x58);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar2 + 0x58;
  }
  Operator::Operator(pOVar2,0x2ef,0,"JSStoreGlobal",1,1,1,0,1,2);
  pOVar2[0x30] = (Operator)(param_2 & 1);
  *(undefined ***)pOVar2 = &PTR__Operator_01ccfcd8;
  *(undefined8 *)(pOVar2 + 0x38) = uVar4;
  *(uint *)(pOVar2 + 0x34) = CONCAT31(uStack_3c,local_40._3_1_);
  *(undefined4 *)(pOVar2 + 0x31) = local_40;
  *(undefined8 *)(pOVar2 + 0x48) = uVar6;
  *(undefined8 *)(pOVar2 + 0x40) = uVar5;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return pOVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

