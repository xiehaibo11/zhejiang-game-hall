
/* v8::internal::compiler::OperationTyper::NumberToUint32(v8::internal::compiler::Type) */

long __thiscall
v8::internal::compiler::OperationTyper::NumberToUint32(OperationTyper *this,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long local_8;
  
  if (param_2 == 0x407) {
LAB_0179ae54:
    lVar1 = 0x407;
  }
  else {
    local_8 = param_2;
    uVar2 = Type::SlowIs((Type *)&local_8,0x407);
    if ((uVar2 & 1) != 0) {
      return local_8;
    }
    lVar1 = *(long *)(this + 8);
    if (local_8 != *(long *)(lVar1 + 0x148)) {
      uVar2 = Type::SlowIs((Type *)&local_8);
      if ((uVar2 & 1) == 0) {
        lVar1 = *(long *)(this + 0x50);
        if ((local_8 == lVar1) ||
           (uVar2 = Type::SlowIs((Type *)&local_8,lVar1), lVar1 = local_8, (uVar2 & 1) != 0)) {
          uVar3 = Type::Union(lVar1,*(undefined8 *)(*(long *)(this + 8) + 0xe0),*(undefined8 *)this)
          ;
          lVar1 = Type::Intersect(uVar3,0x407,*(undefined8 *)this);
          return lVar1;
        }
        goto LAB_0179ae54;
      }
      lVar1 = *(long *)(this + 8);
    }
    lVar1 = *(long *)(lVar1 + 0xe0);
  }
  return lVar1;
}

