
void FUN_011483b0(long param_1,uint param_2)

{
  void *__src;
  uint uVar1;
  void *__dest;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  long local_70;
  int local_64;
  
  iVar10 = *(int *)(param_1 + 0x8c);
  if (0 < (int)(param_2 - iVar10)) {
    __dest = *(void **)(param_1 + 0x20);
    iVar8 = *(int *)(param_1 + 0xf0);
    lVar9 = (long)iVar8;
    uVar16 = *(int *)(param_1 + 0x84) * (param_2 - iVar10);
    __src = (void *)(*(long *)(param_1 + 0x18) + (long)(*(int *)(param_1 + 0x84) * iVar10) * 4);
    memcpy(__dest,__src,-(ulong)(uVar16 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar16 << 2);
    if ((0 < iVar8) &&
       (FUN_0114f290(param_1 + lVar9 * 0x18 + 0xe0,iVar10,param_2,__src,__dest), iVar8 != 1)) {
      lVar12 = param_1 + lVar9 * 0x18 + 200;
      do {
        FUN_0114f290(lVar12,iVar10,param_2,__dest,__dest);
        lVar9 = lVar9 + -1;
        lVar12 = lVar12 + -0x18;
      } while (1 < lVar9);
    }
    piVar7 = *(int **)(param_1 + 8);
    iVar8 = *(int *)(param_1 + 0x8c);
    lVar9 = *(long *)(param_1 + 0x20);
    iVar10 = piVar7[0x20];
    uVar1 = piVar7[0x21];
    uVar16 = uVar1;
    if ((int)param_2 <= (int)uVar1) {
      uVar16 = param_2;
    }
    iVar4 = *piVar7 << 2;
    if (iVar10 - iVar8 != 0 && iVar8 <= iVar10) {
      lVar9 = lVar9 + (long)(iVar10 - iVar8) * (long)iVar4;
      iVar8 = iVar10;
    }
    local_64 = uVar16 - iVar8;
    if (local_64 != 0 && iVar8 <= (int)uVar16) {
      piVar7[4] = local_64;
      iVar6 = piVar7[0x1f] - piVar7[0x1e];
      piVar7[2] = iVar8 - iVar10;
      piVar7[3] = iVar6;
      puVar13 = *(uint **)(param_1 + 0x10);
      lVar12 = (long)piVar7[0x1e] * 4;
      local_70 = lVar9 + lVar12;
      uVar16 = *puVar13;
      if (uVar16 < 0xb) {
        uVar3 = puVar13[6];
        lVar12 = (long)(int)uVar3;
        lVar9 = *(long *)(puVar13 + 4) + lVar12 * *(int *)(param_1 + 0x94);
        if (piVar7[0x22] == 0) {
          iVar10 = local_64;
          if (0 < local_64) {
            uVar3 = ~param_2;
            if ((int)uVar3 < (int)~uVar1) {
              uVar3 = ~uVar1;
            }
            iVar8 = -uVar3 - iVar8;
            do {
              FUN_0114fda4(local_70,iVar6,uVar16,lVar9);
              iVar8 = iVar8 + -1;
              local_70 = local_70 + iVar4;
              lVar9 = lVar9 + lVar12;
            } while (1 < iVar8);
          }
        }
        else if (local_64 < 1) {
          iVar10 = 0;
        }
        else {
          iVar8 = 0;
          iVar10 = 0;
          do {
            lVar14 = local_70 + (long)iVar8 * (long)iVar4;
            iVar5 = FUN_01140284(*(undefined8 *)(param_1 + 0x168),local_64 - iVar8);
            FUN_01148ab4(lVar14,iVar4,*(undefined4 *)(*(long *)(param_1 + 0x168) + 0x2c),iVar5,0);
            FUN_011402a4(*(undefined8 *)(param_1 + 0x168),local_64 - iVar8,lVar14,iVar4);
            lVar14 = *(long *)(param_1 + 0x168);
            iVar6 = 0;
            iVar8 = iVar5 + iVar8;
            if (*(int *)(lVar14 + 0x40) < *(int *)(lVar14 + 0x38)) {
              uVar15 = *(undefined8 *)(lVar14 + 0x48);
              uVar2 = *(undefined4 *)(lVar14 + 0x34);
              iVar6 = 0;
              lVar11 = lVar9 + (int)(iVar10 * uVar3);
              do {
                if (0 < *(int *)(lVar14 + 0x18)) break;
                FUN_01150bfc(lVar14);
                (*DAT_01795f98)(uVar15,uVar2,1);
                FUN_0114fda4(uVar15,uVar2,uVar16,lVar11);
                iVar6 = iVar6 + 1;
                lVar11 = lVar11 + lVar12;
              } while (*(int *)(lVar14 + 0x40) < *(int *)(lVar14 + 0x38));
            }
            iVar10 = iVar6 + iVar10;
          } while (iVar8 < local_64);
        }
        *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + iVar10;
      }
      else {
        uVar16 = *(uint *)(param_1 + 0x94);
        if (piVar7[0x22] == 0) {
          if (0 < local_64) {
            lVar9 = lVar9 + lVar12 + 3;
            while( true ) {
              (*DAT_017962c8)(lVar9 + -3,
                              *(long *)(puVar13 + 4) + (long)(int)puVar13[0xc] * (long)(int)uVar16,
                              iVar6);
              lVar12 = (long)((ulong)uVar16 << 0x20) >> 0x21;
              (*DAT_01796340)(lVar9 + -3,*(long *)(puVar13 + 6) + (int)puVar13[0xd] * lVar12,
                              *(long *)(puVar13 + 8) + (int)puVar13[0xe] * lVar12,iVar6,~uVar16 & 1)
              ;
              if (*(long *)(puVar13 + 10) != 0) {
                (*DAT_01795f88)(lVar9,0,iVar6,1,
                                *(long *)(puVar13 + 10) +
                                (long)(int)puVar13[0xf] * (long)(int)uVar16,0);
              }
              uVar16 = uVar16 + 1;
              if (local_64 < 2) break;
              puVar13 = *(uint **)(param_1 + 0x10);
              local_64 = local_64 + -1;
              lVar9 = lVar9 + iVar4;
            }
          }
        }
        else if (0 < local_64) {
          iVar10 = 0;
          do {
            iVar6 = FUN_01140284(*(undefined8 *)(param_1 + 0x168),local_64 - iVar10);
            FUN_01148ab4(local_70,iVar4,*(undefined4 *)(*(long *)(param_1 + 0x168) + 0x2c),iVar6,0);
            FUN_011402a4(*(undefined8 *)(param_1 + 0x168),local_64 - iVar10,local_70,iVar4);
            lVar9 = *(long *)(param_1 + 0x168);
            iVar8 = 0;
            iVar10 = iVar6 + iVar10;
            local_70 = local_70 + (long)iVar6 * (long)iVar4;
            if (*(int *)(lVar9 + 0x40) < *(int *)(lVar9 + 0x38)) {
              lVar12 = *(long *)(lVar9 + 0x48);
              uVar2 = *(undefined4 *)(lVar9 + 0x34);
              iVar8 = 0;
              do {
                if (0 < *(int *)(lVar9 + 0x18)) break;
                uVar1 = uVar16 + iVar8;
                FUN_01150bfc(lVar9);
                (*DAT_01795f98)(lVar12,uVar2,1);
                lVar11 = *(long *)(param_1 + 0x10);
                (*DAT_017962c8)(lVar12,*(long *)(lVar11 + 0x10) +
                                       (long)*(int *)(lVar11 + 0x30) * (long)(int)uVar1,uVar2);
                lVar14 = (long)((ulong)uVar1 << 0x20) >> 0x21;
                (*DAT_01796340)(lVar12,*(long *)(lVar11 + 0x18) + *(int *)(lVar11 + 0x34) * lVar14,
                                *(long *)(lVar11 + 0x20) + *(int *)(lVar11 + 0x38) * lVar14,uVar2,
                                ~uVar1 & 1);
                if (*(long *)(lVar11 + 0x28) != 0) {
                  (*DAT_01795f88)(lVar12 + 3,0,uVar2,1,
                                  *(long *)(lVar11 + 0x28) +
                                  (long)*(int *)(lVar11 + 0x3c) * (long)(int)uVar1,0);
                }
                iVar8 = iVar8 + 1;
              } while (*(int *)(lVar9 + 0x40) < *(int *)(lVar9 + 0x38));
            }
            uVar16 = iVar8 + uVar16;
          } while (iVar10 < local_64);
        }
        *(uint *)(param_1 + 0x94) = uVar16;
      }
    }
    *(uint *)(param_1 + 0x8c) = param_2;
  }
  return;
}

