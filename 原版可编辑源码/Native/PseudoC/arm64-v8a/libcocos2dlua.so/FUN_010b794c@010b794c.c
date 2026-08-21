
/* WARNING: Type propagation algorithm not settling */

int FUN_010b794c(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  uint uVar10;
  uint *puVar11;
  char *pcVar12;
  char *pcVar13;
  uint uVar14;
  char *pcVar15;
  undefined4 uVar16;
  undefined1 *puVar17;
  long lVar18;
  int iVar19;
  ulong *puVar20;
  long lVar21;
  ulong uVar22;
  long *local_100;
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
  
  puVar17 = (undefined1 *)param_1[2];
  if (puVar17 == (undefined1 *)0x0) {
    return 6;
  }
  uVar1 = *param_1;
  puVar20 = (ulong *)param_1[1];
  iVar4 = (int)puVar20[3];
LAB_010b7998:
  if (iVar4 < 2) {
    pcVar8 = (char *)*puVar20;
    pcVar15 = (char *)puVar20[2];
    if (iVar4 != 1) {
      if (pcVar8 < pcVar15) {
LAB_010b79c4:
        pcVar12 = pcVar8;
        pcVar8 = pcVar12 + 1;
        *puVar20 = (ulong)pcVar8;
        switch(*pcVar12) {
        case '\t':
        case ' ':
          goto switchD_010b79e8_caseD_9;
        case '\n':
        case '\r':
          pcVar8 = pcVar12 + 1;
          iVar4 = 2;
          goto LAB_010b79fc;
        default:
          goto switchD_010b79e8_caseD_b;
        case '\x1a':
          goto switchD_010b79e8_caseD_1a;
        case ';':
          pcVar8 = pcVar12 + 1;
          iVar4 = 1;
          goto LAB_010b79fc;
        }
      }
      goto LAB_010b79f8;
    }
    goto LAB_010b7a0c;
  }
  pcVar8 = (char *)*puVar20;
  pcVar15 = (char *)puVar20[2];
  goto LAB_010b7a58;
switchD_010b79e8_caseD_9:
  if (pcVar15 <= pcVar8) goto switchD_010b79e8_caseD_1a;
  goto LAB_010b79c4;
switchD_010b79e8_caseD_1a:
  pcVar8 = pcVar12 + 1;
LAB_010b79f8:
  iVar4 = 3;
LAB_010b79fc:
  *(int *)(puVar20 + 3) = iVar4;
switchD_010b79e8_caseD_b:
  if (iVar4 < 2) {
LAB_010b7a0c:
    do {
      if (pcVar15 <= pcVar8) {
        uVar16 = 3;
        goto LAB_010b7a54;
      }
      pcVar12 = pcVar8 + 1;
      *puVar20 = (ulong)pcVar12;
      cVar2 = *pcVar8;
      pcVar8 = pcVar12;
      if ((cVar2 == '\n') || (cVar2 == '\r')) {
        uVar16 = 2;
        goto LAB_010b7a54;
      }
    } while (cVar2 != '\x1a');
    uVar16 = 3;
LAB_010b7a54:
    *(undefined4 *)(puVar20 + 3) = uVar16;
  }
LAB_010b7a58:
  *(undefined4 *)(puVar20 + 3) = 0;
  if (pcVar8 < pcVar15) {
LAB_010b7a64:
    pcVar12 = pcVar8 + 1;
    *puVar20 = (ulong)pcVar12;
    iVar5 = 3;
    switch(*pcVar8) {
    case '\t':
    case ' ':
      goto switchD_010b7a88_caseD_9;
    case '\n':
    case '\r':
      iVar5 = 2;
      goto switchD_010b7a88_caseD_1a;
    default:
      goto switchD_010b7a88_caseD_b;
    case '\x1a':
      goto switchD_010b7a88_caseD_1a;
    case ';':
      iVar5 = 1;
      goto switchD_010b7a88_caseD_1a;
    }
  }
LAB_010b7a98:
  iVar5 = 3;
switchD_010b7a88_caseD_1a:
  *(int *)(puVar20 + 3) = iVar5;
  goto LAB_010b7aa0;
code_r0x010b7abc:
  pcVar13 = pcVar12 + 1;
  *puVar20 = (ulong)pcVar13;
  cVar2 = *pcVar12;
  pcVar12 = pcVar13;
  switch(cVar2) {
  case '\t':
  case ' ':
    iVar5 = 0;
    break;
  case '\n':
  case '\r':
    iVar5 = 2;
    *(undefined4 *)(puVar20 + 3) = 2;
    break;
  default:
switchD_010b7a88_caseD_b:
    pcVar13 = pcVar12;
    if (pcVar12 < pcVar15) goto code_r0x010b7abc;
  case '\x1a':
    iVar5 = 3;
    *(undefined4 *)(puVar20 + 3) = 3;
    break;
  case ';':
    iVar5 = 1;
    *(undefined4 *)(puVar20 + 3) = 1;
  }
  if (pcVar8 != (char *)0x0) {
    if (pcVar13 + ~(ulong)pcVar8 != &DAT_00000010) {
      return 2;
    }
                    /* try { // try from 010b7b58 to 011b7d07 has its CatchHandler @ 010b7b58
                       catch() { ... } // from try @ 010b7b58 with catch @ 010b7b58
                       catch() { ... } // from try @ 010b7d20 with catch @ 010b7b58 */
    iVar4 = strncmp(pcVar8,"StartFontMetrics",0x10);
    if (iVar4 != 0) {
      return 2;
    }
    iVar4 = 0xa0;
    goto LAB_010b7c48;
  }
LAB_010b7aa0:
  iVar4 = 2;
  if (iVar5 != 2) {
    return 2;
  }
  goto LAB_010b7998;
LAB_010b7c48:
  if (iVar5 < 2) {
    pcVar8 = (char *)*puVar20;
    pcVar15 = (char *)puVar20[2];
    if (iVar5 != 1) {
      if (pcVar8 < pcVar15) {
LAB_010b7c74:
        pcVar12 = pcVar8;
        pcVar8 = pcVar12 + 1;
        *puVar20 = (ulong)pcVar8;
        switch(*pcVar12) {
        case '\t':
        case ' ':
          goto switchD_010b7c98_caseD_9;
        case '\n':
        case '\r':
          pcVar8 = pcVar12 + 1;
          iVar5 = 2;
          goto LAB_010b7cac;
        default:
          goto switchD_010b7c98_caseD_b;
        case '\x1a':
          goto switchD_010b7c98_caseD_1a;
        case ';':
          pcVar8 = pcVar12 + 1;
          iVar5 = 1;
          goto LAB_010b7cac;
        }
      }
      goto LAB_010b7ca8;
    }
    goto LAB_010b7cbc;
  }
  pcVar8 = (char *)*puVar20;
  pcVar15 = (char *)puVar20[2];
  goto LAB_010b7d08;
switchD_010b7c98_caseD_9:
  if (pcVar15 <= pcVar8) goto switchD_010b7c98_caseD_1a;
  goto LAB_010b7c74;
switchD_010b7c98_caseD_1a:
  pcVar8 = pcVar12 + 1;
LAB_010b7ca8:
  iVar5 = 3;
LAB_010b7cac:
  *(int *)(puVar20 + 3) = iVar5;
switchD_010b7c98_caseD_b:
  if (iVar5 < 2) {
LAB_010b7cbc:
    do {
      if (pcVar15 <= pcVar8) {
        uVar16 = 3;
        goto LAB_010b7d04;
      }
      pcVar12 = pcVar8 + 1;
      *puVar20 = (ulong)pcVar12;
      cVar2 = *pcVar8;
      pcVar8 = pcVar12;
      if ((cVar2 == '\n') || (cVar2 == '\r')) {
        uVar16 = 2;
        goto LAB_010b7d04;
      }
    } while (cVar2 != '\x1a');
    uVar16 = 3;
LAB_010b7d04:
    *(undefined4 *)(puVar20 + 3) = uVar16;
  }
LAB_010b7d08:
                    /* try { // try from 010b7d08 to 011b7d1f has its CatchHandler @ 010b7d64 */
  *(undefined4 *)(puVar20 + 3) = 0;
  if (pcVar8 < pcVar15) {
LAB_010b7d14:
    pcVar12 = pcVar8 + 1;
    *puVar20 = (ulong)pcVar12;
                    /* try { // try from 010b7d20 to 011b7d7f has its CatchHandler @ 010b7b58 */
    iVar7 = 3;
    switch(*pcVar8) {
    case '\t':
    case ' ':
      goto switchD_010b7d38_caseD_9;
    case '\n':
    case '\r':
      iVar7 = 2;
      goto switchD_010b7d38_caseD_1a;
    default:
      goto switchD_010b7d38_caseD_b;
    case '\x1a':
      goto switchD_010b7d38_caseD_1a;
    case ';':
      iVar7 = 1;
      goto switchD_010b7d38_caseD_1a;
    }
  }
LAB_010b7d48:
  iVar7 = 3;
switchD_010b7d38_caseD_1a:
  *(int *)(puVar20 + 3) = iVar7;
  goto LAB_010b7d50;
code_r0x010b7d6c:
  pcVar13 = pcVar12 + 1;
  *puVar20 = (ulong)pcVar13;
  cVar2 = *pcVar12;
  pcVar12 = pcVar13;
                    /* try { // try from 010b7d80 to 011b7deb has its CatchHandler @ 010b7d80
                       catch() { ... } // from try @ 010b7d80 with catch @ 010b7d80
                       catch() { ... } // from try @ 010b7dfc with catch @ 010b7d80
                       catch() { ... } // from try @ 010b7f5c with catch @ 010b7d80 */
  switch(cVar2) {
  case '\t':
  case ' ':
    iVar7 = 0;
    break;
  case '\n':
  case '\r':
    iVar7 = 2;
    *(undefined4 *)(puVar20 + 3) = 2;
    break;
  default:
switchD_010b7d38_caseD_b:
                    /* catch() { ... } // from try @ 010b7d08 with catch @ 010b7d64 */
    pcVar13 = pcVar12;
    if (pcVar12 < pcVar15) goto code_r0x010b7d6c;
  case '\x1a':
    iVar7 = 3;
    *(undefined4 *)(puVar20 + 3) = 3;
    break;
  case ';':
    iVar7 = 1;
    *(undefined4 *)(puVar20 + 3) = 1;
  }
                    /* try { // try from 010b7dec to 011b7dfb has its CatchHandler @ 010b7fa8 */
  if (pcVar8 != (char *)0x0) {
    cVar2 = *pcVar8;
    iVar5 = 0;
                    /* try { // try from 010b7dfc to 011b7e8f has its CatchHandler @ 010b7d80 */
    do {
      pcVar15 = (&PTR_s_Ascender_0172c750)[iVar5];
      iVar6 = iVar5;
      if (*pcVar15 == cVar2) {
        uVar22 = (ulong)iVar5;
        while( true ) {
          iVar5 = strncmp(pcVar15,pcVar8,(size_t)(pcVar13 + ~(ulong)pcVar8));
          if (iVar5 == 0) {
                    /* try { // try from 010b7e90 to 011b7eb3 has its CatchHandler @ 010b7fc4 */
            switch(uVar22 & 0xffffffff) {
            case 0:
                    /* try { // try from 010b7ec4 to 011b7ee3 has its CatchHandler @ 010b7fc8 */
              local_f0[0] = 2;
              iVar5 = FUN_010ba0ec(param_1,local_f0,1);
              if (iVar5 != 1) break;
              *(ulong *)(puVar17 + 0x28) = CONCAT71(uStack_e7,local_e8);
            default:
              goto switchD_010b7eb0_caseD_1;
            case 0xe:
              local_f0[0] = 2;
              iVar5 = FUN_010ba0ec(param_1,local_f0,1);
              if (iVar5 != 1) break;
              *(ulong *)(puVar17 + 0x30) = CONCAT71(uStack_e7,local_e8);
              goto switchD_010b7eb0_caseD_1;
            case 0x14:
              goto LAB_010b7b94;
            case 0x1a:
              local_f0[0] = 2;
              local_e0 = 2;
              local_d0 = 2;
              local_c0 = 2;
              iVar5 = FUN_010ba0ec(param_1,local_f0,4);
              if (iVar5 != 4) break;
              *(ulong *)(puVar17 + 8) = CONCAT71(uStack_e7,local_e8);
              *(undefined8 *)(puVar17 + 0x10) = local_d8;
              *(undefined8 *)(puVar17 + 0x18) = local_c8;
              *(undefined8 *)(puVar17 + 0x20) = local_b8;
              goto switchD_010b7eb0_caseD_1;
            case 0x1e:
              local_f0[0] = 4;
              iVar5 = FUN_010ba0ec(param_1,local_f0,1);
              if (iVar5 != 1) break;
              *puVar17 = local_e8;
              goto switchD_010b7eb0_caseD_1;
            case 0x28:
              local_b0[0] = 3;
              iVar5 = FUN_010ba0ec(param_1,local_b0,1);
              if (iVar5 != 1) break;
                    /* try { // try from 010b7f58 to 011b7f5b has its CatchHandler @ 010b7fc4 */
              if ((local_a8 | 2) == 2) goto switchD_010b7eb0_caseD_1;
              iVar4 = 7;
              break;
            case 0x2d:
              local_b0[0] = 3;
              iVar5 = FUN_010ba0ec(param_1,local_b0,1);
                    /* catch() { ... } // from try @ 010b7dec with catch @ 010b7fa8 */
              if (iVar5 != 1) break;
              puVar20 = (ulong *)param_1[1];
              iVar4 = (int)puVar20[3];
              uVar10 = local_a8;
              goto joined_r0x010b7fbc;
            case 0x31:
              goto switchD_010b86a4_caseD_4b;
            }
            goto LAB_010b8e58;
          }
          if (0x48 < (long)uVar22) break;
          pcVar15 = (&PTR_s_AxisLabel_0172c758)[uVar22];
          uVar22 = uVar22 + 1;
          if (*pcVar15 != cVar2) goto switchD_010b7eb0_caseD_1;
        }
        iVar6 = (int)uVar22 + 1;
      }
      iVar5 = iVar6 + 1;
    } while (iVar6 < 0x49);
switchD_010b7eb0_caseD_1:
    puVar20 = (ulong *)param_1[1];
    iVar5 = (int)puVar20[3];
    goto LAB_010b7c48;
  }
LAB_010b7d50:
  iVar5 = 2;
  if (iVar7 != 2) goto LAB_010b8e58;
  goto LAB_010b7c48;
switchD_010b86a4_caseD_4b:
  if (iVar7 < 2) {
    pcVar8 = (char *)*puVar20;
    pcVar15 = (char *)puVar20[2];
    if (iVar7 != 1) {
      if (pcVar8 < pcVar15) {
LAB_010b8484:
        pcVar12 = pcVar8;
        pcVar8 = pcVar12 + 1;
        *puVar20 = (ulong)pcVar8;
        switch(*pcVar12) {
        case '\t':
        case ' ':
          goto switchD_010b84a8_caseD_9;
        case '\n':
        case '\r':
          pcVar8 = pcVar12 + 1;
          iVar7 = 2;
          goto LAB_010b84bc;
        default:
          goto switchD_010b84a8_caseD_b;
        case '\x1a':
          goto switchD_010b84a8_caseD_1a;
        case ';':
          pcVar8 = pcVar12 + 1;
                    /* try { // try from 010b85e4 to 011b862b has its CatchHandler @ 010b8714 */
          iVar7 = 1;
          goto LAB_010b84bc;
        }
      }
      goto LAB_010b84b8;
    }
    goto LAB_010b84cc;
  }
  pcVar8 = (char *)*puVar20;
  pcVar15 = (char *)puVar20[2];
                    /* try { // try from 010b8468 to 011b84c7 has its CatchHandler @ 010b82ac */
  goto LAB_010b8518;
switchD_010b84a8_caseD_9:
                    /* catch() { ... } // from try @ 010b8450 with catch @ 010b84ac */
  if (pcVar15 <= pcVar8) goto switchD_010b84a8_caseD_1a;
  goto LAB_010b8484;
switchD_010b84a8_caseD_1a:
  pcVar8 = pcVar12 + 1;
LAB_010b84b8:
  iVar7 = 3;
LAB_010b84bc:
  *(int *)(puVar20 + 3) = iVar7;
switchD_010b84a8_caseD_b:
  if (iVar7 < 2) {
LAB_010b84cc:
    do {
      if (pcVar15 <= pcVar8) {
        uVar16 = 3;
                    /* try { // try from 010b850c to 011b8523 has its CatchHandler @ 010b86f0 */
        goto LAB_010b8514;
      }
      pcVar12 = pcVar8 + 1;
      *puVar20 = (ulong)pcVar12;
      cVar2 = *pcVar8;
      pcVar8 = pcVar12;
      if (cVar2 == '\n') break;
      if (cVar2 == '\x1a') {
        uVar16 = 3;
        goto LAB_010b8514;
      }
    } while (cVar2 != '\r');
    uVar16 = 2;
LAB_010b8514:
    *(undefined4 *)(puVar20 + 3) = uVar16;
  }
LAB_010b8518:
  *(undefined4 *)(puVar20 + 3) = 0;
  if (pcVar8 < pcVar15) {
LAB_010b8524:
    pcVar12 = pcVar8 + 1;
    *puVar20 = (ulong)pcVar12;
                    /* try { // try from 010b853c to 011b854f has its CatchHandler @ 010b86d0 */
    iVar7 = 3;
    switch(*pcVar8) {
    case '\t':
    case ' ':
      goto switchD_010b8548_caseD_9;
    case '\n':
    case '\r':
      iVar7 = 2;
      goto switchD_010b8548_caseD_1a;
    default:
      goto switchD_010b8548_caseD_b;
    case '\x1a':
      goto switchD_010b8548_caseD_1a;
    case ';':
      iVar7 = 1;
                    /* try { // try from 010b85c0 to 011b85c7 has its CatchHandler @ 010b8704 */
      goto switchD_010b8548_caseD_1a;
    }
  }
LAB_010b8558:
  iVar7 = 3;
switchD_010b8548_caseD_1a:
  *(int *)(puVar20 + 3) = iVar7;
LAB_010b8560:
  bVar3 = iVar7 != 2;
  iVar7 = 2;
  if (bVar3) {
switchD_010b86a4_caseD_16:
    iVar4 = 0xa0;
LAB_010b8e58:
    ft_mem_free(uVar1,*(undefined8 *)(puVar17 + 0x38));
    *(undefined8 *)(puVar17 + 0x38) = 0;
                    /* try { // try from 010b8e70 to 011b8eb3 has its CatchHandler @ 010b8e70
                       catch() { ... } // from try @ 010b8e70 with catch @ 010b8e70
                       catch() { ... } // from try @ 010b901c with catch @ 010b8e70 */
    *(undefined4 *)(puVar17 + 0x40) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(puVar17 + 0x48));
    *(undefined8 *)(puVar17 + 0x48) = 0;
    *(undefined4 *)(puVar17 + 0x50) = 0;
    *puVar17 = 0;
    return iVar4;
  }
  goto switchD_010b86a4_caseD_4b;
