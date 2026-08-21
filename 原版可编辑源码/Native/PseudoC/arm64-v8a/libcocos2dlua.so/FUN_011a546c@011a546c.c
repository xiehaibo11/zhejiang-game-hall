
int FUN_011a546c(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0xb8) == -1) {
    return -0x16;
  }
  iVar1 = listen(*(int *)(param_1 + 0xb8),param_2);
  if (iVar1 != 0) {
    piVar2 = (int *)__errno();
    return -*piVar2;
  }
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  *(code **)(param_1 + 0x88) = FUN_011a89e8;
  FUN_011a3688(*(undefined8 *)(param_1 + 8),param_1 + 0x88,1);
  return 0;
}

