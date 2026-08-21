
/* v8::internal::compiler::OperationTyper::WeakenRange(v8::internal::compiler::Type,
   v8::internal::compiler::Type) */

void __thiscall
v8::internal::compiler::OperationTyper::WeakenRange
          (OperationTyper *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 local_38;
  undefined8 local_8;
  
  local_38 = param_3;
  local_8 = param_2;
  dVar2 = (double)Type::Min((Type *)&local_38);
  dVar3 = (double)Type::Min((Type *)&local_8);
  dVar5 = dVar2;
  if (dVar2 != dVar3) {
    dVar5 = -INFINITY;
    lVar1 = 0;
    do {
      dVar3 = *(double *)((long)&DAT_01a61f98 + lVar1);
      if (dVar3 <= dVar2) {
        dVar5 = dVar3;
      }
    } while ((lVar1 != 0xa0) && (lVar1 = lVar1 + 8, dVar2 < dVar3));
  }
  dVar3 = (double)Type::Max((Type *)&local_38);
  dVar4 = (double)Type::Max((Type *)&local_8);
  dVar2 = dVar3;
  if (dVar3 != dVar4) {
    dVar2 = INFINITY;
    lVar1 = 0;
    do {
      dVar4 = *(double *)((long)&DAT_01a62040 + lVar1);
      if (dVar3 <= dVar4) {
        dVar2 = dVar4;
      }
    } while ((lVar1 != 0xa0) && (lVar1 = lVar1 + 8, dVar4 < dVar3));
  }
  Type::Range(dVar5,dVar2,*(Zone **)this);
  return;
}

