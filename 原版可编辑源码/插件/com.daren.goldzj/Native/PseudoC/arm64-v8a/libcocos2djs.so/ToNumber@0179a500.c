
/* v8::internal::compiler::OperationTyper::ToNumber(v8::internal::compiler::Type) */

long __thiscall v8::internal::compiler::OperationTyper::ToNumber(OperationTyper *this,long param_2)

{
  ulong uVar1;
  long local_8;
  
  local_8 = 0x1c5f;
  if ((param_2 != 0x1c5f) &&
     (local_8 = param_2, uVar1 = Type::SlowIs((Type *)&local_8,0x1c5f), (uVar1 & 1) == 0)) {
    uVar1 = Type::Maybe((Type *)&local_8,0x47f4021);
    if ((uVar1 & 1) == 0) {
      local_8 = Type::Intersect(local_8,0x5fff,*(undefined8 *)this);
      uVar1 = Type::Maybe((Type *)&local_8,0x81);
      if ((uVar1 & 1) != 0) {
        local_8 = Type::Union(local_8,*(undefined8 *)(*(long *)(this + 8) + 0xe0),
                              *(undefined8 *)this);
      }
      uVar1 = Type::Maybe((Type *)&local_8,0x101);
      if ((uVar1 & 1) != 0) {
        local_8 = Type::Union(local_8,0x1001,*(undefined8 *)this);
      }
      uVar1 = Type::Maybe((Type *)&local_8,*(undefined8 *)(this + 0x30));
      if ((uVar1 & 1) != 0) {
        local_8 = Type::Union(local_8,*(undefined8 *)(*(long *)(this + 8) + 0xe0),
                              *(undefined8 *)this);
      }
      uVar1 = Type::Maybe((Type *)&local_8,*(undefined8 *)(this + 0x38));
      if ((uVar1 & 1) != 0) {
        local_8 = Type::Union(local_8,*(undefined8 *)(*(long *)(this + 8) + 0xe8),
                              *(undefined8 *)this);
      }
      local_8 = Type::Intersect(local_8,0x1c5f,*(undefined8 *)this);
    }
    else {
      local_8 = 0x1c5f;
    }
  }
  return local_8;
}

