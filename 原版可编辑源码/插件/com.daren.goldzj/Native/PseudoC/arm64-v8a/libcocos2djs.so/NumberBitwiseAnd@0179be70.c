
/* v8::internal::compiler::OperationTyper::NumberBitwiseAnd(v8::internal::compiler::Type,
   v8::internal::compiler::Type) */

undefined8 __thiscall
v8::internal::compiler::OperationTyper::NumberBitwiseAnd
          (OperationTyper *this,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  double *pdVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double local_60;
  double local_58;
  long local_50;
  long local_48;
  
  lVar3 = NumberToInt32();
  local_48 = lVar3;
  local_50 = NumberToInt32(this,param_3);
  uVar4 = 1;
  if ((local_50 != 1) && (lVar3 != 1)) {
    dVar6 = (double)Type::Min((Type *)&local_48);
    dVar7 = (double)Type::Min((Type *)&local_50);
    dVar8 = (double)Type::Max((Type *)&local_48);
    local_58 = dVar8;
    local_60 = (double)Type::Max((Type *)&local_50);
    pdVar2 = &local_60;
    if (dVar8 <= local_60) {
      pdVar2 = &local_58;
    }
    pdVar1 = &local_60;
    if (local_60 <= dVar8) {
      pdVar1 = &local_58;
    }
    if (dVar6 < 0.0 || dVar7 < 0.0) {
      pdVar2 = pdVar1;
    }
    dVar5 = *pdVar2;
    if (dVar5 <= dVar8) {
      dVar8 = dVar5;
    }
    if (dVar6 < 0.0) {
      dVar8 = dVar5;
    }
    dVar5 = local_60;
    if (dVar8 <= local_60) {
      dVar5 = dVar8;
    }
    if (dVar7 < 0.0) {
      dVar5 = dVar8;
    }
    dVar8 = 0.0;
    if (dVar7 < 0.0 && dVar6 < 0.0) {
      dVar8 = -2147483648.0;
    }
    uVar4 = Type::Range(dVar8,dVar5,*(Zone **)this);
  }
  return uVar4;
}

