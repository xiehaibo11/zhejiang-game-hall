
long cpContactBufferGetArray(long param_1)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(param_1 + 0x80);
  uVar2 = *(uint *)(lVar1 + 0x10);
  if (0x248 < uVar2 + 2) {
    cpSpacePushFreshContactBuffer(param_1);
    lVar1 = *(long *)(param_1 + 0x80);
    uVar2 = *(uint *)(lVar1 + 0x10);
  }
  return lVar1 + (ulong)uVar2 * 0x38 + 0x18;
}

