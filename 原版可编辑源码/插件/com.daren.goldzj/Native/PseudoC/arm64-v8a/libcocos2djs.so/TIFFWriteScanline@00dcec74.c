
undefined8 TIFFWriteScanline(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(param_1 + 0x10);
  if ((uVar7 >> 6 & 1) == 0) {
    iVar3 = TIFFWriteCheck(param_1,0,"TIFFWriteScanline");
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    uVar7 = *(uint *)(param_1 + 0x10);
  }
  if (((uVar7 >> 4 & 1) == 0) || (*(long *)(param_1 + 0x368) == 0)) {
    iVar3 = TIFFWriteBufferSetup(param_1,0,0xffffffffffffffff);
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    uVar7 = *(uint *)(param_1 + 0x10);
  }
  *(uint *)(param_1 + 0x10) = uVar7 | 0x100000;
  if (param_3 < *(uint *)(param_1 + 0x5c)) {
    if (*(short *)(param_1 + 0xaa) == 2) {
      if ((uint)*(ushort *)(param_1 + 0x82) <= (param_4 & 0xffff)) {
        TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFWriteScanline",
                     "%lu: Sample out of range, max %lu",param_4 & 0xffff);
        return 0xffffffff;
      }
      bVar2 = false;
      uVar7 = 0;
      if (*(uint *)(param_1 + 0x84) != 0) {
        uVar7 = param_3 / *(uint *)(param_1 + 0x84);
      }
      uVar7 = uVar7 + *(int *)(param_1 + 0xe0) * (param_4 & 0xffff);
      goto LAB_00dced68;
    }
    bVar2 = false;
  }
  else {
    if (*(short *)(param_1 + 0xaa) == 2) {
      TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFWriteScanline",
                   "Can not change \"ImageLength\" when using separate planes");
      return 0xffffffff;
    }
    bVar2 = true;
    *(uint *)(param_1 + 0x5c) = param_3 + 1;
  }
  uVar7 = 0;
  if (*(uint *)(param_1 + 0x84) != 0) {
    uVar7 = param_3 / *(uint *)(param_1 + 0x84);
  }
LAB_00dced68:
  if ((*(uint *)(param_1 + 0xe4) <= uVar7) &&
     (iVar3 = FUN_00dcf160(param_1,"TIFFWriteScanline"), iVar3 == 0)) {
    return 0xffffffff;
  }
  if (uVar7 != *(uint *)(param_1 + 0x284)) {
    iVar3 = TIFFFlushData(param_1);
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    uVar5 = *(uint *)(param_1 + 0xe0);
    *(uint *)(param_1 + 0x284) = uVar7;
    if ((bVar2) && (uVar5 <= uVar7)) {
      uVar6 = *(uint *)(param_1 + 0x84);
      uVar5 = 0;
      if (*(uint *)(param_1 + 0x5c) < -uVar6) {
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = ((*(uint *)(param_1 + 0x5c) + uVar6) - 1) / uVar6;
        }
      }
      *(uint *)(param_1 + 0xe0) = uVar5;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x84);
    }
    uVar1 = 0;
    if (uVar5 != 0) {
      uVar1 = uVar7 / uVar5;
    }
    *(uint *)(param_1 + 0x27c) = uVar6 * (uVar7 - uVar1 * uVar5);
    if ((*(byte *)(param_1 + 0x10) >> 5 & 1) == 0) {
      iVar3 = (**(code **)(param_1 + 0x2d8))(param_1);
      if (iVar3 == 0) {
        return 0xffffffff;
      }
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
    }
    *(undefined8 *)(param_1 + 0x390) = 0;
    *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_1 + 0x368);
    if (*(long *)(*(long *)(param_1 + 0xf0) + (ulong)uVar7 * 8) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0xf0) + (ulong)uVar7 * 8) = 0;
      *(undefined8 *)(param_1 + 0x288) = 0;
    }
    iVar3 = (**(code **)(param_1 + 0x2e8))(param_1,param_4);
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x1000;
  }
  uVar5 = *(uint *)(param_1 + 0x27c);
  if (uVar5 != param_3) {
    if (param_3 < uVar5) {
      uVar5 = *(uint *)(param_1 + 0xe0);
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar7 / uVar5;
      }
      uVar5 = *(int *)(param_1 + 0x84) * (uVar7 - uVar6 * uVar5);
      *(uint *)(param_1 + 0x27c) = uVar5;
      *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_1 + 0x368);
    }
    iVar3 = (**(code **)(param_1 + 0x330))(param_1,param_3 - uVar5);
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    *(uint *)(param_1 + 0x27c) = param_3;
  }
  (**(code **)(param_1 + 1000))(param_1,param_2,*(undefined8 *)(param_1 + 0x358));
  uVar4 = (**(code **)(param_1 + 0x300))(param_1,param_2,*(undefined8 *)(param_1 + 0x358),param_4);
  *(uint *)(param_1 + 0x27c) = param_3 + 1;
  return uVar4;
}

