
/* v8::internal::compiler::OperationTyper::NumberSign(v8::internal::compiler::Type) */

long __thiscall
v8::internal::compiler::OperationTyper::NumberSign(OperationTyper *this,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  long local_18;
  
  if ((*(long *)(*(long *)(this + 8) + 0x148) != param_2) &&
     (local_18 = param_2, uVar1 = Type::SlowIs((Type *)&local_18), param_2 = local_18,
     (uVar1 & 1) == 0)) {
    uVar1 = Type::Maybe((Type *)&local_18,0x801);
    uVar2 = Type::Maybe((Type *)&local_18,0x1001);
    local_18 = Type::Intersect(local_18,0x45f,*(undefined8 *)this);
    if (local_18 == 1) {
      local_18 = 1;
    }
    else {
      dVar3 = (double)Type::Max((Type *)&local_18);
      if (0.0 <= dVar3) {
        dVar3 = (double)Type::Max((Type *)&local_18);
        if (dVar3 <= 0.0) {
          local_18 = *(long *)(*(long *)(this + 8) + 0x118);
        }
        else {
          dVar3 = (double)Type::Min((Type *)&local_18);
          if (dVar3 <= 0.0) {
            dVar3 = (double)Type::Min((Type *)&local_18);
            if (0.0 <= dVar3) {
              local_18 = *(long *)(*(long *)(this + 8) + 0x128);
            }
            else {
              local_18 = Type::Range(-1.0,1.0,*(Zone **)this);
            }
          }
          else {
            local_18 = *(long *)(*(long *)(this + 8) + 0xe8);
          }
        }
      }
      else {
        local_18 = *(long *)(*(long *)(this + 8) + 0xf8);
      }
    }
    if ((uVar1 & 1) != 0) {
      local_18 = Type::Union(local_18,0x801,*(undefined8 *)this);
    }
    param_2 = local_18;
    if ((uVar2 & 1) != 0) {
      param_2 = Type::Union(local_18,0x1001,*(undefined8 *)this);
    }
  }
  return param_2;
}

