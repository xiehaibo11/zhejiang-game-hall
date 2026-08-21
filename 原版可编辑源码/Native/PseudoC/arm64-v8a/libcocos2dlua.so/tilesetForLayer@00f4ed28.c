
/* cocos2d::TMXTiledMap::tilesetForLayer(cocos2d::TMXLayerInfo*, cocos2d::TMXMapInfo*) */

long __thiscall
cocos2d::TMXTiledMap::tilesetForLayer(TMXTiledMap *this,TMXLayerInfo *param_1,TMXMapInfo *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  
  if (*(long **)(param_2 + 0x70) != *(long **)(param_2 + 0x68)) {
    uVar5 = (uint)*(float *)(param_1 + 0x68);
                    /* catch() { ... } // from try @ 00f4e4f4 with catch @ 00f4ed3c */
                    /* catch() { ... } // from try @ 00f4e78c with catch @ 00f4ed40 */
    plVar4 = *(long **)(param_2 + 0x70) + -1;
                    /* catch() { ... } // from try @ 00f4e760 with catch @ 00f4ed44
                       catch() { ... } // from try @ 00f4e82c with catch @ 00f4ed44
                       catch() { ... } // from try @ 00f4e964 with catch @ 00f4ed44
                       catch() { ... } // from try @ 00f4e9c8 with catch @ 00f4ed44 */
    lVar3 = *plVar4;
    while( true ) {
                    /* catch() { ... } // from try @ 00f4e4fc with catch @ 00f4ed48 */
      if ((lVar3 != 0) && ((int)*(float *)(param_1 + 0x6c) != 0)) {
        uVar6 = 0;
        iVar7 = 0;
        do {
          if (uVar5 != 0) {
            uVar8 = (ulong)uVar6;
            uVar1 = *(uint *)(*(long *)(param_1 + 0x70) + uVar8 * 4);
            uVar2 = (ulong)uVar5;
            while( true ) {
              if ((uVar1 != 0) &&
                 (((int)*(uint *)(lVar3 + 0x40) < 0 ||
                  (*(uint *)(lVar3 + 0x40) <= (uVar1 & 0x1fffffff))))) {
                return lVar3;
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
      if (plVar4 == *(long **)(param_2 + 0x68)) break;
      plVar4 = plVar4 + -1;
      lVar3 = *plVar4;
                    /* catch() { ... } // from try @ 00f4e5f8 with catch @ 00f4ed58 */
    }
  }
  return 0;
}