code_r0x010b857c:
  pcVar13 = pcVar12 + 1;
  *puVar20 = (ulong)pcVar13;
  cVar2 = *pcVar12;
  pcVar12 = pcVar13;
  switch(cVar2) {
  case '\t':
  case ' ':
    iVar7 = 0;
    break;
  case '\n':
  case '\r':
    iVar7 = 2;
    *(undefined4 *)(puVar20 + 3) = 2;
    break;
  default:
switchD_010b8548_caseD_b:
    pcVar13 = pcVar12;
    if (pcVar12 < pcVar15) goto code_r0x010b857c;
  case '\x1a':
    iVar7 = 3;
    *(undefined4 *)(puVar20 + 3) = 3;
    break;
  case ';':
    iVar7 = 1;
    *(undefined4 *)(puVar20 + 3) = 1;
  }
  if (pcVar8 != (char *)0x0) {
    cVar2 = *pcVar8;
    iVar4 = 0;
LAB_010b861c:
    pcVar15 = (&PTR_s_Ascender_0172c750)[iVar4];
    iVar5 = iVar4;
    if (*pcVar15 == cVar2) {
      lVar18 = (long)iVar4;
      while( true ) {
        iVar4 = strncmp(pcVar15,pcVar8,(size_t)(pcVar13 + ~(ulong)pcVar8));
        if (iVar4 == 0) break;
        if (0x48 < lVar18) goto LAB_010b8674;
        pcVar15 = (&PTR_s_AxisLabel_0172c758)[lVar18];
                    /* try { // try from 010b8660 to 011b866f has its CatchHandler @ 010b8704 */
        lVar18 = lVar18 + 1;
        if (*pcVar15 != cVar2) goto switchD_010b86a4_caseD_4b;
      }
      switch((int)lVar18) {
      case 0x14:
      case 0x15:
        goto LAB_010b7b94;
      default:
        goto switchD_010b86a4_caseD_16;
      case 0x32:
      case 0x33:
        lVar18 = param_1[2];
        local_b0[0] = 3;
        iVar4 = FUN_010ba0ec(param_1,local_b0,1);
        if (iVar4 != 1) goto switchD_010b86a4_caseD_16;
                    /* catch() { ... } // from try @ 010b853c with catch @ 010b86d0 */
        *(uint *)(lVar18 + 0x50) = local_a8;
        if (local_a8 != 0) {
                    /* catch() { ... } // from try @ 010b850c with catch @ 010b86f0 */
          uVar9 = ft_mem_realloc(*param_1,0x10,0,(long)(int)local_a8,0,local_b0);
          *(undefined8 *)(lVar18 + 0x48) = uVar9;
                    /* catch() { ... } // from try @ 010b85c0 with catch @ 010b8704
                       catch() { ... } // from try @ 010b8660 with catch @ 010b8704 */
          iVar4 = local_b0[0];
          if (local_b0[0] != 0) goto LAB_010b8e58;
        }
        local_100 = (long *)(lVar18 + 0x48);
        iVar5 = 0;
LAB_010b8ad8:
        puVar20 = (ulong *)param_1[1];
        iVar7 = (int)puVar20[3];
        break;
      case 0x35:
                    /* catch() { ... } // from try @ 010b85e4 with catch @ 010b8714 */
        lVar18 = param_1[2];
        local_b0[0] = 3;
        iVar4 = FUN_010ba0ec(param_1,local_b0,1);
        if (iVar4 != 1) goto switchD_010b86a4_caseD_16;
        *(uint *)(lVar18 + 0x40) = local_a8;
        if (local_a8 != 0) {
          uVar9 = ft_mem_realloc(*param_1,0x28,0,(long)(int)local_a8,0,local_b0);
          *(undefined8 *)(lVar18 + 0x38) = uVar9;
          iVar4 = local_b0[0];
          if (local_b0[0] != 0) goto LAB_010b8e58;
        }
        local_100 = (long *)0xffffffff;
        goto LAB_010b884c;
      case 0x4b:
        goto switchD_010b86a4_caseD_4b;
      }
LAB_010b8ae0:
      if (iVar7 < 2) {
        pcVar8 = (char *)*puVar20;
        pcVar15 = (char *)puVar20[2];
        if (iVar7 != 1) {
          if (pcVar8 < pcVar15) {
LAB_010b8b0c:
            pcVar12 = pcVar8;
            pcVar8 = pcVar12 + 1;
            *puVar20 = (ulong)pcVar8;
            switch(*pcVar12) {
            case '\t':
            case ' ':
              goto switchD_010b8b38_caseD_9;
            case '\n':
            case '\r':
              pcVar8 = pcVar12 + 1;
              iVar7 = 2;
              goto LAB_010b8b4c;
            default:
              goto switchD_010b8b38_caseD_b;
            case '\x1a':
              goto switchD_010b8b38_caseD_1a;
            case ';':
              pcVar8 = pcVar12 + 1;
              iVar7 = 1;
              goto LAB_010b8b4c;
            }
          }
          goto LAB_010b8b48;
        }
        goto LAB_010b8b5c;
      }
      pcVar8 = (char *)*puVar20;
      pcVar15 = (char *)puVar20[2];
      goto LAB_010b8ba8;
    }
    goto LAB_010b8678;
  }
  goto LAB_010b8560;
