
/* cocos2d::NavMeshObstacle::preUpdate(float) */

void cocos2d::NavMeshObstacle::preUpdate(float param_1)

{
  NavMeshObstacle *in_x0;
  
  if (((byte)in_x0[0x58] & 1) == 0) {
    return;
  }
  syncToObstacle(in_x0);
  return;
}

