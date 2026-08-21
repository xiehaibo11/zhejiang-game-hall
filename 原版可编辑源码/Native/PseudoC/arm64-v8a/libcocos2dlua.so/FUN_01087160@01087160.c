
int FUN_01087160(long *param_1,undefined8 *param_2,long *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  uint *puVar20;
  long lVar21;
  int local_68;
  int local_64;
  
  local_68 = 0;
  uVar16 = *(undefined8 *)(*param_1 + 0x38);
  *param_2 = 0;
  if (param_1[5] == 0) {
    local_64 = 0;
    lVar8 = *param_1;
    iVar6 = (int)param_1[2];
    if (iVar6 == 0) {
LAB_01087484:
      local_68 = 0;
      iVar6 = (int)param_1[2];
      goto joined_r0x0108748c;
    }
    uVar17 = *(undefined8 *)(lVar8 + 0x38);
    bVar5 = *(byte *)((long)param_1 + 0x14);
    uVar10 = (ulong)(iVar6 + 1);
    lVar21 = ft_mem_realloc(uVar17,8,0,uVar10,0,&local_64);
    param_1[5] = lVar21;
    if ((local_64 == 0) && (local_64 = FT_Stream_Seek(lVar8,param_1[1] + 3), local_64 == 0)) {
      lVar21 = bVar5 * uVar10;
      local_64 = FT_Stream_EnterFrame(lVar8,lVar21);
      if (local_64 == 0) {
        pbVar9 = *(byte **)(lVar8 + 0x40);
        puVar12 = (ulong *)param_1[5];
        pbVar3 = pbVar9 + lVar21;
        if (bVar5 == 1) {
          if (lVar21 != 0) {
            do {
              pbVar11 = pbVar9 + 1;
              *puVar12 = (ulong)*pbVar9;
              pbVar9 = pbVar11;
              puVar12 = puVar12 + 1;
            } while (pbVar11 < pbVar3);
          }
        }
        else if (bVar5 == 2) {
          if (lVar21 != 0) {
            do {
              bVar5 = *pbVar9;
              pbVar11 = pbVar9 + 1;
              pbVar9 = pbVar9 + 2;
              *puVar12 = (ulong)CONCAT11(bVar5,*pbVar11);
              puVar12 = puVar12 + 1;
            } while (pbVar9 < pbVar3);
          }
        }
        else if (bVar5 == 3) {
          if (lVar21 != 0) {
            do {
              bVar5 = *pbVar9;
              pbVar11 = pbVar9 + 1;
              pbVar1 = pbVar9 + 2;
              pbVar9 = pbVar9 + 3;
              *puVar12 = (ulong)bVar5 << 0x10 | (ulong)*pbVar11 << 8 | (ulong)*pbVar1;
              puVar12 = puVar12 + 1;
            } while (pbVar9 < pbVar3);
          }
        }
        else if (lVar21 != 0) {
          do {
            bVar5 = *pbVar9;
            pbVar11 = pbVar9 + 1;
            pbVar1 = pbVar9 + 2;
            pbVar2 = pbVar9 + 3;
            pbVar9 = pbVar9 + 4;
            *puVar12 = (ulong)bVar5 << 0x18 | (ulong)*pbVar11 << 0x10 | (ulong)*pbVar1 << 8 |
                       (ulong)*pbVar2;
            puVar12 = puVar12 + 1;
          } while (pbVar9 < pbVar3);
        }
        FT_Stream_ExitFrame(lVar8);
        if (local_64 == 0) goto LAB_01087484;
      }
    }
    ft_mem_free(uVar17,param_1[5]);
    param_1[5] = 0;
    local_68 = local_64;
    if (local_64 != 0) {
      return local_64;
    }
  }
  iVar6 = (int)param_1[2];
joined_r0x0108748c:
  if (iVar6 != 0) {
    puVar20 = (uint *)(param_1 + 2);
    plVar7 = (long *)ft_mem_realloc(uVar16,8,0,iVar6 + 1,0,&local_68);
    if (local_68 == 0) {
      if (param_3 == (long *)0x0) {
        lVar8 = 0;
      }
      else {
        lVar8 = ft_mem_alloc(uVar16,param_1[4] + (ulong)*puVar20,&local_68);
        if (local_68 != 0) {
          return local_68;
        }
      }
      lVar18 = param_1[6];
      lVar21 = lVar8;
      if (param_3 == (long *)0x0) {
        lVar21 = lVar18;
      }
      *plVar7 = lVar21;
      uVar10 = (ulong)*puVar20;
      if (*puVar20 != 0) {
        if (param_3 == (long *)0x0) {
          uVar14 = 1;
          uVar13 = 0;
          do {
            uVar15 = *(long *)(param_1[5] + uVar14 * 8) - 1;
            if ((uVar13 <= uVar15) && (uVar13 = param_1[4], uVar15 <= (ulong)param_1[4])) {
              uVar13 = uVar15;
            }
            plVar7[uVar14] = lVar18 + uVar13;
            uVar14 = uVar14 + 1;
          } while (uVar14 <= uVar10);
        }
        else {
          lVar19 = 0;
          lVar21 = 0;
          uVar14 = 0;
          do {
            uVar13 = *(long *)(param_1[5] + lVar19 * 8 + 8) - 1;
            if (uVar13 < uVar14) {
              plVar7[lVar19 + 1] = lVar8 + uVar14 + lVar21;
              uVar15 = uVar14;
            }
            else {
              uVar15 = param_1[4];
              if (uVar13 <= (ulong)param_1[4]) {
                uVar15 = uVar13;
              }
              lVar4 = lVar8 + uVar15 + lVar21;
              plVar7[lVar19 + 1] = lVar4;
              if (uVar15 != uVar14) {
                memcpy((void *)plVar7[lVar19],(void *)(lVar18 + uVar14),lVar4 - plVar7[lVar19]);
                lVar21 = lVar21 + 1;
                *(undefined1 *)plVar7[lVar19 + 1] = 0;
                plVar7[lVar19 + 1] = plVar7[lVar19 + 1] + 1;
                uVar10 = (ulong)*puVar20;
              }
            }
            uVar13 = lVar19 + 2;
            lVar19 = lVar19 + 1;
            uVar14 = uVar15;
          } while (uVar13 <= uVar10);
        }
      }
      *param_2 = plVar7;
      if (param_3 != (long *)0x0) {
        *param_3 = lVar8;
      }
    }
  }
  return local_68;
}