LAB_010b884c:
  puVar20 = (ulong *)param_1[1];
  iVar5 = (int)puVar20[3];
LAB_010b8854:
  if (iVar5 < 2) {
    pcVar8 = (char *)*puVar20;
    pcVar15 = (char *)puVar20[2];
    if (iVar5 != 1) {
      if (pcVar8 < pcVar15) {
LAB_010b8880:
        pcVar12 = pcVar8;
        pcVar8 = pcVar12 + 1;
        *puVar20 = (ulong)pcVar8;
        switch(*pcVar12) {
        case '\t':
        case ' ':
          goto switchD_010b88ac_caseD_9;
        case '\n':
        case '\r':
                    /* try { // try from 010b89e4 to 011b89fb has its CatchHandler @ 010b8bc4 */
          pcVar8 = pcVar12 + 1;
          iVar5 = 2;
          goto LAB_010b88c0;
        default:
          goto switchD_010b88ac_caseD_b;
        case '\x1a':
          goto switchD_010b88ac_caseD_1a;
        case ';':
          pcVar8 = pcVar12 + 1;
          iVar5 = 1;
          goto LAB_010b88c0;
        }
      }
      goto LAB_010b88bc;
    }
    goto LAB_010b88d0;
  }
  pcVar8 = (char *)*puVar20;
  pcVar15 = (char *)puVar20[2];
  goto LAB_010b891c;
