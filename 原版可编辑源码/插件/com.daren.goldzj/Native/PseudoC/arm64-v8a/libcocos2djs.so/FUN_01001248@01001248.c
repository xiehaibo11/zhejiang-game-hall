
uint FUN_01001248(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if ((*(byte *)((uVar1 & 0xfffffffffffc0000) + 8) >> 3 & 1) == 0) {
    return 0;
  }
  return *(uint *)(uVar1 - 1) & 1;
}

