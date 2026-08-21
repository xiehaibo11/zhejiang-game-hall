
long TIFFWriteEncodedTile(long param_1,uint param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  if (((*(byte *)(param_1 + 0x10) >> 6 & 1) != 0) ||
     (iVar4 = TIFFWriteCheck(param_1,1,"TIFFWriteEncodedTile"), iVar4 != 0)) {
    if (param_2 < *(uint *)(param_1 + 0xe4)) {
      uVar5 = *(uint *)(param_1 + 0x10);
      if (((uVar5 >> 4 & 1) == 0) || (*(long *)(param_1 + 0x368) == 0)) {
        iVar4 = TIFFWriteBufferSetup(param_1,0,0xffffffffffffffff);
        if (iVar4 == 0) {
          return -1;
        }
        uVar5 = *(uint *)(param_1 + 0x10);
      }
      *(uint *)(param_1 + 0x10) = uVar5 | 0x100000;
      *(uint *)(param_1 + 0x2ac) = param_2;
      uVar7 = *(ulong *)(*(long *)(param_1 + 0xf0) + (ulong)param_2 * 8);
      if (uVar7 != 0) {
        if ((*(ulong *)(param_1 + 0x370) <= uVar7) &&
           (iVar4 = TIFFWriteBufferSetup(param_1,0,uVar7 + 0x400 & 0xfffffffffffffc00), iVar4 == 0))
        {
          return -1;
        }
        *(undefined8 *)(param_1 + 0x288) = 0;
      }
      uVar5 = *(uint *)(param_1 + 0x68);
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x390) = 0;
      *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_1 + 0x368);
      if (*(uint *)(param_1 + 0x5c) < -uVar5) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = ((*(uint *)(param_1 + 0x5c) + uVar5) - 1) / uVar5;
        }
      }
      uVar2 = *(uint *)(param_1 + 100);
      uVar3 = 0;
      if (uVar6 != 0) {
        uVar3 = param_2 / uVar6;
      }
      uVar8 = 0;
      *(uint *)(param_1 + 0x27c) = uVar5 * (param_2 - uVar3 * uVar6);
      if (*(uint *)(param_1 + 0x58) < -uVar2) {
        uVar8 = 0;
        if (uVar2 != 0) {
          uVar8 = ((*(uint *)(param_1 + 0x58) + uVar2) - 1) / uVar2;
        }
      }
      uVar5 = *(uint *)(param_1 + 0x10);
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = param_2 / uVar8;
      }
      *(uint *)(param_1 + 0x2a8) = uVar2 * (param_2 - uVar6 * uVar8);
      if ((uVar5 >> 5 & 1) == 0) {
        iVar4 = (**(code **)(param_1 + 0x2d8))(param_1);
        if (iVar4 == 0) {
          return -1;
        }
        uVar5 = *(uint *)(param_1 + 0x10) | 0x20;
        *(uint *)(param_1 + 0x10) = uVar5;
      }
      uVar6 = 0;
      if (*(uint *)(param_1 + 0xe0) != 0) {
        uVar6 = param_2 / *(uint *)(param_1 + 0xe0);
      }
      *(uint *)(param_1 + 0x10) = uVar5 & 0xffffefff;
      iVar4 = (**(code **)(param_1 + 0x2e8))(param_1,uVar6);
      if (iVar4 != 0) {
        lVar1 = *(long *)(param_1 + 0x2b0);
        if (param_4 <= *(long *)(param_1 + 0x2b0) && 0 < param_4) {
          lVar1 = param_4;
        }
        (**(code **)(param_1 + 1000))(param_1,param_3,lVar1);
        iVar4 = (**(code **)(param_1 + 800))(param_1,param_3,lVar1,uVar6);
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = (**(code **)(param_1 + 0x2f0))(param_1);
        if (iVar4 != 0) {
          if ((*(uint *)(param_1 + 0x10) & (*(ushort *)(param_1 + 0x7e) | 0x100)) == 0) {
            TIFFReverseBits(*(undefined8 *)(param_1 + 0x368),*(undefined8 *)(param_1 + 0x390));
          }
          if ((*(long *)(param_1 + 0x390) < 1) ||
             (iVar4 = FUN_00dcf480(param_1,param_2,*(undefined8 *)(param_1 + 0x368)), iVar4 != 0)) {
            *(undefined8 *)(param_1 + 0x390) = 0;
            *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_1 + 0x368);
            return lVar1;
          }
        }
      }
    }
    else {
      TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFWriteEncodedTile",
                   "Tile %lu out of range, max %lu",param_2);
    }
  }
  return -1;
}

