
/* btRigidBody::setGravity(btVector3 const&) */

void __thiscall btRigidBody::setGravity(btRigidBody *this,btVector3 *param_1)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  if (*(float *)(this + 0x174) != 0.0) {
    fVar3 = *(float *)(param_1 + 4);
    fVar4 = *(float *)(param_1 + 8);
    fVar1 = 1.0 / *(float *)(this + 0x174);
    *(float *)(this + 0x188) = fVar1 * *(float *)param_1;
    *(float *)(this + 0x18c) = fVar1 * fVar3;
    *(float *)(this + 400) = fVar1 * fVar4;
    *(undefined4 *)(this + 0x194) = 0;
  }
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x1a0) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x198) = uVar2;
  return;
}

