
ulong FUN_010ba0ec(undefined8 *param_1,long param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  void *__dest;
  undefined8 uVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  int iVar17;
  undefined1 *puVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  size_t __n;
  ulong *puVar22;
  int local_6c;
  byte *local_68;
  
                    /* try { // try from 010ba118 to 011ba127 has its CatchHandler @ 010ba1ac */
  if (4 < param_3 - 1) {
    uVar20 = 0;
LAB_010ba7c8:
    return uVar20 & 0xffffffff;
  }
  puVar22 = (ulong *)param_1[1];
                    /* try { // try from 010ba128 to 011ba21b has its CatchHandler @ 010b9f84 */
  uVar20 = 0;
                    /* catch() { ... } // from try @ 010b9ff8 with catch @ 010ba178 */
LAB_010ba788:
  uVar2 = *(uint *)(param_2 + uVar20 * 0x10);
  iVar9 = (int)puVar22[3];
  if (uVar2 == 0) {
    if (iVar9 < 1) {
                    /* try { // try from 010ba21c to 011ba25b has its CatchHandler @ 010ba21c
                       catch() { ... } // from try @ 010ba21c with catch @ 010ba21c
                       catch() { ... } // from try @ 010ba274 with catch @ 010ba21c */
      puVar18 = (undefined1 *)*puVar22;
      if ((undefined1 *)*puVar22 < (undefined1 *)puVar22[2]) {
LAB_010ba224:
        puVar1 = puVar18 + 1;
        *puVar22 = (ulong)puVar1;
        iVar17 = 3;
        switch(*puVar18) {
        case 9:
        case 0x20:
          goto switchD_010ba248_caseD_9;
        case 10:
        case 0xd:
          iVar17 = 2;
          goto switchD_010ba248_caseD_1a;
        default:
          goto switchD_010ba248_caseD_b;
        case 0x1a:
          goto switchD_010ba248_caseD_1a;
        case 0x3b:
          iVar17 = 1;
          goto switchD_010ba248_caseD_1a;
        }
      }
LAB_010ba258:
      iVar17 = 3;
switchD_010ba248_caseD_1a:
                    /* try { // try from 010ba25c to 011ba273 has its CatchHandler @ 010ba2ac */
      *(int *)(puVar22 + 3) = iVar17;
      iVar9 = iVar17;
    }
switchD_010ba248_caseD_b:
    if (iVar9 < 2) {
                    /* try { // try from 010ba274 to 011ba2c7 has its CatchHandler @ 010ba21c */
      local_68 = (byte *)*puVar22 + -1;
      pbVar15 = (byte *)*puVar22;
      do {
        pbVar14 = pbVar15;
        if ((byte *)puVar22[2] <= pbVar15) {
LAB_010ba2b4:
          uVar10 = 3;
          goto LAB_010ba2b8;
        }
        pbVar14 = pbVar15 + 1;
        *puVar22 = (ulong)pbVar14;
        bVar3 = *pbVar15;
        if (bVar3 == 10) break;
        if (bVar3 == 0x1a) goto LAB_010ba2b4;
        pbVar15 = pbVar14;
      } while (bVar3 != 0xd);
                    /* catch() { ... } // from try @ 010ba25c with catch @ 010ba2ac */
      uVar10 = 2;
LAB_010ba2b8:
      *(undefined4 *)(puVar22 + 3) = uVar10;
      goto LAB_010ba2c0;
    }
  }
  else if (iVar9 < 1) {
    pbVar15 = (byte *)puVar22[2];
    local_68 = (byte *)*puVar22;
    if ((byte *)*puVar22 < pbVar15) {
      do {
        pbVar13 = local_68 + 1;
                    /* catch() { ... } // from try @ 010b9fc8 with catch @ 010ba198 */
        *puVar22 = (ulong)pbVar13;
                    /* catch() { ... } // from try @ 010ba07c with catch @ 010ba1ac
                       catch() { ... } // from try @ 010ba118 with catch @ 010ba1ac */
        uVar10 = 3;
        switch(*local_68) {
        case 9:
        case 0x20:
                    /* catch() { ... } // from try @ 010ba0a0 with catch @ 010ba1bc */
          local_68 = pbVar13;
          if (pbVar15 <= pbVar13) goto LAB_010ba7ac;
          break;
        case 10:
        case 0xd:
          uVar10 = 2;
          goto switchD_010ba1b8_caseD_1a;
        default:
          goto switchD_010ba1b8_caseD_b;
        case 0x1a:
          goto switchD_010ba1b8_caseD_1a;
        case 0x3b:
          uVar10 = 1;
          goto switchD_010ba1b8_caseD_1a;
        }
      } while( true );
    }
LAB_010ba7ac:
    uVar10 = 3;
                    /* try { // try from 010ba7b0 to 011ba8a7 has its CatchHandler @ 010ba60c */
switchD_010ba1b8_caseD_1a:
    *(undefined4 *)(puVar22 + 3) = uVar10;
  }
  goto LAB_010ba7c8;
switchD_010ba248_caseD_9:
  puVar18 = puVar1;
  if ((undefined1 *)puVar22[2] <= puVar1) goto LAB_010ba258;
  goto LAB_010ba224;
  do {
    pbVar14 = pbVar13 + 1;
    *puVar22 = (ulong)pbVar14;
    bVar3 = *pbVar13;
    pbVar13 = pbVar14;
    switch(bVar3) {
    case 9:
    case 0x20:
      goto switchD_010ba1f8_caseD_9;
    case 10:
    case 0xd:
      *(undefined4 *)(puVar22 + 3) = 2;
      goto joined_r0x010ba684;
    default:
switchD_010ba1b8_caseD_b:
      pbVar14 = pbVar13;
      if (pbVar15 <= pbVar13) goto switchD_010ba1f8_caseD_1a;
      break;
    case 0x1a:
switchD_010ba1f8_caseD_1a:
      *(undefined4 *)(puVar22 + 3) = 3;
      goto switchD_010ba1f8_caseD_9;
    case 0x3b:
      *(undefined4 *)(puVar22 + 3) = 1;
                    /* try { // try from 010ba680 to 011ba693 has its CatchHandler @ 010ba804 */
      goto joined_r0x010ba684;
    }
  } while( true );
switchD_010ba1f8_caseD_9:
joined_r0x010ba684:
  if (local_68 == (byte *)0x0) goto LAB_010ba7c8;
LAB_010ba2c0:
  pbVar15 = local_68;
  if (5 < uVar2) goto LAB_010ba664;
                    /* try { // try from 010ba2c8 to 011ba30b has its CatchHandler @ 010ba2c8
                       catch() { ... } // from try @ 010ba2c8 with catch @ 010ba2c8
                       catch() { ... } // from try @ 010ba46c with catch @ 010ba2c8 */
  lVar12 = (long)pbVar14 - (long)local_68;
  __n = lVar12 - 1;
  switch(uVar2) {
  default:
    __dest = (void *)ft_mem_qalloc(*param_1,lVar12,&local_6c);
    plVar21 = (long *)(param_2 + uVar20 * 0x10 + 8);
    *plVar21 = (long)__dest;
                    /* try { // try from 010ba30c to 011ba323 has its CatchHandler @ 010ba4dc */
    if (local_6c == 0) {
      memcpy(__dest,pbVar15,__n);
      *(undefined1 *)(*plVar21 + __n) = 0;
    }
    break;
  case 2:
    uVar11 = FUN_010b9170(&local_68,local_68 + __n,0);
                    /* try { // try from 010ba3c0 to 011ba3c7 has its CatchHandler @ 010ba4f0 */
                    /* try { // try from 010ba3e4 to 011ba427 has its CatchHandler @ 010ba500 */
    *(undefined8 *)(param_2 + uVar20 * 0x10 + 8) = uVar11;
    break;
  case 3:
    if (lVar12 < 2) {
LAB_010ba658:
      uVar10 = 0;
    }
    else {
      bVar3 = *local_68;
      if ((bVar3 == 0x2d) || (bVar3 == 0x2b)) {
        bVar8 = bVar3 == 0x2d;
        if (__n == 1) goto LAB_010ba658;
        pbVar15 = local_68 + 1;
      }
      else {
        bVar8 = false;
      }
      pbVar14 = local_68 + __n;
      if (pbVar15 < pbVar14) {
        lVar12 = 0;
        bVar7 = false;
        while( true ) {
                    /* try { // try from 010ba560 to 011ba59f has its CatchHandler @ 010ba560
                       catch() { ... } // from try @ 010ba560 with catch @ 010ba560
                       catch() { ... } // from try @ 010ba5b8 with catch @ 010ba560 */
          bVar3 = *pbVar15;
          if (((bVar3 < 0x21) && ((1L << ((ulong)bVar3 & 0x3f) & 0x100003601U) != 0)) ||
             ((char)bVar3 < 0)) break;
          cVar5 = (&DAT_01463138)[(ulong)(uint)(int)(char)bVar3 & 0x7f];
          if (((long)cVar5 < 0) || ('\t' < cVar5)) break;
          if (lVar12 < 0xccccccd) {
            if ((lVar12 == 0xccccccc) && ('\a' < cVar5)) {
                    /* try { // try from 010ba5b8 to 011ba60b has its CatchHandler @ 010ba560 */
              bVar7 = true;
              lVar12 = 0xccccccc;
            }
            else {
              lVar12 = (long)cVar5 + lVar12 * 10;
            }
          }
          else {
            bVar7 = true;
                    /* try { // try from 010ba5a0 to 011ba5b7 has its CatchHandler @ 010ba5f0 */
          }
          pbVar15 = pbVar15 + 1;
          if (pbVar14 <= pbVar15) break;
        }
      }
      else {
        bVar7 = false;
        lVar12 = 0;
      }
      if (bVar7) {
        lVar12 = 0x7fffffff;
      }
      lVar16 = -lVar12;
      if (!bVar8) {
        lVar16 = lVar12;
      }
                    /* catch() { ... } // from try @ 010ba5a0 with catch @ 010ba5f0 */
      if (pbVar15 == local_68) goto LAB_010ba658;
      if ((pbVar15 < pbVar14) && (*pbVar15 == 0x23)) {
                    /* try { // try from 010ba60c to 011ba64f has its CatchHandler @ 010ba60c
                       catch() { ... } // from try @ 010ba60c with catch @ 010ba60c
                       catch() { ... } // from try @ 010ba7b0 with catch @ 010ba60c */
        uVar10 = 0;
        if ((pbVar15 + 1 < pbVar14) && (lVar16 - 2U < 0x23)) {
          bVar3 = pbVar15[1];
          if ((bVar3 == 0x2d) || (bVar3 == 0x2b)) {
            bVar8 = bVar3 == 0x2d;
            if (pbVar15 + 2 == pbVar14) goto LAB_010ba658;
                    /* try { // try from 010ba650 to 011ba667 has its CatchHandler @ 010ba824 */
            lVar12 = 2;
          }
          else {
            bVar8 = false;
            lVar12 = 1;
          }
          if (pbVar15 + lVar12 < pbVar14) {
            cVar5 = '\0';
            if (lVar16 != 0) {
              cVar5 = (char)(0x7fffffff / lVar16);
            }
            lVar19 = 0;
            bVar7 = false;
            lVar6 = 0;
            if (lVar16 != 0) {
              lVar6 = 0x7fffffff / lVar16;
            }
            while( true ) {
              bVar3 = pbVar15[lVar12];
              if (((bVar3 < 0x21) && ((1L << ((ulong)bVar3 & 0x3f) & 0x100003601U) != 0)) ||
                 ((char)bVar3 < 0)) break;
              cVar4 = (&DAT_01463138)[(ulong)(uint)(int)(char)bVar3 & 0x7f];
              iVar9 = (int)cVar4;
              if ((iVar9 < 0) || (lVar16 <= iVar9)) break;
              if (lVar6 < lVar19) {
                bVar7 = true;
                    /* try { // try from 010ba704 to 011ba70b has its CatchHandler @ 010ba838 */
              }
              else if ((lVar19 == lVar6) && ((char)(-1 - cVar5 * (char)lVar16) < cVar4)) {
                bVar7 = true;
                lVar19 = lVar6;
              }
              else {
                lVar19 = (long)iVar9 + lVar19 * lVar16;
              }
              lVar12 = lVar12 + 1;
                    /* try { // try from 010ba728 to 011ba76b has its CatchHandler @ 010ba848 */
              if (pbVar14 <= pbVar15 + lVar12) break;
            }
          }
          else {
            bVar7 = false;
            lVar19 = 0;
          }
          if (bVar7) {
            lVar19 = 0x7fffffff;
          }
          lVar16 = -lVar19;
          if (!bVar8) {
            lVar16 = lVar19;
          }
          if (lVar12 != 1) goto LAB_010ba77c;
          uVar10 = 0;
        }
      }
      else {
LAB_010ba77c:
        uVar10 = (undefined4)lVar16;
      }
    }
    *(undefined4 *)(param_2 + uVar20 * 0x10 + 8) = uVar10;
    break;
  case 4:
    if (__n == 4) {
      iVar9 = strncmp((char *)local_68,"true",4);
                    /* try { // try from 010ba45c to 011ba46b has its CatchHandler @ 010ba4f0 */
      bVar8 = iVar9 == 0;
                    /* try { // try from 010ba46c to 011ba55f has its CatchHandler @ 010ba2c8 */
    }
    else {
      bVar8 = false;
    }
    *(bool *)(param_2 + uVar20 * 0x10 + 8) = bVar8;
    break;
  case 5:
    if ((code *)param_1[3] == (code *)0x0) {
      uVar10 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 010ba33c with catch @ 010ba4bc */
      uVar10 = (*(code *)param_1[3])(local_68,__n,param_1[4]);
                    /* catch() { ... } // from try @ 010ba30c with catch @ 010ba4dc */
                    /* catch() { ... } // from try @ 010ba3c0 with catch @ 010ba4f0
                       catch() { ... } // from try @ 010ba45c with catch @ 010ba4f0 */
                    /* catch() { ... } // from try @ 010ba3e4 with catch @ 010ba500 */
    }
    *(undefined4 *)(param_2 + uVar20 * 0x10 + 8) = uVar10;
  }
LAB_010ba664:
  uVar20 = uVar20 + 1;
  if (param_3 <= uVar20) goto LAB_010ba7c8;
  goto LAB_010ba788;
}

