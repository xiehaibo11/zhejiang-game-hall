
/* btCylinderShape::calculateLocalInertia(float, btVector3&) const */

void __thiscall
btCylinderShape::calculateLocalInertia(btCylinderShape *this,float param_1,btVector3 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_70 [4];
  
  fVar7 = *(float *)(this + 0x28);
  fVar8 = *(float *)(this + 0x2c);
  fVar9 = *(float *)(this + 0x30);
  fVar4 = (float)(**(code **)(*(long *)this + 0x60))();
  fVar5 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar6 = (float)(**(code **)(*(long *)this + 0x60))(this);
  local_70[0] = fVar7 + fVar4;
  local_70[1] = fVar8 + fVar5;
  local_70[2] = fVar9 + fVar6;
  iVar1 = *(int *)(this + 0x40);
  if (iVar1 == 0) {
    lVar2 = 0;
    lVar3 = 1;
  }
  else if (iVar1 == 2) {
    lVar3 = 0;
    lVar2 = 2;
  }
  else {
    lVar3 = 0;
    lVar2 = 1;
  }
  fVar4 = *(float *)((ulong)local_70 | lVar3 << 2);
  fVar4 = fVar4 * fVar4;
  fVar8 = param_1 * 0.5 * fVar4;
  fVar7 = param_1 * 0.25 * fVar4 + (param_1 / 12.0) * local_70[lVar2] * local_70[lVar2] * 4.0;
  fVar4 = fVar8;
  fVar5 = fVar7;
  fVar6 = fVar7;
  if ((iVar1 != 2) && (fVar4 = fVar7, fVar6 = fVar8, iVar1 == 0)) {
    fVar5 = fVar8;
    fVar6 = fVar7;
  }
  *(float *)param_2 = fVar5;
  *(float *)(param_2 + 4) = fVar6;
  *(float *)(param_2 + 8) = fVar4;
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

