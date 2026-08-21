
/* cocos2d::TileMapAtlas::calculateItemsToRender() */

void __thiscall cocos2d::TileMapAtlas::calculateItemsToRender(TileMapAtlas *this)

{
  char *pcVar1;
  char cVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *(long *)(this + 0x418);
  *(undefined4 *)(this + 0x410) = 0;
  lVar5 = (long)*(short *)(lVar4 + 6);
  if (0 < lVar5) {
    sVar3 = *(short *)(lVar4 + 8);
    iVar6 = 0;
    lVar7 = 0;
    do {
      if (0 < sVar3) {
        lVar8 = 0;
        pcVar1 = (char *)(*(long *)(lVar4 + 0x10) + lVar7 * 3);
        cVar2 = *pcVar1;
        while( true ) {
          if (cVar2 != '\0') {
            iVar6 = iVar6 + 1;
            *(int *)(this + 0x410) = iVar6;
          }
          lVar8 = lVar8 + 1;
          pcVar1 = pcVar1 + lVar5 * 3;
          if (sVar3 <= lVar8) break;
          cVar2 = *pcVar1;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar5);
  }
  return;
}

