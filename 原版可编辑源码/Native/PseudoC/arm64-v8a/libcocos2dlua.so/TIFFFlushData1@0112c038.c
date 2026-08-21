
undefined8 TIFFFlushData1(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x390);
  if ((0 < lVar4) && (uVar2 = *(uint *)(param_1 + 0x10), (uVar2 >> 0x14 & 1) != 0)) {
    if ((uVar2 & (*(ushort *)(param_1 + 0x7e) | 0x100)) == 0) {
      TIFFReverseBits(*(undefined8 *)(param_1 + 0x368),lVar4);
      uVar2 = *(uint *)(param_1 + 0x10);
      lVar4 = *(long *)(param_1 + 0x390);
    }
    puVar1 = (undefined4 *)(param_1 + 0x2ac);
    if ((uVar2 & 0x400) == 0) {
      puVar1 = (undefined4 *)(param_1 + 0x284);
    }
    uVar3 = FUN_0112b928(param_1,*puVar1,*(undefined8 *)(param_1 + 0x368),lVar4);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    *(undefined8 *)(param_1 + 0x390) = 0;
    *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_1 + 0x368);
  }
  return 1;
}

