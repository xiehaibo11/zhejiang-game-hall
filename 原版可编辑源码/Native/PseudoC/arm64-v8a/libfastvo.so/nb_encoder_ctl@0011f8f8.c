
undefined8 * nb_encoder_ctl(undefined8 *param_1,uint param_2,uint *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined2 uVar7;
  uint uVar8;
  long lVar9;
  undefined2 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  undefined2 *puVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  float local_44;
  int local_40;
  uint local_3c;
  long local_38;
  
  lVar9 = tpidr_el0;
  local_38 = *(long *)(lVar9 + 0x28);
  switch(param_2) {
  case 3:
    uVar12 = *(uint *)((long)param_1 + 0xc);
    goto LAB_0011fca0;
  case 4:
    uVar12 = *param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
    if (9 < (int)uVar12) {
      uVar12 = 10;
    }
    uVar12 = *(uint *)(*(long *)*param_1 + (ulong)uVar12 * 4 + 0xa4);
    goto LAB_0011fa48;
  default:
    fprintf((FILE *)0x14d168,"warning: %s %d\n","Unknown nb_ctl request: ",(ulong)param_2);
    puVar11 = (undefined8 *)0xffffffff;
    break;
  case 6:
  case 8:
    uVar12 = *param_3;
LAB_0011fa48:
    puVar11 = (undefined8 *)0x0;
    *(uint *)(param_1 + 0x25) = uVar12;
    *(uint *)((long)param_1 + 300) = uVar12;
    break;
  case 7:
  case 9:
    uVar12 = *(uint *)(param_1 + 0x25);
    goto LAB_0011fca0;
  case 0xc:
    puVar11 = (undefined8 *)0x0;
    *(uint *)(param_1 + 0x1d) = *param_3;
    break;
  case 0xd:
    uVar12 = *(uint *)(param_1 + 0x1d);
    goto LAB_0011fca0;
  case 0xe:
    puVar11 = (undefined8 *)0x0;
    *(uint *)(param_1 + 0x1c) = *param_3;
    break;
  case 0xf:
    uVar12 = *(uint *)(param_1 + 0x1c);
    goto LAB_0011fca0;
  case 0x10:
    puVar11 = (undefined8 *)0x0;
    *(uint *)((long)param_1 + 0x10c) = *param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
    break;
  case 0x11:
    uVar12 = *(uint *)((long)param_1 + 0x10c);
    goto LAB_0011fca0;
  case 0x12:
    local_3c = 10;
    uVar12 = *param_3;
    do {
      speex_encoder_ctl(param_1,4,&local_3c);
      speex_encoder_ctl(param_1,0x13,&local_40);
      if (local_40 <= (int)uVar12) break;
      uVar8 = local_3c - 1;
      bVar1 = 0 < (int)local_3c;
      local_3c = uVar8;
    } while (bVar1);
    goto LAB_0011fe48;
  case 0x13:
    puVar11 = (undefined8 *)0x0;
    lVar23 = *(long *)(param_1[0x24] + (long)*(int *)(param_1 + 0x25) * 8);
    if (lVar23 == 0) {
      uVar12 = 0;
      if (*(int *)((long)param_1 + 0xc) != 0) {
        uVar12 = (*(int *)(param_1 + 0x22) * 5) / *(int *)((long)param_1 + 0xc);
      }
      *param_3 = uVar12;
    }
    else {
      uVar12 = 0;
      if (*(int *)((long)param_1 + 0xc) != 0) {
        uVar12 = (*(int *)(lVar23 + 0x54) * *(int *)(param_1 + 0x22)) /
                 *(int *)((long)param_1 + 0xc);
      }
      *param_3 = uVar12;
    }
    break;
  case 0x18:
    puVar11 = (undefined8 *)0x0;
    *(uint *)(param_1 + 0x22) = *param_3;
    break;
  case 0x19:
    uVar12 = *(uint *)(param_1 + 0x22);
    goto LAB_0011fca0;
  case 0x1a:
    iVar6 = *(int *)((long)param_1 + 0x1c);
    uVar14 = (ulong)iVar6;
    *(undefined4 *)((long)param_1 + 0x2c) = 1;
    *(undefined4 *)(param_1 + 1) = 1;
    if (0 < iVar6) {
      lVar23 = param_1[0x11];
      iVar2 = iVar6 + 1;
      if (iVar6 == 1) {
        uVar15 = 0;
LAB_0011fd60:
        iVar17 = (int)uVar15 * 0x10000;
        do {
          iVar17 = iVar17 + 0x10000;
          uVar10 = 0;
          if (iVar2 != 0) {
            uVar10 = (undefined2)(((iVar17 >> 0x10) * 0x6488) / iVar2);
          }
          *(undefined2 *)(lVar23 + uVar15 * 2) = uVar10;
          uVar15 = uVar15 + 1;
        } while ((long)uVar15 < (long)uVar14);
      }
      else {
        uVar15 = uVar14 & 0xfffffffffffffffe;
        iVar17 = 0;
        puVar18 = (undefined2 *)(lVar23 + 2);
        uVar16 = uVar15;
        do {
          uVar12 = iVar17 >> 0x10;
          iVar17 = iVar17 + 0x20000;
          uVar10 = 0;
          if (iVar2 != 0) {
            uVar10 = (undefined2)((int)((uVar12 | 1) * 0x6488) / iVar2);
          }
          uVar7 = 0;
          if (iVar2 != 0) {
            uVar7 = (undefined2)(((iVar17 >> 0x10) * 0x6488) / iVar2);
          }
          uVar16 = uVar16 - 2;
          puVar18[-1] = uVar10;
          *puVar18 = uVar7;
          puVar18 = puVar18 + 2;
        } while (uVar16 != 0);
        if (uVar15 != uVar14) goto LAB_0011fd60;
      }
      if (0 < iVar6) {
        lVar13 = param_1[0x15];
        lVar4 = param_1[0x16];
        lVar3 = param_1[0x13];
        lVar5 = param_1[0x14];
        lVar23 = 0;
        do {
          lVar20 = lVar23 * 4;
          *(undefined4 *)(lVar4 + lVar20) = 0;
          *(undefined4 *)(lVar3 + lVar20) = 0;
          *(undefined4 *)(lVar13 + lVar20) = 0;
          *(undefined4 *)(lVar5 + lVar20) = 0;
          lVar23 = lVar23 + 1;
        } while (lVar23 < *(int *)((long)param_1 + 0x1c));
      }
    }
    iVar6 = *(int *)((long)param_1 + 0xc);
    lVar23 = (long)*(int *)((long)param_1 + 0x24) + (long)iVar6;
    if (-1 < (int)lVar23) {
      uVar15 = param_1[0xd];
      uVar16 = param_1[0xb];
      uVar14 = lVar23 + 1;
      if ((uVar14 < 0x10) ||
         ((lVar13 = lVar23 * 2 + 2, uVar15 < uVar16 + lVar13 && (uVar16 < uVar15 + lVar13)))) {
        uVar19 = 0;
      }
      else {
        uVar19 = uVar14 & 0xfffffffffffffff0;
        puVar11 = (undefined8 *)(uVar15 + 0x10);
        puVar21 = (undefined8 *)(uVar16 + 0x10);
        uVar22 = uVar19;
        do {
          puVar11[-1] = 0;
          puVar11[-2] = 0;
          puVar11[1] = 0;
          *puVar11 = 0;
          puVar21[-1] = 0;
          puVar21[-2] = 0;
          puVar21[1] = 0;
          *puVar21 = 0;
          puVar11 = puVar11 + 4;
          uVar22 = uVar22 - 0x10;
          puVar21 = puVar21 + 4;
        } while (uVar22 != 0);
        if (uVar14 == uVar19) goto LAB_0011fe24;
      }
      do {
        *(undefined2 *)(uVar15 + uVar19 * 2) = 0;
        *(undefined2 *)(uVar16 + uVar19 * 2) = 0;
        bVar1 = (long)uVar19 < lVar23;
        uVar19 = uVar19 + 1;
      } while (bVar1);
    }
LAB_0011fe24:
    iVar2 = *(int *)(param_1 + 3) - iVar6;
    if (iVar2 != 0 && iVar6 <= *(int *)(param_1 + 3)) {
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      memset((void *)param_1[10],0,(ulong)(uint)(iVar2 << 1));
    }
LAB_0011fe48:
    puVar11 = (undefined8 *)0x0;
    break;
  case 0x1d:
    uVar12 = *(uint *)((long)param_1 + 0xe4);
    goto LAB_0011fca0;
  case 0x1e:
    puVar11 = (undefined8 *)0x0;
    *(uint *)(param_1 + 0x1e) = *param_3;
    break;
  case 0x1f:
    uVar12 = *(uint *)(param_1 + 0x1e);
    goto LAB_0011fca0;
  case 0x20:
    uVar12 = *param_3;
    *(uint *)((long)param_1 + 0xfc) = uVar12;
    *(uint *)(param_1 + 0x1d) = (uint)(uVar12 != 0);
    if (uVar12 == 0) goto LAB_0011fe48;
    local_3c = 10;
    uVar12 = *param_3;
    do {
      speex_encoder_ctl(param_1,4,&local_3c);
      speex_encoder_ctl(param_1,0x13,&local_40);
      if (local_40 <= (int)uVar12) break;
      uVar8 = local_3c - 1;
      bVar1 = 0 < (int)local_3c;
      local_3c = uVar8;
    } while (bVar1);
    local_44 = (float)(int)(local_3c & ((int)local_3c >> 0x1f ^ 0xffffffffU));
    speex_encoder_ctl(param_1,0xe,&local_44);
    puVar11 = (undefined8 *)0x0;
    *(undefined4 *)(param_1 + 0x21) = 0;
    param_1[0x20] = 0;
    break;
  case 0x21:
    uVar12 = *(uint *)((long)param_1 + 0xfc);
    goto LAB_0011fca0;
  case 0x22:
    puVar11 = (undefined8 *)0x0;
    *(uint *)((long)param_1 + 0xf4) = *param_3;
    break;
  case 0x23:
    uVar12 = *(uint *)((long)param_1 + 0xf4);
    goto LAB_0011fca0;
  case 0x24:
    puVar11 = (undefined8 *)0x0;
    *(uint *)(param_1 + 0x23) = *param_3;
    break;
  case 0x25:
    uVar12 = *(uint *)(param_1 + 0x23);
    goto LAB_0011fca0;
  case 0x27:
    puVar11 = (undefined8 *)0x0;
    *param_3 = *(int *)(param_1 + 3) - *(int *)((long)param_1 + 0xc);
    break;
  case 0x28:
    uVar12 = *param_3;
    if (99 < (int)uVar12) {
      uVar12 = 100;
    }
    *(uint *)((long)param_1 + 0x114) = uVar12;
    if (*(long *)(lVar9 + 0x28) == local_38) {
      return (undefined8 *)0x0;
    }
    goto LAB_0011fe88;
  case 0x29:
    uVar12 = *(uint *)((long)param_1 + 0x114);
    goto LAB_0011fca0;
  case 0x2a:
    puVar11 = (undefined8 *)0x0;
    *(uint *)((long)param_1 + 0xec) = *param_3;
    break;
  case 0x2b:
    uVar12 = *(uint *)((long)param_1 + 0xec);
    goto LAB_0011fca0;
  case 0x2c:
    puVar11 = (undefined8 *)0x0;
    *(uint *)((long)param_1 + 0x134) = *param_3;
    break;
  case 0x2d:
    uVar12 = *(uint *)((long)param_1 + 0x134);
LAB_0011fca0:
    puVar11 = (undefined8 *)0x0;
    *param_3 = uVar12;
    break;
  case 100:
    if (*(int *)((long)param_1 + 0x14) < 1) goto LAB_0011fe48;
    lVar13 = param_1[0x19];
    lVar23 = 0;
    do {
      lVar3 = lVar23 + 1;
      puVar11 = (undefined8 *)0x0;
      param_3[lVar23] = *(uint *)(lVar13 + lVar23 * 4);
      lVar23 = lVar3;
    } while (lVar3 < *(int *)((long)param_1 + 0x14));
    break;
  case 0x65:
    if (*(int *)((long)param_1 + 0x14) < 1) goto LAB_0011fe48;
    lVar23 = 0;
    do {
      uVar10 = compute_rms16(param_1[0xc] + (long)(*(int *)(param_1 + 2) * (int)lVar23) * 2);
      *(undefined2 *)((long)param_3 + lVar23 * 2) = uVar10;
      lVar23 = lVar23 + 1;
      puVar11 = (undefined8 *)0x0;
    } while (lVar23 < *(int *)((long)param_1 + 0x14));
    break;
  case 0x68:
    puVar11 = (undefined8 *)0x0;
    param_1[0x1a] = param_3;
    break;
  case 0x69:
    puVar11 = (undefined8 *)0x0;
    *(uint *)(param_1 + 0x26) = *param_3;
    break;
  case 0x6a:
    puVar11 = (undefined8 *)0x0;
    *(undefined8 *)param_3 = param_1[9];
  }
  param_1 = puVar11;
  if (*(long *)(lVar9 + 0x28) == local_38) {
    return puVar11;
  }
LAB_0011fe88:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}

