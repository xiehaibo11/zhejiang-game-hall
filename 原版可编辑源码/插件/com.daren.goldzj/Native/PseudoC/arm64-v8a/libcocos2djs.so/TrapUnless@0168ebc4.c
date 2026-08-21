
/* v8::internal::compiler::CommonOperatorBuilder::TrapUnless(v8::internal::compiler::TrapId) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::TrapUnless
          (CommonOperatorBuilder *this,undefined4 param_2)

{
  Zone *this_00;
  Operator *pOVar1;
  long lVar2;
  long lVar3;
  
  switch(param_2) {
  case 0:
    lVar2 = *(long *)this;
    lVar3 = 0x12d8;
    break;
  case 1:
    lVar2 = *(long *)this;
    lVar3 = 0x1310;
    break;
  default:
    this_00 = *(Zone **)(this + 8);
    pOVar1 = *(Operator **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x38) {
      pOVar1 = (Operator *)Zone::NewExpand(this_00,0x38);
    }
    else {
      *(Operator **)(this_00 + 0x10) = pOVar1 + 0x38;
    }
    Operator::Operator(pOVar1,0xf,0x38,"TrapUnless",1,1,1,0,0,1);
    *(undefined4 *)(pOVar1 + 0x2c) = param_2;
    *(undefined ***)pOVar1 = &PTR__Operator_01ccbb48;
    return pOVar1;
  case 3:
    lVar2 = *(long *)this;
    lVar3 = 0x1348;
    break;
  case 4:
    lVar2 = *(long *)this;
    lVar3 = 0x1380;
    break;
  case 5:
    lVar2 = *(long *)this;
    lVar3 = 0x13b8;
    break;
  case 6:
    lVar2 = *(long *)this;
    lVar3 = 0x13f0;
    break;
  case 7:
    lVar2 = *(long *)this;
    lVar3 = 0x1428;
    break;
  case 8:
    lVar2 = *(long *)this;
    lVar3 = 0x1460;
  }
  return (Operator *)(lVar2 + lVar3);
}

