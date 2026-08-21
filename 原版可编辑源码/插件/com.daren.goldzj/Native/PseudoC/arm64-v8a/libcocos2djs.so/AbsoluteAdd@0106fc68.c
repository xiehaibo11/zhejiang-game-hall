
/* v8::internal::MutableBigInt::AbsoluteAdd(v8::internal::MutableBigInt, v8::internal::BigInt,
   v8::internal::BigInt) */

void v8::internal::MutableBigInt::AbsoluteAdd(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((*(uint *)(param_3 + 3) & 0x7ffffffe) == 0) {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar3 = 0;
    uVar2 = 0;
    uVar1 = 0;
    do {
      uVar4 = uVar3 & 0xfffffff8 | 7;
      uVar6 = *(ulong *)(uVar4 + param_2);
      uVar7 = *(ulong *)(uVar4 + param_3);
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 + 8;
      uVar5 = uVar7 + uVar6;
      *(ulong *)(uVar4 + param_1) = uVar5 + uVar1;
      uVar1 = (ulong)CARRY8(uVar5,uVar1) + (ulong)CARRY8(uVar7,uVar6);
    } while (uVar2 < ((ulong)(*(uint *)(param_3 + 3) >> 1) & 0x3fffffff));
  }
  uVar3 = (ulong)((uint)uVar2 << 3 | 7);
  if ((uint)uVar2 < (*(uint *)(param_2 + 3) >> 1 & 0x3fffffff)) {
    uVar2 = uVar2 & 0xffffffff;
    uVar5 = uVar2 * 8;
    do {
      uVar5 = uVar5 + 8;
      uVar4 = *(ulong *)(uVar3 + param_2);
      uVar2 = uVar2 + 1;
      *(ulong *)(uVar3 + param_1) = uVar4 + uVar1;
      uVar1 = (ulong)CARRY8(uVar4,uVar1);
      uVar3 = uVar5 & 0xfffffff8 | 7;
    } while (uVar2 < ((ulong)(*(uint *)(param_2 + 3) >> 1) & 0x3fffffff));
  }
  *(ulong *)(uVar3 + param_1) = uVar1;
  return;
}

