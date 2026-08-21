
/* v8::internal::compiler::OperationTyper::NumberFloor(v8::internal::compiler::Type) */

long __thiscall
v8::internal::compiler::OperationTyper::NumberFloor(OperationTyper *this,long param_2)

{
  ulong uVar1;
  long local_8;
  
  if (*(long *)(*(long *)(this + 8) + 0x160) != param_2) {
    local_8 = param_2;
    uVar1 = Type::SlowIs((Type *)&local_8);
    param_2 = local_8;
    if ((uVar1 & 1) == 0) {
      local_8 = Type::Intersect(local_8,0x1801,*(undefined8 *)this);
      param_2 = Type::Union(local_8,*(undefined8 *)(*(long *)(this + 8) + 0x150),*(undefined8 *)this
                           );
    }
  }
  return param_2;
}

