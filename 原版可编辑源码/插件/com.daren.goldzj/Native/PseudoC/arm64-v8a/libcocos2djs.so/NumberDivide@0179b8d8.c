
/* v8::internal::compiler::OperationTyper::NumberDivide(v8::internal::compiler::Type,
   v8::internal::compiler::Type) */

undefined8 __thiscall
v8::internal::compiler::OperationTyper::NumberDivide(OperationTyper *this,long param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  long local_38;
  long local_18;
  
  if (param_2 == 1) {
    return 1;
  }
  if (param_3 == 1) {
    return 1;
  }
  if (param_2 == 0x1001) {
    return 0x1001;
  }
  local_38 = param_3;
  local_18 = param_2;
  uVar2 = Type::SlowIs((Type *)&local_18,0x1001);
  if ((uVar2 & 1) != 0) {
    return 0x1001;
  }
  if (param_3 == 0x1001) {
    return 0x1001;
  }
  uVar2 = Type::SlowIs((Type *)&local_38,0x1001);
  if ((uVar2 & 1) != 0) {
    return 0x1001;
  }
  uVar2 = Type::Maybe((Type *)&local_18,0x1001);
  if (((uVar2 & 1) == 0) &&
     (uVar2 = Type::Maybe((Type *)&local_38,*(undefined8 *)(*(long *)(this + 8) + 0x148)),
     (uVar2 & 1) == 0)) {
    dVar5 = (double)Type::Min((Type *)&local_18);
    if ((dVar5 == -INFINITY) || (dVar5 = (double)Type::Max((Type *)&local_18), dVar5 == INFINITY)) {
      dVar5 = (double)Type::Min((Type *)&local_38);
      if (dVar5 == -INFINITY) goto LAB_0179b9d4;
      dVar5 = (double)Type::Max((Type *)&local_38);
      bVar1 = dVar5 == INFINITY;
    }
    else {
      bVar1 = false;
    }
  }
  else {
LAB_0179b9d4:
    bVar1 = true;
  }
  local_18 = Type::Intersect(local_18,0xc5f,*(undefined8 *)this);
  local_38 = Type::Intersect(local_38,0xc5f,*(undefined8 *)this);
  lVar4 = *(long *)(this + 8);
  if (local_18 == *(long *)(lVar4 + 0x150)) {
LAB_0179ba24:
    uVar2 = Type::Maybe((Type *)&local_18,*(undefined8 *)(lVar4 + 0x148));
    if (((((uVar2 & 1) == 0) || (dVar5 = (double)Type::Min((Type *)&local_38), 0.0 <= dVar5)) &&
        (dVar5 = (double)Type::Min((Type *)&local_38), dVar5 != -INFINITY)) &&
       (dVar5 = (double)Type::Max((Type *)&local_38), dVar5 != INFINITY)) {
      uVar3 = 0x45f;
      goto joined_r0x0179bac4;
    }
  }
  else {
    uVar2 = Type::SlowIs((Type *)&local_18);
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(this + 8);
      goto LAB_0179ba24;
    }
  }
  uVar3 = Type::Union(0x45f,0x801,*(undefined8 *)this);
joined_r0x0179bac4:
  if (bVar1) {
    uVar3 = Type::Union(uVar3,0x1001,*(undefined8 *)this);
  }
  return uVar3;
}

