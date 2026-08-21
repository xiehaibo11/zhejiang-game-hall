
/* cocos2d::Physics3DComponent::syncPhysicsToNode() */

void __thiscall cocos2d::Physics3DComponent::syncPhysicsToNode(Physics3DComponent *this)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  Mat4 aMStack_140 [64];
  Mat4 aMStack_100 [64];
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float local_a0;
  float fStack_9c;
  float local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  Mat4 local_80 [48];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = (**(code **)(**(long **)(this + 0xd0) + 0x10))();
                    /* try { // try from 01011a68 to 01111ab3 has its CatchHandler @ 01011a68
                       catch() { ... } // from try @ 01011a68 with catch @ 01011a68
                       catch() { ... } // from try @ 01011afc with catch @ 01011a68 */
  if ((iVar2 == 1) || (iVar2 = (**(code **)(**(long **)(this + 0xd0) + 0x10))(), iVar2 == 2)) {
    Mat4::Mat4(local_80);
    lVar3 = (**(code **)(**(long **)(this + 0x28) + 0x260))();
    if (lVar3 != 0) {
      plVar4 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))();
      (**(code **)(*plVar4 + 0x430))(&local_c0);
                    /* try { // try from 01011ab4 to 01111afb has its CatchHandler @ 01011b10 */
      uStack_48 = uStack_88;
      local_50 = local_90;
      Mat4::~Mat4((Mat4 *)&local_c0);
    }
    Mat4::getInversed();
    (**(code **)(**(long **)(this + 0xd0) + 0x18))(aMStack_140);
    Mat4::Mat4((Mat4 *)&local_c0,aMStack_100);
                    /* try { // try from 01011afc to 01111b33 has its CatchHandler @ 01011a68 */
    Mat4::multiply((Mat4 *)&local_c0,aMStack_140);
    Mat4::~Mat4(aMStack_140);
    Mat4::~Mat4(aMStack_100);
                    /* catch() { ... } // from try @ 01011ab4 with catch @ 01011b10 */
    fVar5 = 1.0 / SQRT(local_c0 * local_c0 + fStack_bc * fStack_bc + fStack_b8 * fStack_b8);
    fVar7 = 1.0 / SQRT(local_b0 * local_b0 + fStack_ac * fStack_ac + fStack_a8 * fStack_a8);
    fVar6 = 1.0 / SQRT(local_a0 * local_a0 + fStack_9c * fStack_9c + local_98 * local_98);
    local_c0 = local_c0 * fVar5;
    fStack_bc = fStack_bc * fVar5;
    fStack_b8 = fStack_b8 * fVar5;
    local_b0 = local_b0 * fVar7;
    fStack_ac = fStack_ac * fVar7;
    fStack_a8 = fStack_a8 * fVar7;
    local_a0 = local_a0 * fVar6;
    fStack_9c = fStack_9c * fVar6;
    local_98 = local_98 * fVar6;
    Mat4::multiply((Mat4 *)&local_c0,(Mat4 *)(this + 0x50));
    if (((DAT_01792ce0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_01792ce0), iVar2 != 0)) {
      Vec3::Vec3((Vec3 *)&DAT_01792cd0);
      __cxa_guard_release(&DAT_01792ce0);
    }
    if (((DAT_01792cf8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_01792cf8), iVar2 != 0)) {
      Vec3::Vec3((Vec3 *)&DAT_01792ce8);
      __cxa_guard_release(&DAT_01792cf8);
    }
    if (((DAT_01792d10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_01792d10), iVar2 != 0)) {
      Quaternion::Quaternion((Quaternion *)&DAT_01792d00);
      __cxa_atexit(Quaternion::~Quaternion,&DAT_01792d00,&PTR_LOOP_016979c0);
      __cxa_guard_release(&DAT_01792d10);
    }
    Mat4::decompose((Mat4 *)&local_c0,(Vec3 *)&DAT_01792cd0,(Quaternion *)&DAT_01792d00,
                    (Vec3 *)&DAT_01792ce8);
    (**(code **)(**(long **)(this + 0x28) + 0xf8))(*(long **)(this + 0x28),&DAT_01792ce8);
    Quaternion::normalize((Quaternion *)&DAT_01792d00);
    (**(code **)(**(long **)(this + 0x28) + 0x1a0))(*(long **)(this + 0x28),&DAT_01792d00);
    Mat4::~Mat4((Mat4 *)&local_c0);
    Mat4::~Mat4(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

