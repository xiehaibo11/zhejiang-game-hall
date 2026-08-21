
/* cocos2d::renderer::SlicedSprite3D::generateWorldVertices() */

void __thiscall cocos2d::renderer::SlicedSprite3D::generateWorldVertices(SlicedSprite3D *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  RenderData *this_00;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  
  this_00 = (RenderData *)RenderDataList::getRenderData(*(RenderDataList **)(this + 0x38),0);
  puVar5 = (undefined4 *)RenderData::getVertices(this_00);
  puVar6 = *(undefined4 **)(this + 0x98);
  uVar3 = *(uint *)(this + 0x58);
  uVar1 = *puVar6;
  uVar2 = puVar6[1];
  uVar4 = uVar3 >> 2;
  uVar7 = (ulong)uVar4;
                    /* try { // try from 009d0884 to 00ad091f has its CatchHandler @ 009cfc60 */
  puVar5[1] = uVar2;
  puVar5[2] = 0;
  *puVar5 = uVar1;
                    /* catch() { ... } // from try @ 009d042c with catch @ 009d088c */
  uVar1 = puVar6[2];
                    /* catch() { ... } // from try @ 009d0384 with catch @ 009d0890
                       catch() { ... } // from try @ 009d03b4 with catch @ 009d0890
                       catch() { ... } // from try @ 009d03e4 with catch @ 009d0890
                       catch() { ... } // from try @ 009d0414 with catch @ 009d0890 */
  puVar8 = puVar5 + uVar7;
  puVar8[1] = uVar2;
  puVar8[2] = 0;
                    /* catch() { ... } // from try @ 009d037c with catch @ 009d08a0
                       catch() { ... } // from try @ 009d03ac with catch @ 009d08a0
                       catch() { ... } // from try @ 009d03dc with catch @ 009d08a0
                       catch() { ... } // from try @ 009d040c with catch @ 009d08a0 */
  *puVar8 = uVar1;
                    /* catch() { ... } // from try @ 009cfce0 with catch @ 009d08b0 */
  puVar8 = puVar5 + uVar7 * 3;
                    /* catch() { ... } // from try @ 009cfcd4 with catch @ 009d08b4 */
  puVar5[uVar4 << 1] = puVar6[4];
                    /* catch() { ... } // from try @ 009cfcb4 with catch @ 009d08b8 */
  *(undefined4 *)((long)puVar5 + ((ulong)uVar4 << 3 | 4)) = uVar2;
  (puVar5 + (uVar4 << 1))[2] = 0;
  uVar1 = puVar6[6];
  puVar8[1] = uVar2;
  puVar8[2] = 0;
                    /* catch() { ... } // from try @ 009cfcec with catch @ 009d08c8
                       catch() { ... } // from try @ 009d0448 with catch @ 009d08c8 */
  *puVar8 = uVar1;
  uVar1 = puVar6[3];
  puVar5[(ulong)uVar3 & 0xfffffffc] = *puVar6;
  *(undefined4 *)((long)puVar5 + ((ulong)(uVar3 >> 2) << 4 | 4)) = uVar1;
  *(undefined4 *)((long)puVar5 + ((ulong)(uVar3 >> 2) << 4 | 8)) = 0;
  uVar2 = puVar6[2];
  puVar8 = puVar5 + uVar7 * 5;
  puVar8[1] = uVar1;
  puVar8[2] = 0;
  *puVar8 = uVar2;
                    /* try { // try from 009d0920 to 00ad0977 has its CatchHandler @ 009d0920
                       catch() { ... } // from try @ 009d0920 with catch @ 009d0920
                       catch() { ... } // from try @ 009d0c14 with catch @ 009d0920 */
  puVar5[uVar7 * 6] = puVar6[4];
  *(undefined4 *)((long)puVar5 + (uVar7 * 0x18 | 4)) = uVar1;
  (puVar5 + uVar7 * 6)[2] = 0;
  uVar2 = puVar6[6];
  puVar8 = puVar5 + uVar7 * 7;
  puVar8[1] = uVar1;
  puVar8[2] = 0;
  *puVar8 = uVar2;
  uVar1 = puVar6[5];
  puVar5[uVar7 * 8] = *puVar6;
  *(undefined4 *)((long)puVar5 + (uVar7 << 5 | 4)) = uVar1;
  *(undefined4 *)((long)puVar5 + (uVar7 << 5 | 8)) = 0;
  uVar2 = puVar6[2];
                    /* try { // try from 009d0978 to 00ad098f has its CatchHandler @ 009d0cc8 */
  puVar8 = puVar5 + uVar7 * 9;
  puVar8[1] = uVar1;
  puVar8[2] = 0;
  *puVar8 = uVar2;
                    /* try { // try from 009d0998 to 00ad09a3 has its CatchHandler @ 009d0cc4 */
  puVar5[uVar7 * 10] = puVar6[4];
  *(undefined4 *)((long)puVar5 + (uVar7 * 0x28 | 4)) = uVar1;
                    /* try { // try from 009d09a4 to 00ad09af has its CatchHandler @ 009d0cc0 */
  (puVar5 + uVar7 * 10)[2] = 0;
  uVar2 = puVar6[6];
                    /* try { // try from 009d09b0 to 00ad0a4b has its CatchHandler @ 009d0cd8 */
  puVar8 = puVar5 + uVar7 * 0xb;
  puVar8[1] = uVar1;
  puVar8[2] = 0;
  *puVar8 = uVar2;
  uVar1 = puVar6[7];
  puVar5[uVar7 * 0xc] = *puVar6;
  *(undefined4 *)((long)puVar5 + (uVar7 * 0x30 | 4)) = uVar1;
  *(undefined4 *)((long)puVar5 + (uVar7 * 0x30 | 8)) = 0;
  uVar2 = puVar6[2];
  puVar8 = puVar5 + uVar7 * 0xd;
  puVar8[1] = uVar1;
  puVar8[2] = 0;
  *puVar8 = uVar2;
  puVar5[uVar7 * 0xe] = puVar6[4];
  *(undefined4 *)((long)puVar5 + (uVar7 * 0x38 | 4)) = uVar1;
  (puVar5 + uVar7 * 0xe)[2] = 0;
  uVar2 = puVar6[6];
  puVar5 = puVar5 + uVar7 * 0xf;
  puVar5[2] = 0;
  *puVar5 = uVar2;
  puVar5[1] = uVar1;
  return;
}

