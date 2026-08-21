
/* v8::internal::compiler::CommonOperatorBuilder::DeoptimizeUnless(v8::internal::DeoptimizeKind,
   v8::internal::DeoptimizeReason, v8::internal::compiler::FeedbackSource const&,
   v8::internal::compiler::IsSafetyCheck) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::DeoptimizeUnless
          (CommonOperatorBuilder *this,Operator param_2,Operator param_3,long *param_4,
          Operator param_5)

{
  long lVar1;
  bool bVar2;
  Zone *this_00;
  Operator *pOVar3;
  long lVar4;
  long lVar5;
  undefined4 local_68;
  undefined3 uStack_64;
  undefined6 uStack_60;
  undefined2 local_5a;
  undefined6 uStack_58;
  undefined2 uStack_52;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  if ((param_2 != (Operator)0x0 || param_3 != (Operator)0x10) || (param_5 != (Operator)0x2)) {
    if ((param_2 != (Operator)0x0 || param_3 != (Operator)0x10) || param_5 != (Operator)0x1) {
      bVar2 = param_2 == (Operator)0x0 && param_3 == (Operator)0x11;
      if ((param_2 == (Operator)0x0 && param_3 == (Operator)0x11) && (param_5 == (Operator)0x2)) {
        if ((*param_4 == 0) || ((int)param_4[1] == -1)) {
          pOVar3 = (Operator *)(*(long *)this + 0xfa8);
          goto LAB_0168d960;
        }
        bVar2 = true;
      }
      if (((bVar2) && (param_5 == (Operator)0x1)) && ((*param_4 == 0 || ((int)param_4[1] == -1)))) {
        pOVar3 = (Operator *)(*(long *)this + 0x1000);
        goto LAB_0168d960;
      }
      if (((param_2 == (Operator)0x0) && (param_3 == (Operator)0x15)) && (param_5 == (Operator)0x1))
      {
        if ((*param_4 == 0) || ((int)param_4[1] == -1)) {
          pOVar3 = (Operator *)(*(long *)this + 0x1058);
          goto LAB_0168d960;
        }
      }
      else if (((param_2 == (Operator)0x0) && (param_3 == (Operator)0x18)) &&
              (param_5 == (Operator)0x1)) {
        if ((*param_4 == 0) || ((int)param_4[1] == -1)) {
          pOVar3 = (Operator *)(*(long *)this + 0x10b0);
          goto LAB_0168d960;
        }
      }
      else if (((param_2 == (Operator)0x0) && (param_3 == (Operator)0x1a)) &&
              (param_5 == (Operator)0x1)) {
        if ((*param_4 == 0) || ((int)param_4[1] == -1)) {
          pOVar3 = (Operator *)(*(long *)this + 0x1108);
          goto LAB_0168d960;
        }
      }
      else if (((param_2 == (Operator)0x0) && (param_3 == (Operator)0x1e)) &&
              (param_5 == (Operator)0x1)) {
        if ((*param_4 == 0) || ((int)param_4[1] == -1)) {
          pOVar3 = (Operator *)(*(long *)this + 0x1160);
          goto LAB_0168d960;
        }
      }
      else if (((param_2 == (Operator)0x0) && (param_3 == (Operator)0x25)) &&
              (param_5 == (Operator)0x1)) {
        if ((*param_4 == 0) || ((int)param_4[1] == -1)) {
          pOVar3 = (Operator *)(*(long *)this + 0x11b8);
          goto LAB_0168d960;
        }
      }
      else if (((param_2 == (Operator)0x0) && (param_3 == (Operator)0x26)) &&
              ((param_5 == (Operator)0x1 && ((*param_4 == 0 || ((int)param_4[1] == -1)))))) {
        pOVar3 = (Operator *)(*(long *)this + 0x1210);
        goto LAB_0168d960;
      }
    }
    else if ((*param_4 == 0) || ((int)param_4[1] == -1)) {
      pOVar3 = (Operator *)(*(long *)this + 0xf50);
      goto LAB_0168d960;
    }
  }
  else if ((*param_4 == 0) || ((int)param_4[1] == -1)) {
    pOVar3 = (Operator *)(*(long *)this + 0xef8);
    goto LAB_0168d960;
  }
  lVar5 = param_4[1];
  uStack_52 = (undefined2)lVar5;
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
  Operator::Operator(pOVar3,0xd,0x38,"DeoptimizeUnless",2,1,1,0,1,1);
  pOVar3[0x30] = param_2;
  pOVar3[0x31] = param_3;
  *(undefined ***)pOVar3 = &PTR__Operator_01ccb548;
  pOVar3[0x48] = param_5;
  *(long *)(pOVar3 + 0x40) = lVar5;
  *(ulong *)(pOVar3 + 0x3a) = CONCAT26(uStack_52,uStack_58);
  *(ulong *)(pOVar3 + 0x32) = CONCAT26(local_5a,uStack_60);
  *(uint *)(pOVar3 + 0x4c) = CONCAT31(uStack_64,local_68._3_1_);
  *(undefined4 *)(pOVar3 + 0x49) = local_68;
LAB_0168d960:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return pOVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