switchD_010b88ac_caseD_9:
  if (pcVar15 <= pcVar8) goto switchD_010b88ac_caseD_1a;
  goto LAB_010b8880;
switchD_010b88ac_caseD_1a:
  pcVar8 = pcVar12 + 1;
LAB_010b88bc:
  iVar5 = 3;
LAB_010b88c0:
  *(int *)(puVar20 + 3) = iVar5;
switchD_010b88ac_caseD_b:
  if (iVar5 < 2) {
LAB_010b88d0:
    do {
      if (pcVar15 <= pcVar8) {
        uVar16 = 3;
        goto LAB_010b8918;
      }
      pcVar12 = pcVar8 + 1;
      *puVar20 = (ulong)pcVar12;
      cVar2 = *pcVar8;
      pcVar8 = pcVar12;
      if ((cVar2 == '\n') || (cVar2 == '\r')) {
        uVar16 = 2;
        goto LAB_010b8918;
      }
    } while (cVar2 != '\x1a');
    uVar16 = 3;
LAB_010b8918:
    *(undefined4 *)(puVar20 + 3) = uVar16;
  }
LAB_010b891c:
  *(undefined4 *)(puVar20 + 3) = 0;
  if (pcVar8 < pcVar15) {
LAB_010b8928:
                    /* try { // try from 010b8928 to 011b893f has its CatchHandler @ 010b8984 */
    pcVar12 = pcVar8 + 1;
    *puVar20 = (ulong)pcVar12;
                    /* try { // try from 010b8940 to 011b899f has its CatchHandler @ 010b8784 */
    iVar7 = 3;
    switch(*pcVar8) {
    case '\t':
    case ' ':
      goto switchD_010b8954_caseD_9;
    case '\n':
    case '\r':
      iVar7 = 2;
      goto switchD_010b8954_caseD_1a;
    default:
      goto switchD_010b8954_caseD_b;
    case '\x1a':
      goto switchD_010b8954_caseD_1a;
    case ';':
      iVar7 = 1;
      goto switchD_010b8954_caseD_1a;
    }
  }
