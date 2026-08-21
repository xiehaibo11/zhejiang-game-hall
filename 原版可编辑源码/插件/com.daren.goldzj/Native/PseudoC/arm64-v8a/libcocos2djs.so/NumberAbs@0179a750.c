
/* v8::internal::compiler::OperationTyper::NumberAbs(v8::internal::compiler::Type) */

long __thiscall v8::internal::compiler::OperationTyper::NumberAbs(OperationTyper *this,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long local_18;
  
  if (param_2 == 1) {
    local_18 = 1;
  }
  else {
    local_18 = param_2;
    uVar1 = Type::Maybe((Type *)&local_18,0x1001);
    uVar2 = Type::Maybe((Type *)&local_18,0x801);
    local_18 = Type::Intersect(local_18,0x45f,*(undefined8 *)this);
    if (local_18 != 1) {
      dVar4 = (double)Type::Max((Type *)&local_18);
      dVar5 = (double)Type::Min((Type *)&local_18);
      if (dVar5 < 0.0) {
        if ((local_18 == *(long *)(*(long *)(this + 8) + 0x150)) ||
           (uVar3 = Type::SlowIs((Type *)&local_18), (uVar3 & 1) != 0)) {
          dVar6 = ABS(dVar4);
          if (ABS(dVar4) <= ABS(dVar5)) {
            dVar6 = ABS(dVar5);
          }
          local_18 = Type::Range(0.0,dVar6,*(Zone **)this);
        }
        else {
          local_18 = 0x45f;
        }
      }
    }
    if ((uVar2 & 1) != 0) {
      local_18 = Type::Union(local_18,*(undefined8 *)(*(long *)(this + 8) + 0xe0),
                             *(undefined8 *)this);
    }
    if ((uVar1 & 1) != 0) {
      local_18 = Type::Union(local_18,0x1001,*(undefined8 *)this);
    }
  }
  return local_18;
}

