
void FUN_011ae9ac(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if ((uVar1 >> 2 & 1) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x60);
    *puVar2 = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    if ((*(byte *)(puVar2 + 0x10) >> 2 & 1) != 0) {
      uv_close(puVar2 + 5,FUN_011ae904);
      uVar1 = *(uint *)(param_1 + 0x58);
      if ((uVar1 >> 2 & 1) == 0) {
        return;
      }
    }
    *(uint *)(param_1 + 0x58) = uVar1 & 0xfffffffb;
    if ((uVar1 >> 3 & 1) != 0) {
      *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
    }
  }
  return;
}