LAB_010b8964:
  iVar7 = 3;
switchD_010b8954_caseD_1a:
  *(int *)(puVar20 + 3) = iVar7;
  goto LAB_010b896c;
code_r0x010b898c:
  pcVar13 = pcVar12 + 1;
  *puVar20 = (ulong)pcVar13;
  cVar2 = *pcVar12;
  pcVar12 = pcVar13;
                    /* try { // try from 010b89a0 to 011b89e3 has its CatchHandler @ 010b89a0
                       catch() { ... } // from try @ 010b89a0 with catch @ 010b89a0
                       catch() { ... } // from try @ 010b8b4c with catch @ 010b89a0 */
  switch(cVar2) {
  case '\t':
  case ' ':
    iVar7 = 0;
    break;
  case '\n':
  case '\r':
    iVar7 = 2;
    *(undefined4 *)(puVar20 + 3) = 2;
    break;
  default:
switchD_010b8954_caseD_b:
                    /* catch() { ... } // from try @ 010b8928 with catch @ 010b8984 */
    pcVar13 = pcVar12;
    if (pcVar12 < pcVar15) goto code_r0x010b898c;
  case '\x1a':
    iVar7 = 3;
    *(undefined4 *)(puVar20 + 3) = 3;
    break;
  case ';':
    iVar7 = 1;
    *(undefined4 *)(puVar20 + 3) = 1;
  }
                    /* try { // try from 010b8a14 to 011b8a27 has its CatchHandler @ 010b8ba4 */
  if (pcVar8 != (char *)0x0) goto LAB_010b8a18;
LAB_010b896c:
  iVar5 = 2;
  iVar4 = 0xa0;
  if (iVar7 != 2) goto LAB_010b8e58;
  goto LAB_010b8854;
LAB_010b8a18:
  cVar2 = *pcVar8;
  iVar4 = 0;
  do {
    pcVar15 = (&PTR_s_Ascender_0172c750)[iVar4];
    iVar5 = iVar4;
    if (*pcVar15 == cVar2) {
      lVar21 = (long)iVar4;
      while( true ) {
        iVar4 = strncmp(pcVar15,pcVar8,(size_t)(pcVar13 + ~(ulong)pcVar8));
        iVar5 = (int)lVar21;
        if (iVar4 == 0) {
          if (0x4a < iVar5) {
            if (iVar5 != 0x4b) goto switchD_010b86a4_caseD_16;
            goto LAB_010b884c;
          }
          if (iVar5 != 0x38) {
            if ((1 < iVar5 - 0x14U) && (iVar5 != 0x17)) goto switchD_010b86a4_caseD_16;
                    /* try { // try from 010b8abc to 011b8b03 has its CatchHandler @ 010b8be8 */
            *(int *)(lVar18 + 0x40) = (int)local_100 + 1;
            goto switchD_010b86a4_caseD_4b;
          }
          local_100 = (long *)((long)(int)local_100 + 1);
          if (*(int *)(lVar18 + 0x40) <= (int)local_100) goto switchD_010b86a4_caseD_16;
          lVar21 = *(long *)(lVar18 + 0x38);
          local_b0[0] = 3;
          local_a0 = 2;
          local_90 = 2;
          local_80 = 2;
          local_70 = 2;
          iVar4 = FUN_010ba0ec(param_1,local_b0,5);
          if (iVar4 != 5) goto switchD_010b86a4_caseD_16;
          puVar11 = (uint *)(lVar21 + (long)local_100 * 0x28);
          *puVar11 = local_a8;
          *(ulong *)(puVar11 + 2) = CONCAT44(uStack_94,local_98);
          *(ulong *)(puVar11 + 4) = CONCAT44(uStack_84,local_88);
          *(ulong *)(puVar11 + 6) = CONCAT44(uStack_74,local_78);
          *(undefined8 *)(puVar11 + 8) = local_68;
          goto LAB_010b884c;
        }
        if (0x48 < lVar21) break;
        pcVar15 = (&PTR_s_AxisLabel_0172c758)[lVar21];
        lVar21 = lVar21 + 1;
        if (*pcVar15 != cVar2) goto LAB_010b884c;
      }
      iVar5 = iVar5 + 1;
    }
                    /* try { // try from 010b8a98 to 011b8a9f has its CatchHandler @ 010b8bd8 */
    iVar4 = iVar5 + 1;
  } while (iVar5 < 0x49);
  goto LAB_010b884c;
switchD_010b8954_caseD_9:
  pcVar8 = pcVar12;
  if (pcVar15 <= pcVar12) goto LAB_010b8964;
  goto LAB_010b8928;
switchD_010b8b38_caseD_9:
                    /* try { // try from 010b8b3c to 011b8b4b has its CatchHandler @ 010b8bd8 */
  if (pcVar15 <= pcVar8) goto switchD_010b8b38_caseD_1a;
  goto LAB_010b8b0c;
