
/* cocos2d::NavMeshAgent::syncToNode() */

void __thiscall cocos2d::NavMeshAgent::syncToNode(NavMeshAgent *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  Vec3 aVStack_100 [16];
  Vec3 aVStack_f0 [16];
  undefined8 local_e0;
  undefined4 local_d8;
  Vec3 aVStack_d0 [16];
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  Mat4 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(dtCrowd **)(this + 0xe0) != (dtCrowd *)0x0) &&
     (lVar2 = dtCrowd::getAgent(*(dtCrowd **)(this + 0xe0),*(int *)(this + 0xcc)), lVar2 != 0)) {
    Mat4::Mat4(local_80);
    Vec3::Vec3(aVStack_d0);
    lVar3 = (**(code **)(**(long **)(this + 0x28) + 0x260))();
    if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 0101d2d0 with catch @ 0101d220 */
      plVar4 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))();
      (**(code **)(*plVar4 + 0x448))(&local_c0);
      uStack_68 = uStack_a8;
      local_70 = local_b0;
      uStack_58 = uStack_98;
      uStack_60 = uStack_a0;
      uStack_48 = uStack_88;
      local_50 = local_90;
      Mat4::~Mat4((Mat4 *)&local_c0);
    }
    Vec3::Vec3((Vec3 *)&local_c0,*(float *)(lVar2 + 0x1a0),*(float *)(lVar2 + 0x1a4),
               *(float *)(lVar2 + 0x1a8));
                    /* try { // try from 0101d26c to 0111d273 has its CatchHandler @ 0101d330 */
    Mat4::transformVector(local_80,local_c0,fStack_bc,fStack_b8,1.0,aVStack_d0);
                    /* try { // try from 0101d290 to 0111d29f has its CatchHandler @ 0101d370 */
    (**(code **)(**(long **)(this + 0x28) + 0xf8))(*(long **)(this + 0x28),aVStack_d0);
    this[200] = *(NavMeshAgent *)(lVar2 + 1);
                    /* try { // try from 0101d2c0 to 0111d2cf has its CatchHandler @ 0101d338 */
                    /* try { // try from 0101d2d0 to 0111d3cf has its CatchHandler @ 0101d220 */
    if ((this[0xc9] != (NavMeshAgent)0x0) &&
       (((0.3 < ABS(*(float *)(lVar2 + 0x1d0)) || (0.3 < ABS(*(float *)(lVar2 + 0x1d4)))) ||
        (0.3 < ABS(*(float *)(lVar2 + 0x1d8)))))) {
      local_d8 = *(undefined4 *)(this + 0xc4);
      local_e0 = *(undefined8 *)(this + 0xbc);
      Vec3::normalize((Vec3 *)&local_e0);
      Vec3::Vec3(aVStack_f0);
      Vec3::Vec3((Vec3 *)&local_c0,*(float *)(lVar2 + 0x1d0),*(float *)(lVar2 + 0x1d4),
                 *(float *)(lVar2 + 0x1d8));
                    /* catch() { ... } // from try @ 0101d26c with catch @ 0101d330 */
                    /* catch() { ... } // from try @ 0101d2c0 with catch @ 0101d338 */
      Mat4::transformVector(local_80,(Vec3 *)&local_c0,aVStack_f0);
      Vec3::normalize(aVStack_f0);
      fVar5 = (float)Vec3::dot((Vec3 *)&local_e0,aVStack_f0);
      Vec3::Vec3(aVStack_100);
      Vec3::cross((Vec3 *)&local_e0,aVStack_f0,aVStack_100);
                    /* catch() { ... } // from try @ 0101d290 with catch @ 0101d370 */
      fVar5 = acosf(fVar5);
      Quaternion::Quaternion((Quaternion *)&local_c0,aVStack_100,fVar5);
      (**(code **)(**(long **)(this + 0x28) + 0x1a0))(*(long **)(this + 0x28),&local_c0);
      Quaternion::~Quaternion((Quaternion *)&local_c0);
    }
    Mat4::~Mat4(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

