
/* cocos2d::NavMeshAgent::getCurrentVelocity() const */

void __thiscall cocos2d::NavMeshAgent::getCurrentVelocity(NavMeshAgent *this)

{
  long lVar1;
  long lVar2;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*(dtCrowd **)(this + 0xe0) == (dtCrowd *)0x0) ||
     (lVar2 = dtCrowd::getAgent(*(dtCrowd **)(this + 0xe0),*(int *)(this + 0xcc)), lVar2 == 0)) {
                    /* catch() { ... } // from try @ 0101cae4 with catch @ 0101cbf8 */
    local_38 = 0;
    local_30 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 0101ca98 with catch @ 0101cbdc */
    Vec3::Vec3((Vec3 *)&local_38,*(float *)(lVar2 + 0x1d0),*(float *)(lVar2 + 0x1d4),
               *(float *)(lVar2 + 0x1d8));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((undefined4)local_38,local_38._4_4_,local_30);
}

