
/* v8::internal::compiler::OperationTyper::NumberShiftRightLogical(v8::internal::compiler::Type,
   v8::internal::compiler::Type) */

undefined8 __thiscall
v8::internal::compiler::OperationTyper::NumberShiftRightLogical
          (OperationTyper *this,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  long local_40;
  long local_38;
  
  lVar3 = NumberToUint32();
  local_38 = lVar3;
  local_40 = NumberToUint32(this,param_3);
  uVar4 = 1;
  if ((local_40 != 1) && (lVar3 != 1)) {
    dVar6 = (double)Type::Min((Type *)&local_38);
    dVar7 = (double)Type::Max((Type *)&local_38);
    dVar8 = (double)Type::Min((Type *)&local_40);
    dVar9 = (double)Type::Max((Type *)&local_40);
    uVar5 = (uint)dVar9;
    uVar2 = 0x1f;
    if (uVar5 < 0x20) {
      uVar2 = uVar5;
    }
    uVar1 = 0;
    if (uVar5 < 0x20) {
      uVar1 = (int)dVar8;
    }
    uVar2 = (uint)(int)dVar6 >> (ulong)(uVar2 & 0x1f);
    uVar5 = (uint)(int)dVar7 >> (ulong)(uVar1 & 0x1f);
    if ((uVar2 == 0) && (uVar5 == 0x7fffffff)) {
      uVar4 = 0x403;
    }
    else if ((uVar2 == 0) && (uVar5 == 0xffffffff)) {
      uVar4 = 0x407;
    }
    else {
      uVar4 = Type::Range((double)uVar2,(double)uVar5,*(Zone **)this);
    }
  }
  return uVar4;
}

