
/* dragonBones::CCArmatureDisplay::getRenderOrder() const */

undefined4 __thiscall dragonBones::CCArmatureDisplay::getRenderOrder(CCArmatureDisplay *this)

{
  if (*(long *)(this + 0xa0) != 0) {
    return *(undefined4 *)(*(long *)(this + 0xa0) + 0x110);
  }
  return 0;
}

