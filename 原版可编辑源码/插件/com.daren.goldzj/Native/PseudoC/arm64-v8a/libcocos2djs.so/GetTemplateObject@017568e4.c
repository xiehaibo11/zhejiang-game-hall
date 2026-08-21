
/* v8::internal::compiler::JSOperatorBuilder::GetTemplateObject(v8::internal::Handle<v8::internal::TemplateObjectDescription>,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>, v8::internal::compiler::FeedbackSource
   const&) */

Operator * __thiscall
v8::internal::compiler::JSOperatorBuilder::GetTemplateObject
          (JSOperatorBuilder *this,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  Zone *this_00;
  Operator *pOVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar5 = param_4[1];
  uVar4 = *param_4;
  this_00 = *(Zone **)(this + 8);
  pOVar2 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar2) < 0x58) {
    pOVar2 = (Operator *)Zone::NewExpand(this_00,0x58);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar2 + 0x58;
  }
  Operator::Operator(pOVar2,0x2e8,0x70,"JSGetTemplateObject",0,1,1,1,1,0);
  *(undefined8 *)(pOVar2 + 0x30) = param_2;
  *(undefined8 *)(pOVar2 + 0x38) = param_3;
  *(undefined ***)pOVar2 = &PTR__Operator_01ccfed8;
  *(undefined8 *)(pOVar2 + 0x48) = uVar5;
  *(undefined8 *)(pOVar2 + 0x40) = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return pOVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

