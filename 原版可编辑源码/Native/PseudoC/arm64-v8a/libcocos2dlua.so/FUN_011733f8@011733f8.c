
void FUN_011733f8(long param_1)

{
  *(float *)(param_1 + 0x5c) =
       1.0 / (*(float *)(*(long *)(param_1 + 0x18) + 0x1c) +
             *(float *)(*(long *)(param_1 + 0x10) + 0x1c));
  return;
}

