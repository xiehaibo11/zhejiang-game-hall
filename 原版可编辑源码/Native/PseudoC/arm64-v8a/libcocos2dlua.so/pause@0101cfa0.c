
/* cocos2d::NavMeshAgent::pause() */

void __thiscall cocos2d::NavMeshAgent::pause(NavMeshAgent *this)

{
  if (this[200] != (NavMeshAgent)0x0) {
    this[200] = (NavMeshAgent)0x0;
    this[0xd0] = (NavMeshAgent)0x1;
  }
  return;
}

