
void FUN_010abd1c(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = FT_RoundFix(*param_3);
  uVar3 = FT_RoundFix(param_3[1]);
  if (((*(int *)(param_1 + 1) == 0) && (*(int *)(param_1 + 2) - 1U < 2)) &&
     (iVar1 = FUN_010ac668(param_1 + (ulong)(param_2 != 0) * 6 + 3,uVar2 >> 0x10,uVar3 >> 0x10,
                           *param_1,0), iVar1 != 0)) {
    *(int *)(param_1 + 1) = iVar1;
  }
  return;
}

