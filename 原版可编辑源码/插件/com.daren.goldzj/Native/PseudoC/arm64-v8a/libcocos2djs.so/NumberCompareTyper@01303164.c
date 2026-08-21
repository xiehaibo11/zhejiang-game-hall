
/* v8::internal::compiler::Typer::Visitor::NumberCompareTyper(v8::internal::compiler::Type,
   v8::internal::compiler::Type, v8::internal::compiler::Typer*) */

uint v8::internal::compiler::Typer::Visitor::NumberCompareTyper(int *param_1,int *param_2)

{
  ulong uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  int *local_38;
  int *local_28;
  
  if (param_1 == (int *)0x1) {
    return 0;
  }
  if (param_2 == (int *)0x1) {
    return 0;
  }
  if (param_1 == (int *)0x1001) {
    return 4;
  }
  local_38 = param_2;
  local_28 = param_1;
  uVar1 = Type::SlowIs((Type *)&local_28,0x1001);
  if ((uVar1 & 1) != 0) {
    return 4;
  }
  if (param_2 == (int *)0x1001) {
    return 4;
  }
  uVar1 = Type::SlowIs((Type *)&local_38,0x1001);
  if ((uVar1 & 1) != 0) {
    return 4;
  }
  if (((((ulong)local_28 & 1) != 0) || (*local_28 != 0)) ||
     ((local_38 != local_28 && (uVar1 = Type::SlowIs((Type *)&local_38), (uVar1 & 1) == 0)))) {
    dVar3 = (double)Type::Min((Type *)&local_28);
    dVar4 = (double)Type::Max((Type *)&local_38);
    if (dVar3 < dVar4) {
      dVar3 = (double)Type::Max((Type *)&local_28);
      dVar4 = (double)Type::Min((Type *)&local_38);
      if (dVar4 <= dVar3) {
        return 7;
      }
      uVar2 = 1;
      goto LAB_01303264;
    }
  }
  uVar2 = 2;
LAB_01303264:
  uVar1 = Type::Maybe((Type *)&local_28,0x1001);
  if (((uVar1 & 1) != 0) || (uVar1 = Type::Maybe((Type *)&local_38,0x1001), (uVar1 & 1) != 0)) {
    uVar2 = uVar2 | 4;
  }
  return uVar2;
}

