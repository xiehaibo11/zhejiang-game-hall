
/* v8::internal::compiler::OperationTyper::NumberShiftRight(v8::internal::compiler::Type,
   v8::internal::compiler::Type) */

undefined8 __thiscall
v8::internal::compiler::OperationTyper::NumberShiftRight
          (OperationTyper *this,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  long local_40;
  long local_38;
  
  lVar7 = NumberToInt32();
  local_38 = lVar7;
  local_40 = NumberToUint32(this,param_3);
  uVar8 = 1;
  if ((local_40 != 1) && (lVar7 != 1)) {
    dVar10 = (double)Type::Min((Type *)&local_38);
    dVar11 = (double)Type::Max((Type *)&local_38);
    dVar12 = (double)Type::Min((Type *)&local_40);
    dVar13 = (double)Type::Max((Type *)&local_40);
    uVar9 = (uint)dVar13;
    uVar5 = 0x1f;
    if (uVar9 < 0x20) {
      uVar5 = uVar9;
    }
    uVar6 = 0;
    if (uVar9 < 0x20) {
      uVar6 = (int)dVar12;
    }
    iVar1 = (int)dVar10 >> (uVar6 & 0x1f);
    iVar2 = (int)dVar10 >> (uVar5 & 0x1f);
    iVar3 = (int)dVar11 >> (uVar6 & 0x1f);
    iVar4 = (int)dVar11 >> (uVar5 & 0x1f);
    if (iVar1 <= iVar2) {
      iVar2 = iVar1;
    }
    if (iVar4 <= iVar3) {
      iVar4 = iVar3;
    }
    if ((iVar4 == 0x7fffffff) && (iVar2 == -0x80000000)) {
      uVar8 = 1099;
    }
    else {
      uVar8 = Type::Range((double)iVar2,(double)iVar4,*(Zone **)this);
    }
  }
  return uVar8;
}

