
/* InverseTransformPoint3x3(btVector3&, btVector3 const&, btTransform const&) */

void InverseTransformPoint3x3(btVector3 *param_1,btVector3 *param_2,btTransform *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *(float *)param_2;
  fVar2 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_3 + 4);
  fVar7 = *(float *)(param_3 + 8);
  fVar5 = *(float *)(param_3 + 0x14);
  fVar9 = *(float *)(param_3 + 0x18);
  fVar3 = *(float *)(param_2 + 8);
  fVar6 = *(float *)(param_3 + 0x24);
  fVar8 = *(float *)(param_3 + 0x28);
  *(float *)param_1 =
       *(float *)param_3 * fVar1 + *(float *)(param_3 + 0x10) * fVar2 +
       *(float *)(param_3 + 0x20) * fVar3;
  *(float *)(param_1 + 4) = fVar1 * fVar4 + fVar2 * fVar5 + fVar3 * fVar6;
  *(float *)(param_1 + 8) = fVar1 * fVar7 + fVar2 * fVar9 + fVar3 * fVar8;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

