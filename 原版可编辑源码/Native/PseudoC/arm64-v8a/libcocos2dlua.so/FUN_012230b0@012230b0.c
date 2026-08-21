
void FUN_012230b0(long param_1,undefined4 param_2,int param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  float *pfVar4;
  long lVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  int local_84;
  undefined1 auStack_80 [4];
  int local_7c;
  long local_78;
  int local_6c;
  int local_68;
  undefined1 auStack_64 [4];
  undefined8 local_60;
  float local_58;
  undefined4 local_54;
  undefined8 local_50;
  float local_48;
  undefined4 local_44;
  undefined8 local_40;
  float local_38;
  undefined4 local_34;
  long local_28;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x20))
            (*(long **)(param_1 + 8),&local_28,auStack_64,&local_68,&local_6c,&local_78,&local_7c,
             auStack_80,&local_84,param_2);
  lVar1 = *(long *)(param_1 + 8);
  puVar3 = (ushort *)(local_78 + (long)local_7c * (long)param_3);
  if (local_84 == 3) {
    lVar5 = (long)local_6c;
    pdVar6 = (double *)(lVar1 + 0x10);
    pdVar7 = (double *)(local_28 + lVar5 * (ulong)puVar3[2]);
    if (local_68 == 0) {
      pdVar8 = pdVar7 + 1;
      local_38 = *(float *)(lVar1 + 0x10);
      fVar9 = SUB84(*pdVar7,0) * (float)*(undefined8 *)(lVar1 + 8);
      fVar10 = (float)((ulong)*pdVar7 >> 0x20) * (float)((ulong)*(undefined8 *)(lVar1 + 8) >> 0x20);
    }
    else {
      fVar9 = (float)*(undefined8 *)(lVar1 + 8) * (float)*pdVar7;
      fVar10 = (float)((ulong)*(undefined8 *)(lVar1 + 8) >> 0x20) * (float)pdVar7[1];
      local_38 = (float)pdVar7[2];
      pdVar8 = pdVar6;
    }
    local_40 = CONCAT44(fVar10,fVar9);
    local_38 = local_38 * *(float *)pdVar8;
    pdVar7 = (double *)(local_28 + lVar5 * (ulong)puVar3[1]);
    if (local_68 == 0) {
      pdVar8 = pdVar7 + 1;
      local_48 = *(float *)(lVar1 + 0x10);
      fVar9 = SUB84(*pdVar7,0) * (float)*(undefined8 *)(lVar1 + 8);
      fVar10 = (float)((ulong)*pdVar7 >> 0x20) * (float)((ulong)*(undefined8 *)(lVar1 + 8) >> 0x20);
    }
    else {
      fVar9 = (float)*(undefined8 *)(lVar1 + 8) * (float)*pdVar7;
      fVar10 = (float)((ulong)*(undefined8 *)(lVar1 + 8) >> 0x20) * (float)pdVar7[1];
      local_48 = (float)pdVar7[2];
      pdVar8 = pdVar6;
    }
    local_50 = CONCAT44(fVar10,fVar9);
    local_48 = local_48 * *(float *)pdVar8;
    pdVar7 = (double *)(local_28 + lVar5 * (ulong)*puVar3);
    if (local_68 == 0) {
      local_58 = *(float *)(lVar1 + 0x10);
      fVar9 = *(float *)(pdVar7 + 1);
      local_60 = CONCAT44((float)((ulong)*pdVar7 >> 0x20) *
                          (float)((ulong)*(undefined8 *)(lVar1 + 8) >> 0x20),
                          SUB84(*pdVar7,0) * (float)*(undefined8 *)(lVar1 + 8));
    }
    else {
      fVar9 = *(float *)pdVar6;
      local_60 = CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 8) >> 0x20) * (float)pdVar7[1],
                          (float)*(undefined8 *)(lVar1 + 8) * (float)*pdVar7);
      local_58 = (float)pdVar7[2];
    }
  }
  else {
    lVar5 = (long)local_6c;
    pdVar6 = (double *)(local_28 + lVar5 * *(int *)(puVar3 + 4));
    if (local_68 == 0) {
      local_38 = *(float *)(lVar1 + 0x10) * *(float *)(pdVar6 + 1);
      local_40 = CONCAT44(*(float *)((long)pdVar6 + 4) * *(float *)(lVar1 + 0xc),
                          *(float *)pdVar6 * *(float *)(lVar1 + 8));
      pfVar4 = (float *)(local_28 + lVar5 * *(int *)(puVar3 + 2));
      local_48 = *(float *)(lVar1 + 0x10) * pfVar4[2];
      local_50 = CONCAT44(pfVar4[1] * *(float *)(lVar1 + 0xc),*pfVar4 * *(float *)(lVar1 + 8));
      local_58 = *(float *)(lVar1 + 0x10);
      puVar2 = (undefined8 *)(local_28 + lVar5 * *(int *)puVar3);
      uVar11 = *puVar2;
      fVar9 = *(float *)(puVar2 + 1);
      local_60 = CONCAT44((float)((ulong)uVar11 >> 0x20) *
                          (float)((ulong)*(undefined8 *)(lVar1 + 8) >> 0x20),
                          (float)uVar11 * (float)*(undefined8 *)(lVar1 + 8));
    }
    else {
      local_38 = *(float *)(lVar1 + 0x10) * (float)pdVar6[2];
      local_40 = CONCAT44(*(float *)(lVar1 + 0xc) * (float)pdVar6[1],
                          *(float *)(lVar1 + 8) * (float)*pdVar6);
      pdVar6 = (double *)(local_28 + lVar5 * *(int *)(puVar3 + 2));
      local_48 = *(float *)(lVar1 + 0x10) * (float)pdVar6[2];
      local_50 = CONCAT44(*(float *)(lVar1 + 0xc) * (float)pdVar6[1],
                          *(float *)(lVar1 + 8) * (float)*pdVar6);
      local_58 = *(float *)(lVar1 + 0x10);
      pdVar6 = (double *)(local_28 + lVar5 * *(int *)puVar3);
      local_60 = CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 8) >> 0x20) * (float)pdVar6[1],
                          (float)*(undefined8 *)(lVar1 + 8) * (float)*pdVar6);
      fVar9 = (float)pdVar6[2];
    }
  }
  local_34 = 0;
  local_44 = 0;
  local_58 = local_58 * fVar9;
  local_54 = 0;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
            (*(long **)(param_1 + 0x10),&local_60,param_2,param_3);
  (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),param_2);
  return;
}

