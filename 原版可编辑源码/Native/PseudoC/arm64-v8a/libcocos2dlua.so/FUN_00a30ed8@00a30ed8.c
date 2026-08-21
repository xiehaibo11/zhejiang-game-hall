
void FUN_00a30ed8(long param_1,long param_2)

{
  if (-1 < param_2) {
    *(long *)(param_1 + 0x950) = param_2;
    *(uint *)(param_1 + 0x978) = *(uint *)(param_1 + 0x978) | 0x20;
    return;
  }
  *(undefined8 *)(param_1 + 0x950) = 0;
  *(uint *)(param_1 + 0x978) = *(uint *)(param_1 + 0x978) & 0xffffffdf;
  return;
}

