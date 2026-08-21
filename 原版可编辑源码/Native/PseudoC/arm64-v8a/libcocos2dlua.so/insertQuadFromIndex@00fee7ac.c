
/* cocos2d::TextureAtlas::insertQuadFromIndex(long, long) */

void __thiscall
cocos2d::TextureAtlas::insertQuadFromIndex(TextureAtlas *this,long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
                    /* catch() { ... } // from try @ 00fee71c with catch @ 00fee7ac */
  lVar3 = param_1 - param_2;
  if (lVar3 != 0) {
    lVar5 = *(long *)(this + 0x58);
    if (param_1 < param_2) {
      lVar2 = param_1 + 1;
      lVar4 = param_1;
    }
    else {
      lVar2 = param_2;
      lVar4 = param_2 + 1;
    }
    puVar6 = (undefined8 *)(lVar5 + param_1 * 0x60);
    uVar9 = puVar6[1];
    uVar7 = *puVar6;
    uVar13 = puVar6[3];
    uVar11 = puVar6[2];
    lVar1 = -lVar3;
    if (-1 < lVar3) {
      lVar1 = lVar3;
    }
    uVar10 = puVar6[9];
    uVar8 = puVar6[8];
    uVar14 = puVar6[0xb];
    uVar12 = puVar6[10];
    uVar16 = puVar6[5];
    uVar15 = puVar6[4];
    uVar18 = puVar6[7];
    uVar17 = puVar6[6];
    memmove((void *)(lVar5 + lVar4 * 0x60),(void *)(lVar5 + lVar2 * 0x60),lVar1 * 0x60);
    puVar6 = (undefined8 *)(*(long *)(this + 0x58) + param_2 * 0x60);
    puVar6[5] = uVar16;
    puVar6[4] = uVar15;
    puVar6[7] = uVar18;
    puVar6[6] = uVar17;
    puVar6[9] = uVar10;
    puVar6[8] = uVar8;
                    /* catch() { ... } // from try @ 00fee8bc with catch @ 00fee830
                       catch() { ... } // from try @ 00fee974 with catch @ 00fee830 */
    puVar6[0xb] = uVar14;
    puVar6[10] = uVar12;
    puVar6[1] = uVar9;
    *puVar6 = uVar7;
    puVar6[3] = uVar13;
    puVar6[2] = uVar11;
    this[0x3c] = (TextureAtlas)0x1;
  }
  return;
}

