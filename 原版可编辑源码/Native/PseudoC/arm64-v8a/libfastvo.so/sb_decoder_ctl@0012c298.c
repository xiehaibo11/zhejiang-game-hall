
void sb_decoder_ctl(undefined8 *param_1,undefined4 param_2,uint *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  uint *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint local_3c;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  switch(param_2) {
  case 0:
    speex_decoder_ctl(param_1[1],0,param_3);
    uVar5 = 0;
    *(uint *)((long)param_1 + 0x2c) = *param_3;
    goto LAB_0012c528;
  case 1:
    uVar7 = *(uint *)((long)param_1 + 0x2c);
    goto LAB_0012c4a4;
  default:
    fprintf((FILE *)0x14d168,"warning: %s %d\n","Unknown nb_ctl request: ");
    uVar5 = 0xffffffff;
    goto LAB_0012c528;
  case 3:
    uVar7 = *(uint *)(param_1 + 2);
    goto LAB_0012c4a4;
  case 4:
  case 6:
    uVar5 = param_1[1];
    uVar6 = 6;
    uVar7 = *param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
    if (9 < (int)uVar7) {
      uVar7 = 10;
    }
    lVar12 = *(long *)*param_1 + (ulong)uVar7 * 4;
    param_3 = &local_3c;
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(lVar12 + 0x90);
    local_3c = *(uint *)(lVar12 + 100);
    break;
  case 8:
    uVar5 = param_1[1];
    uVar6 = 8;
    break;
  case 9:
    uVar5 = param_1[1];
    uVar6 = 9;
    break;
  case 10:
    uVar5 = 0;
    *(uint *)(param_1 + 0x13) = *param_3;
    goto LAB_0012c528;
  case 0x13:
    speex_decoder_ctl(param_1[1],0x13,param_3);
    uVar5 = 0;
    lVar12 = *(long *)(param_1[0x12] + (long)*(int *)(param_1 + 0x13) * 8);
    if (lVar12 == 0) {
      iVar3 = 0;
      if (*(int *)(param_1 + 2) != 0) {
        iVar3 = (*(int *)(param_1 + 5) << 2) / *(int *)(param_1 + 2);
      }
      *param_3 = *param_3 + iVar3;
    }
    else {
      iVar3 = 0;
      if (*(int *)(param_1 + 2) != 0) {
        iVar3 = (*(int *)(lVar12 + 0x54) * *(int *)(param_1 + 5)) / *(int *)(param_1 + 2);
      }
      *param_3 = *param_3 + iVar3;
    }
    goto LAB_0012c528;
  case 0x14:
    uVar5 = param_1[1];
    uVar6 = 0x14;
    break;
  case 0x16:
    uVar5 = param_1[1];
    uVar6 = 0x16;
    break;
  case 0x18:
    local_3c = *param_3;
    uVar6 = 0x18;
    param_3 = &local_3c;
    *(uint *)(param_1 + 5) = local_3c;
    local_3c = (int)local_3c >> 1;
    uVar5 = param_1[1];
    break;
  case 0x19:
    uVar7 = *(uint *)(param_1 + 5);
    goto LAB_0012c4a4;
  case 0x1a:
    if (0 < *(int *)(param_1 + 4)) {
      lVar9 = param_1[0xc];
      lVar12 = 0;
      do {
        *(undefined4 *)(lVar9 + lVar12 * 4) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < (long)*(int *)(param_1 + 4) * 2);
    }
    puVar13 = (undefined8 *)param_1[7];
    puVar2 = (undefined8 *)param_1[8];
    if ((puVar2 < puVar13 + 0x10) && (puVar13 < puVar2 + 0x10)) {
      lVar12 = 0;
      do {
        *(undefined2 *)((long)puVar2 + lVar12) = 0;
        *(undefined2 *)((long)puVar13 + lVar12) = 0;
        lVar12 = lVar12 + 2;
      } while (lVar12 != 0x80);
    }
    else {
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar13[1] = 0;
      *puVar13 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar13[3] = 0;
      puVar13[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar13[5] = 0;
      puVar13[4] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar13[7] = 0;
      puVar13[6] = 0;
      puVar2[9] = 0;
      puVar2[8] = 0;
      puVar13[9] = 0;
      puVar13[8] = 0;
      puVar2[0xb] = 0;
      puVar2[10] = 0;
      puVar13[0xb] = 0;
      puVar13[10] = 0;
      puVar2[0xd] = 0;
      puVar2[0xc] = 0;
      puVar13[0xd] = 0;
      puVar13[0xc] = 0;
      puVar2[0xf] = 0;
      puVar2[0xe] = 0;
      puVar13[0xf] = 0;
      puVar13[0xe] = 0;
    }
    uVar5 = 0;
    *(undefined2 *)(param_1 + 0x10) = 0;
    goto LAB_0012c528;
  case 0x24:
    uVar5 = param_1[1];
    uVar6 = 0x24;
    *(uint *)(param_1 + 0x11) = *param_3;
    break;
  case 0x25:
    uVar7 = *(uint *)(param_1 + 0x11);
LAB_0012c4a4:
    uVar5 = 0;
    *param_3 = uVar7;
    goto LAB_0012c528;
  case 0x27:
    speex_decoder_ctl(param_1[1],0x27,param_3);
    uVar5 = 0;
    *param_3 = *param_3 << 1;
    goto LAB_0012c528;
  case 0x2c:
    uVar5 = param_1[1];
    uVar6 = 0x2c;
    break;
  case 0x2d:
    uVar5 = param_1[1];
    uVar6 = 0x2d;
    break;
  case 0x2f:
    uVar5 = param_1[1];
    uVar6 = 0x2f;
    break;
  case 100:
    if (0 < *(int *)((long)param_1 + 0x1c)) {
      lVar9 = param_1[0xd];
      lVar12 = 0;
      do {
        lVar1 = lVar12 + 1;
        uVar5 = 0;
        param_3[lVar12] = *(uint *)(lVar9 + lVar12 * 4);
        lVar12 = lVar1;
      } while (lVar1 < *(int *)((long)param_1 + 0x1c));
      goto LAB_0012c528;
    }
    goto LAB_0012c524;
  case 0x65:
    uVar7 = *(uint *)((long)param_1 + 0x1c);
    uVar8 = (ulong)(int)uVar7;
    if (0 < (int)uVar7) {
      uVar10 = param_1[0xe];
      if ((uVar7 < 0x10) ||
         ((param_3 < (uint *)(uVar10 + uVar8 * 2) && (uVar10 < (long)param_3 + uVar8 * 2)))) {
        uVar11 = 0;
      }
      else {
        uVar11 = uVar8 & 0xfffffffffffffff0;
        puVar13 = (undefined8 *)(uVar10 + 0x10);
        puVar14 = param_3 + 4;
        uVar15 = uVar11;
        do {
          puVar2 = puVar13 + -1;
          uVar5 = puVar13[-2];
          uVar16 = puVar13[1];
          uVar6 = *puVar13;
          puVar13 = puVar13 + 4;
          uVar15 = uVar15 - 0x10;
          *(undefined8 *)(puVar14 + -2) = *puVar2;
          *(undefined8 *)(puVar14 + -4) = uVar5;
          *(undefined8 *)(puVar14 + 2) = uVar16;
          *(undefined8 *)puVar14 = uVar6;
          puVar14 = puVar14 + 8;
        } while (uVar15 != 0);
        if (uVar11 == uVar8) goto LAB_0012c524;
      }
      do {
        lVar12 = uVar11 * 2;
        uVar11 = uVar11 + 1;
        uVar5 = 0;
        *(undefined2 *)((long)param_3 + lVar12) = *(undefined2 *)(uVar10 + lVar12);
      } while ((long)uVar11 < (long)uVar8);
      goto LAB_0012c528;
    }
    goto LAB_0012c524;
  case 0x67:
    uVar5 = param_1[1];
    uVar6 = 0x67;
    break;
  case 0x68:
    uVar5 = 0;
    param_1[0xf] = param_3;
    goto LAB_0012c528;
  case 0x69:
    uVar5 = param_1[1];
    uVar6 = 0x69;
    break;
  case 0x6a:
    uVar5 = 0;
    *(undefined8 *)param_3 = param_1[6];
    goto LAB_0012c528;
  }
  speex_decoder_ctl(uVar5,uVar6,param_3);
LAB_0012c524:
  uVar5 = 0;
LAB_0012c528:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

