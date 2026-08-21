
/* dragonBones::CCArmatureDisplay::getRootDisplay() */

CCArmatureDisplay * __thiscall
dragonBones::CCArmatureDisplay::getRootDisplay(CCArmatureDisplay *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(this + 0x10) + 0x30);
  if (lVar2 != 0) {
    do {
      plVar1 = (long *)(lVar2 + 0x68);
      lVar2 = *(long *)(*plVar1 + 0x30);
    } while (lVar2 != 0);
    this = *(CCArmatureDisplay **)(*plVar1 + 0xb8);
  }
  return this;
}

