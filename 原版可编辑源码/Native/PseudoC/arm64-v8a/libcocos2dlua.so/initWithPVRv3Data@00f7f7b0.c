
/* cocos2d::Image::initWithPVRv3Data(unsigned char const*, long) */

undefined8 __thiscall cocos2d::Image::initWithPVRv3Data(Image *this,uchar *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  Image IVar3;
  int iVar4;
  Configuration *pCVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  size_t __size;
  ulong uVar18;
  int iVar19;
  Image *pIVar20;
  
  if ((ulong)param_2 < 0x34) {
    return 0;
  }
  if (*(int *)param_1 != 0x3525650) {
    return 0;
  }
  uVar18 = *(ulong *)(param_1 + 8);
  if ((long)uVar18 < 0x80000006c) {
    if (uVar18 < 0xc) {
      if ((1L << (uVar18 & 0x3f) & 0x4fU) == 0) {
        if ((1L << (uVar18 & 0x3f) & 0xa80U) == 0) goto LAB_00f7f950;
        pCVar5 = (Configuration *)Configuration::getInstance();
        uVar6 = Configuration::supportsS3TC(pCVar5);
joined_r0x00f7f948:
        if ((uVar6 & 1) == 0) {
          return 0;
        }
      }
    }
    else {
LAB_00f7f950:
      if (uVar18 != 0x800000061) {
        return 0;
      }
    }
  }
  else if ((long)uVar18 < 0x105050561626772) {
    if ((long)uVar18 < 0x5060500626772) {
      if ((uVar18 != 0x80000006c) && (uVar18 != 0x8080000616c)) {
        return 0;
      }
    }
    else if ((uVar18 != 0x5060500626772) && (uVar18 != 0x8080800626772)) {
      return 0;
    }
  }
  else if ((long)uVar18 < 0x808080861626772) {
    if ((uVar18 != 0x105050561626772) && (uVar18 != 0x404040461626772)) {
      return 0;
    }
  }
  else if (uVar18 != 0x808080861626772) {
    if (uVar18 != 0x808080861726762) {
      return 0;
    }
    pCVar5 = (Configuration *)Configuration::getInstance();
    uVar6 = Configuration::supportsBGRA8888(pCVar5);
    goto joined_r0x00f7f948;
  }
  if (DAT_0178fb18 == (undefined8 *)0x0) {
    return 0;
  }
  puVar12 = &DAT_0178fb18;
  puVar11 = DAT_0178fb18;
  do {
    if ((ulong)puVar11[4] >= uVar18) {
      puVar12 = puVar11;
    }
    puVar11 = (undefined8 *)puVar11[(ulong)puVar11[4] < uVar18];
  } while (puVar11 != (undefined8 *)0x0);
  if ((undefined8 **)puVar12 == &DAT_0178fb18) {
    return 0;
  }
  if (uVar18 < (ulong)puVar12[4]) {
    return 0;
  }
  lVar7 = Texture2D::getPixelFormatInfoMap();
  puVar12 = DAT_0178fb18;
  if (DAT_0178fb18 != (undefined8 *)0x0) {
    do {
      while (uVar18 < (ulong)puVar12[4]) {
        puVar12 = (undefined8 *)*puVar12;
        if (puVar12 == (undefined8 *)0x0) goto LAB_00f7fd80;
      }
      if (uVar18 <= (ulong)puVar12[4]) goto LAB_00f7f9e0;
      puVar12 = (undefined8 *)puVar12[1];
    } while (puVar12 != (undefined8 *)0x0);
LAB_00f7fd80:
                    /* WARNING: Subroutine does not return */
    FUN_007d44e0("map::at:  key not found");
  }
LAB_00f7f9e0:
  if (puVar12 == (undefined8 *)0x0) goto LAB_00f7fd80;
  iVar9 = *(int *)(puVar12 + 5);
  if (iVar9 - 10U < 4) {
    pCVar5 = (Configuration *)Configuration::getInstance();
    uVar6 = Configuration::supportsPVRTC(pCVar5);
    if ((uVar6 & 1) == 0) {
      iVar9 = 2;
    }
LAB_00f7fa08:
    lVar13 = *(long *)(lVar7 + 8);
  }
  else {
    if (iVar9 != 0xe) goto LAB_00f7fa08;
    pCVar5 = (Configuration *)Configuration::getInstance();
    uVar6 = Configuration::supportsETC(pCVar5);
    iVar9 = 0xe;
    if ((uVar6 & 1) == 0) {
      iVar9 = 3;
    }
    lVar13 = *(long *)(lVar7 + 8);
  }
  if (lVar13 != 0) {
    lVar15 = lVar7 + 8;
    do {
      if (iVar9 <= *(int *)(lVar13 + 0x1c)) {
        lVar15 = lVar13;
      }
      lVar13 = *(long *)(lVar13 + (ulong)(*(int *)(lVar13 + 0x1c) < iVar9) * 8);
    } while (lVar13 != 0);
    if ((lVar15 != lVar7 + 8) && (*(int *)(lVar15 + 0x1c) <= iVar9)) goto LAB_00f7fa70;
  }
  lVar15 = lVar7 + 8;
LAB_00f7fa70:
  lVar7 = Texture2D::getPixelFormatInfoMap();
  if (lVar15 == lVar7 + 8) {
    return 0;
  }
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(lVar15 + 0x1c);
  iVar9 = *(int *)(lVar15 + 0x2c);
  if ((param_1[4] >> 1 & 1) != 0) {
    this[0x154] = (Image)0x1;
  }
  iVar16 = *(int *)(param_1 + 0x18);
  iVar17 = *(int *)(param_1 + 0x1c);
  *(int *)(this + 0x38) = iVar17;
  *(int *)(this + 0x3c) = iVar16;
  uVar2 = *(uint *)(param_1 + 0x30);
  __size = (param_2 - (ulong)uVar2) - 0x34;
  *(size_t *)(this + 0x30) = __size;
  pvVar8 = malloc(__size);
  *(void **)(this + 0x28) = pvVar8;
  memcpy(pvVar8,param_1 + (ulong)uVar2 + 0x34,__size);
  iVar19 = *(int *)(param_1 + 0x2c);
  *(int *)(this + 0x150) = iVar19;
  if (iVar19 < 1) {
    IVar3 = this[0x40];
  }
  else {
    lVar7 = 0;
    iVar19 = 0;
    pIVar20 = this + 0x58;
    do {
      if ((long)uVar18 < 6) {
        if (uVar18 < 2) {
          pCVar5 = (Configuration *)Configuration::getInstance();
          uVar6 = Configuration::supportsPVRTC(pCVar5);
          if ((uVar6 & 1) == 0) {
            iVar9 = iVar16 * iVar17 * 4;
            this[0x40] = (Image)0x1;
            *(int *)pIVar20 = iVar9;
            if (iVar16 * iVar17 < 0) {
              iVar9 = -1;
            }
            pvVar8 = operator_new__((long)iVar9,(nothrow_t *)&std::nothrow);
            *(void **)(pIVar20 + -8) = pvVar8;
            PVRTDecompressPVRTC((void *)(*(long *)(this + 0x28) + (long)iVar19),iVar17,iVar16,pvVar8
                                ,true);
            iVar9 = 2;
          }
          iVar4 = iVar17 + 7;
          if (-1 < iVar17) {
            iVar4 = iVar17;
          }
          iVar4 = iVar4 >> 3;
          iVar14 = iVar16 + 3;
          if (-1 < iVar16) {
            iVar14 = iVar16;
          }
          iVar14 = iVar14 >> 2;
          iVar10 = 0x20;
        }
        else {
          if (1 < uVar18 - 2) goto LAB_00f7fbcc;
          pCVar5 = (Configuration *)Configuration::getInstance();
          uVar6 = Configuration::supportsPVRTC(pCVar5);
          if ((uVar6 & 1) == 0) {
            iVar9 = iVar16 * iVar17 * 4;
            this[0x40] = (Image)0x1;
            *(int *)pIVar20 = iVar9;
            if (iVar16 * iVar17 < 0) {
              iVar9 = -1;
            }
            pvVar8 = operator_new__((long)iVar9,(nothrow_t *)&std::nothrow);
            *(void **)(pIVar20 + -8) = pvVar8;
            PVRTDecompressPVRTC((void *)(*(long *)(this + 0x28) + (long)iVar19),iVar17,iVar16,pvVar8
                                ,false);
            iVar9 = 4;
          }
LAB_00f7fcc0:
          iVar4 = iVar17 + 3;
          if (-1 < iVar17) {
            iVar4 = iVar17;
          }
          iVar14 = iVar16 + 3;
          if (-1 < iVar16) {
            iVar14 = iVar16;
          }
          iVar10 = 0x10;
          iVar4 = iVar4 >> 2;
          iVar14 = iVar14 >> 2;
        }
      }
      else {
        if (uVar18 == 6) {
          pCVar5 = (Configuration *)Configuration::getInstance();
          uVar6 = Configuration::supportsETC(pCVar5);
          if ((uVar6 & 1) == 0) {
            this[0x40] = (Image)0x1;
            iVar4 = iVar16 * iVar17 * 3;
            *(int *)pIVar20 = iVar4;
            if (iVar16 * iVar17 < 0) {
              iVar4 = -1;
            }
            pvVar8 = operator_new__((long)iVar4,(nothrow_t *)&std::nothrow);
            *(void **)(pIVar20 + -8) = pvVar8;
            iVar4 = etc1_decode_image(*(long *)(this + 0x28) + (long)iVar19,pvVar8,iVar17,iVar16,3,
                                      iVar17 * 3);
            if (iVar4 != 0) {
              return 0;
            }
          }
          goto LAB_00f7fcc0;
        }
        if (uVar18 == 0x808080861726762) {
          pCVar5 = (Configuration *)Configuration::getInstance();
          uVar6 = Configuration::supportsBGRA8888(pCVar5);
          if ((uVar6 & 1) == 0) {
            return 0;
          }
        }
LAB_00f7fbcc:
        iVar10 = 1;
        iVar4 = iVar17;
        iVar14 = iVar16;
      }
      iVar10 = iVar10 * iVar9;
      if (iVar4 < 3) {
        iVar4 = 2;
      }
      if (iVar14 < 3) {
        iVar14 = 2;
      }
      iVar1 = iVar10 + 7;
      if (-1 < iVar10) {
        iVar1 = iVar10;
      }
      IVar3 = this[0x40];
      lVar15 = *(long *)(this + 0x30) - (long)iVar19;
      lVar13 = (long)(iVar4 * (iVar1 >> 3) * iVar14);
      if (lVar15 <= lVar13) {
        lVar13 = lVar15;
      }
      if (IVar3 == (Image)0x0) {
        lVar15 = *(long *)(this + 0x28);
        *(int *)pIVar20 = (int)lVar13;
        *(long *)(pIVar20 + -8) = lVar15 + iVar19;
      }
      iVar19 = iVar19 + (int)lVar13;
      iVar17 = iVar17 >> 1;
      iVar16 = iVar16 >> 1;
      if (iVar17 < 2) {
        iVar17 = 1;
      }
      lVar7 = lVar7 + 1;
      if (iVar16 < 2) {
        iVar16 = 1;
      }
      pIVar20 = pIVar20 + 0x10;
    } while (lVar7 < *(int *)(this + 0x150));
  }
  if (IVar3 != (Image)0x0) {
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + 0x50);
    *(long *)(this + 0x30) = (long)*(int *)(this + 0x58);
  }
  return 1;
}

