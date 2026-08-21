
undefined8
FUN_010c2f50(undefined8 param_1,long param_2,ulong *param_3,ulong *param_4,ulong param_5,
            ulong param_6)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  bool local_3c [4];
  ulong local_38;
  
  uVar6 = *param_3;
  local_38 = *param_4;
  if ((*(uint *)((uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0xb)) + 0x1b) >> 2 & 1) != 0
     ) {
    if ((local_38 & 1) == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = (int)local_38 == *(int *)(param_2 + 0xa0);
    }
    if ((bool)(param_5 < param_6 & bVar3)) {
      return 0x101;
    }
    return 1;
  }
  if ((((local_38 & 1) == 0) || ((int)local_38 != *(int *)(param_2 + 0xa0))) ||
     (param_6 <= *(ulong *)(uVar6 + 0x1f))) {
    uVar1 = *(ulong *)(uVar6 + 0x1f);
    if (param_6 <= *(ulong *)(uVar6 + 0x1f)) {
      uVar1 = param_6;
    }
    if ((local_38 & 1) != 0) {
      lVar7 = *(long *)(uVar6 + 0x27);
      uVar2 = *(uint *)(uVar6 + 0x2f);
      if (*(short *)((local_38 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_38 - 1)) == 0x41)
      {
        lVar4 = v8::internal::BigInt::AsInt64((BigInt *)&local_38,local_3c);
        if (uVar1 <= param_5) {
          return 1;
        }
        if (local_3c[0] == false) {
          return 1;
        }
        while (*(long *)(lVar7 + (ulong)uVar2 + param_5 * 8) != lVar4) {
          param_5 = param_5 + 1;
          if (uVar1 <= param_5) {
            return 1;
          }
        }
        goto LAB_010c3064;
      }
    }
    uVar5 = 1;
  }
  else {
LAB_010c3064:
    uVar5 = 0x101;
  }
  return uVar5;
}

