
/* btSimulationIslandManager::initUnionFind(int) */

void __thiscall
btSimulationIslandManager::initUnionFind(btSimulationIslandManager *this,int param_1)

{
  btUnionFind::reset((btUnionFind *)(this + 8),param_1);
  return;
}

