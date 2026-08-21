
/* v8::internal::compiler::OperationTyper::SameValue(v8::internal::compiler::Type,
   v8::internal::compiler::Type) */

undefined8 __thiscall
v8::internal::compiler::OperationTyper::SameValue(OperationTyper *this,long param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  Type *pTVar4;
  double dVar5;
  double dVar6;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  local_40 = param_3;
  local_38 = param_2;
  local_48 = FUN_0179cf78(param_2);
  uVar1 = FUN_0179cf78(param_3);
  uVar2 = Type::Maybe((Type *)&local_48,uVar1);
  if ((uVar2 & 1) == 0) goto LAB_0179cf54;
  if (param_2 == 0x1001) {
    uVar2 = 1;
  }
  else {
    uVar2 = Type::SlowIs((Type *)&local_38,0x1001);
    uVar2 = uVar2 & 0xffffffff;
    param_3 = local_40;
  }
  if (param_3 == 0x1001) {
    uVar3 = 1;
    if ((uVar2 & 1) != 0) goto LAB_0179ce60;
LAB_0179ce44:
    if ((uVar3 & 1) != 0) {
      pTVar4 = (Type *)&local_38;
      goto LAB_0179ce68;
    }
  }
  else {
    uVar3 = Type::SlowIs((Type *)&local_40,0x1001);
    if ((uVar2 & 1) == 0) goto LAB_0179ce44;
LAB_0179ce60:
    if ((uVar3 & 1) != 0) goto LAB_0179cecc;
    pTVar4 = (Type *)&local_40;
LAB_0179ce68:
    uVar2 = Type::Maybe(pTVar4,0x1001);
    if ((uVar2 & 1) == 0) goto LAB_0179cf54;
  }
  if (local_38 == 0x801) {
    uVar2 = 1;
  }
  else {
    uVar2 = Type::SlowIs((Type *)&local_38,0x801);
    uVar2 = uVar2 & 0xffffffff;
  }
  if (local_40 == 0x801) {
    uVar3 = 1;
    if ((uVar2 & 1) != 0) goto LAB_0179cec8;
LAB_0179ceac:
    if ((uVar3 & 1) != 0) {
      pTVar4 = (Type *)&local_38;
      goto LAB_0179ced8;
    }
  }
  else {
    uVar3 = Type::SlowIs((Type *)&local_40,0x801);
    if ((uVar2 & 1) == 0) goto LAB_0179ceac;
LAB_0179cec8:
    if ((uVar3 & 1) != 0) {
LAB_0179cecc:
      return *(undefined8 *)(this + 0x38);
    }
    pTVar4 = (Type *)&local_40;
LAB_0179ced8:
    uVar2 = Type::Maybe(pTVar4,0x801);
    if ((uVar2 & 1) == 0) goto LAB_0179cf54;
  }
  if (((local_38 != 0xc5f) && (uVar2 = Type::SlowIs((Type *)&local_38,0xc5f), (uVar2 & 1) == 0)) ||
     ((local_40 != 0xc5f && (uVar2 = Type::SlowIs((Type *)&local_40,0xc5f), (uVar2 & 1) == 0)))) {
    return 0x201;
  }
  dVar5 = (double)Type::Max((Type *)&local_38);
  dVar6 = (double)Type::Min((Type *)&local_40);
  if (dVar6 <= dVar5) {
    dVar5 = (double)Type::Min((Type *)&local_38);
    dVar6 = (double)Type::Max((Type *)&local_40);
    if (dVar5 <= dVar6) {
      return 0x201;
    }
  }
LAB_0179cf54:
  return *(undefined8 *)(this + 0x30);
}

