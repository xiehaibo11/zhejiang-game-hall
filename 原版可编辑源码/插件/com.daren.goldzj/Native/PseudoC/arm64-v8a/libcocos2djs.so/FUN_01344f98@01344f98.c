
void FUN_01344f98(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 in_stack_00000008;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  
  if (0x3fffffff < param_2) {
    uVar3 = **(ulong **)(unaff_x26 + 0x1428);
    uVar1 = uVar3 + 0xc;
    if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
      lVar2 = uVar3 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar1;
      in_stack_00000020 = param_1;
      in_stack_00000018 = param_2;
      in_stack_00000008 = param_4;
    }
    else {
      lVar2 = FUN_01348560(param_1,0xc,param_2);
      unaff_x27 = 0;
    }
    *(int *)(lVar2 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(double *)(lVar2 + 3) = (double)in_stack_00000018;
    param_1 = in_stack_00000020;
    param_4 = in_stack_00000008;
    param_2 = in_stack_00000018;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2580),param_1,param_4,param_2,unaff_x27);
}

