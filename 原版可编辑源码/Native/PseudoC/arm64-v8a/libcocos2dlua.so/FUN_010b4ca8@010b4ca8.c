
/* WARNING: Type propagation algorithm not settling */

int FUN_010b4ca8(long *param_1,long param_2,long param_3,uint param_4)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  void *__dest;
  undefined8 uVar8;
  int iVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  long lVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 local_b0 [2];
  int local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  int local_8c;
  byte *local_88;
  byte *local_80;
  byte *pbStack_78;
  int local_70;
  byte *local_68;
  
  uVar21 = (ulong)param_4;
  FUN_010b4544(param_1,&local_80);
  if (local_70 != 0) {
    local_88 = local_80;
    iVar9 = *(int *)(param_2 + 0xc);
    pbVar17 = pbStack_78;
    if (iVar9 == 7) {
      lVar14 = *param_1;
      lVar16 = param_1[2];
      *param_1 = (long)(local_80 + 1);
      param_1[2] = (long)(pbStack_78 + -1);
      FUN_010b4544(param_1,local_b0);
      *param_1 = lVar14;
      param_1[2] = lVar16;
      uVar15 = 1;
      if (local_a0 != 3) {
        lVar14 = 0;
        iVar9 = 7;
        goto LAB_010b4d8c;
      }
      iVar9 = 8;
    }
    else {
      uVar15 = uVar21;
      if (local_70 != 3) {
        lVar14 = 0;
        uVar15 = 1;
        goto LAB_010b4d8c;
      }
    }
    if (param_4 != 0) {
      local_80 = local_80 + 1;
      if ((int)uVar15 == 0) {
        return 0;
      }
      lVar14 = 1;
      pbVar17 = pbStack_78 + -1;
LAB_010b4d8c:
LAB_010b4e6c:
      local_88 = local_80;
      do {
        if ((pbVar17 <= local_88) || (bVar10 = *local_88, 0x25 < bVar10)) goto LAB_010b4ee0;
        if ((1L << ((ulong)bVar10 & 0x3f) & 0x100003601U) == 0) {
          if ((ulong)bVar10 != 0x25) goto LAB_010b4ee0;
          bVar10 = 0x25;
          while (((pbVar19 = local_88 + 1, bVar10 != 10 && (bVar10 != 0xd)) &&
                 (local_88 = pbVar19, pbVar19 < pbVar17))) {
            bVar10 = *pbVar19;
          }
        }
        local_88 = local_88 + 1;
      } while( true );
    }
  }
  return 3;
