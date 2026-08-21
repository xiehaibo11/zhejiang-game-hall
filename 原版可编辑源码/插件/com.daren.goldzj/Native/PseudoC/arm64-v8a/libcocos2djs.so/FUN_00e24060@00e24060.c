
int FUN_00e24060(long *param_1,int param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  uint *puVar10;
  long lVar11;
  uint *puVar12;
  long *plVar13;
  uint uVar14;
  long local_80;
  long lStack_78;
  int local_64;
  
  lVar11 = (long)param_2;
  lVar3 = FT_Angle_Diff(*param_1,param_1[1]);
  plVar9 = param_1 + (long)param_2 * 6 + 0x11;
  uVar1 = lVar3 + 0xb38001;
  if (lVar3 < 0) {
    lVar3 = lVar3 + 1;
  }
  puVar10 = (uint *)(param_1 + (long)param_2 * 6 + 0xe);
  lVar6 = (long)param_2 * -0xb40000 + 2;
  if (((uVar1 < 0x1670003) && (param_3 != 0)) && ((char)*plVar9 != '\0')) {
    lVar8 = param_1[0xd];
    lVar3 = lVar3 >> 1;
    uVar4 = FT_Tan(lVar3);
    lVar5 = FT_MulFix(lVar8,uVar4);
    lVar8 = -lVar5;
    if (-1 < lVar5) {
      lVar8 = lVar5;
    }
    if (((lVar8 == 0) || (param_3 < lVar8)) || (param_1[4] < lVar8)) goto LAB_00e24190;
    lVar8 = *param_1;
    uVar4 = FT_Cos(lVar3);
    uVar4 = FT_DivFix(param_1[0xd],uVar4);
    FT_Vector_From_Polar
              (&local_80,uVar4,
               "_ZN2v88internal8compiler23EffectControlLinearizer24LowerObjectIsNonCallableEPNS1_4NodeE"
               + lVar8 + lVar3 + lVar6);
    local_80 = local_80 + param_1[2];
    lStack_78 = lStack_78 + param_1[3];
    if ((char)*plVar9 != '\0') {
      local_64 = 0;
      plVar13 = (long *)(param_1[lVar11 * 6 + 0xf] + (ulong)(*puVar10 - 1) * 0x10);
      plVar13[1] = lStack_78;
      *plVar13 = local_80;
      goto LAB_00e24308;
    }
  }
  else {
LAB_00e24190:
    FT_Vector_From_Polar
              (&local_80,param_1[0xd],
               "_ZN2v88internal8compiler23EffectControlLinearizer24LowerObjectIsNonCallableEPNS1_4NodeE"
               + param_1[1] + lVar6);
    local_80 = local_80 + param_1[2];
    lStack_78 = lStack_78 + param_1[3];
    *(char *)plVar9 = '\0';
  }
  uVar7 = *puVar10;
  if (*(uint *)((long)param_1 + lVar11 * 0x30 + 0x8c) < uVar7) {
    if (((ulong)((*(long *)(param_1[lVar11 * 6 + 0xf] + (ulong)(uVar7 - 1) * 0x10) + 1) - local_80)
         < 3) && ((ulong)((*(long *)(param_1[lVar11 * 6 + 0xf] + (ulong)(uVar7 - 1) * 0x10 + 8) + 1)
                         - lStack_78) < 3)) {
      return 0;
    }
  }
  puVar12 = (uint *)((long)param_1 + lVar11 * 0x30 + 0x74);
  uVar2 = *puVar12;
  local_64 = 0;
  if (uVar2 < uVar7 + 1) {
    lVar3 = param_1[lVar11 * 6 + 0x12];
    uVar14 = uVar2;
    do {
      uVar14 = uVar14 + (uVar14 >> 1) + 0x10;
    } while (uVar14 < uVar7 + 1);
    plVar13 = param_1 + lVar11 * 6 + 0xf;
    lVar6 = FUN_00e13bcc(lVar3,0x10,uVar2,uVar14,*plVar13,&local_64);
    *plVar13 = lVar6;
    if (local_64 != 0) goto LAB_00e24308;
    lVar3 = FUN_00e13bcc(lVar3,1,uVar2,uVar14,param_1[lVar11 * 6 + 0x10],&local_64);
    param_1[lVar11 * 6 + 0x10] = lVar3;
    if (local_64 != 0) goto LAB_00e24308;
    *puVar12 = uVar14;
    uVar7 = *puVar10;
  }
  else {
    lVar3 = param_1[lVar11 * 6 + 0x10];
    plVar13 = param_1 + lVar11 * 6 + 0xf;
  }
  local_64 = 0;
  plVar13 = (long *)(*plVar13 + (ulong)uVar7 * 0x10);
  plVar13[1] = lStack_78;
  *plVar13 = local_80;
  *(undefined1 *)(lVar3 + (ulong)uVar7) = 1;
  *puVar10 = *puVar10 + 1;
LAB_00e24308:
  *(char *)plVar9 = '\0';
  return local_64;
}

