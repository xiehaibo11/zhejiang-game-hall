
void XXH32_init(int param_1)

{
  undefined8 *puVar1;
  
  puVar1 = malloc(0x30);
  *(int *)(puVar1 + 1) = param_1;
  *puVar1 = 0;
  *(int *)((long)puVar1 + 0x14) = param_1;
  *(int *)(puVar1 + 3) = param_1 + 0x61c8864f;
  *(ulong *)((long)puVar1 + 0xc) = CONCAT44(param_1 + -0x7a143589,param_1 + 0x24234428);
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  return;
}

