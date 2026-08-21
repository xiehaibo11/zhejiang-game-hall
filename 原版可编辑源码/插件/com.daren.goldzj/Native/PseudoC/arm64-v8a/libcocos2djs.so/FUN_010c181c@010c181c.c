
undefined1  [16]
FUN_010c181c(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4,ulong param_5,
            ulong param_6)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  bool local_44 [4];
  ulong local_28;
  
  uVar4 = *param_3;
  if (((*(uint *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb)) + 0x1b) >> 2 & 1) ==
       0) && (local_28 = *param_4, (local_28 & 1) != 0)) {
    lVar5 = *(long *)(uVar4 + 0x27);
    uVar2 = *(uint *)(uVar4 + 0x2f);
    if ((*(short *)((local_28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_28 - 1)) == 0x41)
       && (lVar3 = v8::internal::BigInt::AsUint64((BigInt *)&local_28,local_44),
          local_44[0] != false)) {
      uVar1 = *(ulong *)(uVar4 + 0x1f);
      if (param_6 <= *(ulong *)(uVar4 + 0x1f)) {
        uVar1 = param_6;
      }
      if (param_5 < uVar1) {
        do {
          uVar4 = param_5;
          if (*(long *)(lVar5 + (ulong)uVar2 + param_5 * 8) == lVar3) break;
          param_5 = param_5 + 1;
          uVar4 = 0xffffffffffffffff;
        } while (param_5 < uVar1);
        goto LAB_010c18d0;
      }
    }
  }
  uVar4 = 0xffffffffffffffff;
LAB_010c18d0:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = 1;
  return auVar6;
}

