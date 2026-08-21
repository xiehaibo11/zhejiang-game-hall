
/* btRigidBody::applyImpulse(btVector3 const&, btVector3 const&) */

void __thiscall btRigidBody::applyImpulse(btRigidBody *this,btVector3 *param_1,btVector3 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  
  fVar1 = *(float *)(this + 0x174);
  if (fVar1 != 0.0) {
    uVar6 = *(undefined8 *)(this + 0x154);
    fVar5 = *(float *)(param_1 + 8);
    fVar2 = (float)*(undefined8 *)(this + 0x178);
    fVar3 = (float)((ulong)*(undefined8 *)(this + 0x178) >> 0x20);
    *(ulong *)(this + 0x154) =
         CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) * fVar3 * fVar1 +
                  (float)((ulong)uVar6 >> 0x20),
                  (float)*(undefined8 *)param_1 * fVar2 * fVar1 + (float)uVar6);
    *(float *)(this + 0x15c) = fVar1 * fVar5 * *(float *)(this + 0x180) + *(float *)(this + 0x15c);
    fVar2 = *(float *)param_1 * fVar2;
    fVar3 = *(float *)(param_1 + 4) * fVar3;
    fVar1 = *(float *)(param_1 + 8) * *(float *)(this + 0x180);
    fVar4 = fVar2 * *(float *)(param_2 + 8) - fVar1 * *(float *)param_2;
    fVar5 = *(float *)(param_2 + 4) * fVar1 - fVar3 * *(float *)(param_2 + 8);
    fVar1 = fVar3 * *(float *)param_2 - fVar2 * *(float *)(param_2 + 4);
    *(ulong *)(this + 0x164) =
         CONCAT44((*(float *)(this + 0x134) * fVar5 + *(float *)(this + 0x138) * fVar4 +
                  *(float *)(this + 0x13c) * fVar1) *
                  (float)((ulong)*(undefined8 *)(this + 0x250) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(this + 0x164) >> 0x20),
                  (*(float *)(this + 0x124) * fVar5 + *(float *)(this + 0x128) * fVar4 +
                  *(float *)(this + 300) * fVar1) * (float)*(undefined8 *)(this + 0x250) +
                  (float)*(undefined8 *)(this + 0x164));
    *(float *)(this + 0x16c) =
         (fVar5 * *(float *)(this + 0x144) + fVar4 * *(float *)(this + 0x148) +
         fVar1 * *(float *)(this + 0x14c)) * *(float *)(this + 600) + *(float *)(this + 0x16c);
  }
  return;
}

