
/* v8::internal::BigInt::EqualToBigInt(v8::internal::BigInt, v8::internal::BigInt) */

undefined8 v8::internal::BigInt::EqualToBigInt(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((((*(uint *)(param_1 + 3) ^ *(uint *)(param_2 + 3)) & 1) == 0) &&
     (((*(uint *)(param_2 + 3) ^ *(uint *)(param_1 + 3)) & 0x7ffffffe) == 0)) {
    if ((*(uint *)(param_1 + 3) & 0x7ffffffe) != 0) {
      uVar1 = 0;
      uVar2 = 0;
      do {
        uVar3 = uVar1 & 0xfffffff8 | 7;
        if (*(long *)(uVar3 + param_1) != *(long *)(uVar3 + param_2)) {
          return 0;
        }
        uVar2 = uVar2 + 1;
        uVar1 = uVar1 + 8;
      } while (uVar2 < ((ulong)(*(uint *)(param_1 + 3) >> 1) & 0x3fffffff));
    }
    return 1;
  }
  return 0;
}

