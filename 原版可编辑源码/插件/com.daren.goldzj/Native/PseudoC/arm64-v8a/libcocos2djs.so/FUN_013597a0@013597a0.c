
undefined1  [16]
FUN_013597a0(ulong param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
            long param_6,long param_7,ulong param_8)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int in_w8;
  long in_x9;
  long unaff_x26;
  undefined1 auVar5 [16];
  
  *(int *)(param_4 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
  *(int *)(param_4 + 3) = in_w8 * 2;
  lVar2 = in_x9 + 7;
  lVar3 = param_6 * 4 + 7;
  if (lVar2 != lVar3) {
    uVar4 = *(undefined8 *)(unaff_x26 + 0xa8);
    do {
      lVar2 = lVar2 + -4;
      *(int *)(param_4 + lVar2) = (int)uVar4;
    } while (lVar2 != lVar3);
  }
  while (lVar3 != 7) {
    lVar3 = lVar3 + -4;
    *(undefined4 *)(param_4 + lVar3) = *(undefined4 *)(param_7 + lVar3);
  }
  *(int *)(param_2 + 7) = (int)param_4;
  if (((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((param_4 & 1) != 0)) &&
     (param_4 = unaff_x26 + (param_4 & 0xffffffff),
     ((uint)*(undefined8 *)((param_4 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(param_2,param_2 + 7,0,2);
  }
  if (param_8 < (ulong)((long)((ulong)*(uint *)(param_4 + 3) << 0x20) >> 0x21)) {
    lVar2 = param_8 * 4 + 7;
    *(int *)(param_4 + lVar2) = (int)param_1;
    if (((((uint)*(undefined8 *)((param_4 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((param_1 & 1) != 0)) &&
       (param_1 = unaff_x26 + (param_1 & 0xffffffff),
       ((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
      FUN_0133eb00(param_4,param_4 + lVar2,0,2);
    }
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0,0x135a0b0);
  (*pcVar1)();
}

