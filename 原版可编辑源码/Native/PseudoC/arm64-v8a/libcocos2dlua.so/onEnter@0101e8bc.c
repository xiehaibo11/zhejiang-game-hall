
/* cocos2d::NavMeshObstacle::onEnter() */

void __thiscall cocos2d::NavMeshObstacle::onEnter(NavMeshObstacle *this)

{
  long lVar1;
  
  if (*(int *)(this + 0x5c) == -1) {
    Component::onEnter((Component *)this);
    lVar1 = (**(code **)(**(long **)(this + 0x28) + 0x368))();
    if ((lVar1 != 0) && (*(NavMesh **)(lVar1 + 0x360) != (NavMesh *)0x0)) {
      NavMesh::addNavMeshObstacle(*(NavMesh **)(lVar1 + 0x360),this);
      return;
    }
  }
  return;
}

