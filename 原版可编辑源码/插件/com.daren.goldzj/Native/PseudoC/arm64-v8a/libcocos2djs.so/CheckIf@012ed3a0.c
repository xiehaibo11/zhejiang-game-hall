
/* v8::internal::compiler::SimplifiedOperatorBuilder::CheckIf(v8::internal::DeoptimizeReason,
   v8::internal::compiler::FeedbackSource const&) */

Operator * __thiscall
v8::internal::compiler::SimplifiedOperatorBuilder::CheckIf
          (SimplifiedOperatorBuilder *this,Operator param_2,long *param_3)

{
  long lVar1;
  Zone *this_00;
  Operator *pOVar2;
  long lVar3;
  long lVar4;
  undefined7 uStack_50;
  undefined1 local_49;
  undefined7 uStack_48;
  undefined1 uStack_41;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((*param_3 == 0) || ((int)param_3[1] == -1)) {
    switch(param_2) {
    case (Operator)0x0:
      pOVar2 = (Operator *)(*(long *)this + 0x2038);
      break;
    case (Operator)0x1:
      pOVar2 = (Operator *)(*(long *)this + 0x2088);
      break;
    case (Operator)0x2:
      pOVar2 = (Operator *)(*(long *)this + 0x20d8);
      break;
    case (Operator)0x3:
      pOVar2 = (Operator *)(*(long *)this + 0x2128);
      break;
    case (Operator)0x4:
      pOVar2 = (Operator *)(*(long *)this + 0x2178);
      break;
    case (Operator)0x5:
      pOVar2 = (Operator *)(*(long *)this + 0x21c8);
      break;
    case (Operator)0x6:
      pOVar2 = (Operator *)(*(long *)this + 0x2218);
      break;
    case (Operator)0x7:
      pOVar2 = (Operator *)(*(long *)this + 0x2268);
      break;
    case (Operator)0x8:
      pOVar2 = (Operator *)(*(long *)this + 0x22b8);
      break;
    case (Operator)0x9:
      pOVar2 = (Operator *)(*(long *)this + 0x2308);
      break;
    case (Operator)0xa:
      pOVar2 = (Operator *)(*(long *)this + 0x2358);
      break;
    case (Operator)0xb:
      pOVar2 = (Operator *)(*(long *)this + 0x23a8);
      break;
    case (Operator)0xc:
      pOVar2 = (Operator *)(*(long *)this + 0x23f8);
      break;
    case (Operator)0xd:
      pOVar2 = (Operator *)(*(long *)this + 0x2448);
      break;
    case (Operator)0xe:
      pOVar2 = (Operator *)(*(long *)this + 0x2498);
      break;
    case (Operator)0xf:
      pOVar2 = (Operator *)(*(long *)this + 0x24e8);
      break;
    case (Operator)0x10:
      pOVar2 = (Operator *)(*(long *)this + 0x2538);
      break;
    case (Operator)0x11:
      pOVar2 = (Operator *)(*(long *)this + 0x2588);
      break;
    case (Operator)0x12:
      pOVar2 = (Operator *)(*(long *)this + 0x25d8);
      break;
    case (Operator)0x13:
      pOVar2 = (Operator *)(*(long *)this + 0x2628);
      break;
    case (Operator)0x14:
      pOVar2 = (Operator *)(*(long *)this + 0x2678);
      break;
    case (Operator)0x15:
      pOVar2 = (Operator *)(*(long *)this + 0x26c8);
      break;
    case (Operator)0x16:
      pOVar2 = (Operator *)(*(long *)this + 0x2718);
      break;
    case (Operator)0x17:
      pOVar2 = (Operator *)(*(long *)this + 0x2768);
      break;
    case (Operator)0x18:
      pOVar2 = (Operator *)(*(long *)this + 0x27b8);
      break;
    case (Operator)0x19:
      pOVar2 = (Operator *)(*(long *)this + 0x2808);
      break;
    case (Operator)0x1a:
      pOVar2 = (Operator *)(*(long *)this + 0x2858);
      break;
    case (Operator)0x1b:
      pOVar2 = (Operator *)(*(long *)this + 0x28a8);
      break;
    case (Operator)0x1c:
      pOVar2 = (Operator *)(*(long *)this + 0x28f8);
      break;
    case (Operator)0x1d:
      pOVar2 = (Operator *)(*(long *)this + 0x2948);
      break;
    case (Operator)0x1e:
      pOVar2 = (Operator *)(*(long *)this + 0x2998);
      break;
    case (Operator)0x1f:
      pOVar2 = (Operator *)(*(long *)this + 0x29e8);
      break;
    case (Operator)0x20:
      pOVar2 = (Operator *)(*(long *)this + 0x2a38);
      break;
    case (Operator)0x21:
      pOVar2 = (Operator *)(*(long *)this + 0x2a88);
      break;
    case (Operator)0x22:
      pOVar2 = (Operator *)(*(long *)this + 0x2ad8);
      break;
    case (Operator)0x23:
      pOVar2 = (Operator *)(*(long *)this + 0x2b28);
      break;
    case (Operator)0x24:
      pOVar2 = (Operator *)(*(long *)this + 0x2b78);
      break;
    case (Operator)0x25:
      pOVar2 = (Operator *)(*(long *)this + 0x2bc8);
      break;
    case (Operator)0x26:
      pOVar2 = (Operator *)(*(long *)this + 0x2c18);
      break;
    case (Operator)0x27:
      pOVar2 = (Operator *)(*(long *)this + 0x2c68);
      break;
    case (Operator)0x28:
      pOVar2 = (Operator *)(*(long *)this + 0x2cb8);
      break;
    case (Operator)0x29:
      pOVar2 = (Operator *)(*(long *)this + 0x2d08);
      break;
    default:
      goto switchD_012ed4a0_default;
    }
  }
  else {
switchD_012ed4a0_default:
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
    Operator::Operator(pOVar2,0xd5,0x38,"CheckIf",1,1,1,0,1,0);
    pOVar2[0x30] = param_2;
    *(undefined ***)pOVar2 = &PTR__Operator_01cc0e40;
    *(long *)(pOVar2 + 0x40) = lVar4;
    *(ulong *)(pOVar2 + 0x39) = CONCAT17(uStack_41,uStack_48);
    *(ulong *)(pOVar2 + 0x31) = CONCAT17(local_49,uStack_50);
  }
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pOVar2;
}

