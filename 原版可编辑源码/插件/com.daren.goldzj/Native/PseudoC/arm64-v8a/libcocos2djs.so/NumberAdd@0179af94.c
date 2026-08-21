
/* v8::internal::compiler::OperationTyper::NumberAdd(v8::internal::compiler::Type,
   v8::internal::compiler::Type) */

undefined8 __thiscall
v8::internal::compiler::OperationTyper::NumberAdd(OperationTyper *this,long param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  long local_50;
  long local_48;
  
  if (param_2 == 1) {
    return 1;
  }
  if (param_3 == 1) {
    return 1;
  }
  local_50 = param_3;
  local_48 = param_2;
  uVar3 = Type::Maybe((Type *)&local_48,0x1001);
  if ((uVar3 & 1) == 0) {
    uVar3 = Type::Maybe((Type *)&local_50,0x1001);
    uVar3 = uVar3 & 0xffffffff;
  }
  else {
    uVar3 = 1;
  }
  uVar4 = Type::Maybe((Type *)&local_48,0x801);
  bVar1 = (uVar4 & 1) != 0;
  if (bVar1) {
    local_48 = Type::Union(local_48,*(undefined8 *)(*(long *)(this + 8) + 0xe0),*(undefined8 *)this)
    ;
  }
  uVar4 = Type::Maybe((Type *)&local_50,0x801);
  bVar2 = (uVar4 & 1) != 0;
  if (bVar2) {
    local_50 = Type::Union(local_50,*(undefined8 *)(*(long *)(this + 8) + 0xe0),*(undefined8 *)this)
    ;
  }
  local_48 = Type::Intersect(local_48,0x45f,*(undefined8 *)this);
  local_50 = Type::Intersect(local_50,0x45f,*(undefined8 *)this);
  uVar5 = 1;
  if ((local_50 == 1) || (local_48 == 1)) goto joined_r0x0179b118;
  lVar6 = local_48;
  if (local_48 == *(long *)(*(long *)(this + 8) + 0x150)) {
LAB_0179b0c0:
    if ((local_50 == lVar6) || (uVar4 = Type::SlowIs((Type *)&local_50), (uVar4 & 1) != 0)) {
      dVar7 = (double)Type::Min((Type *)&local_48);
      dVar8 = (double)Type::Max((Type *)&local_48);
      dVar9 = (double)Type::Min((Type *)&local_50);
      dVar10 = (double)Type::Max((Type *)&local_50);
      uVar5 = AddRanger(this,dVar7,dVar8,dVar9,dVar10);
      goto joined_r0x0179b118;
    }
  }
  else {
    uVar4 = Type::SlowIs((Type *)&local_48,*(long *)(*(long *)(this + 8) + 0x150));
    if ((uVar4 & 1) != 0) {
      lVar6 = *(long *)(*(long *)(this + 8) + 0x150);
      goto LAB_0179b0c0;
    }
  }
  uVar4 = Type::Maybe((Type *)&local_48,*(undefined8 *)(this + 0x18));
  if ((((uVar4 & 1) != 0) &&
      (uVar4 = Type::Maybe((Type *)&local_50,*(undefined8 *)(this + 0x10)), (uVar4 & 1) != 0)) ||
     ((uVar4 = Type::Maybe((Type *)&local_50,*(undefined8 *)(this + 0x18)), (uVar4 & 1) != 0 &&
      (uVar4 = Type::Maybe((Type *)&local_48,*(undefined8 *)(this + 0x10)), (uVar4 & 1) != 0)))) {
    uVar3 = 1;
  }
  uVar5 = 0x45f;
joined_r0x0179b118:
  if (bVar2 && bVar1) {
    uVar5 = Type::Union(uVar5,0x801,*(undefined8 *)this);
  }
  if ((uVar3 & 1) != 0) {
    uVar5 = Type::Union(uVar5,0x1001,*(undefined8 *)this);
  }
  return uVar5;
}

