
/* v8::internal::compiler::OperationTyper::MultiplyRanger(double, double, double, double) */

undefined8 __thiscall
v8::internal::compiler::OperationTyper::MultiplyRanger
          (OperationTyper *this,double param_1,double param_2,double param_3,double param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar3 = param_2 * param_3;
  dVar2 = param_2 * param_4;
  if (!NAN(dVar2) && !NAN(dVar3)) {
    dVar4 = param_1 * param_3;
    dVar5 = param_1 * param_4;
    if (!NAN(dVar4) && !NAN(dVar5)) {
      dVar6 = dVar4;
      if (dVar5 <= dVar4) {
        dVar6 = dVar5;
      }
      if (dVar3 <= dVar6) {
        dVar6 = dVar3;
      }
      if (dVar2 <= dVar6) {
        dVar6 = dVar2;
      }
      dVar7 = 0.0;
      if (dVar6 != 0.0) {
        dVar7 = dVar6;
      }
      if (dVar4 <= dVar5) {
        dVar4 = dVar5;
      }
      if (dVar4 <= dVar3) {
        dVar4 = dVar3;
      }
      if (dVar4 <= dVar2) {
        dVar4 = dVar2;
      }
      dVar2 = 0.0;
      if (dVar4 != 0.0) {
        dVar2 = dVar4;
      }
      uVar1 = Type::Range(dVar7,dVar2,*(Zone **)this);
      if (((dVar7 <= 0.0) && (0.0 <= dVar2)) && ((param_1 < 0.0 || (param_3 < 0.0)))) {
        uVar1 = Type::Union(uVar1,0x801,*(undefined8 *)this);
      }
      if ((((param_1 != -INFINITY) && (param_2 != INFINITY)) || (0.0 < param_3)) || (param_4 < 0.0))
      {
        if ((param_3 != -INFINITY) && (param_4 != INFINITY)) {
          return uVar1;
        }
        if (0.0 < param_1) {
          return uVar1;
        }
        if (param_2 < 0.0) {
          return uVar1;
        }
      }
      uVar1 = Type::Union(uVar1,0x1001,*(undefined8 *)this);
      return uVar1;
    }
  }
  return *(undefined8 *)(*(long *)(this + 8) + 0x160);
}

