
/* cocos2d::experimental::TMXTiledMap::parseLayer(cocos2d::TMXLayerInfo*, cocos2d::TMXMapInfo*) */

TMXLayer * __thiscall
cocos2d::experimental::TMXTiledMap::parseLayer
          (TMXTiledMap *this,TMXLayerInfo *param_1,TMXMapInfo *param_2)

{
  uint uVar1;
  long lVar2;
  TMXTilesetInfo *pTVar3;
  TMXLayer *this_00;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  Size::Size((Size *)&local_40,(Size *)(param_1 + 0x68));
  puVar4 = *(undefined8 **)(param_2 + 0x70);
  do {
    do {
      if (puVar4 == *(undefined8 **)(param_2 + 0x68)) {
        this_00 = (TMXLayer *)0x0;
LAB_00efc2d4:
        if (*(long *)(lVar2 + 0x28) == local_38) {
          return this_00;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      puVar4 = puVar4 + -1;
      pTVar3 = (TMXTilesetInfo *)*puVar4;
                    /* try { // try from 00efc240 to 00ffc297 has its CatchHandler @ 00efc5b0 */
    } while ((fStack_3c <= 0.0) || (pTVar3 == (TMXTilesetInfo *)0x0));
    iVar5 = 0;
    fVar7 = 0.0;
    do {
      if (0.0 < local_40) {
        fVar8 = 0.0;
        iVar6 = 1;
        do {
          uVar1 = *(uint *)(*(long *)(param_1 + 0x70) +
                           (ulong)(uint)(int)(local_40 * fVar7 + fVar8) * 4);
          if ((uVar1 != 0) && (*(uint *)(pTVar3 + 0x40) <= (uVar1 & 0x1fffffff))) {
                    /* try { // try from 00efc2b8 to 00ffc317 has its CatchHandler @ 00efc5b4 */
            this_00 = (TMXLayer *)TMXLayer::create(pTVar3,param_1,param_2);
            param_1[0x7a] = (TMXLayerInfo)0x0;
            TMXLayer::setupTiles(this_00);
            goto LAB_00efc2d4;
          }
          fVar8 = (float)iVar6;
          iVar6 = iVar6 + 1;
        } while (fVar8 < local_40);
      }
      iVar5 = iVar5 + 1;
      fVar7 = (float)iVar5;
    } while (fVar7 < fStack_3c);
  } while( true );
}

