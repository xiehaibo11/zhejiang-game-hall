
/* dragonBones::CCArmatureDisplay::getDebugData() const */

undefined8 __thiscall dragonBones::CCArmatureDisplay::getDebugData(CCArmatureDisplay *this)

{
  if (*(long *)(this + 0x30) != 0) {
    return *(undefined8 *)(*(long *)(this + 0x30) + 0xa8);
  }
  return 0;
}

