
/* cocos2d::NavMeshAgent::postUpdate(float) */

void cocos2d::NavMeshAgent::postUpdate(float param_1)

{
  NavMeshAgent *in_x0;
  
  if (((byte)in_x0[0xa0] >> 1 & 1) == 0) {
    return;
  }
  syncToNode(in_x0);
  return;
}

