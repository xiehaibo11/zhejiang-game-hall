
/* dragonBones::CCFactory::getSoundEventManager() const */

void __thiscall dragonBones::CCFactory::getSoundEventManager(CCFactory *this)

{
  if (*(long *)(*(long *)(this + 0x40) + 0x40) != 0) {
    __dynamic_cast(*(long *)(*(long *)(this + 0x40) + 0x40),&IArmatureProxy::typeinfo,
                   &CCArmatureDisplay::typeinfo,0xffffffffffffffff);
  }
  return;
}