switchD_010b8b38_caseD_1a:
  pcVar8 = pcVar12 + 1;
LAB_010b8b48:
  iVar7 = 3;
LAB_010b8b4c:
                    /* try { // try from 010b8b4c to 011b8c47 has its CatchHandler @ 010b89a0 */
  *(int *)(puVar20 + 3) = iVar7;
switchD_010b8b38_caseD_b:
  if (iVar7 < 2) {
LAB_010b8b5c:
    do {
      if (pcVar15 <= pcVar8) {
        uVar16 = 3;
        goto LAB_010b8ba4;
      }
      pcVar12 = pcVar8 + 1;
      *puVar20 = (ulong)pcVar12;
      cVar2 = *pcVar8;
      pcVar8 = pcVar12;
      if ((cVar2 == '\n') || (cVar2 == '\r')) {
        uVar16 = 2;
        goto LAB_010b8ba4;
      }
    } while (cVar2 != '\x1a');
    uVar16 = 3;
LAB_010b8ba4:
                    /* catch() { ... } // from try @ 010b8a14 with catch @ 010b8ba4 */
    *(undefined4 *)(puVar20 + 3) = uVar16;
  }
LAB_010b8ba8:
  *(undefined4 *)(puVar20 + 3) = 0;
  if (pcVar8 < pcVar15) {
LAB_010b8bb4:
    pcVar12 = pcVar8 + 1;
    *puVar20 = (ulong)pcVar12;
                    /* catch() { ... } // from try @ 010b89e4 with catch @ 010b8bc4 */
                    /* catch() { ... } // from try @ 010b8a98 with catch @ 010b8bd8
                       catch() { ... } // from try @ 010b8b3c with catch @ 010b8bd8 */
    iVar7 = 3;
    switch(*pcVar8) {
    case '\t':
    case ' ':
      goto switchD_010b8be0_caseD_9;
    case '\n':
    case '\r':
      iVar7 = 2;
      goto switchD_010b8be0_caseD_1a;
    default:
      goto switchD_010b8be0_caseD_b;
    case '\x1a':
      goto switchD_010b8be0_caseD_1a;
    case ';':
                    /* try { // try from 010b8c58 to 011b8df7 has its CatchHandler @ 010b8c58
                       catch() { ... } // from try @ 010b8c58 with catch @ 010b8c58
                       catch() { ... } // from try @ 010b8e10 with catch @ 010b8c58 */
      iVar7 = 1;
      goto switchD_010b8be0_caseD_1a;
    }
  }
LAB_010b8bf0:
  iVar7 = 3;
switchD_010b8be0_caseD_1a:
  *(int *)(puVar20 + 3) = iVar7;
  goto LAB_010b8bf8;
code_r0x010b8c18:
  pcVar13 = pcVar12 + 1;
  *puVar20 = (ulong)pcVar13;
  cVar2 = *pcVar12;
  pcVar12 = pcVar13;
  switch(cVar2) {
  case '\t':
  case ' ':
    iVar7 = 0;
    break;
  case '\n':
  case '\r':
    iVar7 = 2;
    *(undefined4 *)(puVar20 + 3) = 2;
    break;
  default:
switchD_010b8be0_caseD_b:
    pcVar13 = pcVar12;
    if (pcVar12 < pcVar15) goto code_r0x010b8c18;
  case '\x1a':
    iVar7 = 3;
    *(undefined4 *)(puVar20 + 3) = 3;
    break;
  case ';':
    iVar7 = 1;
    *(undefined4 *)(puVar20 + 3) = 1;
  }
  if (pcVar8 != (char *)0x0) {
    iVar4 = 0;
    cVar2 = *pcVar8;
    do {
      pcVar15 = (&PTR_s_Ascender_0172c750)[iVar4];
      iVar6 = iVar4;
      if (*pcVar15 == cVar2) {
        lVar21 = 0;
        while( true ) {
          iVar6 = strncmp(pcVar15,pcVar8,(size_t)(pcVar13 + ~(ulong)pcVar8));
          iVar19 = (int)lVar21;
          if (iVar6 == 0) {
            uVar10 = (iVar4 + iVar19) - 0x14;
            uVar22 = (ulong)uVar10;
            if (0x37 < uVar10) goto switchD_010b86a4_caseD_16;
            if (uVar22 == 0x37) goto LAB_010b8ae0;
            if ((1L << (uVar22 & 0x3f) & 7U) != 0) {
              *(int *)(lVar18 + 0x50) = iVar5;
              qsort((void *)*local_100,(long)iVar5,0x10,FUN_010ba7ec);
                    /* try { // try from 010b8450 to 011b8467 has its CatchHandler @ 010b84ac */
              puVar20 = (ulong *)param_1[1];
              iVar7 = (int)puVar20[3];
              goto switchD_010b86a4_caseD_4b;
            }
            if (((1L << (uVar22 & 0x3f) & 0x34000U) == 0) || (*(int *)(lVar18 + 0x50) <= iVar5))
            goto switchD_010b86a4_caseD_16;
            lVar21 = *local_100;
            local_b0[0] = 5;
            local_a0 = 5;
            local_90 = 3;
            local_80 = 3;
            iVar7 = FUN_010ba0ec(param_1,local_b0,4);
            if (iVar7 < 3) goto switchD_010b86a4_caseD_16;
                    /* try { // try from 010b8df8 to 011b8e0f has its CatchHandler @ 010b8e54 */
            puVar11 = (uint *)(lVar21 + (long)iVar5 * 0x10);
            *puVar11 = local_a8;
            puVar11[1] = local_98;
                    /* try { // try from 010b8e10 to 011b8e6f has its CatchHandler @ 010b8c58 */
            if (iVar19 + iVar4 == 0x25) {
              uVar10 = local_88;
              uVar14 = 0;
            }
            else {
              uVar10 = local_78;
              uVar14 = local_88;
              if (iVar7 != 4 || iVar19 + iVar4 != 0x22) {
                uVar10 = 0;
              }
            }
            puVar11[2] = uVar14;
            puVar11[3] = uVar10;
            iVar5 = iVar5 + 1;
            goto LAB_010b8ad8;
          }
          if (0x48 < iVar4 + lVar21) break;
          pcVar15 = (&PTR_s_AxisLabel_0172c758)[iVar4 + lVar21];
          lVar21 = lVar21 + 1;
          if (*pcVar15 != cVar2) goto LAB_010b8ae0;
        }
        iVar6 = iVar4 + iVar19 + 1;
      }
      iVar4 = iVar6 + 1;
    } while (iVar6 < 0x49);
    goto LAB_010b8ae0;
  }
