
/* v8::internal::compiler::LoadElimination::FieldIndexOf(int, int) */

undefined8 v8::internal::compiler::LoadElimination::FieldIndexOf(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1 + 3;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  iVar2 = param_2 + 3;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  iVar3 = (iVar1 >> 2) + -1;
  iVar1 = iVar3 + (iVar2 >> 2);
  if (0x20 < iVar1) {
    iVar1 = -1;
    iVar3 = -1;
  }
  return CONCAT44(iVar1,iVar3);
}

