
/* v8::internal::compiler::OperationTyper::NumberBitwiseOr(v8::internal::compiler::Type,
   v8::internal::compiler::Type) */

undefined8 __thiscall
v8::internal::compiler::OperationTyper::NumberBitwiseOr
          (OperationTyper *this,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double local_68;
  double local_60;
  long local_58;
  long local_18;
  
  lVar8 = NumberToInt32();
  local_18 = lVar8;
  local_58 = NumberToInt32(this,param_3);
  uVar9 = 1;
  if ((local_58 != 1) && (lVar8 != 1)) {
    dVar10 = (double)Type::Min((Type *)&local_18);
    local_60 = dVar10;
    dVar11 = (double)Type::Min((Type *)&local_58);
    pdVar2 = &local_68;
    if (dVar11 <= dVar10) {
      pdVar2 = &local_60;
    }
    pdVar1 = &local_68;
    if (dVar10 <= dVar11) {
      pdVar1 = &local_60;
    }
    bVar4 = true;
    bVar6 = false;
    if (0.0 <= dVar11) {
      bVar4 = false;
      bVar6 = true;
      if (!NAN(dVar10)) {
        bVar4 = dVar10 < 0.0;
        bVar6 = false;
      }
    }
    if (bVar4 != bVar6) {
      pdVar2 = pdVar1;
    }
    local_68 = dVar11;
    dVar12 = (double)Type::Max((Type *)&local_18);
    dVar13 = (double)Type::Max((Type *)&local_58);
    dVar14 = dVar10;
    dVar15 = dVar12;
    if (dVar11 != 0.0 || dVar13 != 0.0) {
      dVar15 = 2147483647.0;
      dVar14 = *pdVar2;
    }
    dVar3 = dVar13;
    if (dVar10 != 0.0 || dVar12 != 0.0) {
      dVar11 = dVar14;
      dVar3 = dVar15;
    }
    bVar4 = true;
    if ((0.0 <= dVar13) && (bVar4 = false, !NAN(dVar12))) {
      bVar4 = dVar12 < 0.0;
    }
    bVar6 = false;
    bVar5 = true;
    bVar7 = false;
    if (bVar4) {
      bVar6 = false;
      bVar5 = false;
      bVar7 = true;
      if (!NAN(dVar3)) {
        bVar6 = dVar3 < -1.0;
        bVar5 = dVar3 == -1.0;
        bVar7 = false;
      }
    }
    dVar10 = -1.0;
    if (bVar5 || bVar6 != bVar7) {
      dVar10 = dVar3;
    }
    uVar9 = Type::Range(dVar11,dVar10,*(Zone **)this);
  }
  return uVar9;
}

