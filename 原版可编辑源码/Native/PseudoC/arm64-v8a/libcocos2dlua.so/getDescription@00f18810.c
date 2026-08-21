
/* cocos2d::LayerMultiplex::getDescription() const */

void __thiscall cocos2d::LayerMultiplex::getDescription(LayerMultiplex *this)

{
  StringUtils::format("<LayerMultiplex | Tag = %d, Layers = %d",(ulong)*(uint *)(this + 0x1a0),
                      (ulong)(*(long *)(this + 0x180) - *(long *)(this + 0x178)) >> 3);
  return;
}

