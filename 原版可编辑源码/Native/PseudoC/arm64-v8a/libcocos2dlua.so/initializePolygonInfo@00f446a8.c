
/* cocos2d::SpriteFrameCache::initializePolygonInfo(cocos2d::Size const&, cocos2d::Size const&,
   std::__ndk1::vector<int, std::__ndk1::allocator<int> > const&, std::__ndk1::vector<int,
   std::__ndk1::allocator<int> > const&, std::__ndk1::vector<int, std::__ndk1::allocator<int> >
   const&, cocos2d::PolygonInfo&) */

void __thiscall
cocos2d::SpriteFrameCache::initializePolygonInfo
          (SpriteFrameCache *this,Size *param_1,Size *param_2,vector *param_3,vector *param_4,
          vector *param_5,PolygonInfo *param_6)

{
  undefined8 *puVar1;
  Vec3 *pVVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  Vec3 *pVVar8;
  void *pvVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  Vec3 *pVVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  lVar11 = *(long *)param_5;
  lVar3 = *(long *)(param_5 + 8);
  uVar19 = *(long *)(param_3 + 8) - *(long *)param_3;
  uVar16 = (long)uVar19 >> 2;
  lVar7 = Director::getInstance();
  fVar22 = *(float *)(lVar7 + 0x1a0);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar16;
  uVar10 = (uVar16 + ((long)uVar19 >> 1)) * 8;
  if (SUB168(auVar4 * ZEXT816(0x18),8) != 0) {
    uVar10 = 0xffffffffffffffff;
  }
  pVVar8 = operator_new__(uVar10,(nothrow_t *)&std::nothrow);
  if (pVVar8 == (Vec3 *)0x0) {
joined_r0x00f44790:
    if (uVar16 >> 1 != 0) {
      uVar16 = uVar16 >> 1;
      lVar7 = 0;
      pVVar18 = pVVar8 + 0x10;
      do {
        *(undefined4 *)(pVVar18 + -4) = Color4B::WHITE;
                    /* try { // try from 00f447bc to 010449df has its CatchHandler @ 00f44c7c */
        Vec3::Vec3((Vec3 *)&local_88,(float)*(int *)(*(long *)param_3 + lVar7) / fVar22,
                   (*(float *)(param_2 + 4) - (float)((int *)(*(long *)param_3 + lVar7))[1]) /
                   fVar22,0.0);
        uVar16 = uVar16 - 1;
        *(undefined4 *)(pVVar18 + -8) = local_80;
        *(undefined8 *)(pVVar18 + -0x10) = local_88;
        puVar13 = (undefined8 *)(*(long *)param_4 + lVar7);
        lVar7 = lVar7 + 8;
        uVar20 = NEON_scvtf(*puVar13,4);
        *(ulong *)pVVar18 =
             CONCAT44((float)((ulong)uVar20 >> 0x20) /
                      (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                      (float)uVar20 / (float)*(undefined8 *)param_1);
        pVVar18 = pVVar18 + 0x18;
      } while (uVar16 != 0);
    }
  }
  else if (uVar19 != 0) {
    pVVar18 = pVVar8;
    do {
      Vec3::Vec3(pVVar18);
      Color4B::Color4B((Color4B *)(pVVar18 + 0xc));
      pVVar2 = pVVar18 + 0x18;
      *(undefined4 *)(pVVar18 + 0x10) = 0;
      *(undefined4 *)(pVVar18 + 0x14) = 0;
      pVVar18 = pVVar2;
    } while (pVVar2 != pVVar8 + uVar16 * 0x18);
    goto joined_r0x00f44790;
  }
  uVar16 = lVar3 - lVar11;
  uVar17 = (long)uVar16 >> 2;
  uVar10 = uVar17 * 2;
  if (CARRY8(uVar17,uVar17)) {
    uVar10 = 0xffffffffffffffff;
  }
  pvVar9 = operator_new__(uVar10);
  if (uVar16 != 0) {
    uVar10 = uVar17;
    if (uVar17 < 2) {
      uVar10 = 1;
    }
    lVar11 = *(long *)param_5;
    if (uVar10 < 8) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar10 & 0xfffffffffffffff8;
      puVar13 = (undefined8 *)(lVar11 + 0x10);
      puVar14 = (undefined8 *)((long)pvVar9 + 8);
      uVar15 = uVar12;
      do {
        puVar1 = puVar13 + -2;
        puVar6 = puVar13 + -1;
        uVar21 = puVar13[1];
        uVar20 = *puVar13;
        puVar13 = puVar13 + 4;
        uVar15 = uVar15 - 8;
        puVar14[-1] = CONCAT26((short)((ulong)*puVar6 >> 0x20),
                               CONCAT24((short)*puVar6,
                                        CONCAT22((short)((ulong)*puVar1 >> 0x20),(short)*puVar1)));
        *puVar14 = CONCAT26((short)((ulong)uVar21 >> 0x20),
                            CONCAT24((short)uVar21,
                                     CONCAT22((short)((ulong)uVar20 >> 0x20),(short)uVar20)));
        puVar14 = puVar14 + 2;
      } while (uVar15 != 0);
      if (uVar10 == uVar12) goto LAB_00f448a4;
    }
    do {
      *(short *)((long)pvVar9 + uVar12 * 2) = (short)*(undefined4 *)(lVar11 + uVar12 * 4);
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar17);
  }
LAB_00f448a4:
  *(Vec3 **)param_6 = pVVar8;
  *(void **)(param_6 + 8) = pvVar9;
  *(int *)(param_6 + 0x10) = (int)(uVar19 >> 2);
  *(int *)(param_6 + 0x14) = (int)(uVar16 >> 2);
  Rect::Rect((Rect *)&local_88,0.0,0.0,*(float *)param_2,*(float *)(param_2 + 4));
  Rect::operator=((Rect *)(param_6 + 0x1c),(Rect *)&local_88);
  if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

