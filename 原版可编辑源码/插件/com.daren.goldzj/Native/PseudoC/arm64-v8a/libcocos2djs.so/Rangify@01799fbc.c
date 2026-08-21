
/* v8::internal::compiler::OperationTyper::Rangify(v8::internal::compiler::Type) */

int * __thiscall v8::internal::compiler::OperationTyper::Rangify(OperationTyper *this,int *param_2)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  int *local_28;
  
  if (((((ulong)param_2 & 1) != 0) || (*param_2 != 4)) &&
     ((local_28 = param_2, *(int **)(*(long *)(this + 8) + 0x150) == param_2 ||
      (uVar1 = Type::SlowIs((Type *)&local_28), param_2 = local_28, (uVar1 & 1) != 0)))) {
    dVar2 = (double)Type::Min((Type *)&local_28);
    dVar3 = (double)Type::Max((Type *)&local_28);
    param_2 = (int *)Type::Range(dVar2,dVar3,*(Zone **)this);
  }
  return param_2;
}

