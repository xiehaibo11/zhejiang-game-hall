
/* v8::internal::compiler::JSOperatorBuilder::CreateClosure(v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::FeedbackCell>, v8::internal::Handle<v8::internal::Code>,
   v8::internal::AllocationType) */

Operator * __thiscall
v8::internal::compiler::JSOperatorBuilder::CreateClosure
          (JSOperatorBuilder *this,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          Operator param_5)

{
  long lVar1;
  Zone *this_00;
  Operator *pOVar2;
  long lVar3;
  undefined4 local_50;
  undefined3 uStack_4c;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  this_00 = *(Zone **)(this + 8);
  pOVar2 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar2) < 0x58) {
    pOVar2 = (Operator *)Zone::NewExpand(this_00,0x58);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar2 + 0x58;
  }
  Operator::Operator(pOVar2,0x2da,0x70,"JSCreateClosure",0,1,1,1,1,0);
  *(undefined8 *)(pOVar2 + 0x30) = param_2;
  *(undefined8 *)(pOVar2 + 0x38) = param_3;
  *(undefined8 *)(pOVar2 + 0x40) = param_4;
  pOVar2[0x48] = param_5;
  *(undefined ***)pOVar2 = &PTR__Operator_01ccfe58;
  *(uint *)(pOVar2 + 0x4c) = CONCAT31(uStack_4c,local_50._3_1_);
  *(undefined4 *)(pOVar2 + 0x49) = local_50;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return pOVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

