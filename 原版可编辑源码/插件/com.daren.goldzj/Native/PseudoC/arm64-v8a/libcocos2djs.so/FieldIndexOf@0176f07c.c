
/* v8::internal::compiler::LoadElimination::FieldIndexOf(v8::internal::compiler::FieldAccess const&)
    */

undefined8 v8::internal::compiler::LoadElimination::FieldIndexOf(FieldAccess *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = 2;
  switch(param_1[0x20]) {
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case (FieldAccess)0x2:
  case (FieldAccess)0x3:
  case (FieldAccess)0xb:
    return 0xffffffffffffffff;
  case (FieldAccess)0x4:
  case (FieldAccess)0x6:
  case (FieldAccess)0x7:
  case (FieldAccess)0x8:
  case (FieldAccess)0x9:
  case (FieldAccess)0xa:
    goto switchD_0176f0ac_caseD_4;
  case (FieldAccess)0x5:
  case (FieldAccess)0xc:
    break;
  }
  lVar3 = 3;
switchD_0176f0ac_caseD_4:
  if ((3 < 1 << lVar3) && (*param_1 == (FieldAccess)0x1)) {
    iVar2 = *(int *)(param_1 + 4);
    iVar1 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    iVar2 = (iVar1 >> 2) + -1;
    iVar1 = iVar2 + ((uint)(1 << lVar3) >> 2);
    if (0x20 < iVar1) {
      iVar1 = -1;
      iVar2 = -1;
    }
    return CONCAT44(iVar1,iVar2);
  }
  return 0xffffffffffffffff;
}

