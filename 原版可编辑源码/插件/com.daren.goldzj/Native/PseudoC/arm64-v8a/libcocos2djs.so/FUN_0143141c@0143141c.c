
void FUN_0143141c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int in_w8;
  long in_x9;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  
  iVar2 = (int)unaff_x19 * 2;
  if (*(short *)(in_x9 + 7) == 0x41) {
    if (((param_1 & 1) != 0) && (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) == 0x41))
    {
      *(int *)(param_4 + -0x20) = iVar2;
      uVar3 = FUN_013ea5e0(param_5,param_1);
      if ((uVar3 & 1) == 0) {
        if (in_w8 == 0) {
          lVar4 = param_8 * 4 + 0x1f;
          uVar6 = (int)unaff_x26 + *(int *)(param_6 + lVar4);
          uVar5 = uVar6 | 0xfe;
          if (uVar6 != uVar5) {
            *(uint *)(param_6 + lVar4) = uVar5;
            *(undefined4 *)(param_6 + 0x17) = 0;
          }
        }
        *(int *)(param_4 + -0x20) = iVar2;
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20b0));
      }
      uVar5 = 0x40;
      goto LAB_01431314;
    }
LAB_01431594:
    uVar5 = 0xfe;
  }
  else {
    if (*(short *)(in_x9 + 7) != 0x43) goto LAB_01431594;
    if ((param_1 & 1) == 0) {
      uVar5 = 0x1e;
    }
    else if (*(int *)(param_1 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
      uVar5 = 0x1e;
    }
    else {
      if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) != 0x43) goto LAB_01431594;
      uVar5 = 0x1e;
    }
  }
  *(int *)(param_4 + -0x20) = (int)unaff_x19 * 2;
  uVar3 = FUN_01392040(param_1,param_5);
LAB_01431314:
  if (in_w8 == 0) {
    lVar4 = param_8 * 4 + 0x1f;
    uVar6 = (int)unaff_x26 + *(int *)(param_6 + lVar4);
    uVar5 = uVar6 | uVar5;
    if (uVar6 != uVar5) {
      *(uint *)(param_6 + lVar4) = uVar5;
      *(undefined4 *)(param_6 + 0x17) = 0;
    }
  }
  lVar4 = *(long *)(param_4 + -0x18);
  bVar1 = *(byte *)(lVar4 + unaff_x19 + 3);
  if (bVar1 == 0x26) {
    *(ulong *)(param_4 + (long)*(char *)(lVar4 + unaff_x19 + 4) * 8) = uVar3;
    bVar1 = *(byte *)(lVar4 + unaff_x19 + 5);
  }
                    /* WARNING: Could not recover jumptable at 0x0143137c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)bVar1 * 8))(uVar3);
  return;
}

