
/* btConvexHullInternal::Int128::mul(unsigned long, unsigned long) */

undefined1  [16] btConvexHullInternal::Int128::mul(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = (param_2 & 0xffffffff) * (param_1 & 0xffffffff);
  uVar3 = (param_2 >> 0x20) * (param_1 & 0xffffffff);
  uVar4 = (param_2 & 0xffffffff) * (param_1 >> 0x20);
  uVar1 = (uVar3 & 0xffffffff) + (uVar4 & 0xffffffff);
  lVar2 = (param_2 >> 0x20) * (param_1 >> 0x20) + (uVar3 >> 0x20) + (uVar4 >> 0x20) +
          (uVar1 >> 0x20);
  uVar1 = uVar1 << 0x20;
  if (CARRY8(uVar5,uVar1)) {
    lVar2 = lVar2 + 1;
  }
  auVar6._8_8_ = lVar2;
  auVar6._0_8_ = uVar5 + uVar1;
  return auVar6;
}

