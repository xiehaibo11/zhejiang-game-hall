
/* v8::internal::compiler::OperationTyper::NumberShiftLeft(v8::internal::compiler::Type,
   v8::internal::compiler::Type) */

undefined8 __thiscall
v8::internal::compiler::OperationTyper::NumberShiftLeft
          (OperationTyper *this,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  long local_40;
  long local_38;
  
  lVar5 = NumberToInt32();
  local_38 = lVar5;
  local_40 = NumberToUint32(this,param_3);
  uVar6 = 1;
  if ((local_40 != 1) && (lVar5 != 1)) {
    dVar10 = (double)Type::Min((Type *)&local_38);
    dVar11 = (double)Type::Max((Type *)&local_38);
    iVar9 = (int)dVar11;
    dVar11 = (double)Type::Min((Type *)&local_40);
    dVar12 = (double)Type::Max((Type *)&local_40);
    uVar7 = (uint)dVar12;
    uVar1 = 0x1f;
    if (uVar7 < 0x20) {
      uVar1 = uVar7;
    }
    uVar2 = 0;
    if (uVar7 < 0x20) {
      uVar2 = (int)dVar11;
    }
    uVar6 = 1099;
    if ((iVar9 <= (int)(0x7fffffffU >> (ulong)(uVar1 & 0x1f))) &&
       (iVar8 = (int)dVar10, -0x80000000 >> (uVar1 & 0x1f) <= iVar8)) {
      iVar3 = iVar8 << (ulong)(uVar2 & 0x1f);
      iVar8 = iVar8 << (ulong)(uVar1 & 0x1f);
      iVar4 = iVar9 << (ulong)(uVar2 & 0x1f);
      iVar9 = iVar9 << (ulong)(uVar1 & 0x1f);
      if (iVar3 <= iVar8) {
        iVar8 = iVar3;
      }
      if (iVar9 <= iVar4) {
        iVar9 = iVar4;
      }
      if ((iVar9 == 0x7fffffff) && (iVar8 == -0x80000000)) {
        uVar6 = 1099;
      }
      else {
        uVar6 = Type::Range((double)iVar8,(double)iVar9,*(Zone **)this);
      }
    }
  }
  return uVar6;
}

