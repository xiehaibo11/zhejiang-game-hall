
/* cocos2d::TileMapAtlas::releaseMap() */

void __thiscall cocos2d::TileMapAtlas::releaseMap(TileMapAtlas *this)

{
                    /* try { // try from 00f579ac to 010579b3 has its CatchHandler @ 00f579fc */
  if (*(sImageTGA **)(this + 0x418) != (sImageTGA *)0x0) {
                    /* try { // try from 00f579b4 to 01057a17 has its CatchHandler @ 00f57984 */
    tgaDestroy(*(sImageTGA **)(this + 0x418));
  }
  *(undefined8 *)(this + 0x418) = 0;
  return;
}

