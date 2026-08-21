
/* cocos2d::SpriteBatchNode::swap(long, long) */

void __thiscall cocos2d::SpriteBatchNode::swap(SpriteBatchNode *this,long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
                    /* try { // try from 00f428a0 to 010428eb has its CatchHandler @ 00f42cf4 */
  lVar1 = TextureAtlas::getQuads(*(TextureAtlas **)(this + 0x300));
  puVar3 = (undefined8 *)(lVar1 + param_1 * 0x60);
  uVar13 = puVar3[1];
  uVar10 = *puVar3;
  uVar8 = puVar3[3];
  uVar5 = puVar3[2];
  puVar2 = (undefined8 *)(lVar1 + param_2 * 0x60);
  uVar9 = puVar3[9];
  uVar6 = puVar3[8];
  uVar14 = puVar3[0xb];
  uVar11 = puVar3[10];
  uVar18 = puVar3[5];
  uVar16 = puVar3[4];
  uVar22 = puVar3[7];
  uVar20 = puVar3[6];
  uVar7 = puVar2[8];
  uVar15 = puVar2[0xb];
  uVar12 = puVar2[10];
  uVar19 = puVar2[5];
  uVar17 = puVar2[4];
  uVar23 = puVar2[7];
  uVar21 = puVar2[6];
  puVar3[9] = puVar2[9];
  puVar3[8] = uVar7;
  puVar3[0xb] = uVar15;
  puVar3[10] = uVar12;
  puVar3[5] = uVar19;
  puVar3[4] = uVar17;
  puVar3[7] = uVar23;
  puVar3[6] = uVar21;
  uVar7 = *puVar2;
  uVar15 = puVar2[3];
  uVar12 = puVar2[2];
  puVar3[1] = puVar2[1];
  *puVar3 = uVar7;
  puVar3[3] = uVar15;
  puVar3[2] = uVar12;
  puVar2[1] = uVar13;
  *puVar2 = uVar10;
  puVar2[3] = uVar8;
  puVar2[2] = uVar5;
  puVar2[9] = uVar9;
  puVar2[8] = uVar6;
  puVar2[0xb] = uVar14;
  puVar2[10] = uVar11;
  puVar2[5] = uVar18;
  puVar2[4] = uVar16;
  puVar2[7] = uVar22;
  puVar2[6] = uVar20;
  lVar1 = *(long *)(this + 0x388);
  lVar4 = *(long *)(lVar1 + param_2 * 8);
  *(long *)(lVar4 + 0x308) = param_1;
  uVar5 = *(undefined8 *)(lVar1 + param_1 * 8);
  *(long *)(lVar1 + param_1 * 8) = lVar4;
  *(undefined8 *)(lVar1 + param_2 * 8) = uVar5;
  return;
}

