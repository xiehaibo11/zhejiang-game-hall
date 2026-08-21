
undefined8 inflateResetKeep(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[4] = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (*(uint *)(puVar2 + 1) != 0) {
      *(ulong *)(param_1 + 0x60) = (ulong)(*(uint *)(puVar2 + 1) & 1);
    }
    *(undefined4 *)((long)puVar2 + 0x14) = 0x8000;
    puVar1 = puVar2 + 0xaa;
    puVar2[0x11] = puVar1;
    puVar2[0xc] = puVar1;
    puVar2[0xd] = puVar1;
    *(undefined4 *)(puVar2 + 0x37c) = 1;
    *(undefined4 *)((long)puVar2 + 0x1be4) = 0xffffffff;
    *puVar2 = 0;
    *(undefined4 *)((long)puVar2 + 0xc) = 0;
    puVar2[5] = 0;
    puVar2[9] = 0;
    *(undefined4 *)(puVar2 + 10) = 0;
    return 0;
  }
  return 0xfffffffe;
}

