
/* v8::internal::compiler::OperationTyper::NumberMultiply(v8::internal::compiler::Type,
   v8::internal::compiler::Type) */

undefined8 __thiscall
v8::internal::compiler::OperationTyper::NumberMultiply
          (OperationTyper *this,long param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  long local_58;
  long local_48;
  
  if (param_2 == 1) {
    return 1;
  }
  if (param_3 == 1) {
    return 1;
  }
  if (param_2 == 0x1001) {
    return 0x1001;
  }
  local_58 = param_3;
  local_48 = param_2;
  uVar3 = Type::SlowIs((Type *)&local_48,0x1001);
  if ((uVar3 & 1) != 0) {
    return 0x1001;
  }
  if (param_3 == 0x1001) {
    return 0x1001;
  }
  uVar3 = Type::SlowIs((Type *)&local_58,0x1001);
  if ((uVar3 & 1) != 0) {
    return 0x1001;
  }
  uVar3 = Type::Maybe((Type *)&local_48,0x1001);
  if ((((uVar3 & 1) == 0) && (uVar3 = Type::Maybe((Type *)&local_58,0x1001), (uVar3 & 1) == 0)) &&
     ((uVar3 = Type::Maybe((Type *)&local_48,*(undefined8 *)(*(long *)(this + 8) + 0x148)),
      (uVar3 & 1) == 0 ||
      ((dVar6 = (double)Type::Min((Type *)&local_58), dVar6 != -INFINITY &&
       (dVar6 = (double)Type::Max((Type *)&local_58), dVar6 != INFINITY)))))) {
    uVar3 = Type::Maybe((Type *)&local_58,*(undefined8 *)(*(long *)(this + 8) + 0x148));
    if ((uVar3 & 1) == 0) {
      bVar2 = false;
    }
    else {
      dVar6 = (double)Type::Min((Type *)&local_48);
      if (dVar6 == -INFINITY) goto LAB_0179b6c4;
      dVar6 = (double)Type::Max((Type *)&local_48);
      bVar2 = dVar6 == INFINITY;
    }
  }
  else {
LAB_0179b6c4:
    bVar2 = true;
  }
  local_48 = Type::Intersect(local_48,0xc5f,*(undefined8 *)this);
  local_58 = Type::Intersect(local_58,0xc5f,*(undefined8 *)this);
  uVar3 = Type::Maybe((Type *)&local_48,0x801);
  if ((((uVar3 & 1) != 0) || (uVar3 = Type::Maybe((Type *)&local_58,0x801), (uVar3 & 1) != 0)) ||
     ((uVar3 = Type::Maybe((Type *)&local_48,*(undefined8 *)(*(long *)(this + 8) + 0x148)),
      (uVar3 & 1) != 0 && (dVar6 = (double)Type::Min((Type *)&local_58), dVar6 < 0.0)))) {
    bVar1 = true;
  }
  else {
    uVar3 = Type::Maybe((Type *)&local_58,*(undefined8 *)(*(long *)(this + 8) + 0x148));
    if ((uVar3 & 1) == 0) {
      bVar1 = false;
    }
    else {
      dVar6 = (double)Type::Min((Type *)&local_48);
      bVar1 = dVar6 < 0.0;
    }
  }
  uVar3 = Type::Maybe((Type *)&local_48,0x801);
  if ((uVar3 & 1) != 0) {
    local_48 = Type::Union(local_48,*(undefined8 *)(*(long *)(this + 8) + 0xe0),*(undefined8 *)this)
    ;
    local_48 = Type::Intersect(local_48,0x45f,*(undefined8 *)this);
  }
  uVar3 = Type::Maybe((Type *)&local_58,0x801);
  if ((uVar3 & 1) != 0) {
    local_58 = Type::Union(local_58,*(undefined8 *)(*(long *)(this + 8) + 0xe0),*(undefined8 *)this)
    ;
    local_58 = Type::Intersect(local_58,0x45f,*(undefined8 *)this);
  }
  lVar5 = *(long *)(*(long *)(this + 8) + 0x150);
  if (local_48 == lVar5) {
LAB_0179b7c8:
    if ((local_58 == lVar5) || (uVar3 = Type::SlowIs((Type *)&local_58), (uVar3 & 1) != 0)) {
      dVar6 = (double)Type::Min((Type *)&local_48);
      dVar7 = (double)Type::Max((Type *)&local_48);
      dVar8 = (double)Type::Min((Type *)&local_58);
      dVar9 = (double)Type::Max((Type *)&local_58);
      uVar4 = MultiplyRanger(this,dVar6,dVar7,dVar8,dVar9);
      goto joined_r0x0179b828;
    }
  }
  else {
    uVar3 = Type::SlowIs((Type *)&local_48);
    if ((uVar3 & 1) != 0) {
      lVar5 = *(long *)(*(long *)(this + 8) + 0x150);
      goto LAB_0179b7c8;
    }
  }
  uVar4 = 0xc5f;
joined_r0x0179b828:
  if (bVar1) {
    uVar4 = Type::Union(uVar4,0x801,*(undefined8 *)this);
  }
  if (bVar2) {
    uVar4 = Type::Union(uVar4,0x1001,*(undefined8 *)this);
  }
  return uVar4;
}

