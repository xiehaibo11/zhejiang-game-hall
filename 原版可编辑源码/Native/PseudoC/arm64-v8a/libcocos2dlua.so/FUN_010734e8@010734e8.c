
int FUN_010734e8(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ushort *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  uint *puVar18;
  long lVar19;
  int local_74;
  undefined8 local_70;
  int local_64;
  
  local_74 = 0;
  lVar19 = *(long *)(param_1 + 0x450);
  uVar11 = *(undefined8 *)(param_1 + 0xb8);
  if (lVar19 == 0) {
    local_74 = FUN_01072f9c(param_1,0);
    lVar4 = 0;
    if (local_74 != 0) goto LAB_010738a0;
    lVar19 = *(long *)(param_1 + 0x450);
  }
  puVar18 = *(uint **)(lVar19 + 0x10);
  if (*puVar18 == param_2) {
    lVar4 = ft_mem_realloc(uVar11,8,0,param_2,0,&local_74);
    if (local_74 == 0) {
      if (*puVar18 != 0) {
        uVar8 = 0;
        plVar13 = (long *)(*(long *)(puVar18 + 4) + 0x18);
        do {
          lVar9 = *(long *)(param_3 + uVar8 * 8);
          if ((*plVar13 < lVar9) || (lVar9 < plVar13[-2])) goto LAB_01073750;
          lVar10 = plVar13[-1];
          if (lVar9 < lVar10) {
            lVar9 = FT_DivFix(lVar9 - lVar10,plVar13[-2] - lVar10);
            lVar9 = -lVar9;
          }
          else {
            lVar5 = *plVar13 - lVar10;
            if (lVar5 == 0) {
              lVar9 = 0;
            }
            else {
              lVar9 = FT_DivFix(lVar9 - lVar10,lVar5);
            }
          }
          *(long *)(lVar4 + uVar8 * 8) = lVar9;
          uVar3 = (int)uVar8 + 1;
          uVar8 = (ulong)uVar3;
          plVar13 = plVar13 + 6;
        } while (uVar3 < *puVar18);
      }
      if (*(char *)(lVar19 + 0x20) == '\0') {
        lVar9 = *(long *)(param_1 + 0xc0);
        lVar10 = *(long *)(param_1 + 0x450);
        uVar16 = *(undefined8 *)(lVar9 + 0x38);
        *(undefined1 *)(lVar10 + 0x20) = 1;
                    /* try { // try from 0107360c to 0117370b has its CatchHandler @ 0107360c
                       catch() { ... } // from try @ 0107360c with catch @ 0107360c
                       catch() { ... } // from try @ 01073748 with catch @ 0107360c */
        local_64 = (**(code **)(param_1 + 0x330))(param_1,0x61766172,lVar9,&local_70);
        if ((local_64 == 0) && (local_64 = FT_Stream_EnterFrame(lVar9,local_70), local_64 == 0)) {
          lVar5 = FT_Stream_GetULong(lVar9);
          uVar8 = FT_Stream_GetULong(lVar9);
          if ((lVar5 == 0x10000) && (uVar8 == **(uint **)(lVar10 + 0x10))) {
            puVar6 = (ushort *)ft_mem_realloc(uVar16,0x10,0,uVar8,0,&local_64);
            *(ushort **)(lVar10 + 0x28) = puVar6;
            if ((0 < (long)uVar8) && (local_64 == 0)) {
              uVar14 = 0;
LAB_010736a4:
              uVar2 = FT_Stream_GetUShort(lVar9);
              *puVar6 = uVar2;
              uVar7 = ft_mem_realloc(uVar16,0x10,0,uVar2,0,&local_64);
              *(undefined8 *)(puVar6 + 4) = uVar7;
              if (local_64 == 0) goto code_r0x010736d8;
              lVar5 = *(long *)(lVar10 + 0x28);
              if (0 < (int)uVar14) {
                lVar15 = (long)(int)uVar14 + 1;
                lVar17 = (-(uVar14 >> 0x1f & 1) & 0xfffffff000000000 | (uVar14 & 0xffffffff) << 4) -
                         8;
                do {
                  ft_mem_free(uVar16,*(undefined8 *)(lVar5 + lVar17));
                  lVar15 = lVar15 + -1;
                  lVar5 = *(long *)(lVar10 + 0x28);
                  *(undefined8 *)(lVar5 + lVar17) = 0;
                  lVar17 = lVar17 + -0x10;
                    /* catch() { ... } // from try @ 0107371c with catch @ 010737c4 */
                } while (1 < lVar15);
              }
                    /* catch() { ... } // from try @ 0107370c with catch @ 010737d4 */
              ft_mem_free(uVar16);
                    /* catch() { ... } // from try @ 0107373c with catch @ 010737d8 */
              *(undefined8 *)(lVar10 + 0x28) = 0;
            }
          }
LAB_010737e0:
          FT_Stream_ExitFrame(lVar9);
        }
      }
      puVar6 = *(ushort **)(lVar19 + 0x28);
      if ((puVar6 != (ushort *)0x0) && (uVar3 = *puVar18, uVar3 != 0)) {
        uVar12 = 0;
        do {
          if (1 < *puVar6) {
            lVar9 = *(long *)(lVar4 + (ulong)uVar12 * 8);
            lVar10 = *(long *)(puVar6 + 4);
            lVar19 = 0;
            uVar8 = 1;
            do {
              lVar5 = *(long *)(lVar10 + uVar8 * 0x10);
              if (lVar9 < lVar5) {
                lVar15 = *(long *)(lVar10 + lVar19);
                lVar9 = FT_MulDiv(lVar9 - lVar15,
                                  *(long *)(lVar10 + uVar8 * 0x10 + 8) -
                                  ((long *)(lVar10 + lVar19))[1],lVar5 - lVar15);
                *(long *)(lVar4 + (ulong)uVar12 * 8) =
                     *(long *)(*(long *)(puVar6 + 4) + lVar19 + 8) + lVar9;
                uVar3 = *puVar18;
                break;
              }
              uVar1 = (int)uVar8 + 1;
              uVar8 = (ulong)uVar1;
              lVar19 = lVar19 + 0x10;
            } while (uVar1 < *puVar6);
          }
          uVar12 = uVar12 + 1;
          puVar6 = puVar6 + 8;
        } while (uVar12 < uVar3);
      }
      local_74 = FUN_01072bc8(param_1,param_2,lVar4);
    }
  }
  else {
    lVar4 = 0;
LAB_01073750:
    local_74 = 6;
  }
LAB_010738a0:
  ft_mem_free(uVar11,lVar4);
  return local_74;
code_r0x010736d8:
  if (*puVar6 != 0) {
    lVar15 = 0;
    lVar5 = 0;
    do {
      uVar3 = FT_Stream_GetUShort(lVar9);
      *(long *)(*(long *)(puVar6 + 4) + lVar15) =
           (long)(int)(-(uVar3 >> 0xf & 1) & 0xfffc0000 | (uVar3 & 0xffff) << 2);
      uVar3 = FT_Stream_GetUShort(lVar9);
                    /* try { // try from 0107370c to 01173713 has its CatchHandler @ 010737d4 */
      lVar5 = lVar5 + 1;
                    /* try { // try from 0107371c to 01173727 has its CatchHandler @ 010737c4 */
      *(long *)(*(long *)(puVar6 + 4) + lVar15 + 8) =
           (long)(int)(-(uVar3 >> 0xf & 1) & 0xfffc0000 | (uVar3 & 0xffff) << 2);
      lVar15 = lVar15 + 0x10;
    } while (lVar5 < (long)(ulong)*puVar6);
  }
  puVar6 = puVar6 + 8;
                    /* try { // try from 0107373c to 01173747 has its CatchHandler @ 010737d8 */
  uVar14 = uVar14 + 1;
  if ((long)uVar8 <= (long)uVar14) goto LAB_010737e0;
  goto LAB_010736a4;
}

