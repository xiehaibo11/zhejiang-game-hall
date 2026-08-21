
/* btCapsuleShape::calculateLocalInertia(float, btVector3&) const */

void __thiscall
btCapsuleShape::calculateLocalInertia(btCapsuleShape *this,float param_1,btVector3 *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_10 [4];
  
  lVar1 = (long)*(int *)(this + 0x40);
  local_10[0] = *(float *)(this + (long)((*(int *)(this + 0x40) + 2) % 3) * 4 + 0x28);
  local_10[1] = local_10[0];
  local_10[2] = local_10[0];
  local_10[3] = 0.0;
  local_10[lVar1] = *(float *)(this + lVar1 * 4 + 0x28) + local_10[lVar1];
  fVar2 = param_1 * 0.08333333;
  fVar3 = local_10[0] + 0.04 + local_10[0] + 0.04;
  fVar4 = local_10[1] + 0.04 + local_10[1] + 0.04;
  fVar5 = local_10[2] + 0.04 + local_10[2] + 0.04;
  fVar3 = fVar3 * fVar3;
  fVar4 = fVar4 * fVar4;
  fVar5 = fVar5 * fVar5;
  *(float *)param_2 = fVar2 * (fVar4 + fVar5);
  *(float *)(param_2 + 4) = fVar2 * (fVar3 + fVar5);
  *(float *)(param_2 + 8) = fVar2 * (fVar3 + fVar4);
  return;
}

