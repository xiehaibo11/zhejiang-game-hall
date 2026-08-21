
/* cocos2d::NavMesh::dtDraw() */

void __thiscall cocos2d::NavMesh::dtDraw(NavMesh *this)

{
  NavMeshDebugDraw *this_00;
  
  drawObstacles(this);
  this_00 = (NavMeshDebugDraw *)(this + 0xa0);
  NavMeshDebugDraw::depthMask(this_00,false);
  duDebugDrawNavMeshWithClosedList
            ((duDebugDraw *)this_00,*(dtNavMesh **)(this + 0x28),*(dtNavMeshQuery **)(this + 0x30),
             '\x03');
  drawAgents(this);
  drawOffMeshConnections(this);
  NavMeshDebugDraw::depthMask(this_00,true);
  return;
}

