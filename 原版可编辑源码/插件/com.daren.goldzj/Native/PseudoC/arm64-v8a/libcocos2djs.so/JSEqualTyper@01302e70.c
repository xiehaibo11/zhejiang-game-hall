
/* v8::internal::compiler::Typer::Visitor::JSEqualTyper(v8::internal::compiler::Type,
   v8::internal::compiler::Type, v8::internal::compiler::Typer*) */

undefined8
v8::internal::compiler::Typer::Visitor::JSEqualTyper(int *param_1,int *param_2,long param_3)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  int *local_38;
  int *local_28;
  
  if (param_1 == (int *)0x1) {
    return 1;
  }
  if (param_2 == (int *)0x1) {
    return 1;
  }
  if ((((param_1 == (int *)0x1001) ||
       (local_38 = param_2, local_28 = param_1, uVar1 = Type::SlowIs((Type *)&local_28,0x1001),
       (uVar1 & 1) != 0)) || (param_2 == (int *)0x1001)) ||
     (uVar1 = Type::SlowIs((Type *)&local_38,0x1001), (uVar1 & 1) != 0)) goto LAB_01302ee4;
  if (((local_28 != (int *)0x181) &&
      (uVar1 = Type::SlowIs((Type *)&local_28,0x181), (uVar1 & 1) == 0)) ||
     ((local_38 != (int *)0x181 && (uVar1 = Type::SlowIs((Type *)&local_38,0x181), (uVar1 & 1) == 0)
      ))) {
    if (((local_28 == (int *)0x1c5f) ||
        (uVar1 = Type::SlowIs((Type *)&local_28,0x1c5f), (uVar1 & 1) != 0)) &&
       ((local_38 == (int *)0x1c5f ||
        (uVar1 = Type::SlowIs((Type *)&local_38,0x1c5f), (uVar1 & 1) != 0)))) {
      dVar2 = (double)Type::Max((Type *)&local_28);
      dVar3 = (double)Type::Min((Type *)&local_38);
      if (dVar2 < dVar3) {
LAB_01302ee4:
        return *(undefined8 *)(param_3 + 0xa0);
      }
      dVar2 = (double)Type::Min((Type *)&local_28);
      dVar3 = (double)Type::Max((Type *)&local_38);
      if (dVar3 < dVar2) goto LAB_01302ee4;
    }
    if (((((ulong)local_28 & 1) != 0) || (*local_28 != 0)) ||
       ((local_38 != local_28 && (uVar1 = Type::SlowIs((Type *)&local_38), (uVar1 & 1) == 0)))) {
      return 0x201;
    }
  }
  return *(undefined8 *)(param_3 + 0xa8);
}

