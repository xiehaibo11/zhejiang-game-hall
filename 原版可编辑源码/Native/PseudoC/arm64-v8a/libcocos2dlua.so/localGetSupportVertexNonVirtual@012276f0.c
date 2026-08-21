
/* btConvexShape::localGetSupportVertexNonVirtual(btVector3 const&) const */

float __thiscall
btConvexShape::localGetSupportVertexNonVirtual(btConvexShape *this,btVector3 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_40;
  float fStack_3c;
  float fStack_38;
  
  local_40 = (float)*(undefined8 *)param_1;
  fStack_3c = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fStack_38 = (float)*(undefined8 *)(param_1 + 8);
  if (local_40 * local_40 + fStack_3c * fStack_3c + fStack_38 * fStack_38 < 1.4210855e-14) {
    fStack_38 = -1.0;
    fStack_3c = -1.0;
    local_40 = -1.0;
  }
  fVar3 = local_40 * local_40 + fStack_3c * fStack_3c + fStack_38 * fStack_38;
  fVar1 = SQRT(fVar3);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(fVar3);
  }
  fVar3 = (float)localGetSupportVertexWithoutMarginNonVirtual((btVector3 *)this);
  switch(*(undefined4 *)(this + 8)) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 10:
  case 0xb:
  case 0xd:
    fVar2 = *(float *)(this + 0x38);
    break;
  default:
    fVar2 = (float)(**(code **)(*(long *)this + 0x60))(this);
    break;
  case 8:
    fVar2 = *(float *)(this + 0x28) * *(float *)(this + 0x18);
  }
  return fVar3 + fVar2 * (1.0 / fVar1) * local_40;
}

