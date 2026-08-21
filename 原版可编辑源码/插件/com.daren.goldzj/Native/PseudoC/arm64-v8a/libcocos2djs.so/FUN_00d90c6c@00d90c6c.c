
void FUN_00d90c6c(long param_1,long param_2,long param_3,long *param_4)

{
  size_t sVar1;
  void *pvVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  void *pvVar15;
  uint uVar16;
  long lVar17;
  
  if (0 < *(int *)(param_1 + 0x1a4)) {
    lVar17 = *(long *)(param_1 + 0x280) + (long)*(int *)(param_2 + 4);
    lVar11 = *param_4;
    bVar3 = *(byte *)(lVar17 + 0xf2);
    bVar4 = *(byte *)(lVar17 + 0xe8);
    uVar16 = (uint)bVar4;
    if (bVar3 < 2) {
      if (uVar16 == 0) {
        iVar6 = 0;
        do {
          if (*(int *)(param_1 + 0x88) != 0) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          iVar6 = iVar6 + (uint)bVar3;
        } while (iVar6 < *(int *)(param_1 + 0x1a4));
      }
      else {
        sVar1 = (ulong)(uVar16 - 1) + 1;
        lVar9 = sVar1 - ((ulong)bVar4 & 1);
        lVar17 = 0;
        lVar14 = 0;
        do {
          if (*(uint *)(param_1 + 0x88) != 0) {
            pvVar15 = *(void **)(lVar11 + lVar14 * 8);
            pvVar2 = (void *)((long)pvVar15 + (ulong)*(uint *)(param_1 + 0x88));
            pbVar12 = *(byte **)(param_3 + lVar17 * 8);
            do {
              memset(pvVar15,(uint)*pbVar12,sVar1);
              if ((sVar1 < 2) || (lVar9 == 0)) {
                uVar8 = (uint)bVar4;
LAB_00d90e3c:
                iVar6 = uVar8 + 1;
                do {
                  iVar6 = iVar6 + -1;
                  pvVar15 = (void *)((long)pvVar15 + 1);
                } while (1 < iVar6);
              }
              else {
                pvVar15 = (void *)((long)pvVar15 + lVar9);
                lVar10 = lVar9;
                do {
                  lVar10 = lVar10 + -2;
                } while (lVar10 != 0);
                uVar8 = uVar16 - (int)lVar9;
                if ((bVar4 & 1) != 0) goto LAB_00d90e3c;
              }
              pbVar12 = pbVar12 + 1;
            } while (pvVar15 < pvVar2);
          }
          lVar17 = lVar17 + 1;
          lVar14 = lVar14 + (ulong)bVar3;
        } while (lVar14 < *(int *)(param_1 + 0x1a4));
      }
    }
    else {
      iVar6 = -2;
      if (uVar16 == 0) {
        iVar6 = -1;
      }
      uVar8 = iVar6 + uVar16 + 1;
      sVar1 = (ulong)uVar8 + 1;
      uVar8 = ~uVar8 & 1;
      lVar14 = sVar1 - uVar8;
      lVar17 = 0;
      uVar13 = 0;
      do {
        if (*(uint *)(param_1 + 0x88) == 0) {
          uVar5 = 0;
        }
        else {
          pvVar15 = *(void **)(lVar11 + uVar13 * 8);
          if (uVar16 == 0) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          pvVar2 = (void *)((long)pvVar15 + (ulong)*(uint *)(param_1 + 0x88));
          pbVar12 = *(byte **)(param_3 + lVar17 * 8);
          do {
            memset(pvVar15,(uint)*pbVar12,sVar1);
            if ((sVar1 < 2) || (lVar14 == 0)) {
              uVar7 = (uint)bVar4;
LAB_00d90d5c:
              iVar6 = uVar7 + 1;
              do {
                iVar6 = iVar6 + -1;
                pvVar15 = (void *)((long)pvVar15 + 1);
              } while (1 < iVar6);
            }
            else {
              pvVar15 = (void *)((long)pvVar15 + lVar14);
              lVar9 = lVar14;
              do {
                lVar9 = lVar9 + -2;
              } while (lVar9 != 0);
              uVar7 = uVar16 - (int)lVar14;
              if (uVar8 != 0) goto LAB_00d90d5c;
            }
            pbVar12 = pbVar12 + 1;
          } while (pvVar15 < pvVar2);
          uVar5 = *(undefined4 *)(param_1 + 0x88);
        }
        jcopy_sample_rows(lVar11,uVar13 & 0xffffffff,lVar11,(int)uVar13 + 1,bVar3 - 1,uVar5);
        uVar13 = uVar13 + bVar3;
        lVar17 = lVar17 + 1;
      } while ((long)uVar13 < (long)*(int *)(param_1 + 0x1a4));
    }
  }
  return;
}

