
ulong FT_Stroker_LineTo(long *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  undefined8 uVar19;
  long local_90;
  long lStack_88;
  uint local_80;
  undefined4 uStack_7c;
  long lStack_78;
  uint local_64;
  
  if (param_1 == (long *)0x0) {
    return 6;
  }
  if (param_2 == (long *)0x0) {
    return 6;
  }
  local_90 = *param_2 - param_1[2];
  lStack_88 = param_2[1] - param_1[3];
  if (lStack_88 == 0 && local_90 == 0) {
    return 0;
  }
  lVar6 = FT_Vector_Length(&local_90);
  lVar7 = FT_Atan2(local_90,lStack_88);
  FT_Vector_From_Polar
            (&local_90,param_1[0xd],
             "_ZN2v88internal8compiler23EffectControlLinearizer24LowerObjectIsNonCallableEPNS1_4NodeE"
             + lVar7 + 2);
  if ((char)param_1[5] == '\0') {
    param_1[1] = lVar7;
    uVar12 = FT_Angle_Diff(*param_1,lVar7);
    if (uVar12 != 0) {
      uVar8 = FUN_00e24060(param_1,uVar12 >> 0x3f,lVar6);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      uVar12 = FUN_00e24338(param_1,(uint)(uVar12 >> 0x3f) ^ 1,lVar6);
      iVar5 = (int)uVar12;
      goto joined_r0x00e21340;
    }
  }
  else {
    FT_Vector_From_Polar
              (&local_80,param_1[0xd],
               "_ZN2v88internal8compiler23EffectControlLinearizer24LowerObjectIsNonCallableEPNS1_4NodeE"
               + lVar7 + 2);
    lVar11 = lStack_78;
    lVar10 = param_1[3];
    lVar16 = param_1[2];
    uVar13 = *(uint *)((long)param_1 + 0x8c);
    uVar12 = (ulong)uVar13;
    lVar14 = CONCAT44(uStack_7c,local_80);
    if (-1 < (int)uVar13) {
      uVar2 = *(uint *)(param_1 + 0xe);
      if (uVar13 + 1 < uVar2) {
        uVar13 = uVar2 - 1;
        *(uint *)(param_1 + 0xe) = uVar13;
        puVar3 = (undefined8 *)(param_1[0xf] + (ulong)uVar13 * 0x10);
        uVar19 = *puVar3;
        puVar4 = (undefined8 *)(param_1[0xf] + uVar12 * 0x10);
        puVar4[1] = puVar3[1];
        *puVar4 = uVar19;
        *(undefined1 *)(param_1[0x10] + uVar12) = *(undefined1 *)(param_1[0x10] + (ulong)uVar13);
        *(byte *)(param_1[0x10] + uVar12) = *(byte *)(param_1[0x10] + uVar12) | 4;
        *(byte *)(param_1[0x10] + (ulong)(uVar2 - 2)) =
             *(byte *)(param_1[0x10] + (ulong)(uVar2 - 2)) | 8;
      }
      else {
        *(uint *)(param_1 + 0xe) = uVar13;
      }
      *(undefined1 *)(param_1 + 0x11) = 0;
      *(undefined4 *)((long)param_1 + 0x8c) = 0xffffffff;
    }
    uVar13 = *(uint *)(param_1 + 0xe);
    uVar2 = *(uint *)((long)param_1 + 0x74);
    *(undefined1 *)(param_1 + 0x11) = 0;
    *(uint *)((long)param_1 + 0x8c) = uVar13;
    local_64 = 0;
    if (uVar2 < uVar13 + 1) {
      lVar15 = param_1[0x12];
      uVar18 = uVar2;
      do {
        uVar18 = uVar18 + (uVar18 >> 1) + 0x10;
      } while (uVar18 < uVar13 + 1);
      lVar9 = FUN_00e13bcc(lVar15,0x10,uVar2,uVar18,param_1[0xf],&local_64);
      param_1[0xf] = lVar9;
      if (local_64 != 0) {
LAB_00e213f4:
        *(undefined1 *)(param_1 + 0x11) = 0;
        return (ulong)local_64;
      }
      lVar15 = FUN_00e13bcc(lVar15,1,uVar2,uVar18,param_1[0x10],&local_64);
      param_1[0x10] = lVar15;
      if (local_64 != 0) goto LAB_00e213f4;
      *(uint *)((long)param_1 + 0x74) = uVar18;
      uVar13 = *(uint *)(param_1 + 0xe);
    }
    else {
      lVar15 = param_1[0x10];
    }
    plVar17 = (long *)(param_1[0xf] + (ulong)uVar13 * 0x10);
    plVar17[1] = lVar11 + lVar10;
    *plVar17 = lVar14 + lVar16;
    *(undefined1 *)(lVar15 + (ulong)uVar13) = 1;
    lVar11 = param_1[3];
    lVar14 = param_1[2];
    *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
    uVar13 = *(uint *)((long)param_1 + 0xbc);
    uVar12 = (ulong)uVar13;
    *(undefined1 *)(param_1 + 0x11) = 0;
    if (-1 < (int)uVar13) {
      uVar2 = *(uint *)(param_1 + 0x14);
      if (uVar13 + 1 < uVar2) {
        uVar13 = uVar2 - 1;
        *(uint *)(param_1 + 0x14) = uVar13;
        puVar3 = (undefined8 *)(param_1[0x15] + (ulong)uVar13 * 0x10);
        uVar19 = *puVar3;
        puVar4 = (undefined8 *)(param_1[0x15] + uVar12 * 0x10);
        puVar4[1] = puVar3[1];
        *puVar4 = uVar19;
        *(undefined1 *)(param_1[0x16] + uVar12) = *(undefined1 *)(param_1[0x16] + (ulong)uVar13);
        *(byte *)(param_1[0x16] + uVar12) = *(byte *)(param_1[0x16] + uVar12) | 4;
        *(byte *)(param_1[0x16] + (ulong)(uVar2 - 2)) =
             *(byte *)(param_1[0x16] + (ulong)(uVar2 - 2)) | 8;
      }
      else {
        *(uint *)(param_1 + 0x14) = uVar13;
      }
      *(undefined4 *)((long)param_1 + 0xbc) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x17) = 0;
    }
    uVar13 = *(uint *)(param_1 + 0x14);
    uVar2 = *(uint *)((long)param_1 + 0xa4);
    *(undefined1 *)(param_1 + 0x17) = 0;
    *(uint *)((long)param_1 + 0xbc) = uVar13;
    local_64 = 0;
    if (uVar2 < uVar13 + 1) {
      lVar16 = param_1[0x18];
      uVar18 = uVar2;
      do {
        uVar18 = uVar18 + (uVar18 >> 1) + 0x10;
      } while (uVar18 < uVar13 + 1);
      lVar10 = FUN_00e13bcc(lVar16,0x10,uVar2,uVar18,param_1[0x15],&local_64);
      param_1[0x15] = lVar10;
      uVar12 = (ulong)local_64;
      if (local_64 == 0) {
        lVar16 = FUN_00e13bcc(lVar16,1,uVar2,uVar18,param_1[0x16],&local_64);
        param_1[0x16] = lVar16;
        uVar12 = (ulong)local_64;
        if (local_64 == 0) {
          *(uint *)((long)param_1 + 0xa4) = uVar18;
          uVar13 = *(uint *)(param_1 + 0x14);
          goto LAB_00e21544;
        }
      }
    }
    else {
      lVar16 = param_1[0x16];
LAB_00e21544:
      plVar17 = (long *)(param_1[0x15] + (ulong)uVar13 * 0x10);
      plVar17[1] = lVar11 - lStack_78;
      *plVar17 = lVar14 - CONCAT44(uStack_7c,local_80);
      *(undefined1 *)(lVar16 + (ulong)uVar13) = 1;
      uVar12 = 0;
      *(int *)(param_1 + 0x14) = (int)param_1[0x14] + 1;
    }
    *(undefined1 *)(param_1 + 0x17) = 0;
    param_1[6] = lVar7;
    *(undefined1 *)(param_1 + 5) = 0;
    param_1[9] = lVar6;
    iVar5 = (int)uVar12;
joined_r0x00e21340:
    if (iVar5 != 0) {
      return uVar12;
    }
  }
  lVar16 = *param_2;
  lVar10 = param_2[1];
  plVar17 = param_1 + 0x11;
  lVar14 = local_90 + lVar16;
  lVar11 = lStack_88 + lVar10;
  if ((char)*plVar17 == '\0') {
    uVar13 = *(uint *)(param_1 + 0xe);
    if (uVar13 <= *(uint *)((long)param_1 + 0x8c)) {
LAB_00e21604:
      uVar2 = *(uint *)((long)param_1 + 0x74);
      local_80 = 0;
      if (uVar2 < uVar13 + 1) {
        lVar16 = param_1[0x12];
        uVar18 = uVar2;
        do {
          uVar18 = uVar18 + (uVar18 >> 1) + 0x10;
        } while (uVar18 < uVar13 + 1);
        lVar10 = FUN_00e13bcc(lVar16,0x10,uVar2,uVar18,param_1[0xf],&local_80);
        param_1[0xf] = lVar10;
        uVar12 = (ulong)local_80;
        if (local_80 != 0) goto LAB_00e217e4;
        lVar16 = FUN_00e13bcc(lVar16,1,uVar2,uVar18,param_1[0x10],&local_80);
        param_1[0x10] = lVar16;
        uVar12 = (ulong)local_80;
        if (local_80 != 0) goto LAB_00e217e4;
        uVar13 = *(uint *)(param_1 + 0xe);
        *(uint *)((long)param_1 + 0x74) = uVar18;
      }
      else {
        lVar16 = param_1[0x10];
      }
      plVar1 = (long *)(param_1[0xf] + (ulong)uVar13 * 0x10);
      *plVar1 = lVar14;
      plVar1[1] = lVar11;
      *(undefined1 *)(lVar16 + (ulong)uVar13) = 1;
      *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
      goto LAB_00e216c4;
    }
    if ((2 < (ulong)((1 - lVar14) + *(long *)(param_1[0xf] + (ulong)(uVar13 - 1) * 0x10))) ||
       (2 < (ulong)((1 - lVar11) + *(long *)(param_1[0xf] + (ulong)(uVar13 - 1) * 0x10 + 8))))
    goto LAB_00e21604;
  }
  else {
    plVar1 = (long *)(param_1[0xf] + (ulong)((int)param_1[0xe] - 1) * 0x10);
    *plVar1 = lVar14;
    plVar1[1] = lVar11;
LAB_00e216c4:
    *(char *)plVar17 = '\x01';
    lVar16 = *param_2;
    lVar10 = param_2[1];
  }
  plVar17 = param_1 + 0x17;
  lVar16 = lVar16 - local_90;
  lVar10 = lVar10 - lStack_88;
  if ((char)*plVar17 == '\0') {
    uVar13 = *(uint *)(param_1 + 0x14);
    if (*(uint *)((long)param_1 + 0xbc) < uVar13) {
      if (((ulong)((1 - lVar16) + *(long *)(param_1[0x15] + (ulong)(uVar13 - 1) * 0x10)) < 3) &&
         ((ulong)((1 - lVar10) + *(long *)(param_1[0x15] + (ulong)(uVar13 - 1) * 0x10 + 8)) < 3))
      goto LAB_00e21834;
    }
    uVar2 = *(uint *)((long)param_1 + 0xa4);
    local_80 = 0;
    if (uVar2 < uVar13 + 1) {
      lVar14 = param_1[0x18];
      uVar18 = uVar2;
      do {
        uVar18 = uVar18 + (uVar18 >> 1) + 0x10;
      } while (uVar18 < uVar13 + 1);
      local_90 = -local_90;
      lStack_88 = -lStack_88;
      lVar11 = FUN_00e13bcc(lVar14,0x10,uVar2,uVar18,param_1[0x15],&local_80);
      param_1[0x15] = lVar11;
      uVar12 = (ulong)local_80;
      if (local_80 != 0) {
LAB_00e217e4:
        *(char *)plVar17 = '\x01';
        return uVar12;
      }
      lVar14 = FUN_00e13bcc(lVar14,1,uVar2,uVar18,param_1[0x16],&local_80);
      param_1[0x16] = lVar14;
      uVar12 = (ulong)local_80;
      if (local_80 != 0) goto LAB_00e217e4;
      uVar13 = *(uint *)(param_1 + 0x14);
      *(uint *)((long)param_1 + 0xa4) = uVar18;
    }
    else {
      lVar14 = param_1[0x16];
    }
    plVar1 = (long *)(param_1[0x15] + (ulong)uVar13 * 0x10);
    *plVar1 = lVar16;
    plVar1[1] = lVar10;
    *(undefined1 *)(lVar14 + (ulong)uVar13) = 1;
    *(int *)(param_1 + 0x14) = (int)param_1[0x14] + 1;
  }
  else {
    plVar1 = (long *)(param_1[0x15] + (ulong)((int)param_1[0x14] - 1) * 0x10);
    *plVar1 = lVar16;
    plVar1[1] = lVar10;
  }
  *(char *)plVar17 = '\x01';
LAB_00e21834:
  *param_1 = lVar7;
  lVar7 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = lVar7;
  param_1[4] = lVar6;
  return 0;
}

