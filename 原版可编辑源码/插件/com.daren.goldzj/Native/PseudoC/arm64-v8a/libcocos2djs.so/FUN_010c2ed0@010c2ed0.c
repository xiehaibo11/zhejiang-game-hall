
long FUN_010c2ed0(undefined8 param_1,long *param_2,undefined8 *param_3,long param_4,int param_5)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 local_18;
  
  local_18 = *param_3;
  uVar2 = v8::internal::BigInt::AsInt64((BigInt *)&local_18,(bool *)0x0);
  lVar3 = *param_2;
  uVar1 = param_5 - (int)param_4;
  uVar5 = (-((ulong)(uVar1 >> 0x1c) & 1) & 0xffffffff00000000 | ((ulong)uVar1 & 0x1fffffff) << 3) >>
          3;
  if (0 < (int)uVar5) {
    puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x27) + (ulong)*(uint *)(lVar3 + 0x2f) + param_4 * 8);
    do {
      uVar1 = (int)uVar5 - 1;
      uVar5 = (ulong)uVar1;
      *puVar4 = uVar2;
      puVar4 = puVar4 + 1;
    } while (0 < (int)uVar1);
    lVar3 = *param_2;
  }
  return lVar3;
}

