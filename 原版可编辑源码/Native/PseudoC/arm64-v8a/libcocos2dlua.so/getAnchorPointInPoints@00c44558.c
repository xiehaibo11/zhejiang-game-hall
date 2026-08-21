
/* cocostudio::DisplayManager::getAnchorPointInPoints() const */

undefined4 __thiscall cocostudio::DisplayManager::getAnchorPointInPoints(DisplayManager *this)

{
  undefined4 *puVar1;
  
  if (*(long **)(this + 0x40) != (long *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(**(long **)(this + 0x40) + 0x158))();
    return *puVar1;
  }
  return 0;
}

