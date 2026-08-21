
/* v8::internal::compiler::JSOperatorBuilder::LoadGlobal(v8::internal::Handle<v8::internal::Name>
   const&, v8::internal::compiler::FeedbackSource const&, v8::internal::TypeofMode) */

Operator * __thiscall
v8::internal::compiler::JSOperatorBuilder::LoadGlobal
          (JSOperatorBuilder *this,undefined8 *param_1,undefined8 *param_2,undefined4 param_4)

{
  long lVar1;
  Zone *this_00;
  Operator *pOVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar6 = param_2[1];
  uVar5 = *param_2;
  uVar4 = *param_1;
  this_00 = *(Zone **)(this + 8);
  pOVar2 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar2) < 0x58) {
    pOVar2 = (Operator *)Zone::NewExpand(this_00,0x58);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar2 + 0x58;
  }
  Operator::Operator(pOVar2,0x2eb,0,"JSLoadGlobal",0,1,1,1,1,2);
  *(undefined8 *)(pOVar2 + 0x30) = uVar4;
  *(undefined ***)pOVar2 = &PTR__Operator_01ccfc98;
  *(undefined4 *)(pOVar2 + 0x48) = param_4;
  *(undefined8 *)(pOVar2 + 0x40) = uVar6;
  *(undefined8 *)(pOVar2 + 0x38) = uVar5;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return pOVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

