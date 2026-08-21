
/* btRigidBody::saveKinematicState(float) */

void __thiscall btRigidBody::saveKinematicState(btRigidBody *this,float param_1)

{
  long *plVar1;
  float fVar2;
  float local_50;
  float fStack_4c;
  float local_48;
  float local_34;
  
  if (param_1 != 0.0) {
    plVar1 = *(long **)(this + 0x200);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,this + 8);
    }
    fVar2 = 1.0 / param_1;
    *(float *)(this + 0x154) = fVar2 * (*(float *)(this + 0x38) - *(float *)(this + 0x78));
    *(float *)(this + 0x158) = fVar2 * (*(float *)(this + 0x3c) - *(float *)(this + 0x7c));
    *(float *)(this + 0x15c) = fVar2 * (*(float *)(this + 0x40) - *(float *)(this + 0x80));
    *(undefined4 *)(this + 0x160) = 0;
    btTransformUtil::calculateDiffAxisAngle
              ((btTransform *)(this + 0x48),(btTransform *)(this + 8),(btVector3 *)&local_50,
               &local_34);
    *(undefined4 *)(this + 0x170) = 0;
    *(float *)(this + 0x164) = fVar2 * local_50 * local_34;
    *(float *)(this + 0x168) = fVar2 * local_34 * fStack_4c;
    *(float *)(this + 0x16c) = fVar2 * local_34 * local_48;
    *(undefined8 *)(this + 0x90) = *(undefined8 *)(this + 0x15c);
    *(undefined8 *)(this + 0x88) = *(undefined8 *)(this + 0x154);
    *(undefined8 *)(this + 0xa0) = *(undefined8 *)(this + 0x16c);
    *(undefined8 *)(this + 0x98) = *(undefined8 *)(this + 0x164);
    *(undefined8 *)(this + 0x60) = *(undefined8 *)(this + 0x20);
    *(undefined8 *)(this + 0x58) = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x70) = *(undefined8 *)(this + 0x30);
    *(undefined8 *)(this + 0x68) = *(undefined8 *)(this + 0x28);
    *(undefined8 *)(this + 0x80) = *(undefined8 *)(this + 0x40);
    *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x38);
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 8);
  }
  return;
}

