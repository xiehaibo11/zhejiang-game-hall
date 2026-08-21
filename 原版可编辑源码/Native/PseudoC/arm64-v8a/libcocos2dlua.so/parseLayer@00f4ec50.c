
/* cocos2d::TMXTiledMap::parseLayer(cocos2d::TMXLayerInfo*, cocos2d::TMXMapInfo*) */

TMXLayer * __thiscall
cocos2d::TMXTiledMap::parseLayer(TMXTiledMap *this,TMXLayerInfo *param_1,TMXMapInfo *param_2)

{
  uint uVar1;
  ulong uVar2;
  TMXTilesetInfo *pTVar3;
  TMXLayer *this_00;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  
  if (*(undefined8 **)(param_2 + 0x70) != *(undefined8 **)(param_2 + 0x68)) {
    uVar5 = (uint)*(float *)(param_1 + 0x68);
    puVar4 = *(undefined8 **)(param_2 + 0x70) + -1;
    pTVar3 = (TMXTilesetInfo *)*puVar4;
    while( true ) {
      if (((int)*(float *)(param_1 + 0x6c) != 0) && (pTVar3 != (TMXTilesetInfo *)0x0)) {
        uVar6 = 0;
        iVar7 = 0;
        do {
          if (uVar5 != 0) {
            uVar8 = (ulong)uVar6;
            uVar1 = *(uint *)(*(long *)(param_1 + 0x70) + uVar8 * 4);
            uVar2 = (ulong)uVar5;
            while( true ) {
              if ((uVar1 != 0) &&
                 (((int)*(uint *)(pTVar3 + 0x40) < 0 ||
                  (*(uint *)(pTVar3 + 0x40) <= (uVar1 & 0x1fffffff))))) {
                    /* catch() { ... } // from try @ 00f4e568 with catch @ 00f4ecf4 */
                    /* catch() { ... } // from try @ 00f4ea20 with catch @ 00f4ecf8 */
                this_00 = (TMXLayer *)TMXLayer::create(pTVar3,param_1,param_2);
                    /* catch() { ... } // from try @ 00f4e990 with catch @ 00f4ecfc */
                    /* catch() { ... } // from try @ 00f4e588 with catch @ 00f4ed00 */
                if (this_00 == (TMXLayer *)0x0) {
                  return (TMXLayer *)0x0;
                }
                    /* catch() { ... } // from try @ 00f4e860 with catch @ 00f4ed04
                       catch() { ... } // from try @ 00f4eabc with catch @ 00f4ed04 */
                param_1[0x7a] = (TMXLayerInfo)0x0;
                TMXLayer::setupTiles(this_00);
                return this_00;
              }
              uVar2 = uVar2 - 1;
              uVar8 = (ulong)((int)uVar8 + 1);
              if (uVar2 == 0) break;
              uVar1 = *(uint *)(*(long *)(param_1 + 0x70) + uVar8 * 4);
            }
          }
          iVar7 = iVar7 + 1;
          uVar6 = uVar6 + uVar5;
        } while (iVar7 != (int)*(float *)(param_1 + 0x6c));
      }
                    /* try { // try from 00f4ec84 to 0104ed83 has its CatchHandler @ 00f4e470 */
      if (puVar4 == *(undefined8 **)(param_2 + 0x68)) break;
      puVar4 = puVar4 + -1;
      pTVar3 = (TMXTilesetInfo *)*puVar4;
    }
  }
  return (TMXLayer *)0x0;
}

