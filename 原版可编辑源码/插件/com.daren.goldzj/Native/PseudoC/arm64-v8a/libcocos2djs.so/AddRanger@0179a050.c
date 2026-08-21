
/* v8::internal::compiler::OperationTyper::AddRanger(double, double, double, double) */

undefined8 __thiscall
v8::internal::compiler::OperationTyper::AddRanger
          (OperationTyper *this,double param_1,double param_2,double param_3,double param_4)

{
  bool bVar1;
  char cVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar12 = param_1 + param_3;
  dVar10 = param_1 + param_4;
  dVar8 = param_2 + param_3;
  dVar5 = param_2 + param_4;
  cVar2 = NAN(dVar12) + NAN(dVar10) + NAN(dVar8) + NAN(dVar5);
  if (cVar2 == '\x04') {
    uVar4 = 0x1001;
  }
  else {
    bVar1 = NAN(dVar12);
    dVar9 = INFINITY;
    if (!bVar1) {
      dVar9 = dVar12;
    }
    dVar6 = INFINITY;
    if (!bVar1) {
      dVar6 = dVar12;
    }
    dVar11 = -INFINITY;
    if (!bVar1) {
      dVar11 = dVar12;
    }
    dVar7 = -INFINITY;
    if (!bVar1) {
      dVar7 = dVar12;
    }
    dVar12 = dVar9;
    if (dVar10 <= dVar6) {
      dVar12 = dVar10;
    }
    dVar3 = dVar11;
    if (dVar7 <= dVar10) {
      dVar3 = dVar10;
    }
    if (!NAN(dVar10)) {
      dVar7 = dVar3;
      dVar11 = dVar3;
      dVar9 = dVar12;
      dVar6 = dVar12;
    }
    dVar10 = dVar9;
    if (dVar8 <= dVar6) {
      dVar10 = dVar8;
    }
    dVar12 = dVar11;
    if (dVar7 <= dVar8) {
      dVar12 = dVar8;
    }
    if (!NAN(dVar8)) {
      dVar7 = dVar12;
      dVar11 = dVar12;
      dVar6 = dVar10;
      dVar9 = dVar10;
    }
    if (dVar5 <= dVar6) {
      dVar9 = dVar5;
    }
    if (dVar7 <= dVar5) {
      dVar11 = dVar5;
    }
    if (!NAN(dVar5)) {
      dVar7 = dVar11;
      dVar6 = dVar9;
    }
    dVar5 = 0.0;
    if (dVar6 != 0.0) {
      dVar5 = dVar6;
    }
    dVar8 = 0.0;
    if (dVar7 != 0.0) {
      dVar8 = dVar7;
    }
    uVar4 = Type::Range(dVar5,dVar8,*(Zone **)this);
    if (cVar2 != '\0') {
      uVar4 = Type::Union(uVar4,0x1001,*(undefined8 *)this);
      return uVar4;
    }
  }
  return uVar4;
}

