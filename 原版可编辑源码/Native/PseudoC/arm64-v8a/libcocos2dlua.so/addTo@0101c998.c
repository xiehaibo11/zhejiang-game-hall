
/* cocos2d::NavMeshAgent::addTo(dtCrowd*) */

void __thiscall cocos2d::NavMeshAgent::addTo(NavMeshAgent *this,dtCrowd *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  int7 local_88;
  undefined8 local_80;
  Mat4 aMStack_78 [48];
  float afStack_48 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(dtCrowd **)(this + 0xe0) = param_1;
  local_80 = 0;
  local_90 = *(undefined8 *)(this + 0x90);
  local_88 = (uint7)*(ushort *)(this + 0x9d) << 0x28;
  uStack_98 = *(undefined8 *)(this + 0x88);
  local_a0 = *(undefined8 *)(this + 0x80);
  _local_88 = CONCAT35((uint3)((uint7)local_88 >> 0x28),*(undefined5 *)(this + 0x98));
  (**(code **)(**(long **)(this + 0x28) + 0x430))(aMStack_78);
  uVar2 = dtCrowd::addAgent(*(dtCrowd **)(this + 0xe0),afStack_48,(dtCrowdAgentParams *)&local_a0);
  *(undefined4 *)(this + 0xcc) = uVar2;
                    /* catch() { ... } // from try @ 0101c940 with catch @ 0101ca34 */
  Mat4::~Mat4(aMStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0101cb38 with catch @ 0101ca50 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

