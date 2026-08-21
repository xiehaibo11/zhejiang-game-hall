
/* cocostudio::Tween::updateHandler() */

void __thiscall cocostudio::Tween::updateHandler(Tween *this)

{
  int iVar1;
  ulong uVar2;
  double dVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)(this + 0x2c);
  uVar4 = 0x3f800000;
  uVar2 = (ulong)(uint)fVar5;
  if (fVar5 < 1.0) goto LAB_00c3e08c;
  switch(*(undefined4 *)(this + 0x34)) {
  case 0xfffffffc:
    *(undefined4 *)(this + 0x2c) = 0x3f800000;
    *(undefined2 *)(this + 0x29) = 1;
    uVar4 = 0x3f800000;
    goto LAB_00c3e1ec;
  case 0xfffffffd:
    iVar1 = *(int *)(this + 0x40);
    *(undefined4 *)(this + 0x34) = 2;
    if (iVar1 < 1) {
      *(undefined4 *)(this + 0x2c) = 0x3f800000;
    }
    else {
      fVar5 = ((fVar5 + -1.0) * (float)*(int *)(this + 0x4c)) / (float)iVar1;
      *(float *)(this + 0x2c) = fVar5;
      if (fVar5 < 1.0) {
        *(int *)(this + 0x4c) = iVar1;
        *(undefined8 *)(this + 0x94) = 0;
        *(float *)(this + 0x44) = fVar5 * (float)iVar1;
        *(undefined8 *)(this + 0x8c) = 0;
        uVar2 = (ulong)(uint)fVar5;
        break;
      }
    }
  case 2:
    *(undefined4 *)(this + 0x2c) = 0x3f800000;
    *(undefined2 *)(this + 0x29) = 1;
    goto LAB_00c3e1d8;
  case 0xfffffffe:
    iVar1 = *(int *)(this + 0x40);
    *(undefined4 *)(this + 0x34) = 0;
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    *(int *)(this + 0x4c) = iVar1;
    if (*(float *)(*(long *)(this + 0x58) + 0x24) == 0.0) {
      fVar6 = 0.0;
      fVar5 = 0.0;
    }
    else {
      fVar5 = (1.0 - *(float *)(*(long *)(this + 0x58) + 0x24)) * (float)iVar1;
      fVar6 = fVar5 / (float)iVar1;
    }
    *(float *)(this + 0x2c) = fVar6;
    *(float *)(this + 0x44) = fVar5;
    *(undefined8 *)(this + 0x94) = 0;
    *(undefined8 *)(this + 0x8c) = 0;
    uVar2 = (ulong)(uint)fVar6;
    break;
  default:
    fVar5 = fmodf(*(float *)(this + 0x44),(float)*(int *)(this + 0x4c));
    *(float *)(this + 0x44) = fVar5;
  }
LAB_00c3e08c:
  uVar4 = uVar2;
  if (1.0 <= (float)uVar4) {
    if (*(int *)(this + 0x34) < 0) goto LAB_00c3e1ec;
  }
  else if (*(int *)(this + 0x34) < 0) {
    dVar3 = sin((double)(float)uVar4 * 1.5707963267948966);
    uVar4 = (ulong)(uint)(float)dVar3;
    *(float *)(this + 0x2c) = (float)dVar3;
    goto LAB_00c3e1ec;
  }
LAB_00c3e1d8:
  uVar4 = (**(code **)(*(long *)this + 0xd0))(uVar4,this);
LAB_00c3e1ec:
  if (*(int *)(this + 0x88) == 10000) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c3e22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xe0))(uVar4,this,0);
  return;
}

