
/* v8::internal::compiler::SimplifiedOperatorBuilder::CheckedTaggedToInt32(v8::internal::compiler::CheckForMinusZeroMode,
   v8::internal::compiler::FeedbackSource const&) */

Operator * __thiscall
v8::internal::compiler::SimplifiedOperatorBuilder::CheckedTaggedToInt32
          (SimplifiedOperatorBuilder *this,Operator param_2,long *param_3)

{
  long lVar1;
  Zone *this_00;
  Operator *pOVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined7 uStack_50;
  undefined1 local_49;
  undefined7 uStack_48;
  undefined1 uStack_41;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((*param_3 == 0) || ((int)param_3[1] == -1)) {
    if (param_2 == (Operator)0x1) {
      lVar4 = *(long *)this;
      lVar5 = 0x3038;
    }
    else {
      if (param_2 != (Operator)0x0) goto LAB_012eda70;
      lVar4 = *(long *)this;
      lVar5 = 0x2fe8;
    }
    pOVar2 = (Operator *)(lVar4 + lVar5);
  }
  else {
LAB_012eda70:
    this_00 = *(Zone **)(this + 8);
    pOVar2 = *(Operator **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar2) < 0x50) {
      pOVar2 = (Operator *)Zone::NewExpand(this_00,0x50);
    }
    else {
      *(Operator **)(this_00 + 0x10) = pOVar2 + 0x50;
    }
    lVar4 = param_3[1];
    uStack_41 = (undefined1)lVar4;
    local_49 = (undefined1)*param_3;
    uStack_48 = (undefined7)((ulong)*param_3 >> 8);
    Operator::Operator(pOVar2,0x68,0x38,"CheckedTaggedToInt32",1,1,1,1,1,0);
    pOVar2[0x30] = param_2;
    *(undefined ***)pOVar2 = &PTR__Operator_01cc1aa8;
    *(long *)(pOVar2 + 0x40) = lVar4;
    *(ulong *)(pOVar2 + 0x39) = CONCAT17(uStack_41,uStack_48);
    *(ulong *)(pOVar2 + 0x31) = CONCAT17(local_49,uStack_50);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return pOVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

