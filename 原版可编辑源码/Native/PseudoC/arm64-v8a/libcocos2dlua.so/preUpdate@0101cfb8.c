
/* cocos2d::NavMeshAgent::preUpdate(float) */

void __thiscall cocos2d::NavMeshAgent::preUpdate(NavMeshAgent *this,float param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  uint local_3c;
  NavMeshAgent *local_38 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[200] != (NavMeshAgent)0x0) {
    *(float *)(this + 0xd4) = *(float *)(this + 0xd4) + param_1;
    if ((this[200] != (NavMeshAgent)0x0) &&
       (plVar2 = *(long **)(this + 0x70), plVar2 != (long *)0x0)) {
      local_3c = *(uint *)(this + 0xd4);
      local_38[0] = this;
      (**(code **)(*plVar2 + 0x30))(plVar2,local_38,&local_3c);
    }
  }
  if (((byte)this[0xa0] & 1) != 0) {
    syncToAgent(this);
  }
  if ((((this[0xd1] != (NavMeshAgent)0x0) && (lVar3 = *(long *)(this + 0xe0), lVar3 != 0)) &&
      (*(dtNavMeshQuery **)(this + 0xe8) != (dtNavMeshQuery *)0x0)) &&
     (this[200] != (NavMeshAgent)0x2)) {
    *(undefined4 *)(this + 0xd4) = 0;
    this[200] = (NavMeshAgent)0x1;
    local_3c = 0;
    dtNavMeshQuery::findNearestPoly
              (*(dtNavMeshQuery **)(this + 0xe8),(float *)(this + 0xb0),(float *)(lVar3 + 0x374),
               (dtQueryFilter *)(lVar3 + 0x380),&local_3c,(float *)local_38);
    dtCrowd::requestMoveTarget
              (*(dtCrowd **)(this + 0xe0),*(int *)(this + 0xcc),local_3c,(float *)local_38);
    this[0xd1] = (NavMeshAgent)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

