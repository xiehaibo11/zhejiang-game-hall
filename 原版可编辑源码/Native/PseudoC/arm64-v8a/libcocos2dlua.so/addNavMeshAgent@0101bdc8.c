
/* cocos2d::NavMesh::addNavMeshAgent(cocos2d::NavMeshAgent*) */

void __thiscall cocos2d::NavMesh::addNavMeshAgent(NavMesh *this,NavMeshAgent *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x68);
  plVar2 = *(long **)(this + 0x70);
  if ((plVar2 != plVar3) && (*plVar3 != 0)) {
    do {
      if (plVar2 + -1 == plVar3) {
        return;
      }
      plVar1 = plVar3 + 1;
      plVar3 = plVar3 + 1;
    } while (*plVar1 != 0);
  }
  if (plVar3 != plVar2) {
    NavMeshAgent::addTo(param_1,*(dtCrowd **)(this + 0x38));
    NavMeshAgent::setNavMeshQuery(param_1,*(dtNavMeshQuery **)(this + 0x30));
    Ref::retain((Ref *)param_1);
    *plVar3 = (long)param_1;
  }
  return;
}

