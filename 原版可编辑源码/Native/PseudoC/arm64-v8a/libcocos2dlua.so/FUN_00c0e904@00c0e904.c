
void FUN_00c0e904(long param_1,long param_2,undefined2 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(undefined8 *)(param_2 + 0x10);
  uVar1 = uVar2 + 0xfb3ee249;
  uVar2 = (uVar1 ^ uVar2) - (uVar1 >> 0x12 | uVar1 * 0x4000);
  param_1 = param_1 + ((ulong)((uVar2 ^ uVar1 >> 0xd) - (uVar2 >> 0x13)) & 0x7f) * 2;
  *(undefined2 *)(param_2 + 10) = *(undefined2 *)(param_1 + 0xd8);
  *(undefined2 *)(param_1 + 0xd8) = param_3;
  return;
}

