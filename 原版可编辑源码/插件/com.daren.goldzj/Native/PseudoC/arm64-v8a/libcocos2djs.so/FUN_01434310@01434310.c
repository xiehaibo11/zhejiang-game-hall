
void FUN_01434310(undefined8 param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x26;
  
  uVar3 = **(ulong **)(unaff_x26 + 0x1428);
  uVar1 = uVar3 + 0xc;
  if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
    lVar2 = uVar3 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar1;
  }
  else {
    lVar2 = FUN_01348560(param_1,0xc);
  }
  *(int *)(lVar2 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
  *(double *)(lVar2 + 3) = (double)((int)param_1 >> 1) + (double)(param_2 >> 1);
  FUN_014342a4(0xe);
  return;
}

