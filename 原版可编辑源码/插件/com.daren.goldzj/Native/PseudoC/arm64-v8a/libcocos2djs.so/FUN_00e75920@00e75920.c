
int FUN_00e75920(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  uint uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  long local_100;
  undefined4 local_f0 [2];
  undefined1 local_e8;
  undefined7 uStack_e7;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  int local_b0 [2];
  uint local_a8;
  undefined4 local_a0;
  uint local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  uint local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined8 local_68;
  
  puVar16 = (undefined1 *)param_1[2];
  if (puVar16 == (undefined1 *)0x0) {
    iVar3 = 6;
  }
  else {
    uVar1 = *param_1;
    plVar14 = (long *)param_1[1];
    if (((int)plVar14[3] < 2) && (FUN_00e7752c(plVar14), (int)plVar14[3] < 2)) {
      pcVar5 = (char *)*plVar14;
      do {
        if ((char *)plVar14[2] <= pcVar5) {
LAB_00e759b8:
          uVar8 = 3;
          goto LAB_00e759bc;
        }
        *plVar14 = (long)(pcVar5 + 1);
        cVar2 = *pcVar5;
        if (cVar2 == '\n') break;
        if (cVar2 == '\x1a') goto LAB_00e759b8;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\r');
      uVar8 = 2;
LAB_00e759bc:
      *(undefined4 *)(plVar14 + 3) = uVar8;
    }
    do {
      *(undefined4 *)(plVar14 + 3) = 0;
      pcVar5 = (char *)FUN_00e77490(plVar14);
      if (pcVar5 != (char *)0x0) {
        if (*plVar14 + ~(ulong)pcVar5 == 0x10) {
          iVar3 = strncmp(pcVar5,"StartFontMetrics",0x10);
          if (iVar3 != 0) {
            return 2;
          }
          iVar3 = 0xa0;
          goto switchD_00e75ba4_caseD_1;
        }
        break;
      }
    } while ((int)plVar14[3] == 2);
    iVar3 = 2;
  }
  return iVar3;
switchD_00e75ba4_caseD_1:
  do {
    plVar14 = (long *)param_1[1];
    if (1 < (int)plVar14[3]) goto LAB_00e75af0;
    FUN_00e7752c(plVar14);
    if (1 < (int)plVar14[3]) goto LAB_00e75af0;
    pcVar5 = (char *)*plVar14;
    do {
      if ((char *)plVar14[2] <= pcVar5) {
LAB_00e75ae8:
        *(undefined4 *)(plVar14 + 3) = 3;
        goto LAB_00e75af0;
      }
      *plVar14 = (long)(pcVar5 + 1);
      cVar2 = *pcVar5;
      if (cVar2 == '\n') break;
      if (cVar2 == '\x1a') goto LAB_00e75ae8;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\r');
    *(undefined4 *)(plVar14 + 3) = 2;
    *(undefined4 *)(plVar14 + 3) = 0;
    pcVar5 = (char *)FUN_00e77490(plVar14);
    while (pcVar5 == (char *)0x0) {
      if ((int)plVar14[3] != 2) goto switchD_00e75fe8_caseD_17;
LAB_00e75af0:
      *(undefined4 *)(plVar14 + 3) = 0;
      pcVar5 = (char *)FUN_00e77490(plVar14);
    }
    lVar10 = *plVar14;
    cVar2 = *pcVar5;
    uVar9 = 0;
    uVar17 = 1;
    do {
      pcVar6 = (&PTR_s_Ascender_01c97cb8)[uVar9];
      if (*pcVar6 == cVar2) goto LAB_00e75b50;
      uVar9 = uVar9 + 1;
      uVar17 = uVar17 + 1;
    } while (uVar9 < 0x4a);
  } while( true );
LAB_00e75b50:
  iVar4 = strncmp(pcVar6,pcVar5,lVar10 + ~(ulong)pcVar5);
  if (iVar4 != 0) {
    if (0x49 < uVar17) goto switchD_00e75ba4_caseD_1;
    pcVar6 = (&PTR_s_Ascender_01c97cb8)[uVar17];
    uVar17 = uVar17 + 1;
    if (*pcVar6 != cVar2) goto switchD_00e75ba4_caseD_1;
    goto LAB_00e75b50;
  }
  switch(uVar17 - 1 & 0xffffffff) {
  case 0:
    local_f0[0] = 2;
    iVar4 = FUN_00e76f30(param_1,local_f0,1);
    if (iVar4 != 1) goto switchD_00e75fe8_caseD_17;
    *(ulong *)(puVar16 + 0x28) = CONCAT71(uStack_e7,local_e8);
  default:
    goto switchD_00e75ba4_caseD_1;
  case 0xe:
    local_f0[0] = 2;
    iVar4 = FUN_00e76f30(param_1,local_f0,1);
    if (iVar4 != 1) goto switchD_00e75fe8_caseD_17;
    *(ulong *)(puVar16 + 0x30) = CONCAT71(uStack_e7,local_e8);
    goto switchD_00e75ba4_caseD_1;
  case 0x14:
    goto LAB_00e75a24;
  case 0x1a:
    local_f0[0] = 2;
    local_e0 = 2;
    local_d0 = 2;
    local_c0 = 2;
    iVar4 = FUN_00e76f30(param_1,local_f0,4);
    if (iVar4 != 4) goto switchD_00e75fe8_caseD_17;
    *(ulong *)(puVar16 + 8) = CONCAT71(uStack_e7,local_e8);
    *(undefined8 *)(puVar16 + 0x10) = local_d8;
    *(undefined8 *)(puVar16 + 0x18) = local_c8;
    *(undefined8 *)(puVar16 + 0x20) = local_b8;
    goto switchD_00e75ba4_caseD_1;
  case 0x1e:
    local_f0[0] = 4;
    iVar4 = FUN_00e76f30(param_1,local_f0,1);
    if (iVar4 != 1) goto switchD_00e75fe8_caseD_17;
    *puVar16 = local_e8;
    goto switchD_00e75ba4_caseD_1;
  case 0x28:
    local_b0[0] = 3;
    iVar4 = FUN_00e76f30(param_1,local_b0,1);
    if (iVar4 != 1) goto switchD_00e75fe8_caseD_17;
    if ((local_a8 | 2) != 2) {
      iVar3 = 7;
      goto switchD_00e75fe8_caseD_17;
    }
    goto switchD_00e75ba4_caseD_1;
  case 0x2d:
    local_b0[0] = 3;
    iVar4 = FUN_00e76f30(param_1,local_b0,1);
    uVar15 = local_a8;
    if (iVar4 != 1) goto switchD_00e75fe8_caseD_17;
    while (0 < (int)uVar15) {
      plVar14 = (long *)param_1[1];
      uVar15 = uVar15 - 1;
      if (1 < (int)plVar14[3]) goto LAB_00e75d28;
      FUN_00e7752c(plVar14);
      if (1 < (int)plVar14[3]) goto LAB_00e75d28;
      pcVar5 = (char *)*plVar14;
      do {
        if ((char *)plVar14[2] <= pcVar5) {
LAB_00e75d20:
          *(undefined4 *)(plVar14 + 3) = 3;
          goto LAB_00e75d28;
        }
        *plVar14 = (long)(pcVar5 + 1);
        cVar2 = *pcVar5;
        if (cVar2 == '\n') break;
        if (cVar2 == '\x1a') goto LAB_00e75d20;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\r');
      *(undefined4 *)(plVar14 + 3) = 2;
      *(undefined4 *)(plVar14 + 3) = 0;
      lVar10 = FUN_00e77490(plVar14);
      while (lVar10 == 0) {
        if ((int)plVar14[3] != 2) {
          return 0xa0;
        }
LAB_00e75d28:
        *(undefined4 *)(plVar14 + 3) = 0;
        lVar10 = FUN_00e77490(plVar14);
      }
    }
    break;
  case 0x31:
    goto switchD_00e75fe8_caseD_4c;
  }
LAB_00e75d58:
  plVar14 = (long *)param_1[1];
  if (1 < (int)plVar14[3]) goto LAB_00e75dd4;
  FUN_00e7752c(plVar14);
  if (1 < (int)plVar14[3]) goto LAB_00e75dd4;
  pcVar5 = (char *)*plVar14;
  do {
    if ((char *)plVar14[2] <= pcVar5) {
LAB_00e75dcc:
      *(undefined4 *)(plVar14 + 3) = 3;
      goto LAB_00e75dd4;
    }
    *plVar14 = (long)(pcVar5 + 1);
    cVar2 = *pcVar5;
    if (cVar2 == '\n') break;
    if (cVar2 == '\x1a') goto LAB_00e75dcc;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\r');
  *(undefined4 *)(plVar14 + 3) = 2;
  *(undefined4 *)(plVar14 + 3) = 0;
  pcVar5 = (char *)FUN_00e77490(plVar14);
  while (pcVar5 == (char *)0x0) {
    if ((int)plVar14[3] != 2) {
      return 0xa0;
    }
LAB_00e75dd4:
    *(undefined4 *)(plVar14 + 3) = 0;
    pcVar5 = (char *)FUN_00e77490(plVar14);
  }
  lVar10 = *plVar14;
  cVar2 = *pcVar5;
  uVar9 = 0;
  uVar17 = 1;
  do {
    pcVar6 = (&PTR_s_Ascender_01c97cb8)[uVar9];
    if (*pcVar6 == cVar2) goto LAB_00e75e34;
    uVar9 = uVar9 + 1;
    uVar17 = uVar17 + 1;
  } while (uVar9 < 0x4a);
  goto LAB_00e75e60;
switchD_00e75fe8_caseD_4c:
  do {
    plVar14 = (long *)param_1[1];
    if (1 < (int)plVar14[3]) goto LAB_00e75f34;
    FUN_00e7752c(plVar14);
    if (1 < (int)plVar14[3]) goto LAB_00e75f34;
    pcVar5 = (char *)*plVar14;
    do {
      if ((char *)plVar14[2] <= pcVar5) {
LAB_00e75f30:
        *(undefined4 *)(plVar14 + 3) = 3;
        goto LAB_00e75f34;
      }
      *plVar14 = (long)(pcVar5 + 1);
      cVar2 = *pcVar5;
      if (cVar2 == '\n') break;
      if (cVar2 == '\x1a') goto LAB_00e75f30;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\r');
    *(undefined4 *)(plVar14 + 3) = 2;
    *(undefined4 *)(plVar14 + 3) = 0;
    pcVar5 = (char *)FUN_00e77490(plVar14);
    while (pcVar5 == (char *)0x0) {
      if ((int)plVar14[3] != 2) goto LAB_00e764b4;
LAB_00e75f34:
      *(undefined4 *)(plVar14 + 3) = 0;
      pcVar5 = (char *)FUN_00e77490(plVar14);
    }
    lVar10 = *plVar14;
    cVar2 = *pcVar5;
    uVar9 = 0;
    uVar17 = 1;
    do {
      pcVar6 = (&PTR_s_Ascender_01c97cb8)[uVar9];
      if (*pcVar6 == cVar2) goto LAB_00e75f94;
      uVar9 = uVar9 + 1;
      uVar17 = uVar17 + 1;
    } while (uVar9 < 0x4a);
  } while( true );
  while( true ) {
    pcVar6 = (&PTR_s_Ascender_01c97cb8)[uVar17];
    uVar17 = uVar17 + 1;
    if (*pcVar6 != cVar2) break;
LAB_00e75f94:
    iVar3 = strncmp(pcVar6,pcVar5,lVar10 + ~(ulong)pcVar5);
    if (iVar3 == 0) {
      iVar3 = 0xa0;
      switch((int)uVar17) {
      case 0x15:
      case 0x16:
        goto LAB_00e75a24;
      default:
        goto switchD_00e75fe8_caseD_17;
      case 0x33:
      case 0x34:
        lVar10 = param_1[2];
        local_b0[0] = 3;
        iVar3 = FUN_00e76f30(param_1,local_b0,1);
        if ((iVar3 != 1) || ((int)local_a8 < 0)) goto LAB_00e764b4;
        *(uint *)(lVar10 + 0x50) = local_a8;
        if (local_a8 != 0) {
          uVar7 = FUN_00e13bcc(*param_1,0x10,0,local_a8,0,local_b0);
          *(undefined8 *)(lVar10 + 0x48) = uVar7;
          iVar3 = local_b0[0];
          if (local_b0[0] != 0) goto switchD_00e75fe8_caseD_17;
        }
        local_100 = 0xffffffff;
        goto LAB_00e762e0;
      case 0x36:
        lVar10 = param_1[2];
        local_b0[0] = 3;
        iVar3 = FUN_00e76f30(param_1,local_b0,1);
        if ((iVar3 != 1) || ((int)local_a8 < 0)) goto LAB_00e764b4;
        *(uint *)(lVar10 + 0x40) = local_a8;
        if (local_a8 != 0) {
          uVar7 = FUN_00e13bcc(*param_1,0x28,0,local_a8,0,local_b0);
          *(undefined8 *)(lVar10 + 0x38) = uVar7;
          iVar3 = local_b0[0];
          if (local_b0[0] != 0) goto switchD_00e75fe8_caseD_17;
        }
        local_100 = 0xffffffff;
        goto LAB_00e76110;
      case 0x4c:
        goto switchD_00e75fe8_caseD_4c;
      }
    }
    if (0x49 < uVar17) break;
  }
  goto switchD_00e75fe8_caseD_4c;
LAB_00e76110:
  do {
    plVar14 = (long *)param_1[1];
    if (1 < (int)plVar14[3]) goto LAB_00e7618c;
    FUN_00e7752c(plVar14);
    if (1 < (int)plVar14[3]) goto LAB_00e7618c;
    pcVar5 = (char *)*plVar14;
    do {
      if ((char *)plVar14[2] <= pcVar5) {
LAB_00e76188:
        *(undefined4 *)(plVar14 + 3) = 3;
        goto LAB_00e7618c;
      }
      *plVar14 = (long)(pcVar5 + 1);
      cVar2 = *pcVar5;
      if (cVar2 == '\n') break;
      if (cVar2 == '\x1a') goto LAB_00e76188;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\r');
    *(undefined4 *)(plVar14 + 3) = 2;
    *(undefined4 *)(plVar14 + 3) = 0;
    pcVar5 = (char *)FUN_00e77490(plVar14);
    while (pcVar5 == (char *)0x0) {
      iVar3 = 0xa0;
      if ((int)plVar14[3] != 2) goto switchD_00e75fe8_caseD_17;
LAB_00e7618c:
      *(undefined4 *)(plVar14 + 3) = 0;
      pcVar5 = (char *)FUN_00e77490(plVar14);
    }
    lVar12 = *plVar14;
    cVar2 = *pcVar5;
    uVar9 = 0;
    uVar17 = 1;
    do {
      pcVar6 = (&PTR_s_Ascender_01c97cb8)[uVar9];
      if (*pcVar6 == cVar2) goto LAB_00e761f0;
      uVar9 = uVar9 + 1;
      uVar17 = uVar17 + 1;
    } while (uVar9 < 0x4a);
  } while( true );
  while( true ) {
    if (0x49 < uVar17) break;
    pcVar6 = (&PTR_s_Ascender_01c97cb8)[uVar17];
    uVar17 = uVar17 + 1;
    if (*pcVar6 != cVar2) break;
LAB_00e761f0:
    iVar3 = strncmp(pcVar6,pcVar5,lVar12 + ~(ulong)pcVar5);
    if (iVar3 == 0) {
      iVar3 = (int)uVar17 + -1;
      if (iVar3 < 0x4b) {
        if (iVar3 != 0x38) {
          if ((1 < (int)uVar17 - 0x15U) && (iVar3 != 0x17)) goto LAB_00e764b4;
          *(int *)(lVar10 + 0x40) = (int)local_100 + 1;
          goto switchD_00e75fe8_caseD_4c;
        }
        local_100 = (long)(int)local_100 + 1;
        if (*(int *)(lVar10 + 0x40) <= (int)local_100) goto LAB_00e764b4;
        lVar12 = *(long *)(lVar10 + 0x38);
        local_b0[0] = 3;
        local_a0 = 2;
        local_90 = 2;
        local_80 = 2;
        local_70 = 2;
        iVar3 = FUN_00e76f30(param_1,local_b0,5);
        if (iVar3 != 5) goto LAB_00e764b4;
        puVar11 = (uint *)(lVar12 + local_100 * 0x28);
        *puVar11 = local_a8;
        *(ulong *)(puVar11 + 2) = CONCAT44(uStack_94,local_98);
        *(ulong *)(puVar11 + 4) = CONCAT44(uStack_84,local_88);
        *(ulong *)(puVar11 + 6) = CONCAT44(uStack_74,local_78);
        *(undefined8 *)(puVar11 + 8) = local_68;
      }
      else if (iVar3 != 0x4b) goto LAB_00e764b4;
      break;
    }
  }
  goto LAB_00e76110;
LAB_00e762e0:
  do {
    plVar14 = (long *)param_1[1];
    if (1 < (int)plVar14[3]) goto LAB_00e7635c;
    FUN_00e7752c(plVar14);
    if (1 < (int)plVar14[3]) goto LAB_00e7635c;
    pcVar5 = (char *)*plVar14;
    do {
      if ((char *)plVar14[2] <= pcVar5) {
LAB_00e76358:
        *(undefined4 *)(plVar14 + 3) = 3;
        goto LAB_00e7635c;
      }
      *plVar14 = (long)(pcVar5 + 1);
      cVar2 = *pcVar5;
      if (cVar2 == '\n') break;
      if (cVar2 == '\x1a') goto LAB_00e76358;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\r');
    *(undefined4 *)(plVar14 + 3) = 2;
    *(undefined4 *)(plVar14 + 3) = 0;
    pcVar5 = (char *)FUN_00e77490(plVar14);
    while (pcVar5 == (char *)0x0) {
      iVar3 = 0xa0;
      if ((int)plVar14[3] != 2) goto switchD_00e75fe8_caseD_17;
LAB_00e7635c:
      *(undefined4 *)(plVar14 + 3) = 0;
      pcVar5 = (char *)FUN_00e77490(plVar14);
    }
    lVar12 = *plVar14;
    cVar2 = *pcVar5;
    uVar9 = 0;
    uVar17 = 1;
    do {
      pcVar6 = (&PTR_s_Ascender_01c97cb8)[uVar9];
      if (*pcVar6 == cVar2) goto LAB_00e763c0;
      uVar9 = uVar9 + 1;
      uVar17 = uVar17 + 1;
    } while (uVar9 < 0x4a);
  } while( true );
  while( true ) {
    if (0x49 < uVar17) break;
    pcVar6 = (&PTR_s_Ascender_01c97cb8)[uVar17];
    uVar17 = uVar17 + 1;
    if (*pcVar6 != cVar2) break;
LAB_00e763c0:
    iVar3 = strncmp(pcVar6,pcVar5,lVar12 + ~(ulong)pcVar5);
    if (iVar3 == 0) {
      iVar3 = (int)uVar17;
      uVar15 = iVar3 - 1;
      if (uVar15 != 0x4b) {
        if (0x25 < uVar15) goto LAB_00e764b4;
        if ((1L << ((ulong)uVar15 & 0x3f) & 0x700000U) != 0) {
          uVar15 = (int)local_100 + 1;
          *(uint *)(lVar10 + 0x50) = uVar15;
          qsort(*(void **)(lVar10 + 0x48),(ulong)uVar15,0x10,FUN_00e77f54);
          goto switchD_00e75fe8_caseD_4c;
        }
        if (((1L << ((ulong)uVar15 & 0x3f) & 0x3400000000U) == 0) ||
           (local_100 = (long)(int)local_100 + 1, *(int *)(lVar10 + 0x50) <= (int)local_100))
        goto LAB_00e764b4;
        lVar12 = *(long *)(lVar10 + 0x48);
        local_b0[0] = 5;
        local_a0 = 5;
        local_90 = 3;
        local_80 = 3;
        iVar4 = FUN_00e76f30(param_1,local_b0,4);
        if (iVar4 < 3) goto LAB_00e764b4;
        puVar11 = (uint *)(lVar12 + local_100 * 0x10);
        *puVar11 = local_a8;
        puVar11[1] = local_98;
        if (iVar3 == 0x26) {
          uVar15 = local_88;
          uVar13 = 0;
        }
        else {
          uVar15 = local_78;
          uVar13 = local_88;
          if (iVar4 != 4 || iVar3 != 0x23) {
            uVar15 = 0;
          }
        }
        puVar11[2] = uVar13;
        puVar11[3] = uVar15;
      }
      break;
    }
  }
  goto LAB_00e762e0;
  while( true ) {
    pcVar6 = (&PTR_s_Ascender_01c97cb8)[uVar17];
    uVar17 = uVar17 + 1;
    if (*pcVar6 != cVar2) break;
LAB_00e75e34:
    iVar3 = strncmp(pcVar6,pcVar5,lVar10 + ~(ulong)pcVar5);
    if (iVar3 == 0) {
      iVar3 = (int)uVar17 + -1;
      if (iVar3 != 0x11) goto LAB_00e75e6c;
      goto LAB_00e75e74;
    }
    if (0x49 < uVar17) break;
  }
LAB_00e75e60:
  iVar3 = 0x4b;
LAB_00e75e6c:
  if (iVar3 == 0x14) goto LAB_00e75e74;
  goto LAB_00e75d58;
LAB_00e75e74:
  iVar3 = 0;
  goto switchD_00e75ba4_caseD_1;
LAB_00e75a24:
  return 0;
LAB_00e764b4:
  iVar3 = 0xa0;
switchD_00e75fe8_caseD_17:
  FUN_00e139fc(uVar1,*(undefined8 *)(puVar16 + 0x38));
  *(undefined8 *)(puVar16 + 0x38) = 0;
  *(undefined4 *)(puVar16 + 0x40) = 0;
  FUN_00e139fc(uVar1,*(undefined8 *)(puVar16 + 0x48));
  *(undefined8 *)(puVar16 + 0x48) = 0;
  *(undefined4 *)(puVar16 + 0x50) = 0;
  *puVar16 = 0;
  return iVar3;
}

