
void FUN_0146aa2c(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  
  lVar2 = *(long *)(param_2 + -0x18);
  lVar3 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(param_2 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar3 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar3 = *(long *)(unaff_x26 + 0xa0);
  }
  if ((int)lVar3 != (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
    lVar1 = (ulong)*(uint *)(lVar2 + unaff_x19 + 1) * 4 + 0x1f;
    uVar4 = (int)unaff_x26 + *(int *)(lVar3 + lVar1);
    param_4 = uVar4 | param_4;
    if (uVar4 != param_4) {
      *(uint *)(lVar3 + lVar1) = param_4;
      *(undefined4 *)(lVar3 + 0x17) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0146aaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(lVar2 + unaff_x19 + 5) * 8))();
  return;
}

