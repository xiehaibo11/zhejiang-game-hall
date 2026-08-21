
/* cocos2d::NavMesh::debugDraw(cocos2d::Renderer*) */

void __thiscall cocos2d::NavMesh::debugDraw(NavMesh *this,Renderer *param_1)

{
  NavMeshDebugDraw *this_00;
  
  if (this[400] != (NavMesh)0x0) {
    this_00 = (NavMeshDebugDraw *)(this + 0xa0);
    NavMeshDebugDraw::clear(this_00);
    drawObstacles(this);
    NavMeshDebugDraw::depthMask(this_00,false);
    duDebugDrawNavMeshWithClosedList
              ((duDebugDraw *)this_00,*(dtNavMesh **)(this + 0x28),*(dtNavMeshQuery **)(this + 0x30)
               ,'\x03');
    drawAgents(this);
    drawOffMeshConnections(this);
    NavMeshDebugDraw::depthMask(this_00,true);
    NavMeshDebugDraw::draw(this_00,param_1);
    return;
  }
  return;
}

