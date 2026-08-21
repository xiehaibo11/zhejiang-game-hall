
/* cocos2d::NavMesh::removeNavMeshAgent(cocos2d::NavMeshAgent*) */

void __thiscall cocos2d::NavMesh::removeNavMeshAgent(NavMesh *this,NavMeshAgent *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x68);
  puVar2 = *(undefined8 **)(this + 0x70);
  if ((puVar2 != puVar3) && ((NavMeshAgent *)*puVar3 != param_1)) {
    do {
      if (puVar2 + -1 == puVar3) {
        return;
      }
      puVar1 = puVar3 + 1;
      puVar3 = puVar3 + 1;
    } while ((NavMeshAgent *)*puVar1 != param_1);
  }
  if (puVar3 != puVar2) {
    NavMeshAgent::removeFrom(param_1,*(dtCrowd **)(this + 0x38));
    NavMeshAgent::setNavMeshQuery(param_1,(dtNavMeshQuery *)0x0);
    Ref::release((Ref *)param_1);
    *puVar3 = 0;
  }
  return;
}

