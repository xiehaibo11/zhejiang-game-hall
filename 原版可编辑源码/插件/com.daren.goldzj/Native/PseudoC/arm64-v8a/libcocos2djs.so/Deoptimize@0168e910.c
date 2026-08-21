
/* v8::internal::compiler::CommonOperatorBuilder::Deoptimize(v8::internal::DeoptimizeKind,
   v8::internal::DeoptimizeReason, v8::internal::compiler::FeedbackSource const&) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::Deoptimize
          (CommonOperatorBuilder *this,Operator param_2,Operator param_3,long *param_4)

{
  long lVar1;
  Zone *this_00;
  Operator *pOVar2;
  long lVar3;
  long lVar4;
  undefined4 local_58;
  undefined3 uStack_54;
  undefined6 uStack_50;
  undefined2 local_4a;
  undefined6 uStack_48;
  undefined2 uStack_42;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_2 == (Operator)0x0) && (param_3 == (Operator)0x12)) {
    if ((*param_4 == 0) || ((int)param_4[1] == -1)) {
      pOVar2 = (Operator *)(*(long *)this + 0xa80);
      goto LAB_0168eab4;
    }
  }
  else if ((param_2 == (Operator)0x0) && (param_3 == (Operator)0x26)) {
    if ((*param_4 == 0) || ((int)param_4[1] == -1)) {
      pOVar2 = (Operator *)(*(long *)this + 0xad8);
      goto LAB_0168eab4;
    }
  }
  else if ((param_2 == (Operator)0x1) && (param_3 == (Operator)0xe)) {
    if ((*param_4 == 0) || ((int)param_4[1] == -1)) {
      pOVar2 = (Operator *)(*(long *)this + 0xb30);
      goto LAB_0168eab4;
    }
  }
  else if ((param_2 == (Operator)0x1) &&
          ((param_3 == (Operator)0xd && ((*param_4 == 0 || ((int)param_4[1] == -1)))))) {
    pOVar2 = (Operator *)(*(long *)this + 0xb88);
    goto LAB_0168eab4;
  }
  lVar4 = param_4[1];
  uStack_42 = (undefined2)lVar4;
  local_4a = (undefined2)*param_4;
  uStack_48 = (undefined6)((ulong)*param_4 >> 0x10);
  this_00 = *(Zone **)(this + 8);
  pOVar2 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar2) < 0x58) {
    pOVar2 = (Operator *)Zone::NewExpand(this_00,0x58);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar2 + 0x58;
  }
  Operator::Operator(pOVar2,0xb,0x38,"Deoptimize",1,1,1,0,0,1);
  pOVar2[0x30] = param_2;
  pOVar2[0x31] = param_3;
  *(undefined ***)pOVar2 = &PTR__Operator_01ccb548;
  pOVar2[0x48] = (Operator)0x2;
  *(long *)(pOVar2 + 0x40) = lVar4;
  *(ulong *)(pOVar2 + 0x3a) = CONCAT26(uStack_42,uStack_48);
  *(ulong *)(pOVar2 + 0x32) = CONCAT26(local_4a,uStack_50);
  *(uint *)(pOVar2 + 0x4c) = CONCAT31(uStack_54,local_58._3_1_);
  *(undefined4 *)(pOVar2 + 0x49) = local_58;
LAB_0168eab4:
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return pOVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

