
/* dragonBones::CCArmatureCacheDisplay::getRenderOrder() const */

undefined4 __thiscall
dragonBones::CCArmatureCacheDisplay::getRenderOrder(CCArmatureCacheDisplay *this)

{
  if (*(long *)(this + 0xc0) != 0) {
    return *(undefined4 *)(*(long *)(this + 0xc0) + 0x110);
  }
  return 0;
}

