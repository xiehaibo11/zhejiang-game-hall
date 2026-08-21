
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::Physics3DRigidBody::init(cocos2d::Physics3DRigidBodyDes*) */

void cocos2d::Physics3DRigidBody::init(Physics3DRigidBodyDes *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  btRigidBody *this;
  Ref *this_00;
  undefined8 uVar4;
  float *in_x1;
  long *plVar5;
  undefined4 in_s1;
  float fVar6;
  float local_140 [2];
  undefined8 *local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined8 local_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 local_fc;
  undefined4 local_f4;
  long *local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  long local_58;
  
                    /* try { // try from 01015a94 to 01115af7 has its CatchHandler @ 01015a94
                       catch() { ... } // from try @ 01015a94 with catch @ 01015a94
                       catch() { ... } // from try @ 01015b70 with catch @ 01015a94 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(long *)(in_x1 + 4) == 0) {
    uVar4 = 0;
  }
  else {
    fVar6 = *in_x1;
    plVar5 = *(long **)(*(long *)(in_x1 + 4) + 0x28);
    local_68 = convertVec3TobtVector3((Vec3 *)(in_x1 + 1));
    uStack_64 = in_s1;
    if (fVar6 != 0.0) {
                    /* try { // try from 01015af8 to 01115b03 has its CatchHandler @ 01015bac */
      (**(code **)(*plVar5 + 0x40))(fVar6,plVar5,&local_68);
    }
    convertMat4TobtTransform((Mat4 *)(in_x1 + 6));
    puVar3 = (undefined8 *)btAlignedAllocInternal(0xd0,0x10);
                    /* try { // try from 01015b28 to 01115b43 has its CatchHandler @ 01015bc0 */
    if (((btTransform::getIdentity()::identityTransform & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&btTransform::getIdentity()::identityTransform), iVar2 != 0)) {
      if (((btMatrix3x3::getIdentity()::identityMatrix & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&btMatrix3x3::getIdentity()::identityMatrix), iVar2 != 0)) {
                    /* try { // try from 01015d28 to 01115d2f has its CatchHandler @ 01015d74 */
        _DAT_01792d6c = 0;
        _DAT_01792d70 = 0;
        _DAT_01792d64 = 0;
        uRam0000000001792d68 = 0;
                    /* try { // try from 01015d30 to 01115d8f has its CatchHandler @ 01015d04 */
        _DAT_01792d78 = 0;
        _DAT_01792d80 = 0;
        btMatrix3x3::getIdentity()::identityMatrix = 0x3f800000;
        DAT_01792d74 = 0x3f800000;
        DAT_01792d88 = 0x3f800000;
        __cxa_guard_release(&btMatrix3x3::getIdentity()::identityMatrix);
      }
      btTransform::getIdentity()::identityTransform._12_4_ = _DAT_01792d6c;
      btTransform::getIdentity()::identityTransform._8_4_ = uRam0000000001792d68;
      btTransform::getIdentity()::identityTransform._4_4_ = _DAT_01792d64;
      btTransform::getIdentity()::identityTransform._0_4_ =
           btMatrix3x3::getIdentity()::identityMatrix;
      btTransform::getIdentity()::identityTransform._20_4_ = DAT_01792d74;
      btTransform::getIdentity()::identityTransform._16_4_ = _DAT_01792d70;
      btTransform::getIdentity()::identityTransform._24_8_ = _DAT_01792d78;
      btTransform::getIdentity()::identityTransform._40_8_ = DAT_01792d88;
      btTransform::getIdentity()::identityTransform._32_8_ = _DAT_01792d80;
      btTransform::getIdentity()::identityTransform._48_8_ = 0;
      btTransform::getIdentity()::identityTransform._56_8_ = 0;
      __cxa_guard_release(&btTransform::getIdentity()::identityTransform);
                    /* catch() { ... } // from try @ 01015d30 with catch @ 01015d04 */
    }
                    /* try { // try from 01015b48 to 01115b4f has its CatchHandler @ 01015ba8 */
    *puVar3 = &PTR__btMotionState_01726868;
                    /* try { // try from 01015b54 to 01115b6f has its CatchHandler @ 01015bb0 */
    puVar3[2] = uStack_a0;
    puVar3[1] = local_a8;
    puVar3[4] = uStack_90;
    puVar3[3] = local_98;
    puVar3[6] = uStack_80;
    puVar3[5] = local_88;
                    /* try { // try from 01015b70 to 01115bd3 has its CatchHandler @ 01015a94 */
    puVar3[8] = uStack_70;
    puVar3[7] = local_78;
    uVar4 = btTransform::getIdentity()::identityTransform._0_8_;
    puVar3[10] = btTransform::getIdentity()::identityTransform._8_8_;
    puVar3[9] = uVar4;
    uVar4 = btTransform::getIdentity()::identityTransform._16_8_;
    puVar3[0xc] = btTransform::getIdentity()::identityTransform._24_8_;
    puVar3[0xb] = uVar4;
    uVar4 = btTransform::getIdentity()::identityTransform._32_8_;
    puVar3[0xe] = btTransform::getIdentity()::identityTransform._40_8_;
    puVar3[0xd] = uVar4;
    uVar4 = btTransform::getIdentity()::identityTransform._48_8_;
    puVar3[0x10] = btTransform::getIdentity()::identityTransform._56_8_;
    puVar3[0xf] = uVar4;
    puVar3[0x12] = uStack_a0;
    puVar3[0x11] = local_a8;
                    /* catch() { ... } // from try @ 01015b48 with catch @ 01015ba8 */
    puVar3[0x14] = uStack_90;
    puVar3[0x13] = local_98;
                    /* catch() { ... } // from try @ 01015af8 with catch @ 01015bac */
                    /* catch() { ... } // from try @ 01015b54 with catch @ 01015bb0 */
    puVar3[0x16] = uStack_80;
    puVar3[0x15] = local_88;
    puVar3[0x19] = 0;
    puVar3[0x18] = uStack_70;
    puVar3[0x17] = local_78;
                    /* catch() { ... } // from try @ 01015b28 with catch @ 01015bc0 */
    uStack_d0 = 0x3f000000;
    local_d8 = 0;
    local_e8 = CONCAT44(uStack_64,local_68);
    local_c8 = 0x3f4ccccd00000000;
    local_c0 = 0x3f800000;
    local_bc = 0;
    uStack_b0 = 0x3c23d70a3c23d70a;
    local_b8 = 0x3c23d70a3ba3d70a;
    local_130 = 0x3f800000;
    local_124 = 0;
    local_12c = 0;
    local_11c = 0x3f800000;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0x3f800000;
    local_fc = 0;
    local_104 = 0;
    local_f4 = 0;
    local_140[0] = fVar6;
    local_138 = puVar3;
    local_f0 = plVar5;
    this = (btRigidBody *)btAlignedAllocInternal(0x298,0x10);
    btRigidBody::btRigidBody(this,(btRigidBodyConstructionInfo *)local_140);
    *(btRigidBody **)(param_1 + 0x78) = this;
    *(undefined4 *)(param_1 + 0x24) = 1;
    this_00 = *(Ref **)(in_x1 + 4);
    *(Ref **)(param_1 + 0x80) = this_00;
    Ref::retain(this_00);
    if (*(char *)(in_x1 + 0x16) != '\0') {
      btCollisionObject::setActivationState(*(btCollisionObject **)(param_1 + 0x78),4);
    }
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

