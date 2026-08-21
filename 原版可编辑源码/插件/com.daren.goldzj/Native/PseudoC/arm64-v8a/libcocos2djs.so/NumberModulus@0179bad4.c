
/* v8::internal::compiler::OperationTyper::NumberModulus(v8::internal::compiler::Type,
   v8::internal::compiler::Type) */

undefined8 __thiscall
v8::internal::compiler::OperationTyper::NumberModulus
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
  double dVar10;
  double dVar11;
  long local_58;
  long local_18;
  
  if (param_2 == 1) {
    return 1;
  }
  if (param_3 == 1) {
    return 1;
  }
  local_58 = param_3;
  local_18 = param_2;
  uVar3 = Type::Maybe((Type *)&local_18,0x1001);
  if ((((uVar3 & 1) == 0) &&
      (uVar3 = Type::Maybe((Type *)&local_58,*(undefined8 *)(*(long *)(this + 8) + 0x148)),
      (uVar3 & 1) == 0)) && (dVar6 = (double)Type::Min((Type *)&local_18), dVar6 != -INFINITY)) {
    dVar6 = (double)Type::Max((Type *)&local_18);
    bVar2 = dVar6 == INFINITY;
  }
  else {
    bVar2 = true;
  }
  uVar3 = Type::Maybe((Type *)&local_18,0x801);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    local_18 = Type::Union(local_18,*(undefined8 *)(*(long *)(this + 8) + 0xe0),*(undefined8 *)this)
    ;
  }
  uVar3 = Type::Maybe((Type *)&local_58,0x801);
  if ((uVar3 & 1) != 0) {
    local_58 = Type::Union(local_58,*(undefined8 *)(*(long *)(this + 8) + 0xe0),*(undefined8 *)this)
    ;
  }
  local_18 = Type::Intersect(local_18,0x45f,*(undefined8 *)this);
  local_58 = Type::Intersect(local_58,0x45f,*(undefined8 *)this);
  if (((local_18 == 1) || (local_58 == *(long *)(*(long *)(this + 8) + 0xe0))) ||
     (uVar3 = Type::SlowIs((Type *)&local_58), (uVar3 & 1) != 0)) {
    uVar4 = 1;
    if (!bVar1) goto LAB_0179bc14;
  }
  else {
    dVar6 = (double)Type::Min((Type *)&local_18);
    dVar7 = (double)Type::Max((Type *)&local_18);
    dVar8 = (double)Type::Min((Type *)&local_58);
    dVar9 = (double)Type::Max((Type *)&local_58);
    lVar5 = *(long *)(*(long *)(this + 8) + 0x150);
    if (local_18 == lVar5) {
LAB_0179bca4:
      if ((local_58 != lVar5) && (uVar3 = Type::SlowIs((Type *)&local_58), (uVar3 & 1) == 0))
      goto LAB_0179bd34;
      dVar11 = ABS(dVar7);
      if (ABS(dVar7) <= ABS(dVar6)) {
        dVar11 = ABS(dVar6);
      }
      dVar10 = ABS(dVar9);
      if (ABS(dVar9) <= ABS(dVar8)) {
        dVar10 = ABS(dVar8);
      }
      dVar8 = dVar10 + -1.0;
      if (dVar11 <= dVar10 + -1.0) {
        dVar8 = dVar11;
      }
      dVar11 = 0.0 - dVar8;
      dVar9 = dVar8;
      if (dVar7 <= 0.0) {
        dVar9 = 0.0;
      }
      if (0.0 <= dVar6) {
        dVar11 = 0.0;
        dVar9 = dVar8;
      }
      uVar4 = Type::Range(dVar11,dVar9,*(Zone **)this);
    }
    else {
      uVar3 = Type::SlowIs((Type *)&local_18);
      if ((uVar3 & 1) != 0) {
        lVar5 = *(long *)(*(long *)(this + 8) + 0x150);
        goto LAB_0179bca4;
      }
LAB_0179bd34:
      uVar4 = 0x45f;
    }
    if (!bVar1 && 0.0 <= dVar6) goto LAB_0179bc14;
  }
  uVar4 = Type::Union(uVar4,0x801,*(undefined8 *)this);
LAB_0179bc14:
  if (bVar2) {
    uVar4 = Type::Union(uVar4,0x1001,*(undefined8 *)this);
  }
  return uVar4;
}

