
/* SupportVertexCallback::processTriangle(btVector3*, int, int) */

void SupportVertexCallback::processTriangle(btVector3 *param_1,int param_2,int param_3)

{
  btVector3 *pbVar1;
  float *pfVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pfVar2 = (float *)(ulong)(uint)param_2;
  fVar3 = *(float *)(param_1 + 0x5c);
  fVar6 = *(float *)(param_1 + 0x60);
  fVar5 = *(float *)(param_1 + 100);
  pbVar1 = param_1 + 8;
  fVar8 = fVar3 * *pfVar2 + fVar6 * pfVar2[1] + fVar5 * pfVar2[2];
  fVar7 = *(float *)(param_1 + 0x58);
  if (*(float *)(param_1 + 0x58) < fVar8) {
    *(float *)(param_1 + 0x58) = fVar8;
    uVar4 = *(undefined8 *)pfVar2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(pfVar2 + 2);
    *(undefined8 *)pbVar1 = uVar4;
    fVar7 = fVar8;
  }
  fVar8 = fVar3 * pfVar2[4] + fVar6 * pfVar2[5] + fVar5 * pfVar2[6];
  if (fVar7 < fVar8) {
    *(float *)(param_1 + 0x58) = fVar8;
    uVar4 = *(undefined8 *)(pfVar2 + 4);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(pfVar2 + 6);
    *(undefined8 *)pbVar1 = uVar4;
    fVar7 = fVar8;
  }
  fVar3 = fVar3 * pfVar2[8] + fVar6 * pfVar2[9] + fVar5 * pfVar2[10];
  if (fVar7 < fVar3) {
    *(float *)(param_1 + 0x58) = fVar3;
    uVar4 = *(undefined8 *)(pfVar2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(pfVar2 + 10);
    *(undefined8 *)pbVar1 = uVar4;
  }
  return;
}

