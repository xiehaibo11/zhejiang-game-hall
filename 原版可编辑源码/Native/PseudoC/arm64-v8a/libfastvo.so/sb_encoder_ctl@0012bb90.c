
undefined8 sb_encoder_ctl(undefined8 *param_1,undefined4 param_2,float *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  float fVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  int iVar21;
  undefined2 *puVar22;
  long lVar23;
  float *pfVar24;
  ulong uVar25;
  uint *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float local_44;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar10 = tpidr_el0;
  local_38 = *(long *)(lVar10 + 0x28);
  switch(param_2) {
  case 3:
    fVar12 = *(float *)(param_1 + 2);
    goto LAB_0012bf20;
  case 4:
    uVar11 = 6;
    uVar6 = (uint)*param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
    if (9 < (int)uVar6) {
      uVar6 = 10;
    }
    lVar19 = *(long *)*param_1 + (ulong)uVar6 * 4;
    uVar5 = *(undefined4 *)(lVar19 + 0x90);
    param_3 = &local_3c;
    *(undefined4 *)(param_1 + 0x1d) = uVar5;
    *(undefined4 *)((long)param_1 + 0xec) = uVar5;
    local_3c = *(float *)(lVar19 + 100);
    param_1 = (undefined8 *)param_1[1];
    break;
  default:
    fprintf((FILE *)0x14d168,"warning: %s %d\n","Unknown nb_ctl request: ");
    uVar11 = 0xffffffff;
    goto LAB_0012c084;
  case 6:
    uVar11 = 4;
    break;
  case 8:
    param_1 = (undefined8 *)param_1[1];
    uVar11 = 8;
    break;
  case 9:
    param_1 = (undefined8 *)param_1[1];
    uVar11 = 9;
    break;
  case 10:
    fVar12 = *param_3;
    uVar11 = 0;
    *(float *)(param_1 + 0x1d) = fVar12;
    *(float *)((long)param_1 + 0xec) = fVar12;
    goto LAB_0012c084;
  case 0xc:
    uVar11 = 0xc;
    *(float *)((long)param_1 + 0xb4) = *param_3;
    param_1 = (undefined8 *)param_1[1];
    break;
  case 0xd:
    fVar12 = *(float *)((long)param_1 + 0xb4);
    goto LAB_0012bf20;
  case 0xe:
    local_40 = *param_3 + 0.6;
    *(float *)(param_1 + 0x16) = *param_3;
    if (10.0 < local_40) {
      local_40 = 10.0;
    }
    local_3c = (float)(int)(*param_3 + 0.5);
    if (9 < (int)local_3c) {
      local_3c = 1.4013e-44;
    }
    speex_encoder_ctl(param_1[1],0xe,&local_40,param_2);
    uVar11 = 4;
    param_3 = &local_3c;
    break;
  case 0xf:
    fVar12 = *(float *)(param_1 + 0x16);
    goto LAB_0012bf20;
  case 0x10:
    uVar11 = speex_encoder_ctl(param_1[1],0x10,param_3,param_2);
    fVar12 = *param_3;
    if ((int)fVar12 < 2) {
      fVar12 = 1.4013e-45;
    }
    *(float *)(param_1 + 0x1e) = fVar12;
    if (*(long *)(lVar10 + 0x28) == local_38) {
      return 0;
    }
    goto LAB_0012c294;
  case 0x11:
    fVar12 = *(float *)(param_1 + 0x1e);
    goto LAB_0012bf20;
  case 0x12:
    local_3c = 1.4013e-44;
    fVar12 = *param_3;
    do {
      speex_encoder_ctl(param_1,4,&local_3c);
      speex_encoder_ctl(param_1,0x13,&local_40);
      if ((int)local_40 <= (int)fVar12) break;
      fVar9 = (float)((int)local_3c - 1);
      bVar1 = 0 < (int)local_3c;
      local_3c = fVar9;
    } while (bVar1);
    goto LAB_0012c080;
  case 0x13:
    speex_encoder_ctl(param_1[1],0x13,param_3,param_2);
    uVar11 = 0;
    lVar19 = *(long *)(param_1[0x1c] + (long)*(int *)(param_1 + 0x1d) * 8);
    if (lVar19 == 0) {
      iVar15 = 0;
      if (*(int *)(param_1 + 2) != 0) {
        iVar15 = (*(int *)((long)param_1 + 0xf4) << 2) / *(int *)(param_1 + 2);
      }
      *param_3 = (float)((int)*param_3 + iVar15);
    }
    else {
      iVar15 = 0;
      if (*(int *)(param_1 + 2) != 0) {
        iVar15 = (*(int *)(lVar19 + 0x54) * *(int *)((long)param_1 + 0xf4)) / *(int *)(param_1 + 2);
      }
      *param_3 = (float)((int)*param_3 + iVar15);
    }
    goto LAB_0012c084;
  case 0x18:
    fVar12 = *param_3;
    uVar11 = 0x18;
    param_3 = &local_3c;
    *(float *)((long)param_1 + 0xf4) = fVar12;
    local_3c = (float)((int)fVar12 >> 1);
    param_1 = (undefined8 *)param_1[1];
    break;
  case 0x19:
    fVar12 = *(float *)((long)param_1 + 0xf4);
    goto LAB_0012bf20;
  case 0x1a:
    iVar15 = *(int *)((long)param_1 + 0x24);
    uVar14 = (ulong)iVar15;
    *(undefined4 *)(param_1 + 5) = 1;
    if (0 < iVar15) {
      lVar19 = param_1[0xd];
      iVar2 = iVar15 + 1;
      if (iVar15 == 1) {
        uVar16 = 0;
LAB_0012c130:
        iVar21 = (int)uVar16 * 0x10000;
        do {
          iVar21 = iVar21 + 0x10000;
          uVar7 = 0;
          if (iVar2 != 0) {
            uVar7 = (undefined2)(((iVar21 >> 0x10) * 0x6488) / iVar2);
          }
          *(undefined2 *)(lVar19 + uVar16 * 2) = uVar7;
          uVar16 = uVar16 + 1;
        } while ((long)uVar16 < (long)uVar14);
      }
      else {
        uVar16 = uVar14 & 0xfffffffffffffffe;
        iVar21 = 0;
        puVar22 = (undefined2 *)(lVar19 + 2);
        uVar17 = uVar16;
        do {
          uVar6 = iVar21 >> 0x10;
          iVar21 = iVar21 + 0x20000;
          uVar7 = 0;
          if (iVar2 != 0) {
            uVar7 = (undefined2)((int)((uVar6 | 1) * 0x6488) / iVar2);
          }
          uVar8 = 0;
          if (iVar2 != 0) {
            uVar8 = (undefined2)(((iVar21 >> 0x10) * 0x6488) / iVar2);
          }
          uVar17 = uVar17 - 2;
          puVar22[-1] = uVar7;
          *puVar22 = uVar8;
          puVar22 = puVar22 + 2;
        } while (uVar17 != 0);
        if (uVar16 != uVar14) goto LAB_0012c130;
      }
      if (0 < iVar15) {
        lVar13 = param_1[0x10];
        lVar3 = param_1[0x11];
        lVar18 = param_1[0x12];
        lVar19 = 0;
        do {
          lVar23 = lVar19 * 4;
          *(undefined4 *)(lVar3 + lVar23) = 0;
          *(undefined4 *)(lVar13 + lVar23) = 0;
          *(undefined4 *)(lVar18 + lVar23) = 0;
          lVar19 = lVar19 + 1;
        } while (lVar19 < *(int *)((long)param_1 + 0x24));
      }
    }
    puVar20 = (undefined8 *)param_1[9];
    puVar4 = (undefined8 *)param_1[10];
    if ((puVar4 < puVar20 + 0x10) && (puVar20 < puVar4 + 0x10)) {
      lVar19 = 0;
      do {
        *(undefined2 *)((long)puVar4 + lVar19) = 0;
        *(undefined2 *)((long)puVar20 + lVar19) = 0;
        lVar19 = lVar19 + 2;
        uVar11 = 0;
      } while (lVar19 != 0x80);
    }
    else {
      uVar11 = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar20[1] = 0;
      *puVar20 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar20[3] = 0;
      puVar20[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar20[5] = 0;
      puVar20[4] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar20[7] = 0;
      puVar20[6] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar20[9] = 0;
      puVar20[8] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar20[0xb] = 0;
      puVar20[10] = 0;
      puVar4[0xd] = 0;
      puVar4[0xc] = 0;
      puVar20[0xd] = 0;
      puVar20[0xc] = 0;
      puVar4[0xf] = 0;
      puVar4[0xe] = 0;
      puVar20[0xf] = 0;
      puVar20[0xe] = 0;
    }
    goto LAB_0012c084;
  case 0x1d:
    fVar12 = *(float *)((long)param_1 + 0xd4);
    goto LAB_0012bf20;
  case 0x1e:
    uVar11 = 0x1e;
    *(float *)(param_1 + 0x1a) = *param_3;
    param_1 = (undefined8 *)param_1[1];
    break;
  case 0x1f:
    fVar12 = *(float *)(param_1 + 0x1a);
    goto LAB_0012bf20;
  case 0x20:
    fVar12 = *param_3;
    puVar26 = (uint *)((long)param_1 + 0xb4);
    *puVar26 = (uint)(fVar12 != 0.0);
    *(float *)(param_1 + 0x18) = fVar12;
    speex_encoder_ctl(param_1[1],0xc,puVar26,param_2);
    if (*puVar26 == 0) goto LAB_0012c080;
    local_3c = 1.4013e-44;
    fVar12 = *param_3;
    do {
      speex_encoder_ctl(param_1,4,&local_3c);
      speex_encoder_ctl(param_1,0x13,&local_40);
      if ((int)local_40 <= (int)fVar12) break;
      fVar9 = (float)((int)local_3c - 1);
      bVar1 = 0 < (int)local_3c;
      local_3c = fVar9;
    } while (bVar1);
    local_44 = (float)(int)((uint)local_3c & ((int)local_3c >> 0x1f ^ 0xffffffffU));
    speex_encoder_ctl(param_1,0xe,&local_44);
    uVar11 = 0;
    param_1[0x19] = 0;
    *(undefined4 *)((long)param_1 + 0xc4) = 0;
    goto LAB_0012c084;
  case 0x21:
    fVar12 = *(float *)(param_1 + 0x18);
    goto LAB_0012bf20;
  case 0x22:
    uVar11 = 0x22;
    param_1 = (undefined8 *)param_1[1];
    break;
  case 0x23:
    uVar11 = 0x23;
    param_1 = (undefined8 *)param_1[1];
    break;
  case 0x24:
    uVar11 = 0x24;
    *(float *)(param_1 + 0x1b) = *param_3;
    param_1 = (undefined8 *)param_1[1];
    break;
  case 0x25:
    fVar12 = *(float *)(param_1 + 0x1b);
    goto LAB_0012bf20;
  case 0x27:
    speex_encoder_ctl(param_1[1],0x27,param_3,param_2);
    uVar11 = 0;
    *param_3 = (float)((int)*param_3 * 2 + 0x3f);
    goto LAB_0012c084;
  case 0x28:
    uVar11 = 0x28;
    param_1 = (undefined8 *)param_1[1];
    break;
  case 0x29:
    uVar11 = 0x29;
    param_1 = (undefined8 *)param_1[1];
    break;
  case 0x2a:
    fVar12 = *param_3;
    *(float *)(param_1 + 0x17) = fVar12;
    if ((int)fVar12 < 0xa4d8) {
      if ((int)fVar12 < 0x6c98) {
        if ((int)fVar12 < 0x5079) {
          iVar15 = 0x708;
        }
        else {
          iVar15 = 0x15e0;
        }
      }
      else {
        iVar15 = 0x2580;
      }
    }
    else {
      iVar15 = 0x44c0;
    }
    *(int *)((long)param_1 + 0xbc) = iVar15;
    if (*(int *)(param_1 + 3) == 0x50) {
      iVar15 = 0x708;
      *(undefined4 *)((long)param_1 + 0xbc) = 0x708;
    }
    local_3c = (float)((int)fVar12 - iVar15);
    uVar11 = 0x2a;
    param_3 = &local_3c;
    param_1 = (undefined8 *)param_1[1];
    break;
  case 0x2b:
    fVar12 = *(float *)(param_1 + 0x17);
LAB_0012bf20:
    uVar11 = 0;
    *param_3 = fVar12;
    goto LAB_0012c084;
  case 0x2c:
    uVar11 = 0x2c;
    param_1 = (undefined8 *)param_1[1];
    break;
  case 0x2d:
    uVar11 = 0x2d;
    param_1 = (undefined8 *)param_1[1];
    break;
  case 100:
    if (*(int *)((long)param_1 + 0x1c) < 1) goto LAB_0012c080;
    lVar13 = param_1[0x13];
    lVar19 = 0;
    do {
      lVar3 = lVar19 + 1;
      uVar11 = 0;
      param_3[lVar19] = *(float *)(lVar13 + lVar19 * 4);
      lVar19 = lVar3;
    } while (lVar3 < *(int *)((long)param_1 + 0x1c));
    goto LAB_0012c084;
  case 0x65:
    uVar6 = *(uint *)((long)param_1 + 0x1c);
    uVar14 = (ulong)(int)uVar6;
    if ((int)uVar6 < 1) goto LAB_0012c080;
    uVar16 = param_1[0x14];
    if ((uVar6 < 0x10) ||
       ((param_3 < (float *)(uVar16 + uVar14 * 2) && (uVar16 < (long)param_3 + uVar14 * 2)))) {
      uVar17 = 0;
    }
    else {
      uVar17 = uVar14 & 0xfffffffffffffff0;
      puVar20 = (undefined8 *)(uVar16 + 0x10);
      pfVar24 = param_3 + 4;
      uVar25 = uVar17;
      do {
        puVar4 = puVar20 + -1;
        uVar11 = puVar20[-2];
        uVar28 = puVar20[1];
        uVar27 = *puVar20;
        puVar20 = puVar20 + 4;
        uVar25 = uVar25 - 0x10;
        *(undefined8 *)(pfVar24 + -2) = *puVar4;
        *(undefined8 *)(pfVar24 + -4) = uVar11;
        *(undefined8 *)(pfVar24 + 2) = uVar28;
        *(undefined8 *)pfVar24 = uVar27;
        pfVar24 = pfVar24 + 8;
      } while (uVar25 != 0);
      if (uVar17 == uVar14) goto LAB_0012c080;
    }
    do {
      lVar19 = uVar17 * 2;
      uVar17 = uVar17 + 1;
      uVar11 = 0;
      *(undefined2 *)((long)param_3 + lVar19) = *(undefined2 *)(uVar16 + lVar19);
    } while ((long)uVar17 < (long)uVar14);
    goto LAB_0012c084;
  case 0x68:
    uVar11 = 0;
    param_1[0x15] = param_3;
    goto LAB_0012c084;
  case 0x69:
    uVar11 = 0x69;
    param_1 = (undefined8 *)param_1[1];
    break;
  case 0x6a:
    uVar11 = 0;
    *(undefined8 *)param_3 = param_1[7];
    goto LAB_0012c084;
  }
  speex_encoder_ctl(param_1,uVar11,param_3);
LAB_0012c080:
  uVar11 = 0;
LAB_0012c084:
  if (*(long *)(lVar10 + 0x28) == local_38) {
    return uVar11;
  }
LAB_0012c294:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}

