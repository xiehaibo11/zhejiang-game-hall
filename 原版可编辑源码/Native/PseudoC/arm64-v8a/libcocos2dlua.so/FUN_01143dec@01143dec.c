
undefined4 FUN_01143dec(int *param_1,uint *param_2)

{
  int *piVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint3 *puVar12;
  char *pcVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  ulong uVar18;
  int *piVar19;
  ulong uVar20;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  *param_1 = 0;
  *(char **)(param_1 + 2) = "OK";
  if (param_2 == (uint *)0x0) {
    uVar11 = 2;
    pcVar13 = "null VP8Io passed to VP8GetHeaders()";
    goto LAB_01143fd0;
  }
  uVar10 = *(ulong *)(param_2 + 0x18);
  uVar18 = uVar10 - 3;
  if (uVar10 < 3 || uVar18 == 0) {
    uVar11 = 7;
    pcVar13 = "Truncated header.";
    goto LAB_01143fd0;
  }
  puVar12 = *(uint3 **)(param_2 + 0x1a);
  bVar3 = (byte)*puVar12;
  bVar4 = bVar3 >> 1 & 7;
  bVar5 = bVar3 >> 4 & 1;
  uVar14 = (uint)(*puVar12 >> 5);
  *(byte *)((long)param_1 + 0x41) = bVar4;
  *(byte *)((long)param_1 + 0x42) = bVar5;
  *(byte *)(param_1 + 0x10) = ~bVar3 & 1;
  param_1[0x11] = uVar14;
  if (3 < bVar4) {
    uVar11 = 3;
    pcVar13 = "Incorrect keyframe parameters.";
    goto LAB_01143fd0;
  }
  if (bVar5 == 0) {
    uVar11 = 4;
    pcVar13 = "Frame not displayable.";
    goto LAB_01143fd0;
  }
  pbVar15 = (byte *)((long)puVar12 + 3);
  if ((~bVar3 & 1) != 0) {
    if (uVar18 < 7) {
      uVar11 = 7;
      pcVar13 = "cannot parse picture header";
      goto LAB_01143fd0;
    }
    if (((*pbVar15 != 0x9d) || ((byte)puVar12[1] != 1)) || (*(byte *)((long)puVar12 + 5) != 0x2a)) {
      uVar11 = 3;
      pcVar13 = "Bad code word";
      goto LAB_01143fd0;
    }
    uVar18 = uVar10 - 10;
    pbVar15 = (byte *)((long)puVar12 + 10);
    uVar14 = (uint)*(byte *)((long)puVar12 + 6) | (*(byte *)((long)puVar12 + 7) & 0x3f) << 8;
    *(short *)(param_1 + 0x12) = (short)uVar14;
    *(byte *)(param_1 + 0x13) = *(byte *)((long)puVar12 + 7) >> 6;
    uVar8 = (uint)(byte)puVar12[2] | (*(byte *)((long)puVar12 + 9) & 0x3f) << 8;
    *(short *)((long)param_1 + 0x4a) = (short)uVar8;
    bVar3 = *(byte *)((long)puVar12 + 9);
    param_1[0x66] = uVar14 + 0xf >> 4;
    param_1[0x67] = uVar8 + 0xf >> 4;
    *(byte *)((long)param_1 + 0x4d) = bVar3 >> 6;
    *param_2 = uVar14;
    param_2[1] = uVar8;
    param_2[0x21] = uVar8;
    param_2[0x22] = 0;
    param_2[0x1d] = 0;
    param_2[0x1e] = 0;
    param_2[0x1f] = uVar14;
    param_2[0x20] = 0;
    param_2[3] = uVar14;
    param_2[4] = uVar8;
    FUN_01160568(param_1 + 0x12a);
    uVar14 = param_1[0x11];
    param_1[0x24] = 0;
    param_1[0x22] = 1;
    param_1[0x23] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
  }
  if (uVar18 < uVar14) {
    if (*param_1 != 0) {
      return 0;
    }
    uVar11 = 7;
    pcVar13 = "bad partition length";
    goto LAB_01143fd0;
  }
  piVar1 = param_1 + 4;
  FUN_0115ef64(piVar1,pbVar15);
  uVar14 = param_1[0x11];
  if ((char)param_1[0x10] != '\0') {
    uVar6 = FUN_0115f078(piVar1,1);
    *(undefined1 *)((long)param_1 + 0x4e) = uVar6;
    uVar6 = FUN_0115f078(piVar1,1);
    *(undefined1 *)((long)param_1 + 0x4f) = uVar6;
  }
  iVar7 = FUN_0115f078(piVar1,1);
  param_1[0x20] = iVar7;
  if (iVar7 == 0) {
    param_1[0x21] = 0;
    iVar7 = param_1[0xe];
  }
  else {
    iVar7 = FUN_0115f078(piVar1,1);
    param_1[0x21] = iVar7;
    iVar7 = FUN_0115f078(piVar1,1);
    if (iVar7 != 0) {
      iVar7 = FUN_0115f078(piVar1,1);
      param_1[0x22] = iVar7;
      iVar7 = FUN_0115f078(piVar1,1);
      uVar6 = 0;
      if (iVar7 != 0) {
        uVar6 = FUN_0115f1a8(piVar1,7);
      }
      *(undefined1 *)(param_1 + 0x23) = uVar6;
      iVar7 = FUN_0115f078(piVar1,1);
      uVar6 = 0;
      if (iVar7 != 0) {
        uVar6 = FUN_0115f1a8(piVar1,7);
      }
      *(undefined1 *)((long)param_1 + 0x8d) = uVar6;
      iVar7 = FUN_0115f078(piVar1,1);
      uVar6 = 0;
      if (iVar7 != 0) {
        uVar6 = FUN_0115f1a8(piVar1,7);
      }
      *(undefined1 *)((long)param_1 + 0x8e) = uVar6;
      iVar7 = FUN_0115f078(piVar1,1);
      uVar6 = 0;
      if (iVar7 != 0) {
        uVar6 = FUN_0115f1a8(piVar1,7);
      }
      *(undefined1 *)((long)param_1 + 0x8f) = uVar6;
      iVar7 = FUN_0115f078(piVar1,1);
      uVar6 = 0;
      if (iVar7 != 0) {
        uVar6 = FUN_0115f1a8(piVar1,6);
      }
      *(undefined1 *)(param_1 + 0x24) = uVar6;
      iVar7 = FUN_0115f078(piVar1,1);
      uVar6 = 0;
      if (iVar7 != 0) {
        uVar6 = FUN_0115f1a8(piVar1,6);
      }
      *(undefined1 *)((long)param_1 + 0x91) = uVar6;
      iVar7 = FUN_0115f078(piVar1,1);
      uVar6 = 0;
      if (iVar7 != 0) {
        uVar6 = FUN_0115f1a8(piVar1,6);
      }
      *(undefined1 *)((long)param_1 + 0x92) = uVar6;
      iVar7 = FUN_0115f078(piVar1,1);
      uVar6 = 0;
      if (iVar7 != 0) {
        uVar6 = FUN_0115f1a8(piVar1,6);
      }
      *(undefined1 *)((long)param_1 + 0x93) = uVar6;
    }
    if (param_1[0x21] != 0) {
      iVar7 = FUN_0115f078(piVar1,1);
      if (iVar7 == 0) {
        uVar6 = 0xff;
      }
      else {
        uVar6 = FUN_0115f078(piVar1,8);
      }
      *(undefined1 *)(param_1 + 0x12a) = uVar6;
      iVar7 = FUN_0115f078(piVar1,1);
      if (iVar7 == 0) {
        uVar6 = 0xff;
      }
      else {
        uVar6 = FUN_0115f078(piVar1,8);
      }
      *(undefined1 *)((long)param_1 + 0x4a9) = uVar6;
      iVar7 = FUN_0115f078(piVar1,1);
      if (iVar7 != 0) {
        uVar6 = FUN_0115f078(piVar1,8);
        *(undefined1 *)((long)param_1 + 0x4aa) = uVar6;
        iVar7 = param_1[0xe];
        goto joined_r0x01144188;
      }
      *(undefined1 *)((long)param_1 + 0x4aa) = 0xff;
    }
    iVar7 = param_1[0xe];
  }
joined_r0x01144188:
  if (iVar7 == 0) {
    iVar7 = FUN_0115f078(piVar1,1);
    param_1[0x14] = iVar7;
    iVar7 = FUN_0115f078(piVar1,6);
    param_1[0x15] = iVar7;
    iVar7 = FUN_0115f078(piVar1,3);
    param_1[0x16] = iVar7;
    iVar7 = FUN_0115f078(piVar1,1);
    param_1[0x17] = iVar7;
    if ((iVar7 != 0) && (iVar7 = FUN_0115f078(piVar1,1), iVar7 != 0)) {
      iVar7 = FUN_0115f078(piVar1,1);
      if (iVar7 != 0) {
        iVar7 = FUN_0115f1a8(piVar1,6);
        param_1[0x18] = iVar7;
      }
      iVar7 = FUN_0115f078(piVar1,1);
      if (iVar7 != 0) {
        iVar7 = FUN_0115f1a8(piVar1,6);
        param_1[0x19] = iVar7;
      }
      iVar7 = FUN_0115f078(piVar1,1);
      if (iVar7 != 0) {
        iVar7 = FUN_0115f1a8(piVar1,6);
        param_1[0x1a] = iVar7;
      }
      iVar7 = FUN_0115f078(piVar1,1);
      if (iVar7 != 0) {
        iVar7 = FUN_0115f1a8(piVar1,6);
        param_1[0x1b] = iVar7;
      }
      iVar7 = FUN_0115f078(piVar1,1);
      if (iVar7 != 0) {
        iVar7 = FUN_0115f1a8(piVar1,6);
        param_1[0x1c] = iVar7;
      }
      iVar7 = FUN_0115f078(piVar1,1);
      if (iVar7 != 0) {
        iVar7 = FUN_0115f1a8(piVar1,6);
        param_1[0x1d] = iVar7;
      }
      iVar7 = FUN_0115f078(piVar1,1);
      if (iVar7 != 0) {
        iVar7 = FUN_0115f1a8(piVar1,6);
        param_1[0x1e] = iVar7;
      }
      iVar7 = FUN_0115f078(piVar1,1);
      if (iVar7 != 0) {
        iVar7 = FUN_0115f1a8(piVar1,6);
        param_1[0x1f] = iVar7;
      }
    }
    iVar7 = 0;
    if ((param_1[0x15] != 0) && (iVar7 = 1, param_1[0x14] == 0)) {
      iVar7 = 2;
    }
    param_1[0x2da] = iVar7;
    if (param_1[0xe] == 0) {
      uVar17 = uVar18 - uVar14;
      uVar8 = FUN_0115f078(piVar1,2);
      iVar7 = 1 << (ulong)(uVar8 & 0x1f);
      uVar20 = (long)iVar7 - 1;
      uVar10 = uVar17 + uVar20 * -3;
      param_1[0x6c] = iVar7;
      if (uVar17 < uVar20 * 3) {
        iVar9 = 7;
        iVar7 = *param_1;
      }
      else {
        puVar12 = (uint3 *)(pbVar15 + uVar14);
        pbVar16 = (byte *)((long)puVar12 + uVar20 * 3);
        if ((int)uVar20 != 0) {
          uVar17 = 0;
          piVar19 = param_1 + 0x6e;
          do {
            uVar2 = uVar10;
            if (*puVar12 <= uVar10) {
              uVar2 = (ulong)*puVar12;
            }
            FUN_0115ef64(piVar19,pbVar16,uVar2);
            uVar17 = uVar17 + 1;
            pbVar16 = pbVar16 + uVar2;
            uVar10 = uVar10 - uVar2;
            piVar19 = piVar19 + 0xc;
            puVar12 = (uint3 *)((long)puVar12 + 3);
          } while (uVar17 < uVar20);
        }
        FUN_0115ef64(param_1 + uVar20 * 0xc + 0x6e,pbVar16,uVar10);
        if (pbVar16 < pbVar15 + uVar18) {
          FUN_01160334(param_1);
          if ((char)param_1[0x10] != '\0') {
            FUN_0115f078(piVar1,1);
            FUN_01161130(piVar1,param_1);
            param_1[1] = 1;
            return 1;
          }
          if (*param_1 != 0) {
            return 0;
          }
          uVar11 = 4;
          pcVar13 = "Not a key frame.";
          goto LAB_01143fd0;
        }
        iVar9 = 5;
        iVar7 = *param_1;
      }
      if (iVar7 == 0) {
        *(char **)(param_1 + 2) = "cannot parse partitions";
        *param_1 = iVar9;
        param_1[1] = 0;
        return 0;
      }
    }
    else if (*param_1 == 0) {
      uVar11 = 3;
      pcVar13 = "cannot parse filter header";
      goto LAB_01143fd0;
    }
  }
  else if (*param_1 == 0) {
    uVar11 = 3;
    pcVar13 = "cannot parse segment header";
LAB_01143fd0:
    *(undefined8 *)param_1 = uVar11;
    *(char **)(param_1 + 2) = pcVar13;
    return 0;
  }
  return 0;
}

