
void uv_unref(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (((uVar1 >> 0xd & 1) != 0) &&
     (*(uint *)(param_1 + 0x58) = uVar1 & 0xffffdfff, (uVar1 >> 0xe & 1) != 0)) {
    *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
  }
  return;
}

