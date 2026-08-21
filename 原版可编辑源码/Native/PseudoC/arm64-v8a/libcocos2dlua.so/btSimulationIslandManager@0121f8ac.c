
/* btSimulationIslandManager::btSimulationIslandManager() */

void __thiscall
btSimulationIslandManager::btSimulationIslandManager(btSimulationIslandManager *this)

{
  *(undefined ***)this = &PTR__btSimulationIslandManager_01732438;
  btUnionFind::btUnionFind((btUnionFind *)(this + 8));
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x4c) = 0;
  this[0x40] = (btSimulationIslandManager)0x1;
  this[0x60] = (btSimulationIslandManager)0x1;
  this[0x68] = (btSimulationIslandManager)0x1;
  return;
}

