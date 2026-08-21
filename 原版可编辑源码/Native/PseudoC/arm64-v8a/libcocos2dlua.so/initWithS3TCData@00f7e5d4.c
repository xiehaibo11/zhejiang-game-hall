
/* cocos2d::Image::initWithS3TCData(unsigned char const*, long) */

undefined8 __thiscall cocos2d::Image::initWithS3TCData(Image *this,uchar *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *__dest;
  Configuration *pCVar5;
  ulong uVar6;
  void *pvVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  Image *pIVar15;
  size_t sVar16;
  int local_64;
  
  sVar16 = param_2 - 0x80;
  __dest = malloc(sVar16);
  memcpy(__dest,param_1 + 0x80,sVar16);
  uVar12 = *(uint *)(param_1 + 0x10);
  *(uint *)(this + 0x38) = uVar12;
  uVar14 = *(uint *)(param_1 + 0xc);
  *(uint *)(this + 0x3c) = uVar14;
  iVar8 = *(int *)(param_1 + 0x1c);
  *(undefined8 *)(this + 0x30) = 0;
  if (iVar8 == 0) {
    iVar8 = 1;
  }
  *(int *)(this + 0x150) = iVar8;
  iVar8 = 8;
  if (*(int *)(param_1 + 0x54) != 0x31545844) {
    iVar8 = 0x10;
  }
  pCVar5 = (Configuration *)Configuration::getInstance();
  uVar6 = Configuration::supportsS3TC(pCVar5);
  if ((uVar6 & 1) == 0) {
    sVar16 = *(size_t *)(this + 0x30);
    if ((0 < *(int *)(this + 0x150)) && (uVar12 != 0 || uVar14 != 0)) {
      iVar11 = 1;
      do {
        if (uVar12 == 0) {
          uVar12 = 1;
        }
        if (uVar14 == 0) {
          uVar14 = 1;
        }
        sVar16 = sVar16 + (long)(int)(uVar14 * uVar12 * 4);
        if (*(int *)(this + 0x150) <= iVar11) break;
        uVar4 = uVar12 | uVar14;
        iVar11 = iVar11 + 1;
        uVar12 = (int)uVar12 >> 1;
        uVar14 = (int)uVar14 >> 1;
      } while ((int)uVar4 >> 1 != 0);
      *(size_t *)(this + 0x30) = sVar16;
    }
    pvVar7 = malloc(sVar16);
    *(void **)(this + 0x28) = pvVar7;
  }
  else {
    *(size_t *)(this + 0x30) = sVar16;
    pvVar7 = malloc(sVar16);
    *(void **)(this + 0x28) = pvVar7;
    memcpy(pvVar7,__dest,sVar16);
  }
  pCVar5 = (Configuration *)Configuration::getInstance();
  uVar6 = Configuration::supportsS3TC(pCVar5);
  if ((uVar6 & 1) == 0) {
    uVar9 = 2;
  }
  else {
    iVar11 = *(int *)(param_1 + 0x54);
    if (iVar11 == 0x31545844) {
      uVar9 = 0xf;
    }
    else if (iVar11 == 0x35545844) {
      uVar9 = 0x11;
    }
    else {
      if (iVar11 != 0x33545844) goto LAB_00f7e740;
      uVar9 = 0x10;
    }
  }
  *(undefined4 *)(this + 0x48) = uVar9;
LAB_00f7e740:
  if (0 < *(int *)(this + 0x150)) {
    if (*(uint *)(this + 0x38) != 0 || *(uint *)(this + 0x3c) != 0) {
      iVar11 = 0;
      pIVar15 = this + 0x58;
      lVar13 = 1;
      local_64 = 0;
      uVar12 = *(uint *)(this + 0x38);
      uVar14 = *(uint *)(this + 0x3c);
      do {
        if (uVar12 == 0) {
          uVar12 = 1;
        }
        if (uVar14 == 0) {
          uVar14 = 1;
        }
        iVar2 = uVar12 + 6;
        if (-1 < (int)(uVar12 + 3)) {
          iVar2 = uVar12 + 3;
        }
        iVar1 = uVar14 + 6;
        if (-1 < (int)(uVar14 + 3)) {
          iVar1 = uVar14 + 3;
        }
        uVar4 = (iVar1 >> 2) * iVar8 * (iVar2 >> 2);
        pCVar5 = (Configuration *)Configuration::getInstance();
        uVar6 = Configuration::supportsS3TC(pCVar5);
        if ((uVar6 & 1) == 0) {
          uVar3 = uVar12 * uVar14 * 4;
          if (uVar3 == 0) {
            pvVar7 = (void *)0x0;
          }
          else {
            pvVar7 = operator_new((ulong)uVar3);
            memset(pvVar7,0,(ulong)uVar3);
          }
          iVar2 = *(int *)(param_1 + 0x54);
          lVar10 = (long)__dest + (long)iVar11;
          if (iVar2 == 0x35545844) {
            s3tc_decode(lVar10,pvVar7,uVar12,uVar14,5);
          }
          else if (iVar2 == 0x33545844) {
            s3tc_decode(lVar10,pvVar7,uVar12,uVar14,3);
          }
          else if (iVar2 == 0x31545844) {
            s3tc_decode(lVar10,pvVar7,uVar12,uVar14,1);
          }
          lVar10 = *(long *)(this + 0x28);
          *(uint *)pIVar15 = uVar3;
          *(void **)(pIVar15 + -8) = (void *)(lVar10 + local_64);
          memcpy((void *)(lVar10 + local_64),pvVar7,(long)(int)uVar3);
          local_64 = uVar3 + local_64;
          if (pvVar7 != (void *)0x0) {
            operator_delete(pvVar7);
          }
        }
        else {
          lVar10 = *(long *)(this + 0x28);
          *(uint *)pIVar15 = uVar4;
          *(long *)(pIVar15 + -8) = lVar10 + iVar11;
        }
        if (*(int *)(this + 0x150) <= lVar13) break;
        iVar11 = uVar4 + iVar11;
        uVar4 = uVar12 | uVar14;
        pIVar15 = pIVar15 + 0x10;
        lVar13 = lVar13 + 1;
        uVar12 = (int)uVar12 >> 1;
        uVar14 = (int)uVar14 >> 1;
      } while ((int)uVar4 >> 1 != 0);
    }
  }
  if (__dest != (void *)0x0) {
    free(__dest);
  }
  return 1;
}

