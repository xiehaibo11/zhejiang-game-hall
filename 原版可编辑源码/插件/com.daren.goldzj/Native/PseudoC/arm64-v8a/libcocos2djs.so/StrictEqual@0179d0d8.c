
/* v8::internal::compiler::OperationTyper::StrictEqual(v8::internal::compiler::Type,
   v8::internal::compiler::Type) */

undefined8 __thiscall
v8::internal::compiler::OperationTyper::StrictEqual(OperationTyper *this,int *param_2,int *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  undefined8 local_48;
  int *local_40;
  int *local_38;
  
  local_40 = param_3;
  local_38 = param_2;
  if (param_2 == (int *)0x1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!lhs.IsNone()");
  }
  if (param_3 == (int *)0x1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!rhs.IsNone()");
  }
  local_48 = FUN_0179cf78(param_2);
  uVar1 = FUN_0179cf78(param_3);
  uVar2 = Type::Maybe((Type *)&local_48,uVar1);
  if (((((uVar2 & 1) == 0) || (param_2 == (int *)0x1001)) ||
      (uVar2 = Type::SlowIs((Type *)&local_38,0x1001), (uVar2 & 1) != 0)) ||
     ((param_3 == (int *)0x1001 ||
      (uVar2 = Type::SlowIs((Type *)&local_40,0x1001), (uVar2 & 1) != 0)))) goto LAB_0179d144;
  if (((local_38 == (int *)0x1c5f) ||
      (uVar2 = Type::SlowIs((Type *)&local_38,0x1c5f), (uVar2 & 1) != 0)) &&
     ((local_40 == (int *)0x1c5f ||
      (uVar2 = Type::SlowIs((Type *)&local_40,0x1c5f), (uVar2 & 1) != 0)))) {
    dVar3 = (double)Type::Max((Type *)&local_38);
    dVar4 = (double)Type::Min((Type *)&local_40);
    if (dVar3 < dVar4) goto LAB_0179d144;
    dVar3 = (double)Type::Min((Type *)&local_38);
    dVar4 = (double)Type::Max((Type *)&local_40);
    if (dVar4 < dVar3) goto LAB_0179d144;
  }
  if (((((local_38 != (int *)0x800001) &&
        (uVar2 = Type::SlowIs((Type *)&local_38,0x800001), (uVar2 & 1) == 0)) &&
       (local_40 != (int *)0x800001)) &&
      (uVar2 = Type::SlowIs((Type *)&local_40,0x800001), (uVar2 & 1) == 0)) ||
     (uVar2 = Type::Maybe((Type *)&local_38,local_40), (uVar2 & 1) != 0)) {
    if (((((ulong)local_38 & 1) == 0) && (*local_38 == 0)) &&
       ((local_40 == local_38 || (uVar2 = Type::SlowIs((Type *)&local_40), (uVar2 & 1) != 0)))) {
      return *(undefined8 *)(this + 0x38);
    }
    return 0x201;
  }
LAB_0179d144:
  return *(undefined8 *)(this + 0x30);
}