LAB_010b8bf8:
  iVar4 = 0xa0;
  bVar3 = iVar7 != 2;
  iVar7 = 2;
  if (bVar3) goto LAB_010b8e58;
  goto LAB_010b8ae0;
switchD_010b8be0_caseD_9:
  pcVar8 = pcVar12;
                    /* catch() { ... } // from try @ 010b8abc with catch @ 010b8be8 */
  if (pcVar15 <= pcVar12) goto LAB_010b8bf0;
  goto LAB_010b8bb4;
LAB_010b8674:
  iVar5 = (int)lVar18 + 1;
LAB_010b8678:
  iVar4 = iVar5 + 1;
  if (0x48 < iVar5) goto switchD_010b86a4_caseD_4b;
  goto LAB_010b861c;
switchD_010b8548_caseD_9:
  pcVar8 = pcVar12;
  if (pcVar15 <= pcVar12) goto LAB_010b8558;
  goto LAB_010b8524;
joined_r0x010b7fbc:
  if (uVar10 != 0) {
                    /* catch() { ... } // from try @ 010b7e90 with catch @ 010b7fc4
                       catch() { ... } // from try @ 010b7f58 with catch @ 010b7fc4 */
    uVar10 = uVar10 - 1;
                    /* catch() { ... } // from try @ 010b7ec4 with catch @ 010b7fc8 */
LAB_010b7fcc:
    if (iVar4 < 2) {
      pcVar8 = (char *)*puVar20;
                    /* try { // try from 010b7fe4 to 011b8027 has its CatchHandler @ 010b7fe4
                       catch() { ... } // from try @ 010b7fe4 with catch @ 010b7fe4
                       catch() { ... } // from try @ 010b818c with catch @ 010b7fe4 */
      pcVar15 = (char *)puVar20[2];
      if (iVar4 != 1) {
        if (pcVar8 < pcVar15) {
LAB_010b8000:
          pcVar12 = pcVar8;
          pcVar8 = pcVar12 + 1;
          *puVar20 = (ulong)pcVar8;
          switch(*pcVar12) {
          case '\t':
          case ' ':
            goto switchD_010b8024_caseD_9;
          case '\n':
          case '\r':
            pcVar8 = pcVar12 + 1;
            iVar4 = 2;
            goto LAB_010b8038;
          default:
            goto switchD_010b8024_caseD_b;
          case '\x1a':
            goto switchD_010b8024_caseD_1a;
          case ';':
            pcVar8 = pcVar12 + 1;
            iVar4 = 1;
            goto LAB_010b8038;
          }
        }
        goto LAB_010b8034;
      }
      goto LAB_010b8050;
    }
    pcVar8 = (char *)*puVar20;
    pcVar15 = (char *)puVar20[2];
    goto LAB_010b809c;
  }
  goto LAB_010b81a4;
switchD_010b8024_caseD_9:
                    /* try { // try from 010b8028 to 011b803f has its CatchHandler @ 010b8218 */
  if (pcVar15 <= pcVar8) goto switchD_010b8024_caseD_1a;
  goto LAB_010b8000;
switchD_010b8024_caseD_1a:
  pcVar8 = pcVar12 + 1;
LAB_010b8034:
  iVar4 = 3;
LAB_010b8038:
  *(int *)(puVar20 + 3) = iVar4;
switchD_010b8024_caseD_b:
  if (iVar4 < 2) {
LAB_010b8050:
    do {
      if (pcVar15 <= pcVar8) {
        uVar16 = 3;
        goto LAB_010b8098;
      }
                    /* try { // try from 010b8058 to 011b806b has its CatchHandler @ 010b81f8 */
      pcVar12 = pcVar8 + 1;
      *puVar20 = (ulong)pcVar12;
      cVar2 = *pcVar8;
      pcVar8 = pcVar12;
      if (cVar2 == '\n') break;
      if (cVar2 == '\x1a') {
        uVar16 = 3;
        goto LAB_010b8098;
      }
    } while (cVar2 != '\r');
    uVar16 = 2;
LAB_010b8098:
    *(undefined4 *)(puVar20 + 3) = uVar16;
  }
LAB_010b809c:
  *(undefined4 *)(puVar20 + 3) = 0;
  if (pcVar8 < pcVar15) {
LAB_010b80a8:
    pcVar12 = pcVar8 + 1;
    *puVar20 = (ulong)pcVar12;
    iVar4 = 3;
    switch(*pcVar8) {
    case '\t':
    case ' ':
      goto switchD_010b80cc_caseD_9;
    case '\n':
    case '\r':
      iVar4 = 2;
      goto switchD_010b80cc_caseD_1a;
    default:
      goto switchD_010b8138_caseD_b;
    case '\x1a':
      goto switchD_010b80cc_caseD_1a;
    case ';':
      iVar4 = 1;
                    /* try { // try from 010b8100 to 011b8147 has its CatchHandler @ 010b823c */
      goto switchD_010b80cc_caseD_1a;
    }
  }
LAB_010b80dc:
                    /* try { // try from 010b80dc to 011b80e3 has its CatchHandler @ 010b822c */
  iVar4 = 3;
switchD_010b80cc_caseD_1a:
  *(int *)(puVar20 + 3) = iVar4;
  goto LAB_010b80e4;
code_r0x010b8118:
  *puVar20 = (ulong)(pcVar12 + 1);
  cVar2 = *pcVar12;
  pcVar12 = pcVar12 + 1;
  switch(cVar2) {
  case '\t':
  case ' ':
    iVar4 = 0;
    break;
  case '\n':
  case '\r':
    iVar4 = 2;
    *(undefined4 *)(puVar20 + 3) = 2;
    break;
  default:
switchD_010b8138_caseD_b:
    if (pcVar12 < pcVar15) goto code_r0x010b8118;
  case '\x1a':
    iVar4 = 3;
    *(undefined4 *)(puVar20 + 3) = 3;
    break;
  case ';':
    iVar4 = 1;
    *(undefined4 *)(puVar20 + 3) = 1;
  }
  if (pcVar8 != (char *)0x0) goto joined_r0x010b7fbc;
LAB_010b80e4:
  bVar3 = iVar4 != 2;
  iVar4 = 2;
  if (bVar3) {
    return 0xa0;
  }
  goto LAB_010b7fcc;
switchD_010b80cc_caseD_9:
  pcVar8 = pcVar12;
  if (pcVar15 <= pcVar12) goto LAB_010b80dc;
  goto LAB_010b80a8;
