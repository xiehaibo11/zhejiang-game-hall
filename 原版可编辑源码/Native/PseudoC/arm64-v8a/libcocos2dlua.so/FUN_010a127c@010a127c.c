
uint FUN_010a127c(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ushort *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  ushort *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long local_70;
  uint local_64;
  
  lVar11 = *(long *)(param_1 + 0xc0);
  iVar3 = (**(code **)(param_1 + 0x330))(param_1,0x706f7374,lVar11,&local_70);
  if (iVar3 != 0) {
    return iVar3;
  }
  lVar5 = FT_Stream_Pos(lVar11);
  lVar12 = *(long *)(param_1 + 0x2e0);
  iVar3 = FT_Stream_Skip(lVar11,0x20);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (lVar12 != 0x28000) {
    if (lVar12 != 0x20000) {
      local_64 = 3;
      goto LAB_010a14ec;
    }
    uVar13 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = FT_Stream_ReadUShort(lVar11,&local_64);
    if (local_64 != 0) goto LAB_010a14ec;
    uVar14 = (ulong)(uint)uVar1;
    if ((uint)*(ushort *)(param_1 + 0x1d0) < (uint)uVar1) goto LAB_010a13fc;
    puVar6 = (ushort *)ft_mem_realloc(uVar13,2,0,uVar14,0,&local_64);
    lVar12 = 0;
    if (local_64 == 0) {
      local_64 = FT_Stream_EnterFrame(lVar11,uVar14 << 1);
      if (local_64 == 0) {
        puVar10 = puVar6;
        uVar16 = uVar14;
        if (uVar1 == 0) {
          FT_Stream_ExitFrame(lVar11);
          uVar15 = 0;
        }
        else {
          do {
            uVar2 = FT_Stream_GetUShort(lVar11);
            uVar16 = uVar16 - 1;
            *puVar10 = uVar2;
            puVar10 = puVar10 + 1;
          } while (uVar16 != 0);
          FT_Stream_ExitFrame(lVar11);
          uVar15 = 0;
          puVar10 = puVar6;
          do {
            uVar4 = uVar15;
            if ((0x101 < *puVar10) &&
               (uVar4 = *puVar10 - 0x101, (int)uVar4 <= (int)(uVar15 & 0xffff))) {
              uVar4 = uVar15;
            }
            uVar15 = uVar4;
            uVar14 = uVar14 - 1;
            puVar10 = puVar10 + 1;
          } while (uVar14 != 0);
        }
        uVar14 = (ulong)(uVar15 & 0xffff);
        lVar12 = ft_mem_realloc(uVar13,8,0,uVar14,0,&local_64);
        if (local_64 == 0) {
          if ((uVar15 & 0xffff) != 0) {
            uVar16 = 0;
            lVar5 = local_70 + lVar5;
            do {
              lVar7 = FT_Stream_Pos(lVar11);
              if (lVar5 <= lVar7) {
                if (((uint)uVar16 & 0xffff) < (uVar15 & 0xffff)) goto LAB_010a161c;
                break;
              }
              uVar4 = FT_Stream_ReadChar(lVar11,&local_64);
              if (local_64 != 0) goto LAB_010a1670;
              uVar4 = uVar4 & 0xff;
              if ((lVar5 < (long)(ulong)uVar4) ||
                 (lVar7 = FT_Stream_Pos(lVar11), (long)(lVar5 - (ulong)uVar4) < lVar7)) {
                lVar7 = FT_Stream_Pos(lVar11);
                if (lVar5 < lVar7) {
                  uVar4 = 0;
                }
                else {
                  iVar3 = FT_Stream_Pos(lVar11);
                  uVar4 = (int)lVar5 - iVar3;
                }
              }
              uVar8 = ft_mem_realloc(uVar13,1,0,uVar4 + 1,0,&local_64);
              *(undefined8 *)(lVar12 + uVar16 * 8) = uVar8;
              if (local_64 != 0) goto LAB_010a1670;
              local_64 = FT_Stream_Read(lVar11,uVar8,(ulong)uVar4);
              if (local_64 != 0) goto LAB_010a1670;
              lVar7 = uVar16 * 8;
              uVar16 = uVar16 + 1;
              *(undefined1 *)(*(long *)(lVar12 + lVar7) + (ulong)uVar4) = 0;
            } while (uVar16 < uVar14);
          }
          goto LAB_010a1658;
        }
      }
      else {
        lVar12 = 0;
      }
    }
    goto LAB_010a14d0;
  }
  uVar13 = *(undefined8 *)(lVar11 + 0x38);
  uVar1 = FT_Stream_ReadUShort(lVar11,&local_64);
  if (local_64 != 0) goto LAB_010a14ec;
  if ((0x102 < uVar1) || (*(ushort *)(param_1 + 0x1d0) < uVar1)) {
LAB_010a13fc:
    local_64 = 3;
    goto LAB_010a14ec;
  }
  uVar14 = (ulong)uVar1;
  puVar6 = (ushort *)ft_mem_realloc(uVar13,1,0,uVar14,0,&local_64);
  if ((local_64 == 0) && (local_64 = FT_Stream_Read(lVar11,puVar6,uVar14), local_64 == 0)) {
    if (uVar1 != 0) {
      lVar11 = 0;
      do {
        if (uVar14 < (ulong)(lVar11 + *(char *)((long)puVar6 + lVar11))) {
          local_64 = 3;
          goto LAB_010a14e4;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < (long)uVar14);
    }
    local_64 = 0;
    *(ushort *)(param_1 + 0x3d8) = uVar1;
    *(ushort **)(param_1 + 0x3e0) = puVar6;
    goto LAB_010a14ec;
  }
LAB_010a14e4:
  ft_mem_free(uVar13,puVar6);
LAB_010a14ec:
  *(undefined1 *)(param_1 + 0x3d0) = 1;
  return local_64;
  while( true ) {
    uVar16 = uVar16 + 1;
    *puVar9 = 0;
    if (uVar14 <= uVar16) break;
LAB_010a161c:
    puVar9 = (undefined1 *)ft_mem_realloc(uVar13,1,0,1,0,&local_64);
    *(undefined1 **)(lVar12 + uVar16 * 8) = puVar9;
    if (local_64 != 0) goto LAB_010a1670;
  }
LAB_010a1658:
  local_64 = 0;
  *(ushort *)(param_1 + 0x3d8) = uVar1;
  *(short *)(param_1 + 0x3da) = (short)uVar15;
  *(ushort **)(param_1 + 0x3e0) = puVar6;
  *(long *)(param_1 + 1000) = lVar12;
  goto LAB_010a14ec;
LAB_010a1670:
  uVar16 = 0;
  do {
    lVar11 = uVar16 * 8;
    ft_mem_free(uVar13,*(undefined8 *)(lVar12 + lVar11));
    uVar16 = uVar16 + 1;
    *(undefined8 *)(lVar12 + lVar11) = 0;
  } while (uVar14 != uVar16);
LAB_010a14d0:
  ft_mem_free(uVar13,lVar12);
  goto LAB_010a14e4;
}