LAB_010b4ee0:
  if (7 < iVar9 - 1U) {
    return 3;
  }
  plVar1 = (long *)(*(long *)(param_3 + lVar14 * 8) + (ulong)*(uint *)(param_2 + 0x18));
  switch(iVar9) {
  case 1:
    if ((((local_88 + 3 < pbVar17) && (*local_88 == 0x74)) && (local_88[1] == 0x72)) &&
       ((local_88[2] == 0x75 && (local_88[3] == 0x65)))) {
      lVar16 = 1;
      pbVar19 = local_88 + 5;
    }
    else if ((((local_88 + 4 < pbVar17) && ((*local_88 == 0x66 && (local_88[1] == 0x61)))) &&
             (local_88[2] == 0x6c)) && (local_88[3] == 0x73)) {
      lVar16 = 0;
      pbVar19 = local_88 + 6;
      if (local_88[4] != 0x65) {
        pbVar19 = local_88;
      }
    }
    else {
      lVar16 = 0;
      pbVar19 = local_88;
    }
    break;
  case 2:
    if (local_88 < pbVar17) {
      bVar10 = *local_88;
      if ((bVar10 == 0x2d) || (bVar10 == 0x2b)) {
        bVar6 = bVar10 == 0x2d;
        pbVar20 = local_88 + 1;
        if (pbVar20 == pbVar17) goto LAB_010b4de8;
      }
      else {
        bVar6 = false;
        pbVar20 = local_88;
      }
      if (pbVar20 < pbVar17) {
        lVar16 = 0;
        bVar5 = false;
        while( true ) {
          bVar10 = *pbVar20;
          if (((bVar10 < 0x21) && ((1L << ((ulong)bVar10 & 0x3f) & 0x100003601U) != 0)) ||
             ((char)bVar10 < 0)) break;
          cVar3 = (&DAT_01463138)[(ulong)(uint)(int)(char)bVar10 & 0x7f];
          if (((long)cVar3 < 0) || ('\t' < cVar3)) break;
          if (lVar16 < 0xccccccd) {
            if ((lVar16 == 0xccccccc) && ('\a' < cVar3)) {
              bVar5 = true;
              lVar16 = 0xccccccc;
            }
            else {
              lVar16 = (long)cVar3 + lVar16 * 10;
            }
          }
          else {
            bVar5 = true;
          }
          pbVar20 = pbVar20 + 1;
          if (pbVar17 <= pbVar20) break;
        }
      }
      else {
        bVar5 = false;
        lVar16 = 0;
      }
      if (bVar5) {
        lVar16 = 0x7fffffff;
      }
      lVar18 = -lVar16;
      if (!bVar6) {
        lVar18 = lVar16;
      }
      if (pbVar20 != local_88) {
        lVar16 = lVar18;
        pbVar19 = pbVar20;
        if ((pbVar20 < pbVar17) && (*pbVar20 == 0x23)) {
          lVar16 = 0;
          pbVar19 = local_88;
          if ((pbVar20 + 1 < pbVar17) && (lVar18 - 2U < 0x23)) {
            bVar10 = pbVar20[1];
            if ((bVar10 == 0x2d) || (bVar10 == 0x2b)) {
              bVar6 = bVar10 == 0x2d;
              if (pbVar20 + 2 == pbVar17) goto LAB_010b4de8;
              lVar11 = 2;
            }
            else {
              bVar6 = false;
              lVar11 = 1;
            }
            if (pbVar20 + lVar11 < pbVar17) {
              cVar3 = '\0';
              if (lVar18 != 0) {
                cVar3 = (char)(0x7fffffff / lVar18);
              }
              lVar12 = 0;
              bVar5 = false;
              lVar16 = 0;
              if (lVar18 != 0) {
                lVar16 = 0x7fffffff / lVar18;
              }
              while( true ) {
                bVar10 = pbVar20[lVar11];
                if (((bVar10 < 0x21) && ((1L << ((ulong)bVar10 & 0x3f) & 0x100003601U) != 0)) ||
                   ((char)bVar10 < 0)) break;
                    /* try { // try from 010b57a0 to 011b57ab has its CatchHandler @ 010b5af8 */
                cVar4 = (&DAT_01463138)[(ulong)(uint)(int)(char)bVar10 & 0x7f];
                iVar13 = (int)cVar4;
                if ((iVar13 < 0) || (lVar18 <= iVar13)) break;
                if (lVar16 < lVar12) {
                  bVar5 = true;
                }
                else if ((lVar12 == lVar16) && ((char)(-1 - cVar3 * (char)lVar18) < cVar4)) {
                  bVar5 = true;
                  lVar12 = lVar16;
                }
                else {
                  lVar12 = (long)iVar13 + lVar12 * lVar18;
                }
                lVar11 = lVar11 + 1;
                if (pbVar17 <= pbVar20 + lVar11) break;
              }
            }
            else {
              bVar5 = false;
              lVar12 = 0;
            }
            if (bVar5) {
              lVar12 = 0x7fffffff;
            }
            lVar16 = -lVar12;
            if (!bVar6) {
              lVar16 = lVar12;
            }
            if (lVar11 == 1) goto LAB_010b4de8;
            pbVar19 = pbVar20 + lVar11;
          }
        }
        break;
      }
    }
LAB_010b4de8:
    lVar16 = 0;
    pbVar19 = local_88;
    break;
  case 3:
    uVar8 = 0;
    goto LAB_010b5074;
  case 4:
    uVar8 = 3;
LAB_010b5074:
    lVar16 = FUN_010b9170(&local_88,pbVar17,uVar8);
    pbVar19 = local_88;
    break;
  default:
    local_80 = local_88;
    if (local_88 < pbVar17) {
      lVar16 = param_1[4];
      iVar13 = (int)pbVar17 - (int)local_88;
      if (local_70 == 2) {
        uVar7 = iVar13 - 2;
      }
      else {
        if (local_70 != 4) {
          return 3;
        }
        uVar7 = iVar13 - 1;
      }
      pbVar19 = local_88 + 1;
      local_88 = pbVar19;
      if (*plVar1 != 0) {
        ft_mem_free(lVar16);
        *plVar1 = 0;
      }
      __dest = (void *)ft_mem_alloc(lVar16,uVar7 + 1,&local_8c);
      if (local_8c != 0) {
        return local_8c;
      }
      memcpy(__dest,pbVar19,(ulong)uVar7);
      *(undefined1 *)((long)__dest + (ulong)uVar7) = 0;
      *plVar1 = (long)__dest;
      local_80 = local_88;
    }
    goto joined_r0x010b55a0;
  case 7:
    if (pbVar17 <= local_88) {
      return 3;
    }
    bVar10 = 0x7d;
    if (*local_88 != 0x7b) {
      bVar10 = 0;
    }
    bVar2 = 0x5d;
    if (*local_88 != 0x5b) {
      bVar2 = bVar10;
    }
    if (bVar2 == 0) {
      pbVar19 = local_88;
      if (pbVar17 <= local_88) {
        return 3;
      }
      do {
        if ((pbVar17 <= pbVar19) || (bVar10 = *pbVar19, 0x25 < bVar10)) goto LAB_010b5624;
        if ((1L << ((ulong)bVar10 & 0x3f) & 0x100003601U) == 0) {
          if ((ulong)bVar10 != 0x25) goto LAB_010b5624;
          bVar10 = 0x25;
          while (((pbVar20 = pbVar19 + 1, bVar10 != 10 && (bVar10 != 0xd)) &&
                 (pbVar19 = pbVar20, pbVar20 < pbVar17))) {
            bVar10 = *pbVar20;
          }
        }
        pbVar19 = pbVar19 + 1;
      } while( true );
    }
    local_68 = local_88 + 1;
    lVar16 = 0;
    pbVar19 = local_68;
joined_r0x010b50c0:
    if (pbVar19 < pbVar17) {
      do {
        if ((pbVar17 <= pbVar19) || (bVar10 = *pbVar19, 0x25 < bVar10)) goto LAB_010b5134;
        if ((1L << ((ulong)bVar10 & 0x3f) & 0x100003601U) == 0) {
          if ((ulong)bVar10 != 0x25) goto LAB_010b5134;
          bVar10 = 0x25;
          while (((pbVar20 = pbVar19 + 1, bVar10 != 10 && (bVar10 != 0xd)) &&
                 (pbVar19 = pbVar20, pbVar20 < pbVar17))) {
            bVar10 = *pbVar20;
          }
        }
        pbVar19 = pbVar19 + 1;
      } while( true );
    }
LAB_010b56e0:
    iVar13 = (int)lVar16;
    goto LAB_010b56e4;
  case 8:
    lVar18 = param_1[4];
    lVar16 = ft_mem_realloc(lVar18,8,0,param_4 << 2,0,&local_8c);
    if (local_8c != 0) {
      return local_8c;
    }
    uVar7 = FUN_010b9e40(&local_88,pbVar17,param_4,lVar16,0);
    if ((int)uVar7 < 0) {
      return 3;
    }
    if (uVar7 < param_4) {
      return 3;
    }
    do {
      if ((pbVar17 <= local_88) || (bVar10 = *local_88, 0x25 < bVar10)) goto LAB_010b525c;
      if ((1L << ((ulong)bVar10 & 0x3f) & 0x100003601U) == 0) {
        if ((ulong)bVar10 != 0x25) goto LAB_010b525c;
        bVar10 = 0x25;
        while (((pbVar19 = local_88 + 1, bVar10 != 10 && (bVar10 != 0xd)) &&
               (local_88 = pbVar19, pbVar19 < pbVar17))) {
          bVar10 = *pbVar19;
        }
      }
      local_88 = local_88 + 1;
    } while( true );
  }
  local_88 = pbVar19;
  cVar3 = *(char *)(param_2 + 0x1c);
  local_80 = local_88;
  if (cVar3 == '\x04') {
    *(int *)plVar1 = (int)lVar16;
  }
  else if (cVar3 == '\x02') {
    *(short *)plVar1 = (short)lVar16;
  }
  else if (cVar3 == '\x01') {
    *(char *)plVar1 = (char)lVar16;
  }
  else {
    *plVar1 = lVar16;
  }
