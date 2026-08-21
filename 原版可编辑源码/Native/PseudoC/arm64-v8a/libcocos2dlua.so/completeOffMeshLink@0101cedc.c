
/* cocos2d::NavMeshAgent::completeOffMeshLink() */

void __thiscall cocos2d::NavMeshAgent::completeOffMeshLink(NavMeshAgent *this)

{
  if ((*(long *)(this + 0xe0) != 0) && (this[200] == (NavMeshAgent)0x2)) {
    this[200] = (NavMeshAgent)0x1;
    this[0xd0] = (NavMeshAgent)0x1;
  }
  return;
}

