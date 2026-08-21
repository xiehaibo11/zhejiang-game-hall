
undefined8 TIFFWriteRawStrip(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (((*(byte *)(param_1 + 0x10) >> 6 & 1) != 0) ||
     (iVar2 = TIFFWriteCheck(param_1,0,"TIFFWriteRawStrip"), iVar2 != 0)) {
    if (param_2 < *(uint *)(param_1 + 0xe4)) {
LAB_00dcf6d0:
      uVar1 = *(uint *)(param_1 + 0xe0);
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = param_2 / uVar1;
      }
      *(uint *)(param_1 + 0x284) = param_2;
      *(uint *)(param_1 + 0x27c) = *(int *)(param_1 + 0x84) * (param_2 - uVar3 * uVar1);
      iVar2 = FUN_00dcf480(param_1,param_2,param_3,param_4);
      if (iVar2 != 0) {
        return param_4;
      }
      return 0xffffffffffffffff;
    }
    if (*(short *)(param_1 + 0xaa) == 2) {
      TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFWriteRawStrip",
                   "Can not grow image by strips when using separate planes");
    }
    else {
      if (*(uint *)(param_1 + 0xe0) <= param_2) {
        uVar1 = *(uint *)(param_1 + 0x84);
        uVar3 = 0;
        if (*(uint *)(param_1 + 0x5c) < -uVar1) {
          uVar3 = 0;
          if (uVar1 != 0) {
            uVar3 = ((*(uint *)(param_1 + 0x5c) + uVar1) - 1) / uVar1;
          }
        }
        *(uint *)(param_1 + 0xe0) = uVar3;
      }
      iVar2 = FUN_00dcf160(param_1,"TIFFWriteRawStrip");
      if (iVar2 != 0) goto LAB_00dcf6d0;
    }
  }
  return 0xffffffffffffffff;
}

