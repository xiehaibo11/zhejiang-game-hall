
ulong FUN_00e24338(long *param_1,int param_2,long param_3)

{
  uint *puVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  char *pcVar13;
  char *pcVar14;
  uint *puVar15;
  long *plVar16;
  long *plVar17;
  uint uVar18;
  long lVar19;
  undefined8 local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  uint local_64;
  
  iVar4 = (int)param_1[0xb];
  if (iVar4 == 0) {
    uVar10 = FUN_00e25b14(param_1);
    return uVar10;
  }
  lVar12 = param_1[0xd];
  lVar19 = (long)param_2;
  puVar1 = (uint *)(param_1 + (long)param_2 * 6 + 0xe);
  pcVar2 = "_ZN2v88internal8compiler23EffectControlLinearizer24LowerObjectIsNonCallableEPNS1_4NodeE"
           + lVar19 * -0xb40000 + 2;
  if (iVar4 == 1) {
LAB_00e244dc:
    FT_Vector_From_Polar(&local_80,lVar12,pcVar2 + param_1[1]);
    local_80 = local_80 + param_1[2];
    lStack_78 = lStack_78 + param_1[3];
    *(undefined1 *)(param_1 + lVar19 * 6 + 0x11) = 0;
    uVar11 = *puVar1;
    if (*(uint *)((long)param_1 + lVar19 * 0x30 + 0x8c) < uVar11) {
      if (((ulong)((1 - local_80) +
                  *(long *)(param_1[lVar19 * 6 + 0xf] + (ulong)(uVar11 - 1) * 0x10)) < 3) &&
         ((ulong)((1 - lStack_78) +
                 *(long *)(param_1[lVar19 * 6 + 0xf] + (ulong)(uVar11 - 1) * 0x10 + 8)) < 3)) {
        return 0;
      }
    }
    puVar15 = (uint *)((long)param_1 + lVar19 * 0x30 + 0x74);
    uVar5 = *puVar15;
    local_90 = (ulong)local_90._4_4_ << 0x20;
    if (uVar5 < uVar11 + 1) {
      lVar12 = param_1[lVar19 * 6 + 0x12];
      uVar18 = uVar5;
      do {
        uVar18 = uVar18 + (uVar18 >> 1) + 0x10;
      } while (uVar18 < uVar11 + 1);
      plVar17 = param_1 + lVar19 * 6 + 0xf;
      lVar6 = FUN_00e13bcc(lVar12,0x10,uVar5,uVar18,*plVar17,&local_90);
      *plVar17 = lVar6;
      uVar10 = local_90 & 0xffffffff;
      if ((int)local_90 != 0) goto LAB_00e246bc;
      lVar12 = FUN_00e13bcc(lVar12,1,uVar5,uVar18,param_1[lVar19 * 6 + 0x10],&local_90);
      param_1[lVar19 * 6 + 0x10] = lVar12;
      uVar10 = local_90 & 0xffffffff;
      if ((int)local_90 != 0) goto LAB_00e246bc;
      *puVar15 = uVar18;
      uVar11 = *puVar1;
    }
    else {
      lVar12 = param_1[lVar19 * 6 + 0x10];
      plVar17 = param_1 + lVar19 * 6 + 0xf;
    }
    uVar10 = 0;
    plVar17 = (long *)(*plVar17 + (ulong)uVar11 * 0x10);
    plVar17[1] = lStack_78;
    *plVar17 = local_80;
    *(undefined1 *)(lVar12 + (ulong)uVar11) = 1;
    *puVar1 = *puVar1 + 1;
LAB_00e246bc:
    *(undefined1 *)(param_1 + lVar19 * 6 + 0x11) = 0;
    return uVar10;
  }
  lVar6 = FT_Angle_Diff(*param_1,param_1[1]);
  if (lVar6 == 0xb40000) {
    pcVar13 = (char *)*param_1;
    pcVar14 = pcVar2;
  }
  else {
    if (lVar6 < 0) {
      lVar6 = lVar6 + 1;
    }
    pcVar14 = (char *)(lVar6 >> 1);
    pcVar13 = pcVar14 + (long)pcVar2 + *param_1;
  }
  uVar7 = FT_Cos(pcVar14);
  lVar6 = FT_MulFix(param_1[0xc],uVar7);
  if (0xffff < lVar6) {
LAB_00e24620:
    uVar7 = FT_DivFix(param_1[0xd],uVar7);
    FT_Vector_From_Polar(&local_80,uVar7,pcVar13);
    local_80 = local_80 + param_1[2];
    lStack_78 = lStack_78 + param_1[3];
    plVar17 = param_1 + lVar19 * 6 + 0x11;
    if ((char)*plVar17 == '\0') {
      uVar11 = *puVar1;
      if (uVar11 <= *(uint *)((long)param_1 + lVar19 * 0x30 + 0x8c)) {
LAB_00e24730:
        puVar15 = (uint *)((long)param_1 + lVar19 * 0x30 + 0x74);
        uVar5 = *puVar15;
        local_90 = local_90 & 0xffffffff00000000;
        if (uVar5 < uVar11 + 1) {
          lVar12 = param_1[lVar19 * 6 + 0x12];
          uVar18 = uVar5;
          do {
            uVar18 = uVar18 + (uVar18 >> 1) + 0x10;
          } while (uVar18 < uVar11 + 1);
          plVar16 = param_1 + lVar19 * 6 + 0xf;
          lVar6 = FUN_00e13bcc(lVar12,0x10,uVar5,uVar18,*plVar16,&local_90);
          *plVar16 = lVar6;
          uVar10 = local_90 & 0xffffffff;
          if ((int)local_90 != 0) goto LAB_00e24b0c;
          lVar12 = FUN_00e13bcc(lVar12,1,uVar5,uVar18,param_1[lVar19 * 6 + 0x10],&local_90);
          param_1[lVar19 * 6 + 0x10] = lVar12;
          uVar10 = local_90 & 0xffffffff;
          if ((int)local_90 != 0) goto LAB_00e24b0c;
          *puVar15 = uVar18;
          uVar11 = *puVar1;
        }
        else {
          lVar12 = param_1[lVar19 * 6 + 0x10];
          plVar16 = param_1 + lVar19 * 6 + 0xf;
        }
        plVar16 = (long *)(*plVar16 + (ulong)uVar11 * 0x10);
        plVar16[1] = lStack_78;
        *plVar16 = local_80;
        *(undefined1 *)(lVar12 + (ulong)uVar11) = 1;
        *puVar1 = *puVar1 + 1;
        goto LAB_00e24820;
      }
      if ((2 < (ulong)((1 - local_80) +
                      *(long *)(param_1[lVar19 * 6 + 0xf] + (ulong)(uVar11 - 1) * 0x10))) ||
         (2 < (ulong)((1 - lStack_78) +
                     *(long *)(param_1[lVar19 * 6 + 0xf] + (ulong)(uVar11 - 1) * 0x10 + 8))))
      goto LAB_00e24730;
    }
    else {
      plVar16 = (long *)(param_1[lVar19 * 6 + 0xf] + (ulong)(*puVar1 - 1) * 0x10);
      plVar16[1] = lStack_78;
      *plVar16 = local_80;
LAB_00e24820:
      *(char *)plVar17 = '\0';
    }
    if (param_3 != 0) {
      return 0;
    }
    FT_Vector_From_Polar(&local_80,param_1[0xd],pcVar2 + param_1[1]);
    local_80 = local_80 + param_1[2];
    lStack_78 = lStack_78 + param_1[3];
    if ((char)*plVar17 != '\0') {
      plVar16 = (long *)(param_1[lVar19 * 6 + 0xf] + (ulong)(*puVar1 - 1) * 0x10);
      plVar16[1] = lStack_78;
      *plVar16 = local_80;
      *(char *)plVar17 = '\0';
      return 0;
    }
    uVar11 = *puVar1;
    if (*(uint *)((long)param_1 + lVar19 * 0x30 + 0x8c) < uVar11) {
      if (((ulong)((1 - local_80) +
                  *(long *)(param_1[lVar19 * 6 + 0xf] + (ulong)(uVar11 - 1) * 0x10)) < 3) &&
         ((ulong)((1 - lStack_78) +
                 *(long *)(param_1[lVar19 * 6 + 0xf] + (ulong)(uVar11 - 1) * 0x10 + 8)) < 3)) {
        return 0;
      }
    }
    puVar15 = (uint *)((long)param_1 + lVar19 * 0x30 + 0x74);
    uVar5 = *puVar15;
    local_90 = local_90 & 0xffffffff00000000;
    if (uVar5 < uVar11 + 1) {
      lVar12 = param_1[lVar19 * 6 + 0x12];
      uVar18 = uVar5;
      do {
        uVar18 = uVar18 + (uVar18 >> 1) + 0x10;
      } while (uVar18 < uVar11 + 1);
      plVar16 = param_1 + lVar19 * 6 + 0xf;
      lVar6 = FUN_00e13bcc(lVar12,0x10,uVar5,uVar18,*plVar16,&local_90);
      *plVar16 = lVar6;
      uVar10 = local_90 & 0xffffffff;
      if ((int)local_90 != 0) goto LAB_00e24b0c;
      lVar12 = FUN_00e13bcc(lVar12,1,uVar5,uVar18,param_1[lVar19 * 6 + 0x10],&local_90);
      param_1[lVar19 * 6 + 0x10] = lVar12;
      uVar10 = local_90 & 0xffffffff;
      if ((int)local_90 != 0) goto LAB_00e24b0c;
      *puVar15 = uVar18;
      uVar11 = *puVar1;
    }
    else {
      lVar12 = param_1[lVar19 * 6 + 0x10];
      plVar16 = param_1 + lVar19 * 6 + 0xf;
    }
    uVar10 = 0;
    plVar16 = (long *)(*plVar16 + (ulong)uVar11 * 0x10);
    plVar16[1] = lStack_78;
    *plVar16 = local_80;
    *(undefined1 *)(lVar12 + (ulong)uVar11) = 1;
    *puVar1 = *puVar1 + 1;
LAB_00e24b0c:
    *(char *)plVar17 = '\0';
    return uVar10;
  }
  if (iVar4 != 2) goto LAB_00e244dc;
  pcVar3 = (char *)-(long)pcVar14;
  if (-1 < (long)pcVar14) {
    pcVar3 = pcVar14;
  }
  if ((long)pcVar3 < 0x3a) goto LAB_00e24620;
  uVar7 = FT_MulFix(lVar12,param_1[0xc]);
  FT_Vector_From_Polar(&local_80,uVar7,pcVar13);
  local_80 = local_80 + param_1[2];
  lStack_78 = lStack_78 + param_1[3];
  lVar8 = FT_Sin(pcVar14);
  lVar9 = -lVar8;
  if (-1 < lVar8) {
    lVar9 = lVar8;
  }
  uVar7 = FT_MulDiv(lVar12,0x10000 - lVar6,lVar9);
  FT_Vector_From_Polar(&local_90,uVar7,pcVar13 + (long)pcVar2);
  local_90 = local_90 + local_80;
  lStack_88 = lStack_88 + lStack_78;
  plVar17 = param_1 + lVar19 * 6 + 0x11;
  if ((char)*plVar17 == '\0') {
    uVar11 = *puVar1;
    if (uVar11 <= *(uint *)((long)param_1 + lVar19 * 0x30 + 0x8c)) {
LAB_00e24a10:
      puVar15 = (uint *)((long)param_1 + lVar19 * 0x30 + 0x74);
      uVar5 = *puVar15;
      local_64 = 0;
      if (uVar5 < uVar11 + 1) {
        lVar6 = param_1[lVar19 * 6 + 0x12];
        uVar18 = uVar5;
        do {
          uVar18 = uVar18 + (uVar18 >> 1) + 0x10;
        } while (uVar18 < uVar11 + 1);
        plVar16 = param_1 + lVar19 * 6 + 0xf;
        lVar9 = FUN_00e13bcc(lVar6,0x10,uVar5,uVar18,*plVar16,&local_64);
        *plVar16 = lVar9;
        uVar10 = (ulong)local_64;
        if (local_64 != 0) goto LAB_00e24ccc;
        lVar6 = FUN_00e13bcc(lVar6,1,uVar5,uVar18,param_1[lVar19 * 6 + 0x10],&local_64);
        param_1[lVar19 * 6 + 0x10] = lVar6;
        uVar10 = (ulong)local_64;
        if (local_64 != 0) goto LAB_00e24ccc;
        *puVar15 = uVar18;
        uVar11 = *puVar1;
      }
      else {
        lVar6 = param_1[lVar19 * 6 + 0x10];
        plVar16 = param_1 + lVar19 * 6 + 0xf;
      }
      plVar16 = (long *)(*plVar16 + (ulong)uVar11 * 0x10);
      plVar16[1] = lStack_88;
      *plVar16 = local_90;
      *(undefined1 *)(lVar6 + (ulong)uVar11) = 1;
      *puVar1 = *puVar1 + 1;
      goto LAB_00e24b68;
    }
    if ((2 < (1 - local_90) + *(long *)(param_1[lVar19 * 6 + 0xf] + (ulong)(uVar11 - 1) * 0x10)) ||
       (2 < (ulong)((1 - lStack_88) +
                   *(long *)(param_1[lVar19 * 6 + 0xf] + (ulong)(uVar11 - 1) * 0x10 + 8))))
    goto LAB_00e24a10;
  }
  else {
    plVar16 = (long *)(param_1[lVar19 * 6 + 0xf] + (ulong)(*puVar1 - 1) * 0x10);
    plVar16[1] = lStack_88;
    *plVar16 = local_90;
LAB_00e24b68:
    *(char *)plVar17 = '\0';
  }
  FT_Vector_From_Polar(&local_90,uVar7,(long)pcVar13 - (long)pcVar2);
  local_90 = local_90 + local_80;
  lStack_88 = lStack_88 + lStack_78;
  if ((char)*plVar17 == '\0') {
    uVar11 = *puVar1;
    if (uVar11 <= *(uint *)((long)param_1 + lVar19 * 0x30 + 0x8c)) {
LAB_00e24c1c:
      puVar15 = (uint *)((long)param_1 + lVar19 * 0x30 + 0x74);
      uVar5 = *puVar15;
      local_64 = 0;
      if (uVar5 < uVar11 + 1) {
        lVar6 = param_1[lVar19 * 6 + 0x12];
        uVar18 = uVar5;
        do {
          uVar18 = uVar18 + (uVar18 >> 1) + 0x10;
        } while (uVar18 < uVar11 + 1);
        plVar16 = param_1 + lVar19 * 6 + 0xf;
        lVar9 = FUN_00e13bcc(lVar6,0x10,uVar5,uVar18,*plVar16,&local_64);
        *plVar16 = lVar9;
        uVar10 = (ulong)local_64;
        if (local_64 != 0) {
LAB_00e24ccc:
          *(char *)plVar17 = '\0';
          return uVar10;
        }
        lVar6 = FUN_00e13bcc(lVar6,1,uVar5,uVar18,param_1[lVar19 * 6 + 0x10],&local_64);
        param_1[lVar19 * 6 + 0x10] = lVar6;
        uVar10 = (ulong)local_64;
        if (local_64 != 0) goto LAB_00e24ccc;
        *puVar15 = uVar18;
        uVar11 = *puVar1;
      }
      else {
        lVar6 = param_1[lVar19 * 6 + 0x10];
        plVar16 = param_1 + lVar19 * 6 + 0xf;
      }
      plVar16 = (long *)(*plVar16 + (ulong)uVar11 * 0x10);
      plVar16[1] = lStack_88;
      *plVar16 = local_90;
      *(undefined1 *)(lVar6 + (ulong)uVar11) = 1;
      *puVar1 = *puVar1 + 1;
      goto LAB_00e24d10;
    }
    if ((2 < (1 - local_90) + *(long *)(param_1[lVar19 * 6 + 0xf] + (ulong)(uVar11 - 1) * 0x10)) ||
       (2 < (ulong)((1 - lStack_88) +
                   *(long *)(param_1[lVar19 * 6 + 0xf] + (ulong)(uVar11 - 1) * 0x10 + 8))))
    goto LAB_00e24c1c;
  }
  else {
    plVar16 = (long *)(param_1[lVar19 * 6 + 0xf] + (ulong)(*puVar1 - 1) * 0x10);
    plVar16[1] = lStack_88;
    *plVar16 = local_90;
LAB_00e24d10:
    *(char *)plVar17 = '\0';
  }
  if (param_3 != 0) {
    return 0;
  }
  FT_Vector_From_Polar(&local_90,lVar12,pcVar2 + param_1[1]);
  local_90 = local_90 + param_1[2];
  lStack_88 = lStack_88 + param_1[3];
  if ((char)*plVar17 != '\0') {
    uVar10 = 0;
    plVar16 = (long *)(param_1[lVar19 * 6 + 0xf] + (ulong)(*puVar1 - 1) * 0x10);
    plVar16[1] = lStack_88;
    *plVar16 = local_90;
    goto LAB_00e24ec0;
  }
  uVar11 = *puVar1;
  if (*(uint *)((long)param_1 + lVar19 * 0x30 + 0x8c) < uVar11) {
    if (((1 - local_90) + *(long *)(param_1[lVar19 * 6 + 0xf] + (ulong)(uVar11 - 1) * 0x10) < 3) &&
       ((ulong)((1 - lStack_88) +
               *(long *)(param_1[lVar19 * 6 + 0xf] + (ulong)(uVar11 - 1) * 0x10 + 8)) < 3)) {
      return 0;
    }
  }
  puVar15 = (uint *)((long)param_1 + lVar19 * 0x30 + 0x74);
  uVar5 = *puVar15;
  local_64 = 0;
  if (uVar5 < uVar11 + 1) {
    lVar12 = param_1[lVar19 * 6 + 0x12];
    uVar18 = uVar5;
    do {
      uVar18 = uVar18 + (uVar18 >> 1) + 0x10;
    } while (uVar18 < uVar11 + 1);
    plVar16 = param_1 + lVar19 * 6 + 0xf;
    lVar6 = FUN_00e13bcc(lVar12,0x10,uVar5,uVar18,*plVar16,&local_64);
    *plVar16 = lVar6;
    if (local_64 == 0) {
      lVar12 = FUN_00e13bcc(lVar12,1,uVar5,uVar18,param_1[lVar19 * 6 + 0x10],&local_64);
      param_1[lVar19 * 6 + 0x10] = lVar12;
      if (local_64 == 0) {
        *puVar15 = uVar18;
        uVar11 = *puVar1;
        goto LAB_00e24e98;
      }
    }
    uVar10 = (ulong)local_64;
  }
  else {
    lVar12 = param_1[lVar19 * 6 + 0x10];
    plVar16 = param_1 + lVar19 * 6 + 0xf;
LAB_00e24e98:
    uVar10 = 0;
    plVar16 = (long *)(*plVar16 + (ulong)uVar11 * 0x10);
    plVar16[1] = lStack_88;
    *plVar16 = local_90;
    *(undefined1 *)(lVar12 + (ulong)uVar11) = 1;
    *puVar1 = *puVar1 + 1;
  }
LAB_00e24ec0:
  *(char *)plVar17 = '\0';
  return uVar10;
}

