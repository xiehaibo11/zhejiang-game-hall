
long cpPolyShapeInitRaw(undefined8 param_1,float param_2,long param_3,undefined8 param_4,
                       uint param_5,long param_6)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  float *pfVar6;
  ulong uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_78;
  undefined4 local_74;
  float fStack_70;
  float local_6c;
  undefined4 uStack_68;
  
  fVar8 = (float)cpCentroidForPoly(param_5,param_6);
  uVar9 = cpMomentForPoly(0x3f800000,-fVar8,-param_2,param_1,param_5,param_6);
  uStack_68 = cpAreaForPoly(param_1,param_5,param_6);
  local_78 = 0;
  local_74 = uVar9;
  fStack_70 = fVar8;
  local_6c = param_2;
  cpShapeInit(param_3,&DAT_0172d2b0,param_4,&local_78);
  *(uint *)(param_3 + 0x8c) = param_5;
  if ((int)param_5 < 7) {
    pvVar4 = (void *)(param_3 + 0x98);
    *(void **)(param_3 + 0x90) = pvVar4;
    if ((int)param_5 < 1) goto LAB_0117038c;
  }
  else {
    pvVar4 = calloc((long)(int)(param_5 << 1),0x10);
    *(void **)(param_3 + 0x90) = pvVar4;
  }
  uVar5 = (long)(int)param_5 << 4 | 0xc;
  pfVar6 = (float *)(param_6 + 4);
  uVar7 = 1;
  while( true ) {
    iVar3 = param_5 + (int)uVar7 + -2;
    iVar2 = 0;
    if (param_5 != 0) {
      iVar2 = iVar3 / (int)param_5;
    }
    pfVar1 = (float *)(param_6 + (long)(int)(iVar3 - iVar2 * param_5) * 8);
    fVar8 = pfVar6[-1];
    fVar10 = *pfVar6;
    fVar11 = *pfVar1;
    fVar12 = pfVar1[1];
    *(float *)((long)pvVar4 + (uVar5 - 0xc)) = fVar8;
    *(float *)((long)pvVar4 + (uVar5 - 8)) = fVar10;
    fVar8 = fVar8 - fVar11;
    fVar10 = fVar10 - fVar12;
    fVar11 = 1.0 / (SQRT(fVar8 * fVar8 + fVar10 * fVar10) + 1.1754944e-38);
    pfVar1 = (float *)(*(long *)(param_3 + 0x90) + uVar5);
    pfVar1[-1] = fVar11 * fVar10;
    *pfVar1 = -(fVar8 * fVar11);
    if (param_5 == uVar7) break;
    pvVar4 = *(void **)(param_3 + 0x90);
    uVar5 = uVar5 + 0x10;
    uVar7 = uVar7 + 1;
    pfVar6 = pfVar6 + 2;
  }
LAB_0117038c:
  *(int *)(param_3 + 0x88) = (int)param_1;
  return param_3;
}

