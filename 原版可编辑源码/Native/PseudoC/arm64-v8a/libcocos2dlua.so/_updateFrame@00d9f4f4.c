
/* dragonBones::CCSlot::_updateFrame() */

void __thiscall dragonBones::CCSlot::_updateFrame(CCSlot *this)

{
  float *pfVar1;
  void *pvVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  long lVar9;
  undefined8 *puVar10;
  bool bVar11;
  Texture2D *this_00;
  undefined8 *puVar12;
  Vec3 *pVVar13;
  void *pvVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  Sprite *this_01;
  Vec3 *pVVar20;
  ulong *puVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  Rect aRStack_cc [44];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  long local_90;
  
                    /* try { // try from 00d9f4f4 to 00e9f507 has its CatchHandler @ 00d9f6d8 */
                    /* try { // try from 00d9f508 to 00e9f53b has its CatchHandler @ 00d9f6ec */
  lVar9 = tpidr_el0;
  local_90 = *(long *)(lVar9 + 0x28);
                    /* try { // try from 00d9f53c to 00e9f54f has its CatchHandler @ 00d9f6d4 */
  if ((*(long *)(this + 0xd8) == 0) || (*(long *)(this + 0x170) != *(long *)(this + 0xe8))) {
    lVar16 = 0;
  }
  else {
    lVar16 = *(long *)(*(long *)(this + 0xd8) + 0x40);
  }
                    /* try { // try from 00d9f554 to 00e9f567 has its CatchHandler @ 00d9f6d0 */
  this_01 = *(Sprite **)(this + 400);
                    /* try { // try from 00d9f570 to 00e9f5bf has its CatchHandler @ 00d9f6e8 */
  if ((((*(int *)(this + 0x100) < 0) || (lVar23 = *(long *)(this + 0x168), lVar23 == 0)) ||
      (*(long *)(this + 0x170) == 0)) || (*(SpriteFrame **)(lVar23 + 0x48) == (SpriteFrame *)0x0)) {
    (**(code **)(*(long *)this_01 + 0x548))(this_01,0);
    (**(code **)(*(long *)this_01 + 0x558))(this_01,cocos2d::Rect::ZERO);
    (**(code **)(*(long *)this_01 + 200))(0,0,this_01);
                    /* try { // try from 00d9f7bc to 00e9f7cb has its CatchHandler @ 00da0574 */
    (**(code **)(*(long *)this_01 + 0x170))(this_01,0);
    goto LAB_00d9f7c0;
  }
  if (lVar16 == 0) {
                    /* try { // try from 00d9f800 to 00e9f80f has its CatchHandler @ 00da0560 */
    fVar30 = *(float *)(*(long *)(lVar23 + 0x40) + 0x1c);
    fVar29 = *(float *)(*(long *)(*(long *)(this + 0x68) + 0x20) + 0x1c);
                    /* try { // try from 00d9f810 to 00e9f81f has its CatchHandler @ 00da0550 */
    lVar16 = cocos2d::Director::getInstance();
    *(float *)(this + 0x188) = fVar30 * fVar29 * *(float *)(lVar16 + 0x1a0);
    (**(code **)(*(long *)this_01 + 0x598))(this_01,*(undefined8 *)(lVar23 + 0x48));
  }
  else {
    uVar5 = *(uint *)(lVar16 + 4);
    lVar4 = *(long *)(*(long *)(lVar16 + 8) + 0xb0);
    lVar17 = *(long *)(*(long *)(lVar16 + 8) + 0xb8);
    sVar6 = *(short *)(lVar4 + (ulong)(uVar5 + 2) * 2);
    sVar7 = *(short *)(lVar4 + (ulong)uVar5 * 2);
    uVar22 = (ulong)sVar7;
    sVar8 = *(short *)(lVar4 + (ulong)(uVar5 + 1) * 2);
    iVar3 = sVar6 + 0x10000;
    if (-1 < sVar6) {
      iVar3 = (int)sVar6;
    }
    this_00 = (Texture2D *)cocos2d::SpriteFrame::getTexture(*(SpriteFrame **)(lVar23 + 0x48));
    puVar12 = (undefined8 *)cocos2d::Texture2D::getContentSizeInPixels(this_00);
                    /* try { // try from 00d9f5c0 to 00e9f5fb has its CatchHandler @ 00d9f704 */
    pVVar13 = operator_new__((uVar22 + (uVar22 & 0xffffffff) * 2) * 8);
    if (sVar7 != 0) {
      pVVar20 = pVVar13;
      do {
        cocos2d::Vec3::Vec3(pVVar20);
        cocos2d::Color4B::Color4B((Color4B *)(pVVar20 + 0xc));
        *(undefined8 *)(pVVar20 + 0x10) = 0;
        pVVar20 = pVVar20 + 0x18;
      } while (pVVar20 != pVVar13 + uVar22 * 0x18);
    }
    uVar5 = sVar8 * 3;
    uVar22 = (ulong)uVar5;
                    /* try { // try from 00d9f5fc to 00e9f647 has its CatchHandler @ 00d9f708 */
    pvVar14 = operator_new__(uVar22 << 1);
    cocos2d::Rect::Rect((Rect *)&local_a0,999999.0,999999.0,-999999.0,-999999.0);
    if (sVar7 != 0) {
                    /* try { // try from 00d9f648 to 00e9f753 has its CatchHandler @ 00d9f3d8 */
      puVar21 = (ulong *)(lVar17 + (ulong)(uint)(iVar3 + sVar7 * 2) * 4);
      uVar24 = 0;
      pVVar20 = pVVar13;
      do {
        pfVar1 = (float *)(lVar17 + (long)iVar3 * 4 + uVar24 * 4);
        uVar25 = *puVar21;
        fVar29 = *pfVar1;
        fVar30 = pfVar1[1];
        cocos2d::Vec3::Vec3((Vec3 *)&local_e8);
        cocos2d::Color4B::Color4B((Color4B *)((long)&uStack_e0 + 4));
        fVar30 = -fVar30;
        local_e8 = (Vec3 *)CONCAT44(fVar30,fVar29);
        bVar11 = *(char *)(lVar23 + 0xd) == '\0';
                    /* catch() { ... } // from try @ 00d9f46c with catch @ 00d9f6bc */
        uVar28 = CONCAT44((int)uVar25,1.0 - (float)(uVar25 >> 0x20));
                    /* catch() { ... } // from try @ 00d9f464 with catch @ 00d9f6cc */
                    /* catch() { ... } // from try @ 00d9f554 with catch @ 00d9f6d0 */
                    /* catch() { ... } // from try @ 00d9f53c with catch @ 00d9f6d4 */
                    /* catch() { ... } // from try @ 00d9f4f4 with catch @ 00d9f6d8 */
        uVar28 = uVar28 ^ (uVar28 ^ uVar25) &
                          CONCAT44((int)((uint)bVar11 << 0x1f) >> 0x1f,
                                   (int)((uint)bVar11 << 0x1f) >> 0x1f);
                    /* catch() { ... } // from try @ 00d9f570 with catch @ 00d9f6e8 */
                    /* catch() { ... } // from try @ 00d9f508 with catch @ 00d9f6ec */
                    /* catch() { ... } // from try @ 00d9f4ac with catch @ 00d9f6f0 */
                    /* catch() { ... } // from try @ 00d9f420 with catch @ 00d9f6f4 */
        local_d8 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x28) >> 0x20) +
                            (float)(uVar28 >> 0x20) *
                            (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) /
                            (float)((ulong)*puVar12 >> 0x20),
                            ((float)*(undefined8 *)(lVar23 + 0x28) +
                            (float)uVar28 * (float)*(undefined8 *)(lVar23 + 0x30)) / (float)*puVar12
                           );
        uStack_e0 = (void *)((ulong)cocos2d::Color4B::WHITE << 0x20);
                    /* catch() { ... } // from try @ 00d9f5c0 with catch @ 00d9f704 */
                    /* catch() { ... } // from try @ 00d9f5fc with catch @ 00d9f708 */
        *(undefined8 *)(pVVar20 + 0x10) = local_d8;
        *(void **)(pVVar20 + 8) = uStack_e0;
        *(Vec3 **)pVVar20 = local_e8;
        if (fVar29 < local_a0) {
          local_a0 = fVar29;
        }
        if (local_98 < fVar29) {
                    /* catch() { ... } // from try @ 00d9f444 with catch @ 00d9f738
                       catch() { ... } // from try @ 00d9f488 with catch @ 00d9f738 */
          local_98 = fVar29;
        }
        if (fVar30 < local_9c) {
          local_9c = fVar30;
        }
        if (local_94 < fVar30) {
          local_94 = fVar30;
                    /* try { // try from 00d9f75c to 00e9f7bb has its CatchHandler @ 00d9f75c
                       catch() { ... } // from try @ 00d9f75c with catch @ 00d9f75c
                       catch() { ... } // from try @ 00da04b0 with catch @ 00d9f75c */
        }
        uVar24 = uVar24 + 2;
        pVVar20 = pVVar20 + 0x18;
        puVar21 = puVar21 + 1;
      } while (uVar24 < (uint)(sVar7 * 2));
    }
    local_98 = local_98 - local_a0;
    local_94 = local_94 - local_9c;
    if (sVar8 != 0) {
      uVar24 = uVar22;
      if (uVar22 < 2) {
        uVar24 = 1;
      }
      uVar25 = (ulong)(*(int *)(lVar16 + 4) + 4);
      if (uVar24 < 0x10) {
LAB_00d9f8a0:
        uVar28 = 0;
      }
      else {
        uVar28 = uVar22;
        if (uVar22 < 2) {
          uVar28 = 1;
        }
        pvVar2 = (void *)(lVar4 + uVar25 * 2);
                    /* try { // try from 00d9f894 to 00e9f8a3 has its CatchHandler @ 00da05e8 */
        if ((pvVar14 < (void *)(lVar4 + (uVar28 + uVar25) * 2)) &&
           (pvVar2 < (void *)((long)pvVar14 + uVar28 * 2))) goto LAB_00d9f8a0;
        uVar28 = uVar24 & 0xfffffff0;
        puVar12 = (undefined8 *)((long)pvVar2 + 0x10);
        puVar18 = (undefined8 *)((long)pvVar14 + 0x10);
        uVar19 = uVar28;
        do {
          puVar10 = puVar12 + -1;
          uVar15 = puVar12[-2];
          uVar27 = puVar12[1];
          uVar26 = *puVar12;
          puVar12 = puVar12 + 4;
          uVar19 = uVar19 - 0x10;
          puVar18[-1] = *puVar10;
          puVar18[-2] = uVar15;
          puVar18[1] = uVar27;
          *puVar18 = uVar26;
          puVar18 = puVar18 + 4;
        } while (uVar19 != 0);
        if (uVar24 == uVar28) goto LAB_00d9f8c4;
      }
                    /* try { // try from 00d9f8a8 to 00e9f8b7 has its CatchHandler @ 00da05e4 */
      do {
        lVar17 = uVar28 * 2;
        uVar28 = uVar28 + 1;
        *(undefined2 *)((long)pvVar14 + lVar17) = *(undefined2 *)(lVar4 + uVar25 * 2 + lVar17);
      } while (uVar28 < uVar22);
    }
