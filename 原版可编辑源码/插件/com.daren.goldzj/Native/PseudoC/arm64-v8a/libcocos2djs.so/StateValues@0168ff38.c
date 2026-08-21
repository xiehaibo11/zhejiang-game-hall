
/* v8::internal::compiler::CommonOperatorBuilder::StateValues(int,
   v8::internal::compiler::SparseInputMask) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::StateValues
          (CommonOperatorBuilder *this,int param_1,int param_3)

{
  Zone *this_00;
  Operator *pOVar1;
  
  if (param_3 == 0) {
    switch(param_1) {
    case 0:
      pOVar1 = (Operator *)(*(long *)this + 0x1980);
      break;
    case 1:
      pOVar1 = (Operator *)(*(long *)this + 0x19b8);
      break;
    case 2:
      pOVar1 = (Operator *)(*(long *)this + 0x19f0);
      break;
    case 3:
      pOVar1 = (Operator *)(*(long *)this + 0x1a28);
      break;
    case 4:
      pOVar1 = (Operator *)(*(long *)this + 0x1a60);
      break;
    case 5:
      pOVar1 = (Operator *)(*(long *)this + 0x1a98);
      break;
    case 6:
      pOVar1 = (Operator *)(*(long *)this + 0x1ad0);
      break;
    case 7:
      pOVar1 = (Operator *)(*(long *)this + 0x1b08);
      break;
    case 8:
      pOVar1 = (Operator *)(*(long *)this + 0x1b40);
      break;
    default:
      goto switchD_0168ffec_caseD_9;
    case 10:
      pOVar1 = (Operator *)(*(long *)this + 0x1b78);
      break;
    case 0xb:
      pOVar1 = (Operator *)(*(long *)this + 0x1bb0);
      break;
    case 0xc:
      pOVar1 = (Operator *)(*(long *)this + 0x1be8);
      break;
    case 0xd:
      pOVar1 = (Operator *)(*(long *)this + 0x1c20);
      break;
    case 0xe:
      pOVar1 = (Operator *)(*(long *)this + 0x1c58);
    }
  }
  else {
switchD_0168ffec_caseD_9:
    this_00 = *(Zone **)(this + 8);
    pOVar1 = *(Operator **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x38) {
      pOVar1 = (Operator *)Zone::NewExpand(this_00,0x38);
    }
    else {
      *(Operator **)(this_00 + 0x10) = pOVar1 + 0x38;
    }
    Operator::Operator(pOVar1,0x2a,0x7c,"StateValues",(long)param_1,0,0,1,0,0);
    *(int *)(pOVar1 + 0x2c) = param_3;
    *(undefined ***)pOVar1 = &PTR__Operator_01ccc428;
  }
  return pOVar1;
}

