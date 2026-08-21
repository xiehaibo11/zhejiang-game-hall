
void FUN_00a30eac(long param_1,long param_2)

{
  if (-1 < param_2) {
    *(long *)(param_1 + 0x948) = param_2;
    *(uint *)(param_1 + 0x978) = *(uint *)(param_1 + 0x978) | 0x40;
    return;
  }
  *(undefined8 *)(param_1 + 0x948) = 0;
  *(uint *)(param_1 + 0x978) = *(uint *)(param_1 + 0x978) & 0xffffffbf;
  return;
}

