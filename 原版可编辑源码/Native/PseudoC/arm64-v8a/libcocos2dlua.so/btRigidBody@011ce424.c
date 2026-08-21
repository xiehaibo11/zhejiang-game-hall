
/* btRigidBody::btRigidBody(float, btMotionState*, btCollisionShape*, btVector3 const&) */

void __thiscall
btRigidBody::btRigidBody
          (btRigidBody *this,float param_1,btMotionState *param_2,btCollisionShape *param_3,
          btVector3 *param_4)

{
  float local_d8 [2];
  btMotionState *local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined4 local_8c;
  btCollisionShape *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  btCollisionObject::btCollisionObject((btCollisionObject *)this);
  this[0x220] = (btRigidBody)0x1;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined ***)this = &PTR_checkCollideWithOverride_0172dbd0;
  *(undefined8 *)(this + 0x20c) = 0;
  uStack_78 = *(undefined8 *)(param_4 + 8);
  local_80 = *(undefined8 *)param_4;
  local_58 = 0x3f800000;
  local_54 = 0;
  local_60 = 0x3f4ccccd00000000;
  uStack_68 = 0x3f000000;
  local_70 = 0;
  local_c8 = 0x3f800000;
  local_bc = 0;
  local_c4 = 0;
  uStack_48 = 0x3c23d70a3c23d70a;
  local_50 = 0x3c23d70a3ba3d70a;
  local_b4 = 0x3f800000;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0x3f800000;
  local_8c = 0;
  local_94 = 0;
  local_9c = 0;
  local_d8[0] = param_1;
  local_d0 = param_2;
  local_88 = param_3;
  setupRigidBody(this,(btRigidBodyConstructionInfo *)local_d8);
  return;
}

