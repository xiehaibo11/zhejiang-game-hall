
int FUN_010739d0(long param_1,long *param_2)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long local_98;
  uint local_74;
  undefined8 local_70;
  int local_64;
  
  puVar14 = *(uint **)(param_1 + 0x450);
  lVar11 = param_2[7];
  if ((((puVar14 == (uint *)0x0) || (*(long *)(param_1 + 0x418) == 0)) ||
      (local_64 = (**(code **)(param_1 + 0x330))(param_1,0x63766172,param_2,&local_70),
      local_64 != 0)) || (local_64 = FT_Stream_EnterFrame(param_2,local_70), local_64 != 0)) {
    lVar15 = 0;
    lVar13 = 0;
    lVar12 = 0;
    local_64 = 0;
  }
  else {
    lVar20 = param_2[8];
    lVar16 = *param_2;
    lVar12 = FT_Stream_GetULong(param_2);
    if (lVar12 == 0x10000) {
      lVar12 = ft_mem_realloc(lVar11,8,0,*puVar14,0,&local_64);
      lVar15 = 0;
      if (local_64 == 0) {
        lVar13 = ft_mem_realloc(lVar11,8,0,*puVar14,0,&local_64);
        lVar15 = 0;
        if ((local_64 == 0) &&
           (lVar15 = ft_mem_realloc(lVar11,8,0,*puVar14,0,&local_64), local_64 == 0)) {
          uVar4 = FT_Stream_GetUShort(param_2);
          uVar5 = FT_Stream_GetUShort(param_2);
          if ((uVar4 & 0xfff) != 0) {
            uVar19 = 0;
            local_98 = (lVar20 - lVar16) + (ulong)(uVar5 & 0xffff);
            do {
              uVar6 = FT_Stream_GetUShort(param_2);
              uVar7 = FT_Stream_GetUShort(param_2);
              uVar5 = uVar7 & 0xffff;
              if ((uVar7 >> 0xf & 1) == 0) {
                if (((uVar5 >> 0xe & 1) != 0) && ((*puVar14 & 0x7fffffff) != 0)) {
                  uVar5 = 0;
                  do {
                    FT_Stream_GetUShort(param_2);
                    uVar5 = uVar5 + 1;
                  } while (uVar5 < *puVar14 << 1);
                }
              }
              else {
                uVar7 = 0;
                if (*puVar14 != 0) {
                  uVar8 = 0;
                  do {
                    uVar7 = FT_Stream_GetUShort(param_2);
                    *(long *)(lVar12 + (ulong)uVar8 * 8) =
                         (long)(int)(-(uVar7 >> 0xf & 1) & 0xfffc0000 | (uVar7 & 0xffff) << 2);
                    uVar7 = *puVar14;
                    uVar8 = uVar8 + 1;
                  } while (uVar8 < uVar7);
                }
                if (((uVar5 >> 0xe & 1) != 0) && (uVar7 != 0)) {
                  uVar7 = 0;
                  do {
                    uVar8 = FT_Stream_GetUShort(param_2);
                    *(long *)(lVar13 + (ulong)uVar7 * 8) =
                         (long)(int)(-(uVar8 >> 0xf & 1) & 0xfffc0000 | (uVar8 & 0xffff) << 2);
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < *puVar14);
                  if (*puVar14 != 0) {
                    uVar7 = 0;
                    do {
                      uVar8 = FT_Stream_GetUShort(param_2);
                      *(long *)(lVar15 + (ulong)uVar7 * 8) =
                           (long)(int)(-(uVar8 >> 0xf & 1) & 0xfffc0000 | (uVar8 & 0xffff) << 2);
                      uVar7 = uVar7 + 1;
                    } while (uVar7 < *puVar14);
                  }
                }
                lVar16 = FUN_01073e08(puVar14,uVar5,lVar12,lVar13,lVar15);
                if (((uVar5 >> 0xd & 1) != 0) && (lVar16 != 0)) {
                  lVar17 = *param_2;
                  lVar21 = param_2[8];
                  param_2[8] = lVar17 + local_98;
                  lVar20 = FUN_01073f2c(param_2,&local_74);
                  uVar5 = local_74;
                  uVar23 = (ulong)local_74;
                  uVar22 = uVar23;
                  if (local_74 == 0) {
                    uVar22 = *(ulong *)(param_1 + 0x410);
                  }
                  lVar9 = FUN_01074094(param_2,uVar22);
                  if ((lVar20 == 0) || (lVar9 == 0)) {
LAB_01073da4:
                    if (lVar20 != -1) {
LAB_01073db0:
                      ft_mem_free(lVar11,lVar20);
                    }
                  }
                  else {
                    if (lVar20 != -1) {
                      if (uVar5 != 0) {
                        lVar10 = *(long *)(param_1 + 0x418);
                        uVar22 = 0;
                        do {
                          lVar18 = (ulong)*(ushort *)(lVar20 + uVar22 * 2) * 2;
                          sVar2 = *(short *)(lVar10 + lVar18);
                          sVar3 = FT_MulFix((long)*(short *)(lVar9 + uVar22 * 2),lVar16);
                          lVar10 = *(long *)(param_1 + 0x418);
                          uVar22 = uVar22 + 1;
                          *(short *)(lVar10 + lVar18) = sVar3 + sVar2;
                        } while (uVar22 < uVar23);
                        goto LAB_01073da4;
                      }
                      goto LAB_01073db0;
                    }
                    if (*(long *)(param_1 + 0x410) != 0) {
                      lVar10 = *(long *)(param_1 + 0x418);
                      uVar22 = 0;
                      uVar23 = 1;
                      do {
                        lVar18 = uVar22 * 2;
                        sVar2 = *(short *)(lVar10 + lVar18);
                        sVar3 = FT_MulFix((long)*(short *)(lVar9 + lVar18),lVar16);
                        lVar10 = *(long *)(param_1 + 0x418);
                        *(short *)(lVar10 + lVar18) = sVar3 + sVar2;
                        bVar1 = uVar23 < *(ulong *)(param_1 + 0x410);
                        uVar22 = uVar23;
                        uVar23 = (ulong)((int)uVar23 + 1);
                      } while (bVar1);
                      goto LAB_01073da4;
                    }
                  }
                  ft_mem_free(lVar11,lVar9);
                  param_2[8] = *param_2 + (lVar21 - lVar17);
                }
              }
              uVar19 = uVar19 + 1;
              local_98 = (ulong)(uVar6 & 0xffff) + local_98;
            } while (uVar19 != (uVar4 & 0xfff));
          }
        }
      }
      else {
        lVar13 = 0;
      }
    }
    else {
      lVar15 = 0;
      lVar13 = 0;
      lVar12 = 0;
      local_64 = 0;
    }
    FT_Stream_ExitFrame(param_2);
  }
  ft_mem_free(lVar11,lVar12);
  ft_mem_free(lVar11,lVar13);
  ft_mem_free(lVar11,lVar15);
  return local_64;
}

