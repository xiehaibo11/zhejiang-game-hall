
/* v8::internal::compiler::Type::GetRange() const */

int * __thiscall v8::internal::compiler::Type::GetRange(Type *this)

{
  int *piVar1;
  
  piVar1 = *(int **)this;
  if ((((ulong)piVar1 & 1) != 0) ||
     ((*piVar1 != 4 &&
      (((*piVar1 != 3 || (piVar1 = *(int **)(*(long *)(piVar1 + 2) + 8), ((ulong)piVar1 & 1) != 0))
       || (*piVar1 != 4)))))) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

