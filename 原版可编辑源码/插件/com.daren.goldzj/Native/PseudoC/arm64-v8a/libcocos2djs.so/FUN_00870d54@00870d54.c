
void FUN_00870d54(uint *param_1,char *param_2)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  ssize_t sVar8;
  int *piVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  long lVar13;
  byte *__buf;
  byte *pbVar14;
  int iVar15;
  byte local_98 [64];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  *param_1 = 0;
  uVar6 = open(param_2,0);
  pbVar10 = (byte *)(ulong)uVar6;
  if (-1 < (int)uVar6) {
    iVar15 = 0;
    do {
      __buf = local_98 + iVar15;
      while( true ) {
        if (0x3f < iVar15) {
          uVar6 = close(uVar6);
          pbVar10 = (byte *)(ulong)uVar6;
          goto LAB_00870e14;
        }
        sVar8 = read(uVar6,__buf,0x40 - (long)iVar15);
        iVar7 = (int)sVar8;
        if (-1 < iVar7) break;
        piVar9 = (int *)__errno();
        if (*piVar9 != 4) {
          if (iVar15 != 0) goto LAB_00870dfc;
          uVar6 = close(uVar6);
          pbVar10 = (byte *)(ulong)uVar6;
          goto LAB_00870f34;
        }
      }
      iVar15 = iVar15 + iVar7;
    } while (iVar7 != 0);
LAB_00870dfc:
    uVar6 = close(uVar6);
    pbVar10 = (byte *)(ulong)uVar6;
    if (0 < iVar15) {
      __buf = local_98 + iVar15;
LAB_00870e14:
      pbVar14 = local_98;
      while (bVar4 = *pbVar14, bVar4 != 10) {
        pbVar10 = memchr(pbVar14,0x2c,(long)__buf - (long)pbVar14);
        pbVar3 = __buf;
        if (pbVar10 != (byte *)0x0) {
          pbVar3 = pbVar10;
        }
        if ((pbVar3 <= pbVar14) || (uVar6 = bVar4 - 0x30, 9 < uVar6)) break;
        uVar11 = 0;
        pbVar2 = pbVar14;
        do {
          pbVar12 = pbVar2;
          pbVar2 = pbVar12 + 1;
          uVar11 = uVar6 + uVar11 * 10;
          if (pbVar3 <= pbVar2) break;
          uVar6 = *pbVar2 - 0x30;
        } while (uVar6 < 10);
        if (pbVar2 == pbVar14) break;
        uVar6 = uVar11;
        if ((pbVar2 < pbVar3) && (*pbVar2 == 0x2d)) {
          if (pbVar3 <= pbVar12 + 2) break;
          uVar6 = 0;
          lVar13 = 2;
          do {
            pbVar14 = pbVar12 + lVar13;
            if (9 < *pbVar14 - 0x30) {
              if (lVar13 == 2) goto LAB_00870f34;
              break;
            }
            lVar13 = lVar13 + 1;
            uVar6 = (*pbVar14 - 0x30) + uVar6 * 10;
          } while (pbVar12 + lVar13 < pbVar3);
        }
        if ((int)uVar11 <= (int)uVar6) {
          do {
            if (uVar11 < 0x20) {
              *param_1 = *param_1 | 1 << (ulong)(uVar11 & 0x1f);
            }
            bVar1 = (int)uVar11 < (int)uVar6;
            uVar11 = uVar11 + 1;
          } while (bVar1);
        }
        if (pbVar3 < __buf) {
          pbVar3 = pbVar3 + 1;
        }
        pbVar14 = pbVar3;
        if (__buf <= pbVar3) break;
      }
    }
  }
LAB_00870f34:
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar10);
  }
  return;
}

