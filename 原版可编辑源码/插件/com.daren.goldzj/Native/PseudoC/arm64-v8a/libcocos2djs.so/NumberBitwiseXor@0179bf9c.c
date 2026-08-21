
/* v8::internal::compiler::OperationTyper::NumberBitwiseXor(v8::internal::compiler::Type,
   v8::internal::compiler::Type) */

undefined8 __thiscall
v8::internal::compiler::OperationTyper::NumberBitwiseXor
          (OperationTyper *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long local_50;
  long local_48;
  
  lVar1 = NumberToInt32();
  local_48 = lVar1;
  local_50 = NumberToInt32(this,param_3);
  uVar2 = 1;
  if ((local_50 != 1) && (lVar1 != 1)) {
    dVar3 = (double)Type::Min((Type *)&local_48);
    dVar4 = (double)Type::Min((Type *)&local_50);
    dVar5 = (double)Type::Max((Type *)&local_48);
    dVar6 = (double)Type::Max((Type *)&local_50);
    if (((0.0 <= dVar3) && (0.0 <= dVar4)) || ((dVar5 < 0.0 && (dVar6 < 0.0)))) {
      uVar2 = 0x403;
    }
    else {
      uVar2 = 0x49;
      if ((dVar4 < 0.0 || 0.0 <= dVar5) && (dVar3 < 0.0 || 0.0 <= dVar6)) {
        uVar2 = 1099;
      }
    }
  }
  return uVar2;
}

