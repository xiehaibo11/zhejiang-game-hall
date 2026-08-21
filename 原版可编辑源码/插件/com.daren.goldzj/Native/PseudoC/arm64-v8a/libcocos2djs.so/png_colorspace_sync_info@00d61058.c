
void png_colorspace_sync_info(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar3 = *(ushort *)(param_2 + 0x7e);
  if (-1 < (short)uVar3) {
    uVar2 = *(uint *)(param_2 + 8) | 0x800;
    if ((uVar3 & 0x80) == 0) {
      uVar2 = *(uint *)(param_2 + 8) & 0xfffff7ff;
    }
    uVar1 = uVar2 | 4;
    if ((uVar3 & 2) == 0) {
      uVar1 = uVar2 & 0xfffffffb;
    }
    uVar2 = uVar1 | 1;
    if ((uVar3 & 1) == 0) {
      uVar2 = uVar1 & 0xfffffffe;
    }
    *(uint *)(param_2 + 8) = uVar2;
    return;
  }
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffe7fa;
  png_free_data(param_1,param_2,0x10,0xffffffff);
  return;
}

