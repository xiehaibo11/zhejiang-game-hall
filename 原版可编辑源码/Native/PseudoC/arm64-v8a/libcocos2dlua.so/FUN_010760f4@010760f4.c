
int FUN_010760f4(long *param_1,char param_2,uint *param_3,uint param_4,long *param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  void *__dest;
  long lVar7;
  long lVar8;
  short *psVar9;
  short *psVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  short *psVar21;
  long *plVar22;
  long local_e0;
  long local_a0;
  short *local_88;
  long local_80;
  uint local_6c;
  uint local_68;
  int local_64;
  
  lVar15 = param_1[7];
                    /* try { // try from 0107611c to 01176157 has its CatchHandler @ 0107615c */
  local_6c = 0;
  iVar12 = 6;
  if ((param_2 != '\0') && (param_3 != (uint *)0x0)) {
                    /* try { // try from 01076158 to 01176177 has its CatchHandler @ 010760e0 */
                    /* catch() { ... } // from try @ 0107611c with catch @ 0107615c */
    lVar6 = ft_mem_realloc(lVar15,0x10,0,(ulong)param_6,0,&local_64);
    iVar12 = local_64;
    if (local_64 == 0) {
      *param_5 = lVar6;
      if ((param_4 < param_3[0x10]) &&
         (*(long *)(*(long *)(param_3 + 0x12) + (ulong)param_4 * 8) !=
          *(long *)(*(long *)(param_3 + 0x12) + (ulong)(param_4 + 1) * 8))) {
        local_64 = FT_Stream_Seek(param_1);
        if ((local_64 == 0) &&
           (local_64 = FT_Stream_EnterFrame
                                 (param_1,*(long *)(*(long *)(param_3 + 0x12) +
                                                   (ulong)(param_4 + 1) * 8) -
                                          *(long *)(*(long *)(param_3 + 0x12) + (ulong)param_4 * 8))
           , local_64 == 0)) {
          lVar16 = param_1[8];
          lVar20 = *param_1;
          __dest = (void *)ft_mem_realloc(lVar15,8,0,*param_3,0,&local_64);
          if ((local_64 == 0) &&
             ((lVar7 = ft_mem_realloc(lVar15,8,0,*param_3,0,&local_64), local_64 == 0 &&
              (lVar8 = ft_mem_realloc(lVar15,8,0,*param_3,0,&local_64), local_64 == 0)))) {
            uVar1 = FT_Stream_GetUShort(param_1);
            uVar2 = FT_Stream_GetUShort(param_1);
            local_a0 = (lVar16 - lVar20) + (ulong)(uVar2 & 0xffff);
            if ((uVar1 >> 0xf & 1) == 0) {
              local_e0 = 0;
            }
            else {
              lVar16 = param_1[8];
              lVar20 = *param_1;
              param_1[8] = lVar20 + local_a0;
              local_e0 = FUN_01073f2c(param_1,&local_6c);
              local_a0 = param_1[8] - *param_1;
              param_1[8] = *param_1 + (lVar16 - lVar20);
            }
            uVar2 = local_6c;
            if ((uVar1 & 0xfff) != 0) {
              uVar18 = 0;
                    /* try { // try from 010762e0 to 01176313 has its CatchHandler @ 010762e0
                       catch() { ... } // from try @ 010762e0 with catch @ 010762e0
                       catch() { ... } // from try @ 01076360 with catch @ 010762e0 */
              local_80 = 0;
              do {
                uVar3 = FT_Stream_GetUShort(param_1);
                uVar4 = FT_Stream_GetUShort(param_1);
                if ((uVar4 >> 0xf & 1) == 0) {
                    /* try { // try from 01076314 to 0117631b has its CatchHandler @ 0107638c */
                  if (param_3[0xc] <= (uVar4 & 0xfff)) {
                    local_64 = 8;
                    break;
                  }
                    /* try { // try from 01076338 to 0117635f has its CatchHandler @ 01076374 */
                  memcpy(__dest,(void *)(*(long *)(param_3 + 0xe) +
                                        (ulong)(*param_3 * (uVar4 & 0xfff)) * 8),
                         (ulong)*param_3 << 3);
                }
                else if (*param_3 != 0) {
                  uVar19 = 0;
                  do {
                    uVar5 = FT_Stream_GetUShort(param_1);
                    /* try { // try from 01076360 to 0117639f has its CatchHandler @ 010762e0 */
                    *(long *)((long)__dest + (ulong)uVar19 * 8) =
                         (long)(int)(-(uVar5 >> 0xf & 1) & 0xfffc0000 | (uVar5 & 0xffff) << 2);
                    uVar19 = uVar19 + 1;
                    /* catch() { ... } // from try @ 01076338 with catch @ 01076374 */
                  } while (uVar19 < *param_3);
                }
                if ((((uVar4 & 0xffff) >> 0xe & 1) != 0) && (*param_3 != 0)) {
                    /* catch() { ... } // from try @ 01076314 with catch @ 0107638c */
                  uVar19 = 0;
                  do {
                    uVar5 = FT_Stream_GetUShort(param_1);
                    /* try { // try from 010763a0 to 011763f3 has its CatchHandler @ 010763a0
                       catch() { ... } // from try @ 010763a0 with catch @ 010763a0
                       catch() { ... } // from try @ 01076420 with catch @ 010763a0 */
                    *(long *)(lVar7 + (ulong)uVar19 * 8) =
                         (long)(int)(-(uVar5 >> 0xf & 1) & 0xfffc0000 | (uVar5 & 0xffff) << 2);
                    uVar19 = uVar19 + 1;
                  } while (uVar19 < *param_3);
                  if (*param_3 != 0) {
                    uVar19 = 0;
                    do {
                      uVar5 = FT_Stream_GetUShort(param_1);
                      *(long *)(lVar8 + (ulong)uVar19 * 8) =
                           (long)(int)(-(uVar5 >> 0xf & 1) & 0xfffc0000 | (uVar5 & 0xffff) << 2);
                      uVar19 = uVar19 + 1;
                    } while (uVar19 < *param_3);
                  }
                }
                    /* try { // try from 010763f4 to 0117641f has its CatchHandler @ 01076430 */
                lVar16 = FUN_01073e08(param_3,uVar4 & 0xffff,__dest,lVar7,lVar8);
                if (lVar16 != 0) {
                  lVar20 = param_1[8];
                  lVar14 = *param_1;
                  if (((uVar4 & 0xffff) >> 0xd & 1) == 0) {
                    /* try { // try from 01076420 to 0117644b has its CatchHandler @ 010763a0 */
                    local_68 = uVar2;
                    local_88 = (short *)local_e0;
                    /* catch() { ... } // from try @ 010763f4 with catch @ 01076430 */
                  }
                  else {
                    param_1[8] = lVar14 + local_a0;
                    local_88 = (short *)FUN_01073f2c(param_1,&local_68);
                    local_80 = (long)local_88;
                  }
                  uVar19 = local_68;
                  uVar4 = param_6;
                  if (local_68 != 0) {
                    uVar4 = local_68;
                  }
                  psVar9 = (short *)FUN_01074094(param_1,uVar4);
                  psVar10 = (short *)FUN_01074094(param_1,uVar4);
                  if (((psVar9 != (short *)0x0) && (local_88 != (short *)0x0)) &&
                     (psVar10 != (short *)0x0)) {
                    if (local_88 == (short *)0xffffffffffffffff) {
                      uVar17 = (ulong)param_6;
                      psVar21 = psVar9;
                      plVar22 = (long *)(lVar6 + 8);
                      local_88 = psVar10;
                      if (param_6 != 0) {
                        do {
                          lVar11 = FT_MulFix((long)*psVar21,lVar16);
                          plVar22[-1] = plVar22[-1] + lVar11;
                          lVar11 = FT_MulFix((long)*local_88,lVar16);
                          uVar17 = uVar17 - 1;
                    /* try { // try from 01076570 to 01176597 has its CatchHandler @ 0107665c */
                          *plVar22 = *plVar22 + lVar11;
                          psVar21 = psVar21 + 1;
                          plVar22 = plVar22 + 2;
                          local_88 = local_88 + 1;
                        } while (uVar17 != 0);
                      }
                    }
                    else if (uVar19 != 0) {
                      uVar17 = 0;
                      do {
                        if (*(ushort *)(local_80 + uVar17 * 2) < param_6) {
                          lVar11 = FT_MulFix((long)psVar9[uVar17],lVar16);
                          lVar13 = (ulong)*(ushort *)(local_80 + uVar17 * 2) * 0x10;
                          *(long *)(lVar6 + lVar13) = *(long *)(lVar6 + lVar13) + lVar11;
                          lVar13 = FT_MulFix((long)psVar10[uVar17],lVar16);
                          lVar11 = lVar6 + (ulong)*(ushort *)(local_80 + uVar17 * 2) * 0x10;
                    /* try { // try from 01076508 to 0117656f has its CatchHandler @ 01076508
                       catch() { ... } // from try @ 01076508 with catch @ 01076508
                       catch() { ... } // from try @ 010765cc with catch @ 01076508 */
                          *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + lVar13;
                        }
                        uVar17 = uVar17 + 1;
                      } while (uVar17 < uVar19);
                    }
                  }
                  if (local_80 == -1) {
                    /* try { // try from 010765a0 to 011765ab has its CatchHandler @ 010766d8 */
                    local_80 = -1;
                  }
                  else {
                    ft_mem_free(lVar15);
                    local_80 = 0;
                  }
                    /* try { // try from 010765ac to 011765bb has its CatchHandler @ 01076698 */
                  ft_mem_free(lVar15,psVar9);
                    /* try { // try from 010765bc to 011765cb has its CatchHandler @ 01076664 */
                  ft_mem_free(lVar15,psVar10);
                    /* try { // try from 010765cc to 01176717 has its CatchHandler @ 01076508 */
                  param_1[8] = *param_1 + (lVar20 - lVar14);
                }
                uVar18 = uVar18 + 1;
                local_a0 = (ulong)(uVar3 & 0xffff) + local_a0;
              } while (uVar18 < (uVar1 & 0xfff));
            }
            ft_mem_free(lVar15,__dest);
            ft_mem_free(lVar15,lVar7);
            ft_mem_free(lVar15,lVar8);
          }
          FT_Stream_ExitFrame(param_1);
          if (local_64 == 0) {
            return 0;
          }
        }
        ft_mem_free(lVar15,lVar6);
        *param_5 = 0;
        iVar12 = local_64;
      }
      else {
        iVar12 = 0;
      }
    }
  }
                    /* catch() { ... } // from try @ 01076570 with catch @ 0107665c */
                    /* catch() { ... } // from try @ 010765bc with catch @ 01076664 */
  return iVar12;
}

