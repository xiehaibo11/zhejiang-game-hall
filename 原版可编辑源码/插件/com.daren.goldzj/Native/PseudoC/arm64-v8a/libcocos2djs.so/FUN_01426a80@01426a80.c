
void FUN_01426a80(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x26;
  
  if (param_2 < 0x40000000) {
    uVar2 = (ulong)(uint)((int)param_2 * 2);
  }
  else {
    uVar2 = **(ulong **)(unaff_x26 + 0x1428);
    uVar1 = uVar2 + 0xc;
    if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
      uVar2 = uVar2 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar1;
    }
    else {
      uVar2 = FUN_01348560(param_1,0xc,param_2);
    }
    *(int *)(uVar2 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(double *)(uVar2 + 3) = (double)param_2;
  }
  FUN_013c0ba0(param_1,uVar2);
  return;
}

