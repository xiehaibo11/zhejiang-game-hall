
/* cocos2d::PUSimpleSpline::recalcTangents() */

void __thiscall cocos2d::PUSimpleSpline::recalcTangents(PUSimpleSpline *this)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>> *this_00;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar14;
  undefined8 uVar13;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  
  pfVar1 = *(float **)(this + 8);
  lVar4 = *(long *)(this + 0x10);
  lVar5 = lVar4 - (long)pfVar1 >> 2;
  uVar10 = lVar5 * -0x5555555555555555;
  if (1 < uVar10) {
    uVar11 = uVar10 - 1;
    if (((*pfVar1 == pfVar1[uVar11 * 3]) && (pfVar1[1] == pfVar1[uVar11 * 3 + 1])) &&
       (pfVar1[2] == pfVar1[uVar11 * 3 + 2])) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    this_00 = (vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>> *)(this + 0x20);
    lVar6 = *(long *)(this + 0x28) - *(long *)this_00 >> 2;
    bVar3 = uVar10 < (ulong)(lVar6 * -0x5555555555555555);
    uVar7 = uVar10 + lVar6 * 0x5555555555555555;
    if (bVar3 || uVar7 == 0) {
      if (bVar3) {
        *(long *)(this + 0x28) = *(long *)this_00 + lVar5 * 4;
      }
    }
    else {
      std::__ndk1::vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>>::__append
                (this_00,uVar7);
    }
    if (lVar4 - (long)pfVar1 != 0) {
      lVar4 = 0;
      uVar7 = 0;
LAB_00e480cc:
      puVar9 = *(undefined8 **)(this + 8);
      uVar13 = *(undefined8 *)((long)puVar9 + 0xc);
      fVar15 = *(float *)((long)puVar9 + 0x14);
      if (bVar2) {
        puVar9 = (undefined8 *)((long)puVar9 + (uVar10 - 2) * 0xc);
      }
      uVar16 = *puVar9;
      fVar17 = *(float *)(puVar9 + 1);
      puVar9 = *(undefined8 **)this_00;
LAB_00e48074:
      fVar12 = (float)uVar13 - (float)uVar16;
      fVar14 = (float)((ulong)uVar13 >> 0x20) - (float)((ulong)uVar16 >> 0x20);
      do {
        *puVar9 = CONCAT44(fVar14 * 0.5,fVar12 * 0.5);
        *(float *)(puVar9 + 1) = (fVar15 - fVar17) * 0.5;
        while( true ) {
          uVar7 = uVar7 + 1;
          lVar4 = lVar4 + 0xc;
          if (uVar10 <= uVar7) {
            return;
          }
          if (uVar7 == 0) goto LAB_00e480cc;
          if (uVar11 != uVar7) {
            lVar5 = *(long *)(this + 8) + lVar4;
            uVar13 = *(undefined8 *)(lVar5 + 0xc);
            fVar15 = *(float *)(lVar5 + 0x14);
            uVar16 = *(undefined8 *)(lVar5 + -0xc);
            fVar17 = *(float *)(lVar5 + -4);
            puVar9 = (undefined8 *)(*(long *)(this + 0x20) + lVar4);
            goto LAB_00e48074;
          }
          if (!bVar2) break;
          puVar9 = *(undefined8 **)this_00;
          uVar13 = *puVar9;
          puVar8 = (undefined8 *)((long)puVar9 + uVar11 * 0xc);
          *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar9 + 1);
          *puVar8 = uVar13;
        }
        puVar9 = (undefined8 *)(*(long *)(this + 8) + uVar11 * 0xc);
        puVar8 = (undefined8 *)(*(long *)(this + 8) + (uVar10 - 2) * 0xc);
        uVar13 = *puVar9;
        fVar15 = *(float *)(puVar9 + 1);
        uVar16 = *puVar8;
        fVar17 = *(float *)(puVar8 + 1);
        fVar12 = (float)uVar13 - (float)uVar16;
        fVar14 = (float)((ulong)uVar13 >> 0x20) - (float)((ulong)uVar16 >> 0x20);
        puVar9 = (undefined8 *)(*(long *)(this + 0x20) + uVar11 * 0xc);
      } while( true );
    }
  }
  return;
}

