
/* cocos2d::SpriteBatchNode::updateAtlasIndex(cocos2d::Sprite*, long*) */

void __thiscall
cocos2d::SpriteBatchNode::updateAtlasIndex(SpriteBatchNode *this,Sprite *param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  Sprite *pSVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  
                    /* catch() { ... } // from try @ 00f42400 with catch @ 00f425cc */
                    /* catch() { ... } // from try @ 00f423f8 with catch @ 00f425d4 */
                    /* catch() { ... } // from try @ 00f4243c with catch @ 00f425e4 */
                    /* catch() { ... } // from try @ 00f42418 with catch @ 00f425e8 */
  plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x240))(param_1);
  if ((undefined8 *)plVar3[1] != (undefined8 *)*plVar3) {
    iVar2 = (**(code **)(**(long **)*plVar3 + 0x30))();
    if (iVar2 < 0) {
      bVar1 = true;
    }
    else {
      lVar12 = *(long *)(param_1 + 0x308);
      *(long *)(param_1 + 0x308) = *param_2;
      lVar13 = *param_2;
      if (lVar12 != lVar13) {
        lVar4 = TextureAtlas::getQuads(*(TextureAtlas **)(this + 0x300));
        puVar7 = (undefined8 *)(lVar4 + lVar12 * 0x60);
        uVar21 = puVar7[1];
        uVar18 = *puVar7;
        uVar16 = puVar7[3];
        uVar10 = puVar7[2];
        puVar5 = (undefined8 *)(lVar4 + lVar13 * 0x60);
        uVar17 = puVar7[9];
        uVar14 = puVar7[8];
        uVar22 = puVar7[0xb];
        uVar19 = puVar7[10];
        uVar26 = puVar7[5];
        uVar24 = puVar7[4];
        uVar30 = puVar7[7];
        uVar28 = puVar7[6];
        uVar15 = puVar5[8];
        uVar23 = puVar5[0xb];
        uVar20 = puVar5[10];
        uVar27 = puVar5[5];
        uVar25 = puVar5[4];
        uVar31 = puVar5[7];
        uVar29 = puVar5[6];
        puVar7[9] = puVar5[9];
        puVar7[8] = uVar15;
        puVar7[0xb] = uVar23;
        puVar7[10] = uVar20;
        puVar7[5] = uVar27;
        puVar7[4] = uVar25;
        puVar7[7] = uVar31;
        puVar7[6] = uVar29;
        uVar15 = *puVar5;
        uVar23 = puVar5[3];
        uVar20 = puVar5[2];
        puVar7[1] = puVar5[1];
        *puVar7 = uVar15;
        puVar7[3] = uVar23;
        puVar7[2] = uVar20;
        puVar5[1] = uVar21;
        *puVar5 = uVar18;
        puVar5[3] = uVar16;
        puVar5[2] = uVar10;
        puVar5[9] = uVar17;
        puVar5[8] = uVar14;
        puVar5[0xb] = uVar22;
        puVar5[10] = uVar19;
        puVar5[5] = uVar26;
        puVar5[4] = uVar24;
        puVar5[7] = uVar30;
        puVar5[6] = uVar28;
        lVar4 = *(long *)(this + 0x388);
        lVar9 = *(long *)(lVar4 + lVar13 * 8);
        *(long *)(lVar9 + 0x308) = lVar12;
        uVar10 = *(undefined8 *)(lVar4 + lVar12 * 8);
        *(long *)(lVar4 + lVar12 * 8) = lVar9;
        *(undefined8 *)(lVar4 + lVar13 * 8) = uVar10;
        lVar12 = *param_2;
      }
      bVar1 = false;
                    /* try { // try from 00f426b4 to 0104280b has its CatchHandler @ 00f426b4
                       catch() { ... } // from try @ 00f426b4 with catch @ 00f426b4
                       catch() { ... } // from try @ 00f42a14 with catch @ 00f426b4 */
      *param_2 = lVar12 + 1;
    }
    puVar5 = (undefined8 *)*plVar3;
    puVar7 = (undefined8 *)plVar3[1];
    if (puVar5 != puVar7) {
      pSVar11 = (Sprite *)*puVar5;
      if (bVar1) goto LAB_00f42700;
      do {
        bVar1 = false;
        while( true ) {
          updateAtlasIndex(this,pSVar11,param_2);
          puVar5 = puVar5 + 1;
          if (puVar7 == puVar5) goto LAB_00f427c4;
          pSVar11 = (Sprite *)*puVar5;
          if (!bVar1) break;
LAB_00f42700:
          iVar2 = (**(code **)(*(long *)pSVar11 + 0x30))(pSVar11);
          if (iVar2 < 0) {
            bVar1 = true;
          }
          else {
            lVar13 = *(long *)(param_1 + 0x308);
            *(long *)(param_1 + 0x308) = *param_2;
            lVar12 = *param_2;
            if (lVar13 != lVar12) {
              lVar4 = TextureAtlas::getQuads(*(TextureAtlas **)(this + 0x300));
              puVar6 = (undefined8 *)(lVar4 + lVar13 * 0x60);
              uVar21 = puVar6[1];
              uVar18 = *puVar6;
              uVar16 = puVar6[3];
              uVar10 = puVar6[2];
              puVar8 = (undefined8 *)(lVar4 + lVar12 * 0x60);
              uVar17 = puVar6[9];
              uVar14 = puVar6[8];
              uVar22 = puVar6[0xb];
              uVar19 = puVar6[10];
              uVar26 = puVar6[5];
              uVar24 = puVar6[4];
              uVar30 = puVar6[7];
              uVar28 = puVar6[6];
              uVar15 = puVar8[8];
              uVar23 = puVar8[0xb];
              uVar20 = puVar8[10];
              uVar27 = puVar8[5];
              uVar25 = puVar8[4];
              uVar31 = puVar8[7];
              uVar29 = puVar8[6];
              puVar6[9] = puVar8[9];
              puVar6[8] = uVar15;
              puVar6[0xb] = uVar23;
              puVar6[10] = uVar20;
              puVar6[5] = uVar27;
              puVar6[4] = uVar25;
              puVar6[7] = uVar31;
              puVar6[6] = uVar29;
              uVar15 = *puVar8;
              uVar23 = puVar8[3];
              uVar20 = puVar8[2];
              puVar6[1] = puVar8[1];
              *puVar6 = uVar15;
              puVar6[3] = uVar23;
              puVar6[2] = uVar20;
              puVar8[1] = uVar21;
              *puVar8 = uVar18;
              puVar8[3] = uVar16;
              puVar8[2] = uVar10;
              puVar8[9] = uVar17;
              puVar8[8] = uVar14;
              puVar8[0xb] = uVar22;
              puVar8[10] = uVar19;
              puVar8[5] = uVar26;
              puVar8[4] = uVar24;
              puVar8[7] = uVar30;
              puVar8[6] = uVar28;
              lVar4 = *(long *)(this + 0x388);
              lVar9 = *(long *)(lVar4 + lVar12 * 8);
              *(long *)(lVar9 + 0x308) = lVar13;
              uVar10 = *(undefined8 *)(lVar4 + lVar13 * 8);
              *(long *)(lVar4 + lVar13 * 8) = lVar9;
              *(undefined8 *)(lVar4 + lVar12 * 8) = uVar10;
              lVar13 = *param_2;
            }
            bVar1 = false;
            *param_2 = lVar13 + 1;
          }
        }
      } while( true );
    }
LAB_00f427c4:
    if (!bVar1) {
      return;
    }
  }
  lVar13 = *(long *)(param_1 + 0x308);
  *(long *)(param_1 + 0x308) = *param_2;
  lVar12 = *param_2;
  if (lVar13 != lVar12) {
    lVar4 = TextureAtlas::getQuads(*(TextureAtlas **)(this + 0x300));
    puVar7 = (undefined8 *)(lVar4 + lVar13 * 0x60);
    uVar21 = puVar7[1];
    uVar18 = *puVar7;
    uVar16 = puVar7[3];
    uVar10 = puVar7[2];
    puVar5 = (undefined8 *)(lVar4 + lVar12 * 0x60);
    uVar17 = puVar7[9];
    uVar14 = puVar7[8];
    uVar22 = puVar7[0xb];
    uVar19 = puVar7[10];
    uVar26 = puVar7[5];
    uVar24 = puVar7[4];
    uVar30 = puVar7[7];
    uVar28 = puVar7[6];
                    /* try { // try from 00f4280c to 01042813 has its CatchHandler @ 00f42cf8 */
    uVar15 = puVar5[8];
    uVar23 = puVar5[0xb];
    uVar20 = puVar5[10];
    uVar27 = puVar5[5];
    uVar25 = puVar5[4];
    uVar31 = puVar5[7];
    uVar29 = puVar5[6];
    puVar7[9] = puVar5[9];
    puVar7[8] = uVar15;
    puVar7[0xb] = uVar23;
    puVar7[10] = uVar20;
    puVar7[5] = uVar27;
    puVar7[4] = uVar25;
    puVar7[7] = uVar31;
    puVar7[6] = uVar29;
    uVar15 = *puVar5;
    uVar23 = puVar5[3];
    uVar20 = puVar5[2];
    puVar7[1] = puVar5[1];
    *puVar7 = uVar15;
    puVar7[3] = uVar23;
    puVar7[2] = uVar20;
    puVar5[1] = uVar21;
    *puVar5 = uVar18;
    puVar5[3] = uVar16;
    puVar5[2] = uVar10;
    puVar5[9] = uVar17;
    puVar5[8] = uVar14;
    puVar5[0xb] = uVar22;
    puVar5[10] = uVar19;
                    /* try { // try from 00f42844 to 0104284b has its CatchHandler @ 00f42d10 */
    puVar5[5] = uVar26;
    puVar5[4] = uVar24;
    puVar5[7] = uVar30;
    puVar5[6] = uVar28;
    lVar4 = *(long *)(this + 0x388);
    lVar9 = *(long *)(lVar4 + lVar12 * 8);
    *(long *)(lVar9 + 0x308) = lVar13;
    uVar10 = *(undefined8 *)(lVar4 + lVar13 * 8);
    *(long *)(lVar4 + lVar13 * 8) = lVar9;
    *(undefined8 *)(lVar4 + lVar12 * 8) = uVar10;
    lVar13 = *param_2;
  }
  *param_2 = lVar13 + 1;
  return;
}

