
/* v8::internal::compiler::OperationTyper::CheckBounds(v8::internal::compiler::Type,
   v8::internal::compiler::Type) */

undefined8 __thiscall
v8::internal::compiler::OperationTyper::CheckBounds
          (OperationTyper *this,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  double dVar3;
  long local_30;
  undefined8 local_28;
  
  if ((*(long *)(*(long *)(this + 8) + 0xe0) == param_3) ||
     (local_30 = param_3, local_28 = param_2, uVar1 = Type::SlowIs((Type *)&local_30),
     (uVar1 & 1) != 0)) {
    uVar2 = 1;
  }
  else {
    dVar3 = (double)Type::Max((Type *)&local_30);
    uVar2 = Type::Range(0.0,dVar3 + -1.0,*(Zone **)this);
    uVar1 = Type::Maybe((Type *)&local_28,0x801);
    if ((uVar1 & 1) != 0) {
      local_28 = Type::Union(local_28,*(undefined8 *)(*(long *)(this + 8) + 0xe0),
                             *(undefined8 *)this);
    }
    uVar1 = Type::Maybe((Type *)&local_28,0x4021);
    if ((uVar1 & 1) != 0) {
      local_28 = Type::Union(local_28,*(undefined8 *)(*(long *)(this + 8) + 0xb0),
                             *(undefined8 *)this);
    }
    uVar2 = Type::Intersect(local_28,uVar2,*(undefined8 *)this);
  }
  return uVar2;
}

