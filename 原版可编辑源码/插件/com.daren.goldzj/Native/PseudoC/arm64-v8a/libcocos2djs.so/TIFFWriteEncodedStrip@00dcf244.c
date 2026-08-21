
undefined8 TIFFWriteEncodedStrip(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  if (((*(byte *)(param_1 + 0x10) >> 6 & 1) == 0) &&
     (iVar2 = TIFFWriteCheck(param_1,0,"TIFFWriteEncodedStrip"), iVar2 == 0)) {
    return 0xffffffffffffffff;
  }
  if (*(uint *)(param_1 + 0xe4) <= param_2) {
    if (*(short *)(param_1 + 0xaa) == 2) {
      TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFWriteEncodedStrip",
                   "Can not grow image by strips when using separate planes");
      return 0xffffffffffffffff;
    }
    iVar2 = FUN_00dcf160(param_1,"TIFFWriteEncodedStrip");
    if (iVar2 == 0) {
      return 0xffffffffffffffff;
    }
    uVar4 = *(uint *)(param_1 + 0x84);
    uVar6 = 0;
    if (*(uint *)(param_1 + 0x5c) < -uVar4) {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = ((*(uint *)(param_1 + 0x5c) + uVar4) - 1) / uVar4;
      }
    }
    *(uint *)(param_1 + 0xe0) = uVar6;
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  if (((uVar4 >> 4 & 1) == 0) || (*(long *)(param_1 + 0x368) == 0)) {
    iVar2 = TIFFWriteBufferSetup(param_1,0,0xffffffffffffffff);
    if (iVar2 == 0) {
      return 0xffffffffffffffff;
    }
    uVar4 = *(uint *)(param_1 + 0x10);
  }
  uVar6 = *(uint *)(param_1 + 0xe0);
  uVar3 = uVar4 | 0x100000;
  *(uint *)(param_1 + 0x10) = uVar3;
  uVar1 = 0;
  if (uVar6 != 0) {
    uVar1 = param_2 / uVar6;
  }
  *(uint *)(param_1 + 0x284) = param_2;
  *(uint *)(param_1 + 0x27c) = *(int *)(param_1 + 0x84) * (param_2 - uVar1 * uVar6);
  if ((uVar4 >> 5 & 1) == 0) {
    iVar2 = (**(code **)(param_1 + 0x2d8))(param_1);
    if (iVar2 == 0) {
      return 0xffffffffffffffff;
    }
    uVar3 = *(uint *)(param_1 + 0x10) | 0x20;
    *(uint *)(param_1 + 0x10) = uVar3;
  }
  uVar5 = *(ulong *)(*(long *)(param_1 + 0xf0) + (ulong)param_2 * 8);
  if (uVar5 != 0) {
    if (*(ulong *)(param_1 + 0x370) <= uVar5) {
      iVar2 = TIFFWriteBufferSetup(param_1,0,uVar5 + 0x400 & 0xfffffffffffffc00);
      if (iVar2 == 0) {
        return 0xffffffffffffffff;
      }
      uVar3 = *(uint *)(param_1 + 0x10);
    }
    *(undefined8 *)(param_1 + 0x288) = 0;
  }
  uVar4 = 0;
  if (*(uint *)(param_1 + 0xe0) != 0) {
    uVar4 = param_2 / *(uint *)(param_1 + 0xe0);
  }
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(uint *)(param_1 + 0x10) = uVar3 & 0xffffefff;
  *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_1 + 0x368);
  iVar2 = (**(code **)(param_1 + 0x2e8))(param_1,uVar4);
  if (iVar2 != 0) {
    (**(code **)(param_1 + 1000))(param_1,param_3,param_4);
    iVar2 = (**(code **)(param_1 + 0x310))(param_1,param_3,param_4,uVar4);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = (**(code **)(param_1 + 0x2f0))(param_1);
    if (iVar2 != 0) {
      if ((*(uint *)(param_1 + 0x10) & (*(ushort *)(param_1 + 0x7e) | 0x100)) == 0) {
        TIFFReverseBits(*(undefined8 *)(param_1 + 0x368),*(undefined8 *)(param_1 + 0x390));
      }
      if ((*(long *)(param_1 + 0x390) < 1) ||
         (iVar2 = FUN_00dcf480(param_1,param_2,*(undefined8 *)(param_1 + 0x368)), iVar2 != 0)) {
        *(undefined8 *)(param_1 + 0x390) = 0;
        *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_1 + 0x368);
        return param_4;
      }
    }
  }
  return 0xffffffffffffffff;
}

