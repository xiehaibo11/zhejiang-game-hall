
void FUN_010c1570(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_28;
  
  lVar3 = *(long *)(*param_2 + 0x27);
  uVar1 = *(uint *)(*param_2 + 0x2f);
  local_28 = param_4;
  uVar2 = v8::internal::BigInt::AsUint64((BigInt *)&local_28,(bool *)0x0);
  *(undefined8 *)(lVar3 + (ulong)uVar1 + param_3 * 8) = uVar2;
  return;
}

