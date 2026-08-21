
/* v8::internal::compiler::CommonOperatorBuilder::DeoptimizeIf(v8::internal::DeoptimizeKind,
   v8::internal::DeoptimizeReason, v8::internal::compiler::FeedbackSource const&,
   v8::internal::compiler::IsSafetyCheck) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::DeoptimizeIf
          (CommonOperatorBuilder *this,Operator param_2,Operator param_3,long *param_4,
          Operator param_5)

{
  long lVar1;
  bool bVar2;
  Zone *this_00;
  Operator *pOVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined4 local_68;
  undefined3 uStack_64;
  undefined6 uStack_60;
  undefined2 local_5a;
  undefined6 uStack_58;
  undefined2 uStack_52;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if ((param_2 != (Operator)0x0 || param_3 != (Operator)0x5) || (param_5 != (Operator)0x2)) {
    bVar2 = param_5 == (Operator)0x1;
    if ((param_2 == (Operator)0x0 && param_3 == (Operator)0x5) && bVar2) {
      if ((*param_4 == 0) || ((int)param_4[1] == -1)) {
        pOVar3 = (Operator *)(*(long *)this + 0xc38);
        goto LAB_0168d6b4;
      }
      bVar2 = true;
      goto LAB_0168d514;
    }
    bVar4 = param_2 == (Operator)0x0 && param_3 == (Operator)0x6;
    if ((param_2 == (Operator)0x0 && param_3 == (Operator)0x6) && (param_5 == (Operator)0x2)) {
      if ((*param_4 == 0) || ((int)param_4[1] == -1)) {
        pOVar3 = (Operator *)(*(long *)this + 0xc90);
        goto LAB_0168d6b4;
      }
      bVar4 = true;
    }
    if (((bVar4) && (param_5 == (Operator)0x1)) && ((*param_4 == 0 || ((int)param_4[1] == -1)))) {
      pOVar3 = (Operator *)(*(long *)this + 0xce8);
      goto LAB_0168d6b4;
    }
    if (((param_2 == (Operator)0x0 && param_3 == (Operator)0x12) && (param_5 == (Operator)0x2)) &&
       ((*param_4 == 0 || ((int)param_4[1] == -1)))) {
      pOVar3 = (Operator *)(*(long *)this + 0xd40);
      goto LAB_0168d6b4;
    }
    if ((param_2 != (Operator)0x0 || param_3 != (Operator)0x12) || (!bVar2)) goto LAB_0168d514;
    if ((*param_4 == 0) || ((int)param_4[1] == -1)) {
      pOVar3 = (Operator *)(*(long *)this + 0xd98);
      goto LAB_0168d6b4;
    }
  }
  else {
    if ((*param_4 == 0) || ((int)param_4[1] == -1)) {
      pOVar3 = (Operator *)(*(long *)this + 0xbe0);
      goto LAB_0168d6b4;
    }
    bVar2 = false;
LAB_0168d514:
    bVar4 = param_2 == (Operator)0x0 && param_3 == (Operator)0x1f;
    if ((param_2 == (Operator)0x0 && param_3 == (Operator)0x1f) && (param_5 == (Operator)0x2)) {
      if ((*param_4 == 0) || ((int)param_4[1] == -1)) {
        pOVar3 = (Operator *)(*(long *)this + 0xdf0);
        goto LAB_0168d6b4;
      }
      bVar4 = true;
    }
    if (((bool)(bVar2 & bVar4)) && ((*param_4 == 0 || ((int)param_4[1] == -1)))) {
      pOVar3 = (Operator *)(*(long *)this + 0xe48);
      goto LAB_0168d6b4;
    }
  }
  if (((bool)((param_2 == (Operator)0x0 && param_3 == (Operator)0x20) & bVar2)) &&
     ((*param_4 == 0 || ((int)param_4[1] == -1)))) {
    pOVar3 = (Operator *)(*(long *)this + 0xea0);
  }
  else {
    lVar6 = param_4[1];
    uStack_52 = (undefined2)lVar6;
    local_5a = (undefined2)*param_4;
    uStack_58 = (undefined6)((ulong)*param_4 >> 0x10);
    this_00 = *(Zone **)(this + 8);
    pOVar3 = *(Operator **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar3) < 0x58) {
      pOVar3 = (Operator *)Zone::NewExpand(this_00,0x58);
    }
    else {
      *(Operator **)(this_00 + 0x10) = pOVar3 + 0x58;
    }
    Operator::Operator(pOVar3,0xc,0x38,"DeoptimizeIf",2,1,1,0,1,1);
    pOVar3[0x30] = param_2;
    pOVar3[0x31] = param_3;
    *(undefined ***)pOVar3 = &PTR__Operator_01ccb548;
    pOVar3[0x48] = param_5;
    *(long *)(pOVar3 + 0x40) = lVar6;
    *(ulong *)(pOVar3 + 0x3a) = CONCAT26(uStack_52,uStack_58);
    *(ulong *)(pOVar3 + 0x32) = CONCAT26(local_5a,uStack_60);
    *(uint *)(pOVar3 + 0x4c) = CONCAT31(uStack_64,local_68._3_1_);
    *(undefined4 *)(pOVar3 + 0x49) = local_68;
  }
LAB_0168d6b4:
  if (*(long *)(lVar1 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pOVar3;
}

