
/* v8::internal::compiler::CommonOperatorBuilder::Parameter(int, char const*) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::Parameter
          (CommonOperatorBuilder *this,int param_1,char *param_2)

{
  Zone *this_00;
  Operator *pOVar1;
  
  if (param_2 == (char *)0x0) {
    switch((ulong)(uint)param_1) {
    case 0:
      pOVar1 = (Operator *)(*(long *)this + 0x1708);
      break;
    case 1:
      pOVar1 = (Operator *)(*(long *)this + 0x1750);
      break;
    case 2:
      pOVar1 = (Operator *)(*(long *)this + 0x1798);
      break;
    case 3:
      pOVar1 = (Operator *)(*(long *)this + 0x17e0);
      break;
    case 4:
      pOVar1 = (Operator *)(*(long *)this + 0x1828);
      break;
    case 5:
      pOVar1 = (Operator *)(*(long *)this + 0x1870);
      break;
    case 6:
      pOVar1 = (Operator *)(*(long *)this + 0x18b8);
      break;
    default:
      goto switchD_0168f1a8_default;
    }
  }
  else {
switchD_0168f1a8_default:
    this_00 = *(Zone **)(this + 8);
    pOVar1 = *(Operator **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x48) {
      pOVar1 = (Operator *)Zone::NewExpand(this_00,0x48);
    }
    else {
      *(Operator **)(this_00 + 0x10) = pOVar1 + 0x48;
    }
    Operator::Operator(pOVar1,0x32,0x7c,"Parameter",1,0,0,1,0,0);
    *(ulong *)(pOVar1 + 0x30) = (ulong)(uint)param_1;
    *(char **)(pOVar1 + 0x38) = param_2;
    *(undefined ***)pOVar1 = &PTR__Operator_01ccc168;
  }
  return pOVar1;
}

