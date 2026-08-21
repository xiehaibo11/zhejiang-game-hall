
/* cocos2d::NavMeshAgent::setAutoTraverseOffMeshLink(bool) */

void __thiscall cocos2d::NavMeshAgent::setAutoTraverseOffMeshLink(NavMeshAgent *this,bool param_1)

{
  long lVar1;
  
  if (((*(dtCrowd **)(this + 0xe0) != (dtCrowd *)0x0) && (this[200] == (NavMeshAgent)0x2)) &&
     (lVar1 = dtCrowd::getEditableAgentAnim(*(dtCrowd **)(this + 0xe0),*(int *)(this + 0xcc)),
     lVar1 != 0)) {
    *(bool *)lVar1 = param_1;
  }
  return;
}

