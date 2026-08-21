
/* dragonBones::CCFactory::getSoundEventManager() const */

void __thiscall dragonBones::CCFactory::getSoundEventManager(CCFactory *this)

{
  if (*(long *)(*(long *)(this + 0x40) + 0x40) != 0) {
                    /* catch() { ... } // from try @ 00d9da0c with catch @ 00d9f394 */
    __dynamic_cast(*(long *)(*(long *)(this + 0x40) + 0x40),&IArmatureProxy::typeinfo,
                   &CCArmatureDisplay::typeinfo,0xffffffffffffffff);
    return;
  }
  return;
}

