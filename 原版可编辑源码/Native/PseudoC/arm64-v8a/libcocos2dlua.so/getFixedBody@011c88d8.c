
/* btTypedConstraint::getFixedBody() */

undefined * btTypedConstraint::getFixedBody(void)

{
  int iVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (((DAT_01793720 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01793720), iVar1 != 0)) {
    local_40 = 0;
    uStack_38 = 0;
    btRigidBody::btRigidBody
              ((btRigidBody *)&DAT_01793728,0.0,(btMotionState *)0x0,(btCollisionShape *)0x0,
               (btVector3 *)&local_40);
    __cxa_atexit(btRigidBody::~btRigidBody,&DAT_01793728,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01793720);
  }
  local_40 = 0;
  uStack_38 = 0;
  btRigidBody::setMassProps((btRigidBody *)&DAT_01793728,0.0,(btVector3 *)&local_40);
  return &DAT_01793728;
}

