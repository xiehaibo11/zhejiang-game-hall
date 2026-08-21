
/* cocos2d::NavMeshAgent::setRadius(float) */

void __thiscall cocos2d::NavMeshAgent::setRadius(NavMeshAgent *this,float param_1)

{
  *(float *)(this + 0x80) = param_1;
  this[0xd0] = (NavMeshAgent)0x1;
  return;
}

