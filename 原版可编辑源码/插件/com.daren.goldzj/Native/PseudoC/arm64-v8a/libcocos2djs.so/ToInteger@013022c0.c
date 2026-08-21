
/* v8::internal::compiler::Typer::Visitor::ToInteger(v8::internal::compiler::Type,
   v8::internal::compiler::Typer*) */

long v8::internal::compiler::Typer::Visitor::ToInteger(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long local_8;
  
  local_8 = OperationTyper::ToNumber((OperationTyper *)(param_2 + 0x28),param_1);
  if ((local_8 != *(long *)(*(long *)(param_2 + 0x18) + 0x158)) &&
     (uVar1 = Type::SlowIs((Type *)&local_8), (uVar1 & 1) == 0)) {
    lVar4 = *(long *)(param_2 + 0x18);
    lVar3 = *(long *)(lVar4 + 0x160);
    if (local_8 != lVar3) {
      uVar1 = Type::SlowIs((Type *)&local_8,lVar3);
      if ((uVar1 & 1) == 0) {
        return *(long *)(*(long *)(param_2 + 0x18) + 0x158);
      }
      lVar4 = *(long *)(param_2 + 0x18);
      lVar3 = local_8;
    }
    uVar2 = Type::Intersect(lVar3,*(undefined8 *)(lVar4 + 0x158),**(undefined8 **)(param_2 + 8));
    local_8 = Type::Union(uVar2,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0xe0),
                          **(undefined8 **)(param_2 + 8));
  }
  return local_8;
}