LAB_010b81a4:
  if (iVar4 < 2) {
    pcVar8 = (char *)*puVar20;
    pcVar15 = (char *)puVar20[2];
    if (iVar4 != 1) {
      if (pcVar8 < pcVar15) {
LAB_010b81d8:
        pcVar12 = pcVar8;
        pcVar8 = pcVar12 + 1;
        *puVar20 = (ulong)pcVar8;
                    /* catch() { ... } // from try @ 010b8058 with catch @ 010b81f8 */
        switch(*pcVar12) {
        case '\t':
        case ' ':
          goto switchD_010b81fc_caseD_9;
        case '\n':
        case '\r':
          pcVar8 = pcVar12 + 1;
          iVar4 = 2;
          goto LAB_010b8210;
        default:
          goto switchD_010b81fc_caseD_b;
        case '\x1a':
          goto switchD_010b81fc_caseD_1a;
        case ';':
          pcVar8 = pcVar12 + 1;
          iVar4 = 1;
          goto LAB_010b8210;
        }
      }
      goto LAB_010b820c;
    }
    goto LAB_010b8220;
  }
  pcVar8 = (char *)*puVar20;
  pcVar15 = (char *)puVar20[2];
  goto LAB_010b8274;
switchD_010b81fc_caseD_9:
  if (pcVar15 <= pcVar8) goto switchD_010b81fc_caseD_1a;
  goto LAB_010b81d8;
switchD_010b81fc_caseD_1a:
  pcVar8 = pcVar12 + 1;
LAB_010b820c:
  iVar4 = 3;
LAB_010b8210:
  *(int *)(puVar20 + 3) = iVar4;
switchD_010b81fc_caseD_b:
                    /* catch() { ... } // from try @ 010b8028 with catch @ 010b8218 */
  if (iVar4 < 2) {
LAB_010b8220:
    do {
      if (pcVar15 <= pcVar8) {
        uVar16 = 3;
        goto LAB_010b8268;
      }
      pcVar12 = pcVar8 + 1;
                    /* catch() { ... } // from try @ 010b80dc with catch @ 010b822c
                       catch() { ... } // from try @ 010b817c with catch @ 010b822c */
      *puVar20 = (ulong)pcVar12;
      cVar2 = *pcVar8;
      pcVar8 = pcVar12;
      if (cVar2 == '\n') break;
                    /* catch() { ... } // from try @ 010b8100 with catch @ 010b823c */
      if (cVar2 == '\x1a') {
        uVar16 = 3;
        goto LAB_010b8268;
      }
    } while (cVar2 != '\r');
    uVar16 = 2;
LAB_010b8268:
    *(undefined4 *)(puVar20 + 3) = uVar16;
  }
LAB_010b8274:
  *(undefined4 *)(puVar20 + 3) = 0;
  if (pcVar8 < pcVar15) {
LAB_010b8280:
    pcVar12 = pcVar8 + 1;
    *puVar20 = (ulong)pcVar12;
    iVar4 = 3;
    switch(*pcVar8) {
    case '\t':
    case ' ':
      goto switchD_010b82a4_caseD_9;
    case '\n':
    case '\r':
      iVar4 = 2;
      goto switchD_010b82a4_caseD_1a;
    default:
      goto switchD_010b8310_caseD_b;
    case '\x1a':
      goto switchD_010b82a4_caseD_1a;
    case ';':
      iVar4 = 1;
      goto switchD_010b82a4_caseD_1a;
    }
  }
LAB_010b82b4:
  iVar4 = 3;
switchD_010b82a4_caseD_1a:
  *(int *)(puVar20 + 3) = iVar4;
  goto LAB_010b82bc;
code_r0x010b82f0:
  pcVar13 = pcVar12 + 1;
  *puVar20 = (ulong)pcVar13;
  cVar2 = *pcVar12;
  pcVar12 = pcVar13;
  switch(cVar2) {
  case '\t':
  case ' ':
    iVar4 = 0;
    break;
  case '\n':
  case '\r':
    iVar4 = 2;
    *(undefined4 *)(puVar20 + 3) = 2;
    break;
  default:
switchD_010b8310_caseD_b:
    pcVar13 = pcVar12;
    if (pcVar12 < pcVar15) goto code_r0x010b82f0;
  case '\x1a':
    iVar4 = 3;
    *(undefined4 *)(puVar20 + 3) = 3;
    break;
  case ';':
    iVar4 = 1;
    *(undefined4 *)(puVar20 + 3) = 1;
  }
  if (pcVar8 != (char *)0x0) {
    cVar2 = *pcVar8;
    iVar5 = 0;
    do {
      pcVar15 = (&PTR_s_Ascender_0172c750)[iVar5];
      iVar7 = iVar5;
      if (*pcVar15 == cVar2) {
        lVar18 = (long)iVar5;
        while( true ) {
          iVar5 = strncmp(pcVar15,pcVar8,(size_t)(pcVar13 + ~(ulong)pcVar8));
          iVar7 = (int)lVar18;
          if (iVar5 == 0) {
            if ((iVar7 != 0x11) && (iVar7 != 0x14)) goto LAB_010b81a4;
            iVar4 = 0;
            goto switchD_010b7eb0_caseD_1;
          }
          if (0x48 < lVar18) break;
          pcVar15 = (&PTR_s_AxisLabel_0172c758)[lVar18];
          lVar18 = lVar18 + 1;
          if (*pcVar15 != cVar2) goto LAB_010b81a4;
        }
        iVar7 = iVar7 + 1;
      }
      iVar5 = iVar7 + 1;
    } while (iVar7 < 0x49);
    goto LAB_010b81a4;
  }
LAB_010b82bc:
  bVar3 = iVar4 != 2;
  iVar4 = 2;
  if (bVar3) {
    return 0xa0;
  }
  goto LAB_010b81a4;
switchD_010b82a4_caseD_9:
  pcVar8 = pcVar12;
                    /* try { // try from 010b82ac to 011b844f has its CatchHandler @ 010b82ac
                       catch() { ... } // from try @ 010b82ac with catch @ 010b82ac
                       catch() { ... } // from try @ 010b8468 with catch @ 010b82ac */
  if (pcVar15 <= pcVar12) goto LAB_010b82b4;
  goto LAB_010b8280;
switchD_010b7d38_caseD_9:
  pcVar8 = pcVar12;
  if (pcVar15 <= pcVar12) goto LAB_010b7d48;
  goto LAB_010b7d14;
switchD_010b7a88_caseD_9:
  pcVar8 = pcVar12;
  if (pcVar15 <= pcVar12) goto LAB_010b7a98;
  goto LAB_010b7a64;
LAB_010b7b94:
  return 0;
}

