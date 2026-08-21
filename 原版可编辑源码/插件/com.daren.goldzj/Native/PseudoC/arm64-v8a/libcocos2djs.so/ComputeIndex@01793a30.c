
/* v8::internal::compiler::MemoryLowering::ComputeIndex(v8::internal::compiler::ElementAccess
   const&, v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::MemoryLowering::ComputeIndex
          (MemoryLowering *this,ElementAccess *param_1,Node *param_2)

{
  Node *pNVar1;
  long lVar2;
  GraphAssembler *pGVar3;
  
  lVar2 = 1;
  switch(param_1[0x10]) {
  case (ElementAccess)0x1:
  case (ElementAccess)0x2:
    goto switchD_01793a74_caseD_1;
  case (ElementAccess)0x3:
    break;
  case (ElementAccess)0x4:
  case (ElementAccess)0x6:
  case (ElementAccess)0x7:
  case (ElementAccess)0x8:
  case (ElementAccess)0x9:
  case (ElementAccess)0xa:
  case (ElementAccess)0xb:
    lVar2 = 2;
    break;
  case (ElementAccess)0x5:
  case (ElementAccess)0xc:
    lVar2 = 3;
    break;
  case (ElementAccess)0xd:
    lVar2 = 4;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pGVar3 = *(GraphAssembler **)(this + 0x38);
  pNVar1 = (Node *)GraphAssembler::IntPtrConstant(pGVar3,lVar2);
  param_2 = (Node *)GraphAssembler::WordShl(pGVar3,param_2,pNVar1);
switchD_01793a74_caseD_1:
  lVar2 = (long)*(int *)(param_1 + 4) - (ulong)(*param_1 == (ElementAccess)0x1);
  if ((int)lVar2 == 0) {
    return param_2;
  }
  pGVar3 = *(GraphAssembler **)(this + 0x38);
  pNVar1 = (Node *)GraphAssembler::IntPtrConstant(pGVar3,lVar2);
  pNVar1 = (Node *)GraphAssembler::IntAdd(pGVar3,param_2,pNVar1);
  return pNVar1;
}

