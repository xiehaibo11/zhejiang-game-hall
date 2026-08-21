
void FUN_01431060(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,long param_6,undefined8 param_7,long param_8)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  int in_w8;
  uint uVar5;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  
  if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 + -1) + 7) == 0x43) {
    uVar5 = 0x1e;
  }
  else {
    uVar5 = 0xfe;
  }
  *(int *)(param_4 + -0x20) = (int)unaff_x19 * 2;
  uVar2 = thunk_FUN_01391c34(param_1,param_5);
  if (in_w8 == 0) {
    lVar3 = param_8 * 4 + 0x1f;
    uVar4 = (int)unaff_x26 + *(int *)(param_6 + lVar3);
    uVar5 = uVar4 | uVar5;
    if (uVar4 != uVar5) {
      *(uint *)(param_6 + lVar3) = uVar5;
      *(undefined4 *)(param_6 + 0x17) = 0;
    }
  }
  lVar3 = *(long *)(param_4 + -0x18);
  bVar1 = *(byte *)(lVar3 + unaff_x19 + 3);
  if (bVar1 == 0x26) {
    *(undefined8 *)(param_4 + (long)*(char *)(lVar3 + unaff_x19 + 4) * 8) = uVar2;
    bVar1 = *(byte *)(lVar3 + unaff_x19 + 5);
  }
                    /* WARNING: Could not recover jumptable at 0x01430ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)bVar1 * 8))(uVar2);
  return;
}

