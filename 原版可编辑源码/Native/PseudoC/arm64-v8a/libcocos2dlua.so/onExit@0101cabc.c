
/* cocos2d::NavMeshAgent::onExit() */

void __thiscall cocos2d::NavMeshAgent::onExit(NavMeshAgent *this)

{
  long lVar1;
  
  if (*(int *)(this + 0xcc) != -1) {
    Component::onExit((Component *)this);
                    /* try { // try from 0101cae4 to 0111cb37 has its CatchHandler @ 0101cbf8 */
    lVar1 = (**(code **)(**(long **)(this + 0x28) + 0x368))();
    if ((lVar1 != 0) && (*(NavMesh **)(lVar1 + 0x360) != (NavMesh *)0x0)) {
      NavMesh::removeNavMeshAgent(*(NavMesh **)(lVar1 + 0x360),this);
      return;
    }
  }
  return;
}

