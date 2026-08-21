
void FUN_0143d944(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  
  uVar3 = **(ulong **)(unaff_x26 + 0x1428);
  uVar1 = uVar3 + 0x10;
  uVar4 = *(undefined4 *)
           (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_4 + -1) + 0x13) + 0x15f)
  ;
  if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
    lVar2 = uVar3 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar1;
  }
  else {
    lVar2 = FUN_01348560(param_1,0x10);
  }
  *(undefined4 *)(lVar2 + -1) = uVar4;
  *(undefined4 *)(lVar2 + 0xb) = 0;
  uVar4 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
  *(undefined4 *)(lVar2 + 3) = uVar4;
  *(undefined4 *)(lVar2 + 7) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0143d814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 2) * 8))(lVar2);
  return;
}

