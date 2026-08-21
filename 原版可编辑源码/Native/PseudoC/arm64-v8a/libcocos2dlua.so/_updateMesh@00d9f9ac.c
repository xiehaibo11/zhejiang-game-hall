
/* dragonBones::CCSlot::_updateMesh() */

void __thiscall dragonBones::CCSlot::_updateMesh(CCSlot *this)

{
  int iVar1;
  short sVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  PolygonInfo *pPVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  float *pfVar18;
  float *pfVar19;
  long lVar20;
  float *pfVar21;
  DBCCSprite *this_00;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  PolygonInfo aPStack_c0 [28];
  Rect aRStack_a4 [44];
  float local_78;
  float fStack_74;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar22 = *(long *)(this + 0xd8);
  this_00 = *(DBCCSprite **)(this + 400);
  lVar26 = *(long *)(this + 0x168);
  lVar25 = *(long *)(lVar22 + 0x40);
  lVar14 = *(long *)(lVar22 + 0x10);
  lVar16 = *(long *)(lVar22 + 0x18);
  fVar27 = *(float *)(*(long *)(*(long *)(this + 0x68) + 0x20) + 0x1c);
  lVar23 = *(long *)(lVar25 + 0x10);
  plVar4 = (long *)DBCCSprite::getPolygonInfoModify(this_00);
  lVar24 = *plVar4;
  cocos2d::Rect::Rect((Rect *)&local_78,999999.0,999999.0,-999999.0,-999999.0);
  if ((lVar26 != 0) &&
     (lVar5 = (**(code **)(*(long *)this_00 + 0x5b0))(this_00), lVar5 == *(long *)(lVar26 + 0x48)))
  {
    if (lVar23 == 0) {
      if (lVar14 != lVar16) {
        lVar14 = *(long *)(*(long *)(lVar25 + 8) + 0xb0);
        lVar16 = (long)*(short *)(lVar14 + (ulong)*(uint *)(lVar25 + 4) * 2);
        if (lVar16 != 0) {
          sVar2 = *(short *)(lVar14 + (ulong)(*(uint *)(lVar25 + 4) + 2) * 2);
          pfVar21 = (float *)(*(long *)(lVar22 + 0x10) + 4);
          iVar1 = sVar2 + 0x10000;
          if (-1 < sVar2) {
            iVar1 = (int)sVar2;
          }
          uVar13 = 0;
          pfVar18 = (float *)(*(long *)(*(long *)(lVar25 + 8) + 0xb8) + (long)iVar1 * 4 + 4);
          pfVar19 = (float *)(lVar24 + 4);
          fVar29 = local_78;
          do {
            fVar30 = pfVar18[-1];
            fVar33 = *pfVar18;
            fVar31 = pfVar21[-1];
            fVar34 = *pfVar21;
            pfVar19[1] = 0.0;
            fVar31 = fVar27 * fVar30 + fVar31;
            fVar30 = -(fVar27 * fVar33 + fVar34);
            pfVar19[-1] = fVar31;
            *pfVar19 = fVar30;
            if (fVar31 < fVar29) {
              fVar29 = fVar31;
              local_78 = fVar31;
            }
            if ((float)local_70 < fVar31) {
              local_70 = CONCAT44(local_70._4_4_,fVar31);
            }
            if (fVar30 < fStack_74) {
              fStack_74 = fVar30;
            }
            if (local_70._4_4_ < fVar30) {
              local_70 = CONCAT44(fVar30,(float)local_70);
            }
            uVar13 = uVar13 + 2;
            pfVar18 = pfVar18 + 2;
            pfVar21 = pfVar21 + 2;
            pfVar19 = pfVar19 + 6;
          } while (uVar13 < (ulong)(lVar16 << 1));
        }
      }
    }
    else {
      lVar26 = *(long *)(*(long *)(lVar25 + 8) + 0xb0);
      uVar13 = (ulong)*(short *)(lVar26 + (ulong)*(uint *)(lVar25 + 4) * 2);
      if (uVar13 != 0) {
        lVar5 = *(long *)(lVar22 + 0x28);
        lVar25 = *(long *)(*(long *)(lVar25 + 8) + 0xb8);
        uVar15 = 0;
        sVar2 = *(short *)(lVar26 + (ulong)(*(int *)(lVar23 + 0x14) + 1) * 2);
        iVar1 = sVar2 + 0x10000;
        if (-1 < sVar2) {
          iVar1 = (int)sVar2;
        }
        lVar17 = 0;
        lVar20 = (long)iVar1;
        lVar9 = (ulong)(*(int *)(lVar23 + 0x14) + 2) + (*(long *)(lVar22 + 0x30) - lVar5 >> 3);
        do {
          uVar6 = (ulong)*(short *)(lVar26 + lVar9 * 2);
          lVar10 = lVar9 + 1;
          if (uVar6 == 0) {
            uVar28 = 0;
          }
          else {
            uVar8 = 0;
            uVar28 = 0;
            do {
              lVar11 = *(long *)(lVar5 + ((long)*(short *)(lVar26 + 2 + lVar9 * 2 + uVar8 * 2) &
                                         0xffffffffU) * 8);
              if (lVar11 != 0) {
                pfVar21 = (float *)(lVar25 + lVar20 * 4);
                uVar32 = *(undefined8 *)(pfVar21 + 1);
                fVar29 = *pfVar21;
                lVar20 = lVar20 + 3;
                fVar30 = fVar27 * (float)uVar32;
                fVar33 = fVar27 * (float)((ulong)uVar32 >> 0x20);
                uVar32 = CONCAT44(fVar33,fVar30);
                if (lVar14 != lVar16) {
                  lVar12 = lVar17 * 4;
                  lVar17 = lVar17 + 2;
                  uVar32 = *(undefined8 *)(*(long *)(lVar22 + 0x10) + lVar12);
                  uVar32 = CONCAT44(fVar33 + (float)((ulong)uVar32 >> 0x20),fVar30 + (float)uVar32);
                }
                uVar36 = NEON_rev64(uVar32,4);
                uVar35 = NEON_rev64(*(undefined8 *)(lVar11 + 0x20),4);
                uVar28 = CONCAT44((float)((ulong)uVar28 >> 0x20) +
                                  ((float)((ulong)uVar35 >> 0x20) +
                                  (float)((ulong)uVar32 >> 0x20) *
                                  (float)((ulong)*(undefined8 *)(lVar11 + 0x14) >> 0x20) +
                                  (float)((ulong)uVar36 >> 0x20) * *(float *)(lVar11 + 0x10)) *
                                  fVar29,(float)uVar28 +
                                         ((float)uVar35 +
                                         (float)uVar32 * (float)*(undefined8 *)(lVar11 + 0x14) +
                                         (float)uVar36 * *(float *)(lVar11 + 0x1c)) * fVar29);
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar6);
            lVar10 = lVar10 + uVar8;
          }
          fVar30 = -(float)uVar28;
          pfVar21 = (float *)(lVar24 + uVar15 * 0x18);
          fVar29 = (float)((ulong)uVar28 >> 0x20);
          *pfVar21 = fVar29;
          pfVar21[1] = fVar30;
          pfVar21[2] = 0.0;
          if (fVar29 < local_78) {
            local_78 = fVar29;
          }
          if ((float)local_70 < fVar29) {
            local_70 = CONCAT44(local_70._4_4_,fVar29);
          }
          if (fVar30 < fStack_74) {
            fStack_74 = fVar30;
          }
          if (local_70._4_4_ < fVar30) {
            local_70 = CONCAT44(fVar30,(float)local_70);
          }
          uVar15 = uVar15 + 1;
          lVar9 = lVar10;
        } while (uVar15 < uVar13);
      }
    }
    local_70 = CONCAT44((float)((ulong)local_70 >> 0x20) - fStack_74,(float)local_70 - local_78);
    uVar28 = (**(code **)(*(long *)this_00 + 1000))(this_00);
    pPVar7 = (PolygonInfo *)cocos2d::Sprite::getPolygonInfo((Sprite *)this_00);
    cocos2d::PolygonInfo::PolygonInfo(aPStack_c0,pPVar7);
    cocos2d::Rect::operator=(aRStack_a4,(Rect *)&local_78);
    cocos2d::Sprite::setPolygonInfo((Sprite *)this_00,aPStack_c0);
    if (lVar23 == 0) {
      (**(code **)(*(long *)this_00 + 0x408))(this_00,uVar28);
    }
    else {
      (**(code **)(*(long *)this + 0x70))(this);
    }
    cocos2d::PolygonInfo::~PolygonInfo(aPStack_c0);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

