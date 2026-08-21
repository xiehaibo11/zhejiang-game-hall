
/* cocos2d::experimental::TMXTiledMap::getDescription() const */

void __thiscall cocos2d::experimental::TMXTiledMap::getDescription(TMXTiledMap *this)

{
  StringUtils::format("<FastTMXTiledMap | Tag = %d, Layers = %d",(ulong)*(uint *)(this + 0x1a0),
                      (ulong)(*(long *)(this + 0x180) - *(long *)(this + 0x178)) >> 3);
  return;
}

