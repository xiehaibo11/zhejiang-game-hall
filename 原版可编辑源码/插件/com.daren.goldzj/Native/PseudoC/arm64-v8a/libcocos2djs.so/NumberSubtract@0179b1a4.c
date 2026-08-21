
/* v8::internal::compiler::OperationTyper::NumberSubtract(v8::internal::compiler::Type,
   v8::internal::compiler::Type) */

undefined8 __thiscall
v8::internal::compiler::OperationTyper::NumberSubtract
          (OperationTyper *this,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
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
  uVar1 = Type::Maybe((Type *)&local_48,0x1001);
  if ((uVar1 & 1) == 0) {
    uVar1 = Type::Maybe((Type *)&local_50,0x1001);
    uVar1 = uVar1 & 0xffffffff;
  }
  else {
    uVar1 = 1;
  }
  uVar2 = Type::Maybe((Type *)&local_48,0x801);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    local_48 = Type::Union(local_48,*(undefined8 *)(*(long *)(this + 8) + 0xe0),*(undefined8 *)this)
    ;
    uVar2 = Type::Maybe((Type *)&local_50,*(undefined8 *)(*(long *)(this + 8) + 0xe0));
    uVar2 = uVar2 & 0xffffffff;
  }
  uVar3 = Type::Maybe((Type *)&local_50,0x801);
  if ((uVar3 & 1) != 0) {
    local_50 = Type::Union(local_50,*(undefined8 *)(*(long *)(this + 8) + 0xe0),*(undefined8 *)this)
    ;
  }
  local_48 = Type::Intersect(local_48,0x45f,*(undefined8 *)this);
  local_50 = Type::Intersect(local_50,0x45f,*(undefined8 *)this);
  uVar4 = 1;
  if ((local_50 == 1) || (local_48 == 1)) goto joined_r0x0179b330;
  lVar5 = local_48;
  if (local_48 == *(long *)(*(long *)(this + 8) + 0x150)) {
LAB_0179b2d8:
    if ((local_50 == lVar5) || (uVar3 = Type::SlowIs((Type *)&local_50), (uVar3 & 1) != 0)) {
      dVar6 = (double)Type::Min((Type *)&local_48);
      dVar7 = (double)Type::Max((Type *)&local_48);
      dVar8 = (double)Type::Min((Type *)&local_50);
      dVar9 = (double)Type::Max((Type *)&local_50);
      uVar4 = SubtractRanger(this,dVar6,dVar7,dVar8,dVar9);
      goto joined_r0x0179b330;
    }
  }
  else {
    uVar3 = Type::SlowIs((Type *)&local_48,*(long *)(*(long *)(this + 8) + 0x150));
    if ((uVar3 & 1) != 0) {
      lVar5 = *(long *)(*(long *)(this + 8) + 0x150);
      goto LAB_0179b2d8;
    }
  }
  uVar3 = Type::Maybe((Type *)&local_48,*(undefined8 *)(this + 0x10));
  if ((((uVar3 & 1) != 0) &&
      (uVar3 = Type::Maybe((Type *)&local_50,*(undefined8 *)(this + 0x10)), (uVar3 & 1) != 0)) ||
     ((uVar3 = Type::Maybe((Type *)&local_50,*(undefined8 *)(this + 0x18)), (uVar3 & 1) != 0 &&
      (uVar3 = Type::Maybe((Type *)&local_48,*(undefined8 *)(this + 0x18)), (uVar3 & 1) != 0)))) {
    uVar1 = 1;
  }
  uVar4 = 0x45f;
joined_r0x0179b330:
  if ((uVar2 & 1) != 0) {
    uVar4 = Type::Union(uVar4,0x801,*(undefined8 *)this);
  }
  if ((uVar1 & 1) != 0) {
    uVar4 = Type::Union(uVar4,0x1001,*(undefined8 *)this);
  }
  return uVar4;
}

