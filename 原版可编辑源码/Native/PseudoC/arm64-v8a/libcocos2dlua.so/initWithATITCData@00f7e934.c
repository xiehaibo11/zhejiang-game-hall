
/* cocos2d::Image::initWithATITCData(unsigned char const*, long) */

undefined8 __thiscall cocos2d::Image::initWithATITCData(Image *this,uchar *param_1,long param_2)

{
  uchar *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  Configuration *pCVar7;
  ulong uVar8;
  void *pvVar9;
  undefined4 uVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  Image *pIVar15;
  size_t sVar16;
  int iVar17;
  long lVar18;
  int local_6c;
  
  uVar13 = *(uint *)(param_1 + 0x24);
  *(uint *)(this + 0x38) = uVar13;
  uVar14 = *(uint *)(param_1 + 0x28);
  *(uint *)(this + 0x3c) = uVar14;
  *(undefined4 *)(this + 0x150) = *(undefined4 *)(param_1 + 0x38);
  iVar17 = *(int *)(param_1 + 0x1c);
  if ((iVar17 == 0x87ee) || (iVar17 == 0x8c93)) {
    iVar17 = 0x10;
  }
  else if (iVar17 == 0x8c92) {
    iVar17 = 8;
  }
  else {
    iVar17 = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x3c);
  pCVar7 = (Configuration *)Configuration::getInstance();
  uVar8 = Configuration::supportsATITC(pCVar7);
  if ((uVar8 & 1) == 0) {
    sVar16 = *(size_t *)(this + 0x30);
    if ((0 < *(int *)(this + 0x150)) && (uVar13 != 0 || uVar14 != 0)) {
      iVar12 = 1;
      do {
        if (uVar13 == 0) {
          uVar13 = 1;
        }
        if (uVar14 == 0) {
          uVar14 = 1;
        }
        sVar16 = sVar16 + (long)(int)(uVar14 * uVar13 * 4);
        if (*(int *)(this + 0x150) <= iVar12) break;
        uVar6 = uVar13 | uVar14;
        iVar12 = iVar12 + 1;
        uVar13 = (int)uVar13 >> 1;
        uVar14 = (int)uVar14 >> 1;
      } while ((int)uVar6 >> 1 != 0);
      *(size_t *)(this + 0x30) = sVar16;
    }
    pvVar9 = malloc(sVar16);
    *(void **)(this + 0x28) = pvVar9;
  }
  else {
    sVar16 = (param_2 - (ulong)*(uint *)(param_1 + 0x3c)) - 0x44;
    *(size_t *)(this + 0x30) = sVar16;
    pvVar9 = malloc(sVar16);
    *(void **)(this + 0x28) = pvVar9;
    memcpy(pvVar9,param_1 + (ulong)uVar3 + 0x44,sVar16);
  }
  if (0 < *(int *)(this + 0x150)) {
    if (*(uint *)(this + 0x38) != 0 || *(uint *)(this + 0x3c) != 0) {
      iVar12 = 0;
      pIVar15 = this + 0x58;
      lVar18 = 1;
      local_6c = 0;
      uVar13 = *(uint *)(this + 0x38);
      uVar14 = *(uint *)(this + 0x3c);
      do {
        if (uVar13 == 0) {
          uVar13 = 1;
        }
        if (uVar14 == 0) {
          uVar14 = 1;
        }
        iVar4 = uVar13 + 6;
        if (-1 < (int)(uVar13 + 3)) {
          iVar4 = uVar13 + 3;
        }
        iVar2 = uVar14 + 6;
        if (-1 < (int)(uVar14 + 3)) {
          iVar2 = uVar14 + 3;
        }
        uVar6 = (iVar2 >> 2) * iVar17 * (iVar4 >> 2);
        pCVar7 = (Configuration *)Configuration::getInstance();
        uVar8 = Configuration::supportsATITC(pCVar7);
        if ((uVar8 & 1) == 0) {
          uVar5 = uVar13 * uVar14 * 4;
          *(undefined4 *)(this + 0x48) = 2;
          if (uVar5 == 0) {
            pvVar9 = (void *)0x0;
          }
          else {
            pvVar9 = operator_new((ulong)uVar5);
            memset(pvVar9,0,(ulong)uVar5);
          }
          iVar4 = *(int *)(param_1 + 0x1c);
          puVar1 = param_1 + (ulong)uVar3 + 0x44 + iVar12;
          if (iVar4 == 0x87ee) {
            atitc_decode(puVar1,pvVar9,uVar13,uVar14,5);
          }
          else if (iVar4 == 0x8c93) {
            atitc_decode(puVar1,pvVar9,uVar13,uVar14,3);
          }
          else if (iVar4 == 0x8c92) {
            atitc_decode(puVar1,pvVar9,uVar13,uVar14,1);
          }
          lVar11 = *(long *)(this + 0x28);
          *(uint *)pIVar15 = uVar5;
          *(void **)(pIVar15 + -8) = (void *)(lVar11 + local_6c);
          memcpy((void *)(lVar11 + local_6c),pvVar9,(long)(int)uVar5);
          local_6c = uVar5 + local_6c;
          if (pvVar9 != (void *)0x0) {
            operator_delete(pvVar9);
          }
        }
        else {
          iVar4 = *(int *)(param_1 + 0x1c);
          if (iVar4 == 0x87ee) {
            uVar10 = 0x14;
LAB_00f7eb90:
            *(undefined4 *)(this + 0x48) = uVar10;
          }
          else {
            if (iVar4 == 0x8c92) {
              uVar10 = 0x12;
              goto LAB_00f7eb90;
            }
            if (iVar4 == 0x8c93) {
              uVar10 = 0x13;
              goto LAB_00f7eb90;
            }
          }
          lVar11 = *(long *)(this + 0x28);
          *(uint *)pIVar15 = uVar6;
          *(long *)(pIVar15 + -8) = lVar11 + iVar12;
        }
        if (*(int *)(this + 0x150) <= lVar18) {
          return 1;
        }
        iVar12 = (uVar6 | 4) + iVar12;
        uVar6 = uVar13 | uVar14;
        pIVar15 = pIVar15 + 0x10;
        lVar18 = lVar18 + 1;
        uVar13 = (int)uVar13 >> 1;
        uVar14 = (int)uVar14 >> 1;
      } while ((int)uVar6 >> 1 != 0);
    }
  }
  return 1;
}

