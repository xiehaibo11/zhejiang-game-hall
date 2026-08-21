
int FUN_00e25b14(long *param_1,int param_2)

{
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  uint *puVar4;
  long *plVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  char *pcVar18;
  long lVar19;
  char *pcVar20;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  int local_64;
  
  lVar19 = param_1[0xd];
  lVar16 = (long)param_2;
  pcVar10 = (char *)FT_Angle_Diff(*param_1,param_1[1]);
  lVar13 = *param_1;
  pcVar20 = (char *)((long)param_2 * 0x1680000 - 0xb40000);
  if (pcVar10 != (char *)0xb40000) {
    pcVar20 = pcVar10;
  }
  FT_Vector_From_Polar
            (&local_80,lVar19,
             "_ZN2v88internal8compiler23EffectControlLinearizer24LowerObjectIsNonCallableEPNS1_4NodeE"
             + lVar13 + lVar16 * -0xb40000 + 2);
  pcVar10 = (char *)0xffffffffffa60000;
  if (-1 < (long)pcVar20) {
    pcVar10 = 
    "N2v88internal8compiler23EffectControlLinearizer24LowerObjectIsNonCallableEPNS1_4NodeE";
  }
  local_80 = local_80 + param_1[2];
  lStack_78 = lStack_78 + param_1[3];
  if (pcVar20 == (char *)0x0) {
    local_64 = 0;
    plVar15 = param_1 + lVar16 * 6 + 0x11;
  }
  else {
    puVar2 = (uint *)((long)param_1 + lVar16 * 0x30 + 0x74);
    plVar3 = param_1 + lVar16 * 6 + 0xf;
    puVar4 = (uint *)(param_1 + lVar16 * 6 + 0xe);
    plVar5 = param_1 + lVar16 * 6 + 0x10;
    plVar15 = param_1 + lVar16 * 6 + 0x11;
    pcVar18 = "_ZN2v88internal8compiler23EffectControlLinearizer24LowerObjectIsNonCallableEPNS1_4NodeE"
              + lVar13 + lVar16 * -0xb40000 + 2;
    do {
      pcVar8 = pcVar20;
      if ((long)pcVar20 < -0x59ffff) {
        pcVar8 = (char *)0xffffffffffa60000;
      }
      if (0x59ffff < (long)pcVar8) {
        pcVar8 = 
        "N2v88internal8compiler23EffectControlLinearizer24LowerObjectIsNonCallableEPNS1_4NodeE";
      }
      pcVar6 = pcVar8 + (long)pcVar18;
      pcVar7 = (char *)-(long)pcVar8;
      if (-1 < (long)pcVar8) {
        pcVar7 = pcVar8;
      }
      FT_Vector_From_Polar(&local_90,lVar19,pcVar6);
      local_90 = local_90 + param_1[2];
      lStack_88 = lStack_88 + param_1[3];
      lVar13 = FT_Sin((ulong)pcVar7 >> 1);
      lVar11 = FT_Cos((ulong)pcVar7 >> 1);
      uVar12 = FT_MulDiv(lVar19,lVar13 << 2,lVar11 * 3 + 0x30000);
      FT_Vector_From_Polar(&local_a0,uVar12,pcVar18 + (long)pcVar10);
      local_a0 = local_a0 + local_80;
      lStack_98 = lStack_98 + lStack_78;
      FT_Vector_From_Polar(&local_b0,uVar12,(long)pcVar6 - (long)pcVar10);
      local_b0 = local_b0 + local_90;
      lStack_a8 = lStack_a8 + lStack_88;
      uVar14 = *puVar4;
      uVar9 = *puVar2;
      local_64 = 0;
      if (uVar9 < uVar14 + 3) {
        lVar13 = param_1[lVar16 * 6 + 0x12];
        uVar17 = uVar9;
        do {
          uVar17 = uVar17 + (uVar17 >> 1) + 0x10;
        } while (uVar17 < uVar14 + 3);
        lVar11 = FUN_00e13bcc(lVar13,0x10,uVar9,uVar17,*plVar3,&local_64);
        *plVar3 = lVar11;
        if (local_64 == 0) {
          lVar13 = FUN_00e13bcc(lVar13,1,uVar9,uVar17,*plVar5,&local_64);
          *plVar5 = lVar13;
          if (local_64 == 0) {
            *puVar2 = uVar17;
            uVar14 = *puVar4;
            goto LAB_00e25d60;
          }
        }
        *(undefined1 *)plVar15 = 0;
        goto LAB_00e25de4;
      }
      lVar13 = *plVar5;
LAB_00e25d60:
      pcVar20 = pcVar20 + -(long)pcVar8;
      plVar1 = (long *)(*plVar3 + (ulong)uVar14 * 0x10);
      plVar1[1] = lStack_98;
      *plVar1 = local_a0;
      plVar1[3] = lStack_a8;
      plVar1[2] = local_b0;
      plVar1[5] = lStack_88;
      plVar1[4] = local_90;
      *(undefined2 *)(lVar13 + (ulong)uVar14) = 0x202;
      *(undefined1 *)((undefined2 *)(lVar13 + (ulong)uVar14) + 1) = 1;
      *puVar4 = *puVar4 + 3;
      *(undefined1 *)plVar15 = 0;
      lStack_78 = lStack_88;
      local_80 = local_90;
      pcVar18 = pcVar6;
    } while (pcVar20 != (char *)0x0);
    local_64 = 0;
  }
LAB_00e25de4:
  *(undefined1 *)plVar15 = 0;
  return local_64;
}

