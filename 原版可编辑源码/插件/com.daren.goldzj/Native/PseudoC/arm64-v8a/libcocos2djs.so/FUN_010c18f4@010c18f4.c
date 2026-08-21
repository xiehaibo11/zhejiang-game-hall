
undefined1  [16] FUN_010c18f4(undefined8 param_1,long *param_2,ulong *param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  bool local_34 [4];
  ulong local_18;
  
  local_18 = *param_3;
  if ((local_18 & 1) != 0) {
    lVar3 = *(long *)(*param_2 + 0x27);
    uVar1 = *(uint *)(*param_2 + 0x2f);
    if ((*(short *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) == 0x41)
       && (lVar2 = v8::internal::BigInt::AsUint64((BigInt *)&local_18,local_34),
          local_34[0] != false)) {
      do {
        if (*(long *)(lVar3 + (ulong)uVar1 + param_4 * 8) == lVar2) break;
        param_4 = param_4 + -1;
      } while (param_4 != -1);
      goto LAB_010c1974;
    }
  }
  param_4 = -1;
LAB_010c1974:
  auVar4._8_8_ = param_4;
  auVar4._0_8_ = 1;
  return auVar4;
}

