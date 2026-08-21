
undefined1  [16]
FUN_013663a8(long param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5,
            undefined8 param_6,long param_7,long param_8,ulong param_9)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  int in_w9;
  long unaff_x26;
  undefined1 auVar4 [16];
  
  *(int *)(param_5 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
  *(int *)(param_5 + 3) = in_w9 * 2;
  param_7 = param_7 + 7;
  lVar2 = param_1 * 4 + 7;
  if (param_7 != lVar2) {
    uVar3 = *(undefined8 *)(unaff_x26 + 0xa8);
    do {
      param_7 = param_7 + -4;
      *(int *)(param_5 + param_7) = (int)uVar3;
    } while (param_7 != lVar2);
  }
  while (lVar2 != 7) {
    lVar2 = lVar2 + -4;
    *(undefined4 *)(param_5 + lVar2) = *(undefined4 *)(param_8 + lVar2);
  }
  *(int *)(param_3 + 7) = (int)param_5;
  if (((((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((param_5 & 1) != 0)) &&
     (param_5 = unaff_x26 + (param_5 & 0xffffffff),
     ((uint)*(undefined8 *)((param_5 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(param_3,param_3 + 7,0,2);
  }
  if (param_9 < (ulong)((long)((ulong)*(uint *)(param_5 + 3) << 0x20) >> 0x21)) {
    lVar2 = param_9 * 4 + 7;
    *(int *)(param_5 + lVar2) = (int)param_2;
    if (((((uint)*(undefined8 *)((param_5 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((param_2 & 1) != 0)) &&
       (param_2 = unaff_x26 + (param_2 & 0xffffffff),
       ((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
      FUN_0133eb00(param_5,param_5 + lVar2,0,2);
    }
    auVar4._8_8_ = param_3;
    auVar4._0_8_ = param_2;
    return auVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0,0x13679e8);
  (*pcVar1)();
}

