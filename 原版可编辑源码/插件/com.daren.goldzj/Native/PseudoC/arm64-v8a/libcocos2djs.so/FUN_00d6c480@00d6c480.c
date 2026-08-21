
undefined8 FUN_00d6c480(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  int local_98;
  uint local_6c;
  
  puVar11 = (undefined8 *)*param_1;
  lVar10 = *(long *)*puVar11;
  cVar3 = *(char *)(lVar10 + 0x2ac);
  local_98 = 1;
  if (cVar3 != '\0') {
    if (cVar3 != '\x01') {
                    /* WARNING: Subroutine does not return */
      png_error(lVar10,"unknown interlace type");
    }
    local_98 = 7;
  }
  iVar1 = *(int *)((long)puVar11 + 0xc);
  uVar2 = *(uint *)(puVar11 + 2);
  uVar16 = 0;
  lVar15 = param_1[7];
  uVar8 = *(uint *)((long)puVar11 + 0x14) & 2 | 1;
  uVar20 = (ulong)uVar8;
  uVar7 = uVar8 * iVar1;
  do {
    if (cVar3 == '\x01') {
      uVar19 = (int)(7 - uVar16) >> 1;
      uVar9 = uVar19;
      if (uVar16 - 1 == 0 || (int)uVar16 < 1) {
        uVar9 = 3;
      }
      local_6c = (uVar16 & 1) << (ulong)(3U - ((int)(uVar16 + 1) >> 1) & 0x1f) & 7;
      if ((iVar1 + -1 + (1 << (ulong)(uVar9 & 0x1f))) - local_6c >> (ulong)(uVar9 & 0x1f) != 0) {
        local_6c = local_6c * uVar8;
        uVar9 = uVar8 << (ulong)(uVar19 & 0x1f);
        uVar19 = (uVar16 & 1 ^ 1) << (ulong)(3U - ((int)uVar16 >> 1) & 0x1f) & 7;
        if ((int)uVar16 < 3) {
          uVar17 = 8;
        }
        else {
          uVar17 = 8 >> (ulong)((int)(uVar16 - 1) >> 1 & 0x1f);
        }
        goto LAB_00d6c5e8;
      }
    }
    else {
      local_6c = 0;
      uVar19 = 0;
      uVar17 = 1;
      uVar9 = uVar8;
LAB_00d6c5e8:
      if (uVar19 < uVar2) {
        do {
          lVar18 = param_1[5];
          png_read_row(lVar10,lVar18,0);
          if (local_6c < uVar7) {
            lVar12 = param_1[6] + lVar15 * (ulong)uVar19;
            uVar13 = lVar12 + (ulong)local_6c;
            do {
              bVar4 = *(byte *)(lVar18 + uVar20);
              if (bVar4 != 0) {
                if (bVar4 == 0xff) {
                  uVar14 = 0;
                  do {
                    *(undefined1 *)(uVar13 + uVar14) = *(undefined1 *)(lVar18 + uVar14);
                    uVar14 = uVar14 + 1;
                  } while (uVar20 != uVar14);
                }
                else {
                  uVar14 = 0;
                  do {
                    uVar6 = (uint)*(byte *)(lVar18 + uVar14) * 0xffff +
                            (uint)(ushort)(&png_sRGB_table)[*(byte *)(uVar13 + uVar14)] *
                            (bVar4 ^ 0xff);
                    uVar5 = uVar6 >> 0xf;
                    *(char *)(uVar13 + uVar14) =
                         (char)((uint)*(ushort *)(png_sRGB_base + (ulong)uVar5 * 2) +
                                ((uVar6 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar5] >> 0xc) >> 8);
                    uVar14 = uVar14 + 1;
                  } while (uVar20 != uVar14);
                }
              }
              uVar13 = uVar13 + uVar9;
              lVar18 = lVar18 + (ulong)(uVar8 + 1);
            } while (uVar13 < lVar12 + (ulong)uVar7);
          }
          uVar19 = uVar19 + uVar17;
        } while (uVar19 < uVar2);
      }
    }
    uVar16 = uVar16 + 1;
    if (local_98 <= (int)uVar16) {
      return 1;
    }
    cVar3 = *(char *)(lVar10 + 0x2ac);
  } while( true );
}

