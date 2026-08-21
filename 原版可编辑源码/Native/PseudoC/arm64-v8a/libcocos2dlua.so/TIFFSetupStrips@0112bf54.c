
undefined8 TIFFSetupStrips(long param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x38);
  if ((*(byte *)(param_1 + 0x11) >> 2 & 1) == 0) {
    if (((uVar2 >> 0x11 & 1) == 0) || (*(int *)(param_1 + 0x5c) != 0)) {
      uVar2 = TIFFNumberOfStrips(param_1);
      goto LAB_0112bfa4;
    }
  }
  else if (((uVar2 >> 2 & 1) == 0) || (*(int *)(param_1 + 0x5c) != 0)) {
    uVar2 = TIFFNumberOfTiles(param_1);
    goto LAB_0112bfa4;
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x82);
LAB_0112bfa4:
  *(uint *)(param_1 + 0xe0) = uVar2;
  *(uint *)(param_1 + 0xe4) = uVar2;
  if (*(short *)(param_1 + 0xaa) == 2) {
    uVar1 = 0;
    if (*(ushort *)(param_1 + 0x82) != 0) {
      uVar1 = uVar2 / *(ushort *)(param_1 + 0x82);
    }
    *(uint *)(param_1 + 0xe0) = uVar1;
  }
  pvVar3 = _TIFFmalloc((ulong)uVar2 << 3);
  *(void **)(param_1 + 0xe8) = pvVar3;
  pvVar3 = _TIFFmalloc((ulong)*(uint *)(param_1 + 0xe4) << 3);
  uVar4 = 0;
  *(void **)(param_1 + 0xf0) = pvVar3;
  if ((pvVar3 != (void *)0x0) && (*(void **)(param_1 + 0xe8) != (void *)0x0)) {
    _TIFFmemset(*(void **)(param_1 + 0xe8),0,(ulong)*(uint *)(param_1 + 0xe4) << 3);
    _TIFFmemset(*(void **)(param_1 + 0xf0),0,(ulong)*(uint *)(param_1 + 0xe4) << 3);
    uVar4 = 1;
    *(ulong *)(param_1 + 0x38) = *(ulong *)(param_1 + 0x38) | 0x3000000;
  }
  return uVar4;
}

