
/* cocos2d::Image::initWithPVRv2Data(unsigned char const*, long) */

undefined8 __thiscall cocos2d::Image::initWithPVRv2Data(Image *this,uchar *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  Image IVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  size_t sVar9;
  Configuration *pCVar10;
  ulong uVar11;
  long lVar12;
  void *pvVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  
  sVar9 = __strlen_chk(&DAT_01447dd3,5);
  iVar7 = memcmp(param_1 + 0x2c,&DAT_01447dd3,sVar9);
  if (iVar7 != 0) {
    return 0;
  }
  pCVar10 = (Configuration *)Configuration::getInstance();
  this[0x154] = DAT_0178fb28;
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar11 = Configuration::supportsNPOT(pCVar10);
  if ((uVar11 & 1) == 0) {
    iVar7 = *(int *)(param_1 + 8);
    iVar8 = ccNextPOT(iVar7);
    if (iVar7 != iVar8) {
      return 0;
    }
    iVar7 = *(int *)(param_1 + 4);
    iVar8 = ccNextPOT(iVar7);
    if (iVar7 != iVar8) {
      return 0;
    }
  }
  if (DAT_0178fa20 == (undefined8 *)0x0) {
    return 0;
  }
  puVar16 = &DAT_0178fa20;
  puVar15 = DAT_0178fa20;
  do {
    bVar6 = (uint)*(byte *)((long)puVar15 + 0x1c) < (uVar3 & 0xff);
    if (!bVar6) {
      puVar16 = puVar15;
    }
    puVar15 = (undefined8 *)puVar15[bVar6];
  } while (puVar15 != (undefined8 *)0x0);
  if ((undefined8 **)puVar16 == &DAT_0178fa20) {
    return 0;
  }
  if ((uVar3 & 0xff) < (uint)*(byte *)((long)puVar16 + 0x1c)) {
    return 0;
  }
  lVar12 = Texture2D::getPixelFormatInfoMap();
  puVar16 = DAT_0178fa20;
  if (DAT_0178fa20 != (undefined8 *)0x0) {
    do {
      while ((uint)*(byte *)((long)puVar16 + 0x1c) <= (uVar3 & 0xff)) {
        if ((uVar3 & 0xff) <= (uint)*(byte *)((long)puVar16 + 0x1c)) goto LAB_00f7f4bc;
        puVar16 = (undefined8 *)puVar16[1];
        if (puVar16 == (undefined8 *)0x0) goto LAB_00f7f7a4;
      }
      puVar16 = (undefined8 *)*puVar16;
    } while (puVar16 != (undefined8 *)0x0);
LAB_00f7f7a4:
                    /* WARNING: Subroutine does not return */
    FUN_007d44e0("map::at:  key not found");
  }
LAB_00f7f4bc:
  if (puVar16 == (undefined8 *)0x0) goto LAB_00f7f7a4;
  iVar7 = *(int *)(puVar16 + 4);
  if (iVar7 - 10U < 4) {
    pCVar10 = (Configuration *)Configuration::getInstance();
    uVar11 = Configuration::supportsPVRTC(pCVar10);
    if ((uVar11 & 1) == 0) {
      iVar7 = 2;
    }
LAB_00f7f4e4:
    lVar17 = *(long *)(lVar12 + 8);
  }
  else {
    if (iVar7 != 0xe) goto LAB_00f7f4e4;
    pCVar10 = (Configuration *)Configuration::getInstance();
    uVar11 = Configuration::supportsETC(pCVar10);
    iVar7 = 0xe;
    if ((uVar11 & 1) == 0) {
      iVar7 = 3;
    }
    lVar17 = *(long *)(lVar12 + 8);
  }
  if (lVar17 != 0) {
    lVar20 = lVar12 + 8;
    do {
      if (iVar7 <= *(int *)(lVar17 + 0x1c)) {
        lVar20 = lVar17;
      }
      lVar17 = *(long *)(lVar17 + (ulong)(*(int *)(lVar17 + 0x1c) < iVar7) * 8);
    } while (lVar17 != 0);
    if ((lVar20 != lVar12 + 8) && (*(int *)(lVar20 + 0x1c) <= iVar7)) goto LAB_00f7f54c;
  }
  lVar20 = lVar12 + 8;
LAB_00f7f54c:
  lVar12 = Texture2D::getPixelFormatInfoMap();
  if (lVar20 == lVar12 + 8) {
    return 0;
  }
  sVar9 = param_2 - 0x34;
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(lVar20 + 0x1c);
  iVar22 = *(int *)(lVar20 + 0x2c);
  *(undefined4 *)(this + 0x150) = 0;
  iVar7 = *(int *)(param_1 + 8);
  *(int *)(this + 0x38) = iVar7;
  iVar8 = *(int *)(param_1 + 4);
  *(int *)(this + 0x3c) = iVar8;
  iVar4 = *(int *)(param_1 + 0x14);
  *(size_t *)(this + 0x30) = sVar9;
  pvVar13 = malloc(sVar9);
  *(void **)(this + 0x28) = pvVar13;
  memcpy(pvVar13,param_1 + 0x34,sVar9);
  if (iVar4 < 1) {
    IVar5 = this[0x40];
  }
  else {
    iVar21 = 0;
    do {
      uVar1 = uVar3 & 0xff;
      if (uVar1 == 0x1a) {
        pCVar10 = (Configuration *)Configuration::getInstance();
        uVar11 = Configuration::supportsBGRA8888(pCVar10);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
LAB_00f7f734:
        iVar14 = 1;
        iVar18 = iVar7;
        iVar19 = iVar8;
      }
      else if (uVar1 == 0x19) {
        pCVar10 = (Configuration *)Configuration::getInstance();
        uVar11 = Configuration::supportsPVRTC(pCVar10);
        if ((uVar11 & 1) == 0) {
          iVar18 = *(int *)(this + 0x150);
          iVar19 = iVar8 * iVar7 * 4;
          iVar22 = iVar19;
          if (iVar8 * iVar7 < 0) {
            iVar22 = -1;
          }
          this[0x40] = (Image)0x1;
          *(int *)(this + (long)iVar18 * 0x10 + 0x58) = iVar19;
          pvVar13 = operator_new__((long)iVar22,(nothrow_t *)&std::nothrow);
          *(void **)(this + (long)iVar18 * 0x10 + 0x50) = pvVar13;
          PVRTDecompressPVRTC((void *)(*(long *)(this + 0x28) + (long)iVar21),iVar7,iVar8,pvVar13,
                              false);
          iVar22 = 4;
        }
        iVar18 = iVar7 + 3;
        if (-1 < iVar7) {
          iVar18 = iVar7;
        }
        iVar18 = iVar18 >> 2;
        iVar19 = iVar8 + 3;
        if (-1 < iVar8) {
          iVar19 = iVar8;
        }
        iVar19 = iVar19 >> 2;
        iVar14 = 0x10;
      }
      else {
        if (uVar1 != 0x18) goto LAB_00f7f734;
        pCVar10 = (Configuration *)Configuration::getInstance();
        uVar11 = Configuration::supportsPVRTC(pCVar10);
        if ((uVar11 & 1) == 0) {
          iVar18 = *(int *)(this + 0x150);
          iVar19 = iVar8 * iVar7 * 4;
          iVar22 = iVar19;
          if (iVar8 * iVar7 < 0) {
            iVar22 = -1;
          }
          this[0x40] = (Image)0x1;
          *(int *)(this + (long)iVar18 * 0x10 + 0x58) = iVar19;
          pvVar13 = operator_new__((long)iVar22,(nothrow_t *)&std::nothrow);
          *(void **)(this + (long)iVar18 * 0x10 + 0x50) = pvVar13;
          PVRTDecompressPVRTC((void *)(*(long *)(this + 0x28) + (long)iVar21),iVar7,iVar8,pvVar13,
                              true);
          iVar22 = 2;
        }
        iVar18 = iVar7 + 7;
        if (-1 < iVar7) {
          iVar18 = iVar7;
        }
        iVar19 = iVar8 + 3;
        if (-1 < iVar8) {
          iVar19 = iVar8;
        }
        iVar14 = 0x20;
        iVar18 = iVar18 >> 3;
        iVar19 = iVar19 >> 2;
      }
      if (iVar18 < 3) {
        iVar18 = 2;
      }
      iVar14 = iVar22 * iVar14;
      if (iVar19 < 3) {
        iVar19 = 2;
      }
      iVar2 = iVar14 + 7;
      if (-1 < iVar14) {
        iVar2 = iVar14;
      }
      IVar5 = this[0x40];
      iVar18 = iVar19 * iVar18 * (iVar2 >> 3);
      if (iVar4 - iVar21 <= iVar18) {
        iVar18 = iVar4 - iVar21;
      }
      if (IVar5 == (Image)0x0) {
        iVar19 = *(int *)(this + 0x150);
        *(long *)(this + (long)iVar19 * 0x10 + 0x50) = *(long *)(this + 0x28) + (long)iVar21;
        *(int *)(this + (long)iVar19 * 0x10 + 0x58) = iVar18;
      }
      else {
        iVar19 = *(int *)(this + 0x150);
      }
      iVar21 = iVar18 + iVar21;
      iVar7 = iVar7 >> 1;
      iVar8 = iVar8 >> 1;
      if (iVar7 < 2) {
        iVar7 = 1;
      }
      if (iVar8 < 2) {
        iVar8 = 1;
      }
      *(int *)(this + 0x150) = iVar19 + 1;
    } while (iVar21 < iVar4);
  }
  if (IVar5 != (Image)0x0) {
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + 0x50);
    *(long *)(this + 0x30) = (long)*(int *)(this + 0x58);
  }
  return 1;
}

