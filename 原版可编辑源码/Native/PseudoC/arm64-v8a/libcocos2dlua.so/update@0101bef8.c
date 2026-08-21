
/* cocos2d::NavMesh::update(float) */

void __thiscall cocos2d::NavMesh::update(NavMesh *this,float param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  puVar3 = *(undefined8 **)(this + 0x70);
  for (puVar1 = *(undefined8 **)(this + 0x68); puVar1 != puVar3; puVar1 = puVar1 + 1) {
    if ((NavMeshAgent *)*puVar1 != (NavMeshAgent *)0x0) {
      NavMeshAgent::preUpdate((NavMeshAgent *)*puVar1,param_1);
    }
  }
  plVar4 = *(long **)(this + 0x88);
  for (plVar2 = *(long **)(this + 0x80); plVar2 != plVar4; plVar2 = plVar2 + 1) {
    if (*plVar2 != 0) {
      NavMeshObstacle::preUpdate(param_1);
    }
  }
  if (*(dtCrowd **)(this + 0x38) != (dtCrowd *)0x0) {
    dtCrowd::update(*(dtCrowd **)(this + 0x38),param_1,(dtCrowdAgentDebugInfo *)0x0);
  }
  if (*(dtNavMesh **)(this + 0x40) != (dtNavMesh *)0x0) {
    dtTileCache::update(param_1,*(dtNavMesh **)(this + 0x40));
  }
  plVar4 = *(long **)(this + 0x70);
  for (plVar2 = *(long **)(this + 0x68); plVar2 != plVar4; plVar2 = plVar2 + 1) {
    if (*plVar2 != 0) {
      NavMeshAgent::postUpdate(param_1);
    }
  }
  plVar4 = *(long **)(this + 0x88);
  for (plVar2 = *(long **)(this + 0x80); plVar2 != plVar4; plVar2 = plVar2 + 1) {
    if (*plVar2 != 0) {
      NavMeshObstacle::postUpdate(param_1);
    }
  }
  return;
}

