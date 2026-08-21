
/* cocos2d::NavMeshAgent::onEnter() */

void __thiscall cocos2d::NavMeshAgent::onEnter(NavMeshAgent *this)

{
  long lVar1;
  
  if (*(int *)(this + 0xcc) == -1) {
                    /* try { // try from 0101cb38 to 0111cc2f has its CatchHandler @ 0101ca50 */
    Component::onEnter((Component *)this);
    lVar1 = (**(code **)(**(long **)(this + 0x28) + 0x368))();
    if ((lVar1 != 0) && (*(NavMesh **)(lVar1 + 0x360) != (NavMesh *)0x0)) {
      NavMesh::addNavMeshAgent(*(NavMesh **)(lVar1 + 0x360),this);
      return;
    }
  }
  return;
}

