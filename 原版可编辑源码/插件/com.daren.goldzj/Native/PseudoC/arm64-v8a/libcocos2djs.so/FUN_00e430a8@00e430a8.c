
int FUN_00e430a8(long *param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  byte bVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  int local_68;
  int local_64;
  
  local_68 = 0;
  uVar18 = *(undefined8 *)(*param_1 + 0x38);
  *param_2 = 0;
  if (param_1[6] == 0) {
    local_64 = 0;
    lVar17 = *param_1;
    if (*(int *)((long)param_1 + 0x14) == 0) {
LAB_00e433fc:
      local_68 = 0;
      uVar6 = *(uint *)((long)param_1 + 0x14);
      goto joined_r0x00e43408;
    }
    uVar19 = *(undefined8 *)(lVar17 + 0x38);
    bVar7 = *(byte *)(param_1 + 3);
    uVar12 = (ulong)(*(int *)((long)param_1 + 0x14) + 1);
    lVar10 = FUN_00e13bcc(uVar19,8,0,uVar12,0,&local_64);
    param_1[6] = lVar10;
    if ((local_64 == 0) &&
       (local_64 = FUN_00e1bb5c(lVar17,param_1[1] + (ulong)*(uint *)(param_1 + 2)), local_64 == 0))
    {
      lVar10 = bVar7 * uVar12;
      local_64 = FUN_00e1d718(lVar17,lVar10);
      if (local_64 == 0) {
        pbVar11 = *(byte **)(lVar17 + 0x40);
        puVar14 = (ulong *)param_1[6];
        pbVar3 = pbVar11 + lVar10;
        if (bVar7 == 1) {
          if (lVar10 != 0) {
            do {
              pbVar13 = pbVar11 + 1;
              *puVar14 = (ulong)*pbVar11;
              pbVar11 = pbVar13;
              puVar14 = puVar14 + 1;
            } while (pbVar13 < pbVar3);
          }
        }
        else if (bVar7 == 2) {
          if (lVar10 != 0) {
            do {
              bVar7 = *pbVar11;
              pbVar13 = pbVar11 + 1;
              pbVar11 = pbVar11 + 2;
              *puVar14 = (ulong)CONCAT11(bVar7,*pbVar13);
              puVar14 = puVar14 + 1;
            } while (pbVar11 < pbVar3);
          }
        }
        else if (bVar7 == 3) {
          if (lVar10 != 0) {
            do {
              bVar7 = *pbVar11;
              pbVar13 = pbVar11 + 1;
              pbVar1 = pbVar11 + 2;
              pbVar11 = pbVar11 + 3;
              *puVar14 = (ulong)bVar7 << 0x10 | (ulong)*pbVar13 << 8 | (ulong)*pbVar1;
              puVar14 = puVar14 + 1;
            } while (pbVar11 < pbVar3);
          }
        }
        else if (lVar10 != 0) {
          do {
            bVar7 = *pbVar11;
            pbVar13 = pbVar11 + 1;
            pbVar1 = pbVar11 + 2;
            pbVar2 = pbVar11 + 3;
            pbVar11 = pbVar11 + 4;
            *puVar14 = (ulong)bVar7 << 0x18 | (ulong)*pbVar13 << 0x10 | (ulong)*pbVar1 << 8 |
                       (ulong)*pbVar2;
            puVar14 = puVar14 + 1;
          } while (pbVar11 < pbVar3);
        }
        FUN_00e1d90c(lVar17);
        if (local_64 == 0) goto LAB_00e433fc;
      }
    }
    FUN_00e139fc(uVar19,param_1[6]);
    param_1[6] = 0;
    local_68 = local_64;
    if (local_64 != 0) {
      return local_64;
    }
  }
  uVar6 = *(uint *)((long)param_1 + 0x14);
joined_r0x00e43408:
  if (uVar6 != 0) {
    lVar17 = param_1[5];
    plVar9 = (long *)FUN_00e13bcc(uVar18,8,0,uVar6 + 1,0,&local_68);
    if (local_68 == 0) {
      if (param_3 == (long *)0x0) {
        lVar10 = 0;
      }
      else {
        lVar10 = FUN_00e1388c(uVar18,lVar17 + (ulong)uVar6,&local_68);
        if (local_68 != 0) {
          return local_68;
        }
      }
      lVar21 = param_1[7];
      lVar20 = lVar10;
      if (param_3 == (long *)0x0) {
        lVar20 = lVar21;
      }
      *plVar9 = lVar20;
      uVar12 = (ulong)*(uint *)((long)param_1 + 0x14);
      if (*(uint *)((long)param_1 + 0x14) != 0) {
        if (param_3 == (long *)0x0) {
          uVar22 = 0;
          uVar15 = 1;
          do {
            uVar16 = *(long *)(param_1[6] + uVar15 * 8) - 1;
            if ((uVar22 <= uVar16) && (uVar22 = param_1[5], uVar16 <= (ulong)param_1[5])) {
              uVar22 = uVar16;
            }
            bVar8 = uVar15 < uVar12;
            plVar9[uVar15] = lVar21 + uVar22;
            uVar15 = uVar15 + 1;
          } while (bVar8);
        }
        else {
          uVar22 = 0;
          lVar20 = 0;
          uVar15 = 0;
          do {
            while (uVar16 = *(long *)(param_1[6] + uVar22 * 8 + 8) - 1, uVar15 <= uVar16) {
              uVar5 = param_1[5];
              if (uVar16 <= (ulong)param_1[5]) {
                uVar5 = uVar16;
              }
              lVar4 = lVar10 + uVar5 + lVar20;
              plVar9[uVar22 + 1] = lVar4;
              if (uVar5 != uVar15) {
                memcpy((void *)plVar9[uVar22],(void *)(lVar21 + uVar15),lVar4 - plVar9[uVar22]);
                lVar20 = lVar20 + 1;
                *(undefined1 *)plVar9[uVar22 + 1] = 0;
                plVar9[uVar22 + 1] = plVar9[uVar22 + 1] + 1;
                uVar12 = (ulong)*(uint *)((long)param_1 + 0x14);
              }
              uVar22 = uVar22 + 1;
              uVar15 = uVar5;
              if (uVar12 <= uVar22) goto LAB_00e43338;
            }
            plVar9[uVar22 + 1] = lVar10 + uVar15 + lVar20;
            uVar22 = uVar22 + 1;
          } while (uVar22 < uVar12);
        }
      }
LAB_00e43338:
      *param_2 = plVar9;
      if (param_3 != (long *)0x0) {
        *param_3 = lVar10;
      }
      if (param_4 != (long *)0x0) {
        *param_4 = lVar17 + (ulong)uVar6;
      }
    }
  }
  return local_68;
}

