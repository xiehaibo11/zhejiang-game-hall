
void FUN_01344f64(undefined8 param_1,ulong param_2,uint param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x26;
  undefined8 unaff_x27;
  
  if ((param_3 >> 4 & 1) != 0) {
    if (0x3fffffff < param_2) {
      uVar3 = **(ulong **)(unaff_x26 + 0x1428);
      uVar1 = uVar3 + 0xc;
      if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
        lVar2 = uVar3 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar1;
      }
      else {
        lVar2 = FUN_01348560(param_1,0xc,param_2);
        unaff_x27 = 0;
      }
      *(int *)(lVar2 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
      *(double *)(lVar2 + 3) = (double)param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2580),param_1,param_4,param_2,unaff_x27);
  }
  FUN_01344d34();
  return;
}

