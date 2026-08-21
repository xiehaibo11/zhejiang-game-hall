
void FUN_013499c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 local_60 [6];
  undefined1 local_30 [8];
  
  uVar3 = FUN_013c0ba0(param_1,*(undefined8 *)(unaff_x26 + 0xc58));
  if ((int)uVar3 != (int)*(undefined8 *)(unaff_x26 + 0xa0) &&
      (int)uVar3 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
    local_60[4] = *(undefined8 *)(unaff_x26 + 0xa00);
    local_60[5] = param_1;
    uVar4 = FUN_0133fc20(1,uVar3,1);
    if (((uVar4 & 1) != 0) && (0x43 < *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar4 - 1) + 7))) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20e8));
    }
    return;
  }
  uVar4 = FUN_013c0ba0(param_1,*(undefined8 *)(unaff_x26 + 0xa68),unaff_x27,param_1);
  puVar1 = (undefined8 *)local_30;
  if (((uVar4 & 1) != 0) &&
     (puVar1 = (undefined8 *)local_30,
     (*(byte *)(unaff_x26 + (ulong)*(uint *)(uVar4 - 1) + 9) >> 1 & 1) != 0)) {
    puVar1 = local_60 + 4;
    local_60[5] = 0;
    local_60[4] = param_1;
    uVar4 = FUN_0133fc20(0,uVar4,param_1,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar4 - 1) + 7) < 0x44) {
      return;
    }
  }
  uVar4 = FUN_013c0ba0(*(undefined8 *)((long)puVar1 + 8),*(undefined8 *)(unaff_x26 + 0xad0));
  puVar2 = (undefined1 *)puVar1;
  if (((uVar4 & 1) != 0) && ((*(byte *)(unaff_x26 + (ulong)*(uint *)(uVar4 - 1) + 9) >> 1 & 1) != 0)
     ) {
    puVar2 = (undefined1 *)((long)puVar1 + -0x10);
    *(undefined8 *)((long)puVar1 + -8) = 0;
    *(undefined8 *)((long)puVar1 + -0x10) = *(undefined8 *)((long)puVar1 + 8);
    uVar4 = FUN_0133fc20(0,uVar4);
    if (((uVar4 & 1) == 0) || (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar4 - 1) + 7) < 0x44)) {
      return;
    }
  }
  *(undefined8 *)(puVar2 + -8) = 0;
  *(undefined8 *)(puVar2 + -0x10) = 0x3a;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20e8));
}

