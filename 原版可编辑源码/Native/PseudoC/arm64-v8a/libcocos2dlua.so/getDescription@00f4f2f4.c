
/* cocos2d::TMXTiledMap::getDescription() const */

void __thiscall cocos2d::TMXTiledMap::getDescription(TMXTiledMap *this)

{
                    /* try { // try from 00f4f308 to 0104f313 has its CatchHandler @ 00f4f3f4 */
  StringUtils::format("<TMXTiledMap | Tag = %d, Layers = %d",(ulong)*(uint *)(this + 0x1a0),
                      (ulong)(*(long *)(this + 0x180) - *(long *)(this + 0x178)) >> 3);
  return;
}

