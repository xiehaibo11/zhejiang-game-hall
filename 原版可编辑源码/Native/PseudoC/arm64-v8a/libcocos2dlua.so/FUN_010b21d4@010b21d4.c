
void FUN_010b21d4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    inflateEnd(puVar1 + 3);
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xb] = 0;
    ft_mem_free(uVar2,puVar1);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

