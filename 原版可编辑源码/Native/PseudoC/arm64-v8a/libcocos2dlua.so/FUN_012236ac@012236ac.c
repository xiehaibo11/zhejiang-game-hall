
void FUN_012236ac(long param_1,undefined4 param_2,int param_3)

{
  double *pdVar1;
  double *pdVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  double *pdVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  int local_54;
  undefined1 auStack_50 [4];
  int local_4c;
  long local_48;
  int local_3c;
  int iStack_38;
  undefined1 auStack_34 [4];
  long local_28;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x20))
            (*(long **)(param_1 + 8),&local_28,auStack_34,&iStack_38,&local_3c,&local_48,&local_4c,
             auStack_50,&local_54,param_2);
  lVar3 = *(long *)(param_1 + 8);
  puVar4 = (uint *)(local_48 + (long)local_4c * (long)param_3);
  pdVar2 = (double *)(lVar3 + 0x10);
  if (local_54 == 2) {
    uVar5 = puVar4[2];
  }
  else if (local_54 == 3) {
    uVar5 = (uint)(ushort)puVar4[1];
  }
  else {
    uVar5 = (uint)*(byte *)((long)puVar4 + 2);
  }
  pdVar1 = (double *)(local_28 + (int)(local_3c * uVar5));
  if (iStack_38 == 0) {
    pdVar6 = pdVar1 + 1;
    fVar7 = *(float *)(lVar3 + 0x10);
    uVar8 = CONCAT44((float)((ulong)*pdVar1 >> 0x20) *
                     (float)((ulong)*(undefined8 *)(lVar3 + 8) >> 0x20),
                     SUB84(*pdVar1,0) * (float)*(undefined8 *)(lVar3 + 8));
  }
  else {
    uVar8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 8) >> 0x20) * (float)pdVar1[1],
                     (float)*(undefined8 *)(lVar3 + 8) * (float)*pdVar1);
    fVar7 = (float)pdVar1[2];
    pdVar6 = pdVar2;
  }
  fVar9 = *(float *)pdVar6;
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(float *)(param_1 + 0x40) = fVar7 * fVar9;
  if (local_54 == 3) {
    uVar5 = (uint)*(ushort *)((long)puVar4 + 2);
  }
  else if (local_54 == 2) {
    uVar5 = puVar4[1];
  }
  else {
    uVar5 = (uint)*(byte *)((long)puVar4 + 1);
  }
  pdVar1 = (double *)(local_28 + (int)(local_3c * uVar5));
  if (iStack_38 == 0) {
    pdVar6 = pdVar1 + 1;
    fVar7 = *(float *)(lVar3 + 0x10);
    uVar8 = CONCAT44((float)((ulong)*pdVar1 >> 0x20) *
                     (float)((ulong)*(undefined8 *)(lVar3 + 8) >> 0x20),
                     SUB84(*pdVar1,0) * (float)*(undefined8 *)(lVar3 + 8));
  }
  else {
    uVar8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 8) >> 0x20) * (float)pdVar1[1],
                     (float)*(undefined8 *)(lVar3 + 8) * (float)*pdVar1);
    fVar7 = (float)pdVar1[2];
    pdVar6 = pdVar2;
  }
  fVar9 = *(float *)pdVar6;
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(float *)(param_1 + 0x30) = fVar7 * fVar9;
  if (local_54 == 3) {
    uVar5 = (uint)(ushort)*puVar4;
  }
  else if (local_54 == 2) {
    uVar5 = *puVar4;
  }
  else {
    uVar5 = (uint)(byte)*puVar4;
  }
  pdVar1 = (double *)(local_28 + (int)(local_3c * uVar5));
  if (iStack_38 == 0) {
    pdVar2 = pdVar1 + 1;
    fVar7 = *(float *)(lVar3 + 0x10);
    uVar8 = CONCAT44((float)((ulong)*pdVar1 >> 0x20) *
                     (float)((ulong)*(undefined8 *)(lVar3 + 8) >> 0x20),
                     SUB84(*pdVar1,0) * (float)*(undefined8 *)(lVar3 + 8));
  }
  else {
    uVar8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 8) >> 0x20) * (float)pdVar1[1],
                     (float)*(undefined8 *)(lVar3 + 8) * (float)*pdVar1);
    fVar7 = (float)pdVar1[2];
  }
  fVar9 = *(float *)pdVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(float *)(param_1 + 0x20) = fVar7 * fVar9;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
            (*(long **)(param_1 + 0x10),(undefined8 *)(param_1 + 0x18),param_2,param_3);
  (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),param_2);
  return;
}

