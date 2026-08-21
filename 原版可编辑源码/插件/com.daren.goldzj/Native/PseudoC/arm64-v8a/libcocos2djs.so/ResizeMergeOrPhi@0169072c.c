
/* v8::internal::compiler::CommonOperatorBuilder::ResizeMergeOrPhi(v8::internal::compiler::Operator
   const*, int) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::ResizeMergeOrPhi
          (CommonOperatorBuilder *this,Operator *param_1,int param_2)

{
  Zone *pZVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  switch(*(undefined2 *)(param_1 + 0x10)) {
  case 1:
    if (param_2 == 2) {
      return (Operator *)(*(long *)this + 0x8d0);
    }
    if (param_2 == 1) {
      return (Operator *)(*(long *)this + 0x8a0);
    }
    pZVar1 = *(Zone **)(this + 8);
    pOVar2 = *(Operator **)(pZVar1 + 0x10);
    if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)pOVar2) < 0x30) {
      pOVar2 = (Operator *)Zone::NewExpand(pZVar1,0x30);
    }
    else {
      *(Operator **)(pZVar1 + 0x10) = pOVar2 + 0x30;
    }
    lVar6 = (long)param_2;
    pcVar4 = "Loop";
    uVar7 = 0;
    uVar8 = 1;
    uVar3 = 1;
    lVar5 = 0;
LAB_01690894:
    Operator::Operator(pOVar2,uVar3,0x78,pcVar4,0,lVar5,lVar6,0,uVar7,uVar8);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 10:
    pOVar2 = (Operator *)Merge(this,param_2);
    return pOVar2;
  case 0x23:
    pOVar2 = (Operator *)Phi(this,param_1[0x2c]);
    return pOVar2;
  case 0x24:
    switch(param_2) {
    case 1:
      pOVar2 = (Operator *)(*(long *)this + 0x720);
      break;
    case 2:
      pOVar2 = (Operator *)(*(long *)this + 0x750);
      break;
    case 3:
      pOVar2 = (Operator *)(*(long *)this + 0x780);
      break;
    case 4:
      pOVar2 = (Operator *)(*(long *)this + 0x7b0);
      break;
    case 5:
      pOVar2 = (Operator *)(*(long *)this + 0x7e0);
      break;
    case 6:
      pOVar2 = (Operator *)(*(long *)this + 0x810);
      break;
    default:
      pZVar1 = *(Zone **)(this + 8);
      pOVar2 = *(Operator **)(pZVar1 + 0x10);
      if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)pOVar2) < 0x30) {
        pOVar2 = (Operator *)Zone::NewExpand(pZVar1,0x30);
      }
      else {
        *(Operator **)(pZVar1 + 0x10) = pOVar2 + 0x30;
      }
      lVar5 = (long)param_2;
      pcVar4 = "EffectPhi";
      uVar3 = 0x24;
      lVar6 = 1;
      uVar7 = 1;
      uVar8 = 0;
      goto LAB_01690894;
    }
  }
  return pOVar2;
}

