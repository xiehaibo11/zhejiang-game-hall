
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::FrameStateInfo const&,
   v8::internal::compiler::FrameStateInfo const&) */

bool v8::internal::compiler::operator==(FrameStateInfo *param_1,FrameStateInfo *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
    piVar2 = *(int **)(param_2 + 0x10);
  }
  else {
    iVar3 = *piVar1;
    piVar2 = *(int **)(param_2 + 0x10);
  }
  if (piVar2 == (int *)0x0) {
    if (iVar3 != 0) {
      return false;
    }
  }
  else if (iVar3 != *piVar2) {
    return false;
  }
  if (*(int *)param_1 == *(int *)param_2) {
    return piVar1 == piVar2 && *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
  }
  return false;
}

