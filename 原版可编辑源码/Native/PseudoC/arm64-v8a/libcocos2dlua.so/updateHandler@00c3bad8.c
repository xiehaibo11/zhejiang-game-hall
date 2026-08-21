
/* cocostudio::ArmatureAnimation::updateHandler() */

void __thiscall cocostudio::ArmatureAnimation::updateHandler(ArmatureAnimation *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = *(float *)(this + 0x2c);
  if (fVar4 < 1.0) {
    return;
  }
  switch(*(undefined4 *)(this + 0x34)) {
  case 0xfffffffc:
  case 2:
    *(undefined4 *)(this + 0x2c) = 0x3f800000;
    *(undefined2 *)(this + 0x29) = 1;
    movementEvent(this,*(undefined8 *)(this + 0x70),1,this + 0x78);
    updateMovementList(this);
    return;
  case 0xfffffffd:
    iVar3 = *(int *)(this + 0x40);
    fVar4 = (fVar4 + -1.0) * (float)*(int *)(this + 0x4c);
    *(float *)(this + 0x44) = fVar4;
    fVar4 = fVar4 / (float)iVar3;
    *(undefined4 *)(this + 0x34) = 2;
    *(float *)(this + 0x2c) = fVar4;
    if (1.0 <= fVar4) {
      return;
    }
    uVar1 = *(undefined8 *)(this + 0x70);
    break;
  case 0xfffffffe:
    *(undefined4 *)(this + 0x34) = 0;
    fVar4 = fmodf(fVar4,1.0);
    *(float *)(this + 0x2c) = fVar4;
    if (*(int *)(this + 0x4c) == 0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = fmodf(*(float *)(this + 0x44),(float)*(int *)(this + 0x4c));
    }
    iVar3 = *(int *)(this + 0x40);
    uVar1 = *(undefined8 *)(this + 0x70);
    *(float *)(this + 0x44) = fVar4;
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    break;
  default:
    fVar4 = fmodf(*(float *)(this + 0x44),(float)*(int *)(this + 0x4c));
    uVar1 = *(undefined8 *)(this + 0x70);
    *(float *)(this + 0x44) = fVar4;
    uVar2 = 2;
    *(undefined4 *)(this + 0x90) = 0;
    goto LAB_00c3bc1c;
  }
  uVar2 = 0;
  *(int *)(this + 0x4c) = iVar3;
LAB_00c3bc1c:
  movementEvent(this,uVar1,uVar2,this + 0x78);
  return;
}

