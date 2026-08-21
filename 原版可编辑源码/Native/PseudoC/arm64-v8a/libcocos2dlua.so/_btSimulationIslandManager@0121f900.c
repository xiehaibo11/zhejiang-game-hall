
/* btSimulationIslandManager::~btSimulationIslandManager() */

void __thiscall
btSimulationIslandManager::~btSimulationIslandManager(btSimulationIslandManager *this)

{
  *(undefined ***)this = &PTR__btSimulationIslandManager_01732438;
  if (*(void **)(this + 0x58) != (void *)0x0) {
    if (this[0x60] != (btSimulationIslandManager)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x58));
    }
    *(undefined8 *)(this + 0x58) = 0;
  }
  this[0x60] = (btSimulationIslandManager)0x1;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x4c) = 0;
  if (*(void **)(this + 0x38) != (void *)0x0) {
    if (this[0x40] != (btSimulationIslandManager)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x38));
    }
    *(undefined8 *)(this + 0x38) = 0;
  }
  this[0x40] = (btSimulationIslandManager)0x1;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  btUnionFind::~btUnionFind((btUnionFind *)(this + 8));
  return;
}

