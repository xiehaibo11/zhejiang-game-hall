
/* cocos2d::TextureAtlas::insertQuads(cocos2d::V3F_C4B_T2F_Quad*, long, long) */

void __thiscall
cocos2d::TextureAtlas::insertQuads
          (TextureAtlas *this,V3F_C4B_T2F_Quad *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  V3F_C4B_T2F_Quad *pVVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
                    /* try { // try from 00fee6f0 to 010ee6f7 has its CatchHandler @ 00fee7a4 */
  lVar3 = *(long *)(this + 0x40) + ~param_2;
  *(long *)(this + 0x40) = *(long *)(this + 0x40) + param_3;
  if (0 < lVar3) {
                    /* try { // try from 00fee71c to 010ee73b has its CatchHandler @ 00fee7ac */
    memmove((void *)(*(long *)(this + 0x58) + (param_3 + param_2) * 0x60),
            (void *)(*(long *)(this + 0x58) + param_2 * 0x60),lVar3 * 0x60);
                    /* try { // try from 00fee73c to 010ee7cf has its CatchHandler @ 00fee6b4 */
  }
  if (0 < param_3) {
    lVar4 = param_3 + param_2;
    lVar3 = param_2 * 0x60;
    do {
      uVar5 = *(undefined8 *)param_1;
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      param_2 = param_2 + 1;
      puVar1 = (undefined8 *)(*(long *)(this + 0x58) + lVar3);
      puVar1[1] = *(undefined8 *)(param_1 + 8);
      *puVar1 = uVar5;
      puVar1[3] = uVar7;
      puVar1[2] = uVar6;
      pVVar2 = param_1 + 0x48;
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      uVar7 = *(undefined8 *)(param_1 + 0x58);
      uVar6 = *(undefined8 *)(param_1 + 0x50);
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      uVar11 = *(undefined8 *)(param_1 + 0x38);
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      param_1 = param_1 + 0x60;
      lVar3 = lVar3 + 0x60;
      puVar1[9] = *(undefined8 *)pVVar2;
      puVar1[8] = uVar5;
      puVar1[0xb] = uVar7;
      puVar1[10] = uVar6;
      puVar1[5] = uVar9;
      puVar1[4] = uVar8;
      puVar1[7] = uVar11;
      puVar1[6] = uVar10;
    } while (param_2 < lVar4);
  }
  this[0x3c] = (TextureAtlas)0x1;
                    /* catch() { ... } // from try @ 00fee6f0 with catch @ 00fee7a4 */
  return;
}

