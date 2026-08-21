
/* v8::internal::compiler::SpillRange::IsIntersectingWith(v8::internal::compiler::SpillRange*) const
    */

undefined8 __thiscall
v8::internal::compiler::SpillRange::IsIntersectingWith(SpillRange *this,SpillRange *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = *(int **)(this + 0x20);
  if ((((piVar1 == (int *)0x0) || (piVar2 = *(int **)(param_1 + 0x20), piVar2 == (int *)0x0)) ||
      (iVar3 = *piVar2, *(int *)(this + 0x28) <= iVar3)) ||
     (iVar4 = *piVar1, *(int *)(param_1 + 0x28) <= iVar4)) {
    return 0;
  }
  if (iVar3 <= iVar4) goto LAB_01657c44;
  do {
    if (iVar3 < piVar1[1]) {
      return 1;
    }
    piVar1 = *(int **)(piVar1 + 2);
    while( true ) {
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      iVar4 = *piVar1;
      iVar3 = *piVar2;
      if (iVar4 < iVar3) break;
LAB_01657c44:
      if (iVar4 < piVar2[1]) {
        return 1;
      }
      piVar2 = *(int **)(piVar2 + 2);
    }
  } while( true );
}

