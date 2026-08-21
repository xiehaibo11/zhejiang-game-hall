
int cpConvexHull(undefined8 param_1,uint param_2,float *param_3,float *param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_38;
  
  if (param_3 != param_4) {
    memcpy(param_4,param_3,-(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3);
  }
  local_38 = 0;
  if (1 < (int)param_2) {
    fVar9 = *param_3;
    fVar7 = param_3[1];
    param_3 = param_3 + 3;
    uVar4 = 1;
    fVar8 = fVar7;
    fVar11 = fVar9;
    do {
      fVar10 = param_3[-1];
      fVar12 = *param_3;
      if ((fVar10 < fVar9) || ((fVar10 == fVar9 && (fVar12 < fVar7)))) {
        puVar5 = (undefined8 *)((long)&local_38 + 4);
        fVar7 = fVar12;
        fVar12 = fVar8;
        fVar9 = fVar10;
        fVar10 = fVar11;
LAB_0116e588:
        *(int *)puVar5 = (int)uVar4;
        fVar8 = fVar12;
        fVar11 = fVar10;
      }
      else if ((fVar11 < fVar10) || ((fVar10 == fVar11 && (fVar8 < fVar12)))) {
        puVar5 = &local_38;
        goto LAB_0116e588;
      }
      uVar4 = uVar4 + 1;
      param_3 = param_3 + 2;
    } while (param_2 != uVar4);
    if (local_38._4_4_ != (uint)local_38) {
      uVar6 = *(undefined8 *)param_4;
      uVar1 = local_38._4_4_;
      if ((uint)local_38 != 0) {
        uVar1 = (uint)local_38;
      }
      *(undefined8 *)param_4 = *(undefined8 *)(param_4 + (long)(int)local_38._4_4_ * 2);
      uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      *(undefined8 *)(param_4 + (long)(int)local_38._4_4_ * 2) = uVar6;
      pfVar3 = param_4 + 2;
      uVar6 = *(undefined8 *)pfVar3;
      *(undefined8 *)pfVar3 = *(undefined8 *)((long)param_4 + uVar4);
      *(undefined8 *)((long)param_4 + uVar4) = uVar6;
      fVar7 = *param_4;
      fVar8 = param_4[1];
      fVar9 = *pfVar3;
      fVar11 = param_4[3];
      if (param_5 != (uint *)0x0) {
        *param_5 = local_38._4_4_;
      }
      iVar2 = FUN_0116e638(param_1,fVar7,fVar8,fVar9,fVar11,fVar7,fVar8,param_4 + 4,param_2 - 2);
      return iVar2 + 1;
    }
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = 0;
  }
  return 1;
}

