
/* cocos2d::NavMeshObstacle::onExit() */

void __thiscall cocos2d::NavMeshObstacle::onExit(NavMeshObstacle *this)

{
  long lVar1;
  
  if (*(int *)(this + 0x5c) != -1) {
    Component::onExit((Component *)this);
    lVar1 = (**(code **)(**(long **)(this + 0x28) + 0x368))();
    if ((lVar1 != 0) && (*(NavMesh **)(lVar1 + 0x360) != (NavMesh *)0x0)) {
      NavMesh::removeNavMeshObstacle(*(NavMesh **)(lVar1 + 0x360),this);
      return;
    }
  }
  return;
}

