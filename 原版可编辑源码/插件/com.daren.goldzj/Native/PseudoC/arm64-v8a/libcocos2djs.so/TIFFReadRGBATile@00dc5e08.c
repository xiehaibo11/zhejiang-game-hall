
undefined4 TIFFReadRGBATile(long param_1,uint param_2,uint param_3,long param_4)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 uVar11;
  uint uVar12;
  size_t __n;
  ulong uVar13;
  uint uVar14;
  uint local_500;
  uint local_4fc;
  long local_4f8 [2];
  uint local_4e4;
  uint uStack_4e0;
  code *local_4b8;
  long local_4b0;
  uint local_470;
  uint uStack_46c;
  undefined1 auStack_468 [1024];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  memset(auStack_468,0,0x400);
  iVar7 = TIFFIsTiled(param_1);
  if (iVar7 == 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x3b8);
    uVar9 = TIFFFileName(param_1);
    pcVar10 = "Can\'t use TIFFReadRGBATile() with stripped file.";
LAB_00dc5ed4:
    TIFFErrorExt(uVar11,uVar9,pcVar10);
  }
  else {
    TIFFGetFieldDefaulted(param_1,0x142,&local_4fc);
    TIFFGetFieldDefaulted(param_1,0x143,&local_500);
    uVar12 = 0;
    if (local_4fc != 0) {
      uVar12 = param_2 / local_4fc;
    }
    if (param_2 != uVar12 * local_4fc) {
LAB_00dc5ea0:
      uVar11 = *(undefined8 *)(param_1 + 0x3b8);
      uVar9 = TIFFFileName(param_1);
      pcVar10 = "Row/col passed to TIFFReadRGBATile() must be topleft corner of a tile.";
      goto LAB_00dc5ed4;
    }
    uVar12 = 0;
    if (local_500 != 0) {
      uVar12 = param_3 / local_500;
    }
    if (param_3 != uVar12 * local_500) goto LAB_00dc5ea0;
    iVar7 = TIFFRGBAImageOK(param_1,auStack_468);
    if ((iVar7 != 0) && (iVar7 = TIFFRGBAImageBegin(local_4f8,param_1,0,auStack_468), iVar7 != 0)) {
      uVar2 = local_500 + param_3;
      uVar3 = local_4fc + param_2;
      uVar12 = uStack_4e0 - param_3;
      if (uVar2 <= uStack_4e0) {
        uVar12 = local_500;
      }
      uVar4 = local_4e4 - param_2;
      if (uVar3 <= local_4e4) {
        uVar4 = local_4fc;
      }
      local_470 = param_3;
      uStack_46c = param_2;
      if (local_4b8 == (code *)0x0) {
        uVar11 = *(undefined8 *)(local_4f8[0] + 0x3b8);
        uVar9 = TIFFFileName();
        pcVar10 = "No \"get\" routine setup";
LAB_00dc5ff4:
        TIFFErrorExt(uVar11,uVar9,pcVar10);
        uVar8 = 0;
      }
      else {
        if (local_4b0 == 0) {
          uVar11 = *(undefined8 *)(local_4f8[0] + 0x3b8);
          uVar9 = TIFFFileName();
          pcVar10 = "No \"put\" routine setupl; probably can not handle image format";
          goto LAB_00dc5ff4;
        }
        uVar8 = (*local_4b8)(local_4f8,param_4,uVar4,uVar12);
      }
      TIFFRGBAImageEnd(local_4f8);
      uVar14 = local_4fc - uVar4;
      if ((uVar14 != 0) || (uVar12 != local_500)) {
        if (uVar12 != 0) {
          __n = (ulong)uVar4 * 4;
          pvVar1 = (void *)(param_4 + (ulong)((local_500 - 1) * local_4fc) * 4);
          memmove(pvVar1,(void *)(param_4 + (ulong)((uVar12 - 1) * uVar4) * 4),__n);
          _TIFFmemset((void *)((long)pvVar1 + __n),0,(ulong)uVar14 << 2);
          if (uVar12 != 1) {
            uVar14 = ~uVar2;
            if (uVar14 < ~uStack_4e0) {
              uVar14 = ~uStack_4e0;
            }
            uVar3 = ~uVar3;
            if (uVar3 < ~local_4e4) {
              uVar3 = ~local_4e4;
            }
            uVar14 = uVar4 * ((-3 - param_3) - uVar14);
            iVar7 = -2;
            uVar13 = 1;
            do {
              uVar6 = local_4fc;
              pvVar1 = (void *)(param_4 + (ulong)((iVar7 + local_500) * local_4fc) * 4);
              memmove(pvVar1,(void *)(param_4 + (ulong)uVar14 * 4),__n);
              _TIFFmemset((void *)((long)pvVar1 + (ulong)uVar4 * 4),0,(ulong)(uVar6 - uVar4) << 2);
              uVar13 = uVar13 + 1;
              iVar7 = iVar7 + -1;
              uVar14 = uVar14 + param_2 + uVar3 + 1;
            } while (uVar13 < uVar12);
          }
        }
        if (uVar12 < local_500) {
          uVar2 = ~uVar2;
          if (uVar2 < ~uStack_4e0) {
            uVar2 = ~uStack_4e0;
          }
          iVar7 = param_3 + uVar2;
          do {
            _TIFFmemset((void *)(param_4 + (ulong)(local_4fc * (local_500 + iVar7)) * 4),0,
                        (ulong)local_4fc << 2);
            uVar12 = uVar12 + 1;
            iVar7 = iVar7 + -1;
          } while (uVar12 < local_500);
        }
      }
      goto LAB_00dc5ee0;
    }
    uVar11 = *(undefined8 *)(param_1 + 0x3b8);
    uVar9 = TIFFFileName(param_1);
    TIFFErrorExt(uVar11,uVar9,"%s",auStack_468);
  }
  uVar8 = 0;
LAB_00dc5ee0:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