LAB_00d9f8c4:
    *(undefined4 *)(this + 0x188) = 0x3f800000;
    (**(code **)(*(long *)this_01 + 0x598))(this_01,*(undefined8 *)(lVar23 + 0x48));
    cocos2d::PolygonInfo::PolygonInfo((PolygonInfo *)&local_e8);
    local_d8 = CONCAT44(uVar5,(int)sVar7);
    local_e8 = pVVar13;
    uStack_e0 = pvVar14;
    uVar15 = (**(code **)(*(long *)this_01 + 1000))(this_01);
    cocos2d::Rect::operator=(aRStack_cc,(Rect *)&local_a0);
    cocos2d::Sprite::setPolygonInfo(this_01,(PolygonInfo *)&local_e8);
                    /* try { // try from 00d9f924 to 00e9fd7f has its CatchHandler @ 00da0584 */
    if (*(long *)(lVar16 + 0x10) == 0) {
      (**(code **)(*(long *)this_01 + 0x408))(this_01,uVar15);
    }
    else {
      (**(code **)(*(long *)this + 0x70))(this);
    }
    cocos2d::PolygonInfo::~PolygonInfo((PolygonInfo *)&local_e8);
  }
  *(undefined2 *)(this + 0xfa) = 0x101;
  this[0x90] = (CCSlot)0x1;
LAB_00d9f7c0:
  if (*(long *)(lVar9 + 0x28) == local_90) {
                    /* try { // try from 00d9f7f0 to 00e9f7ff has its CatchHandler @ 00da0564 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

