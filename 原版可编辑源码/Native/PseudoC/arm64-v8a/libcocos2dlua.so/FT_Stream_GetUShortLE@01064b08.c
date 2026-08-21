
undefined2 FT_Stream_GetUShortLE(long param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  puVar2 = *(undefined2 **)(param_1 + 0x40);
  if ((long)puVar2 + 1U < *(ulong *)(param_1 + 0x48)) {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined2 **)(param_1 + 0x40) = puVar2;
  return uVar1;
}

