
/* bool std::__ndk1::__insertion_sort_incomplete<cocos2d::PUControlPointSorter&,
   cocos2d::Vec2*>(cocos2d::Vec2*, cocos2d::Vec2*, cocos2d::PUControlPointSorter&) */

bool std::__ndk1::__insertion_sort_incomplete<cocos2d::PUControlPointSorter&,cocos2d::Vec2*>
               (Vec2 *param_1,Vec2 *param_2,PUControlPointSorter *param_3)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  float fVar3;
  undefined4 uVar5;
  float *pfVar4;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  float *pfVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(float *)(param_2 + -8) < *(float *)param_1) {
      uVar6 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(param_2 + -8) = uVar6;
      return true;
    }
    break;
  case 3:
    fVar12 = *(float *)(param_1 + 8);
    if (*(float *)param_1 <= fVar12) {
      if (*(float *)(param_2 + -8) < fVar12) {
        uVar6 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -8);
        *(undefined8 *)(param_2 + -8) = uVar6;
        if (*(float *)(param_1 + 8) < *(float *)param_1) {
          auVar13 = NEON_ext(*(undefined1 (*) [16])param_1,*(undefined1 (*) [16])param_1,8,1);
          *(long *)(param_1 + 8) = auVar13._8_8_;
          *(long *)param_1 = auVar13._0_8_;
          return true;
        }
      }
    }
    else {
      uVar6 = *(undefined8 *)param_1;
      if (fVar12 <= *(float *)(param_2 + -8)) {
        *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(param_1 + 8) = uVar6;
        if ((float)uVar6 <= *(float *)(param_2 + -8)) {
          return true;
        }
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -8);
      }
      else {
        *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -8);
      }
      *(undefined8 *)(param_2 + -8) = uVar6;
    }
    break;
  case 4:
    __sort4<cocos2d::PUControlPointSorter&,cocos2d::Vec2*>
              (param_1,param_1 + 8,param_1 + 0x10,param_2 + -8,param_3);
    break;
  case 5:
    pauVar1 = (undefined1 (*) [16])(param_1 + 0x10);
    pfVar4 = (float *)(param_1 + 0x18);
    __sort4<cocos2d::PUControlPointSorter&,cocos2d::Vec2*>
              (param_1,param_1 + 8,(Vec2 *)pauVar1,(Vec2 *)pfVar4,param_3);
    if (*(float *)(param_2 + -8) < *(float *)(param_1 + 0x18)) {
      uVar6 = *(undefined8 *)pfVar4;
      *(undefined8 *)pfVar4 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(param_2 + -8) = uVar6;
      if (*pfVar4 < *(float *)*pauVar1) {
        auVar13 = *pauVar1;
        auVar14 = NEON_ext(auVar13,auVar13,8,1);
        *(long *)(param_1 + 0x18) = auVar14._8_8_;
        *(long *)*pauVar1 = auVar14._0_8_;
        if (auVar13._8_4_ < *(float *)(param_1 + 8)) {
          uVar6 = *(undefined8 *)(param_1 + 8);
          *(long *)(param_1 + 8) = auVar13._8_8_;
          *(undefined8 *)(param_1 + 0x10) = uVar6;
          if (auVar13._8_4_ < *(float *)param_1) {
            uVar6 = *(undefined8 *)param_1;
            *(long *)param_1 = auVar13._8_8_;
            *(undefined8 *)(param_1 + 8) = uVar6;
            return true;
          }
        }
      }
    }
    break;
  default:
    fVar15 = *(float *)(param_1 + 8);
    fVar12 = *(float *)(param_1 + 0x10);
    if (*(float *)param_1 <= fVar15) {
      if (fVar12 < fVar15) {
        fVar12 = *(float *)(param_1 + 8);
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 8) = uVar6;
        *(float *)(param_1 + 0x10) = fVar12;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
        if ((float)uVar6 < *(float *)param_1) {
          uVar7 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = uVar6;
          *(undefined8 *)(param_1 + 8) = uVar7;
        }
      }
    }
    else {
      fVar3 = *(float *)param_1;
      uVar5 = *(undefined4 *)(param_1 + 4);
      if (fVar15 <= fVar12) {
        *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 8);
        *(float *)(param_1 + 8) = fVar3;
        *(undefined4 *)(param_1 + 0xc) = uVar5;
        if (fVar12 < fVar3) {
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
          *(float *)(param_1 + 0x10) = fVar3;
          *(undefined4 *)(param_1 + 0x14) = uVar5;
          fVar12 = fVar3;
        }
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        *(float *)(param_1 + 0x10) = fVar3;
        *(undefined4 *)(param_1 + 0x14) = uVar5;
        *(undefined8 *)param_1 = uVar6;
        fVar12 = fVar3;
      }
    }
    if (param_1 + 0x18 != param_2) {
      lVar8 = 0;
      iVar9 = 0;
      pfVar4 = (float *)(param_1 + 0x18);
      do {
        fVar15 = *pfVar4;
        if (fVar15 < fVar12) {
          fVar12 = pfVar4[1];
          lVar2 = lVar8;
          do {
            lVar10 = lVar2;
            *(undefined8 *)(param_1 + lVar10 + 0x18) = *(undefined8 *)(param_1 + lVar10 + 0x10);
            pfVar11 = (float *)param_1;
            if (lVar10 == -0x10) goto LAB_00e3e7d4;
            lVar2 = lVar10 + -8;
          } while (fVar15 < *(float *)(param_1 + lVar10 + 8));
          pfVar11 = (float *)(param_1 + lVar10 + 0x10);
LAB_00e3e7d4:
                    /* try { // try from 00e3e7d4 to 00f3e853 has its CatchHandler @ 00e3e9d0 */
          iVar9 = iVar9 + 1;
          *pfVar11 = fVar15;
          pfVar11[1] = fVar12;
          if (iVar9 == 8) {
            return pfVar4 + 2 == (float *)param_2;
          }
        }
        if (pfVar4 + 2 == (float *)param_2) {
          return true;
        }
        fVar12 = *pfVar4;
        lVar8 = lVar8 + 8;
        pfVar4 = pfVar4 + 2;
      } while( true );
    }
  }
  return true;
}