joined_r0x010b55a0:
  if ((int)uVar15 == 1) {
    return 0;
  }
  uVar15 = (ulong)((int)uVar15 - 1);
  lVar14 = lVar14 + 1;
  goto LAB_010b4e6c;
LAB_010b525c:
  uVar7 = FUN_010b9e40(&local_88,pbVar17,param_4,lVar16 + uVar21 * 8,0);
  if ((int)uVar7 < 0) {
    return 3;
  }
  if (uVar7 < param_4) {
    return 3;
  }
  do {
    if ((pbVar17 <= local_88) || (bVar10 = *local_88, 0x25 < bVar10)) break;
    if ((1L << ((ulong)bVar10 & 0x3f) & 0x100003601U) == 0) {
      if ((ulong)bVar10 != 0x25) break;
      bVar10 = 0x25;
      while (((pbVar19 = local_88 + 1, bVar10 != 10 && (bVar10 != 0xd)) &&
             (local_88 = pbVar19, pbVar19 < pbVar17))) {
        bVar10 = *pbVar19;
      }
    }
    local_88 = local_88 + 1;
  } while( true );
  uVar7 = FUN_010b9e40(&local_88,pbVar17,param_4,lVar16 + (ulong)(param_4 * 2) * 8,0);
  if ((int)uVar7 < 0) {
    return 3;
  }
  if (uVar7 < param_4) {
    return 3;
  }
  do {
    if ((pbVar17 <= local_88) || (bVar10 = *local_88, 0x25 < bVar10)) break;
    if ((1L << ((ulong)bVar10 & 0x3f) & 0x100003601U) == 0) {
      if ((ulong)bVar10 != 0x25) break;
      bVar10 = 0x25;
      while (((pbVar19 = local_88 + 1, bVar10 != 10 && (bVar10 != 0xd)) &&
             (local_88 = pbVar19, pbVar19 < pbVar17))) {
        bVar10 = *pbVar19;
      }
    }
    local_88 = local_88 + 1;
  } while( true );
  uVar7 = FUN_010b9e40(&local_88,pbVar17,param_4,lVar16 + (ulong)(param_4 * 3) * 8,0);
  if ((int)uVar7 < 0) {
    return 3;
  }
  if (uVar7 < param_4) {
    return 3;
  }
  do {
    if ((pbVar17 <= local_88) || (bVar10 = *local_88, 0x25 < bVar10)) break;
    if ((1L << ((ulong)bVar10 & 0x3f) & 0x100003601U) == 0) {
      if ((ulong)bVar10 != 0x25) break;
      bVar10 = 0x25;
      while (((pbVar19 = local_88 + 1, bVar10 != 10 && (bVar10 != 0xd)) &&
             (local_88 = pbVar19, pbVar19 < pbVar17))) {
        bVar10 = *pbVar19;
      }
    }
    local_88 = local_88 + 1;
  } while( true );
  if (param_4 != 0) {
    uVar22 = 0;
    do {
      puVar23 = *(undefined8 **)(param_3 + uVar22 * 8);
      uVar8 = FT_RoundFix(*(undefined8 *)(lVar16 + uVar22 * 8));
      *puVar23 = uVar8;
      iVar13 = (int)uVar22;
      uVar8 = FT_RoundFix(*(undefined8 *)(lVar16 + (ulong)(param_4 + iVar13) * 8));
      puVar23[1] = uVar8;
      uVar8 = FT_RoundFix(*(undefined8 *)(lVar16 + (ulong)(param_4 * 2 + iVar13) * 8));
      puVar23[2] = uVar8;
      uVar8 = FT_RoundFix(*(undefined8 *)(lVar16 + (ulong)(param_4 * 3 + iVar13) * 8));
      uVar22 = uVar22 + 1;
      puVar23[3] = uVar8;
    } while (uVar21 != uVar22);
  }
  ft_mem_free(lVar18,lVar16);
  local_80 = local_88;
  goto joined_r0x010b55a0;
