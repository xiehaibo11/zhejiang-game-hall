
/* cocos2d::NavMeshObstacle::postUpdate(float) */

void cocos2d::NavMeshObstacle::postUpdate(float param_1)

{
  NavMeshObstacle *in_x0;
  
  if (((byte)in_x0[0x58] >> 1 & 1) == 0) {
    return;
  }
  syncToNode(in_x0);
  return;
}

