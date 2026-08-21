
/* v8::internal::compiler::JSOperatorBuilder::CreateLiteralRegExp(v8::internal::Handle<v8::internal::String>,
   v8::internal::compiler::FeedbackSource const&, int) */

Operator * __thiscall
v8::internal::compiler::JSOperatorBuilder::CreateLiteralRegExp
          (JSOperatorBuilder *this,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  long lVar1;
  Zone *this_00;
  Operator *pOVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar5 = param_3[1];
  uVar4 = *param_3;
  this_00 = *(Zone **)(this + 8);
  pOVar2 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar2) < 0x58) {
    pOVar2 = (Operator *)Zone::NewExpand(this_00,0x58);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar2 + 0x58;
  }
  Operator::Operator(pOVar2,0x2e3,0,"JSCreateLiteralRegExp",0,1,1,1,1,2);
  *(undefined8 *)(pOVar2 + 0x30) = param_2;
  *(undefined ***)pOVar2 = &PTR__Operator_01ccfe98;
  *(undefined4 *)(pOVar2 + 0x48) = 0xffffffff;
  *(undefined4 *)(pOVar2 + 0x4c) = param_4;
  *(undefined8 *)(pOVar2 + 0x40) = uVar5;
  *(undefined8 *)(pOVar2 + 0x38) = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return pOVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