LAB_010b5624:
  if (pbVar17 <= pbVar19) {
    return 3;
  }
  if (*pbVar19 != 0) {
    local_68 = pbVar19;
    FUN_010b9170(&local_68,pbVar17,0);
    return 3;
  }
  lVar16 = 0;
LAB_010b563c:
  iVar13 = (int)lVar16;
  pbVar19 = pbVar19 + 1;
  local_68 = pbVar19;
LAB_010b56e4:
  if (iVar13 < 4) {
    return 3;
  }
  local_88 = pbVar19;
                    /* catch() { ... } // from try @ 010b5a94 with catch @ 010b56f8 */
  lVar16 = FT_RoundFix(local_b0[0]);
  *plVar1 = lVar16;
  lVar16 = FT_RoundFix(local_b0[1]);
  plVar1[1] = lVar16;
  lVar16 = FT_RoundFix(CONCAT44(uStack_9c,local_a0));
  plVar1[2] = lVar16;
  lVar16 = FT_RoundFix(local_98);
  plVar1[3] = lVar16;
  local_80 = local_88;
  goto joined_r0x010b55a0;
LAB_010b5134:
  local_68 = pbVar19;
  if (pbVar17 <= pbVar19) goto LAB_010b56e0;
  if (*pbVar19 == bVar2) goto LAB_010b563c;
  if (3 < lVar16) goto LAB_010b56e0;
  uVar8 = FUN_010b9170(&local_68,pbVar17,0);
  pbVar20 = local_68;
  local_b0[lVar16] = uVar8;
  if (pbVar20 == pbVar19) {
    return 3;
  }
  lVar16 = lVar16 + 1;
  pbVar19 = pbVar20;
  goto joined_r0x010b50c0;
}

