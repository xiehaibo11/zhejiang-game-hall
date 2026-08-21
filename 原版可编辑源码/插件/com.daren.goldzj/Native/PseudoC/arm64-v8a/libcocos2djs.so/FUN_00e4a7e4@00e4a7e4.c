
void FUN_00e4a7e4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
  char *__s2;
  uint uVar14;
  byte *pbVar15;
  
  uVar10 = param_2[4];
  puVar12 = *(undefined8 **)(param_1 + 0x310);
  pbVar15 = (byte *)param_2[2];
  (*(code *)param_2[7])(param_2);
  if ((byte *)*param_2 < pbVar15) {
    uVar14 = (uint)*(byte *)*param_2;
    if (uVar14 - 0x30 < 10) {
      iVar7 = (*(code *)param_2[9])(param_2);
      *(int *)(param_2 + 0x23) = iVar7;
      if (*(int *)(param_2 + 3) != 0) {
        return;
      }
      if (-1 < iVar7) {
        pbVar8 = (byte *)*param_2;
        if ((long)pbVar15 - (long)pbVar8 >> 2 < (long)iVar7) {
          *(int *)(param_2 + 0x23) = (int)((ulong)((long)pbVar15 - (long)pbVar8) >> 2);
        }
        goto joined_r0x00e4a878;
      }
    }
    else if (uVar14 == 0x3c) {
      (*(code *)param_2[8])(param_2);
      if (*(int *)(param_2 + 3) != 0) {
        return;
      }
      (*(code *)param_2[7])(param_2);
      pbVar9 = (byte *)*param_2;
      pbVar8 = pbVar9;
      if (pbVar9 < pbVar15) {
        iVar7 = 0;
        do {
          if (*pbVar8 == 0x2f) {
            iVar7 = iVar7 + 1;
          }
          else if (*pbVar8 == 0x3e) {
            *(int *)(param_2 + 0x23) = iVar7;
            *param_2 = pbVar9;
            pbVar8 = pbVar9;
            break;
          }
          (*(code *)param_2[8])(param_2);
          if (*(int *)(param_2 + 3) != 0) {
            return;
          }
          (*(code *)param_2[7])(param_2);
          pbVar8 = (byte *)*param_2;
        } while (pbVar8 < pbVar15);
      }
joined_r0x00e4a878:
      if ((pbVar8 < pbVar15) && (param_2[0x3f] == 0)) {
        puVar1 = param_2 + 0x30;
        iVar7 = (**(code **)*puVar12)(puVar1,*(undefined4 *)(param_2 + 0x23),uVar10);
        if (iVar7 != 0) goto LAB_00e4a92c;
        puVar2 = param_2 + 0x24;
        iVar7 = (**(code **)*puVar12)(puVar2,*(undefined4 *)(param_2 + 0x23),uVar10);
        if (iVar7 != 0) goto LAB_00e4a92c;
        puVar3 = param_2 + 0x3c;
        iVar7 = (**(code **)*puVar12)(puVar3,4,uVar10);
        if (iVar7 != 0) goto LAB_00e4a92c;
        (*(code *)param_2[7])(param_2);
        pbVar8 = (byte *)*param_2;
        if (pbVar8 < pbVar15) {
          bVar5 = false;
          iVar13 = 0;
          iVar6 = 0;
          do {
            if (*pbVar8 == 0x65) {
              if ((((pbVar8 + 3 < pbVar15) && (pbVar8[1] == 0x6e)) && (pbVar8[2] == 100)) &&
                 ((bVar4 = pbVar8[3], bVar4 < 0x21 &&
                  ((1L << ((ulong)bVar4 & 0x3f) & 0x100003601U) != 0)))) break;
            }
            else if (*pbVar8 == 0x3e) break;
            (*(code *)param_2[8])(param_2);
            if (pbVar15 <= (byte *)*param_2) goto LAB_00e4a928;
            if (*(int *)(param_2 + 3) != 0) {
              return;
            }
            bVar4 = *pbVar8;
            if ((bVar4 == 0x2f) || (bVar4 == 0x28)) {
              lVar11 = 2;
              if (bVar4 == 0x28) {
                lVar11 = 3;
              }
              if (pbVar15 <= pbVar8 + lVar11) goto LAB_00e4a928;
              pbVar8 = pbVar8 + 1;
              uVar14 = ((int)(byte *)*param_2 - (int)pbVar8) - (uint)(bVar4 == 0x28);
              iVar7 = (*(code *)param_2[0x2e])(puVar2,iVar13,pbVar8,uVar14 + 1);
              if (iVar7 != 0) goto LAB_00e4a92c;
              *(undefined1 *)(*(long *)(param_2[0x29] + (long)iVar13 * 8) + (ulong)uVar14) = 0;
              lVar11 = (long)iVar13;
              if ((*pbVar8 == 0x2e) &&
                 (iVar7 = strcmp(".notdef",*(char **)(param_2[0x29] + lVar11 * 8)), iVar7 == 0)) {
                bVar5 = true;
                iVar6 = iVar13;
              }
              (*(code *)param_2[7])(param_2);
              if (bVar4 == 0x28) {
                (*(code *)param_2[8])(param_2);
              }
              uVar10 = *param_2;
              (*(code *)param_2[9])(param_2);
              if (pbVar15 <= (byte *)*param_2) goto LAB_00e4a928;
              uVar14 = (int)(byte *)*param_2 - (int)uVar10;
              iVar7 = (*(code *)param_2[0x3a])(puVar1,iVar13,uVar10,uVar14 + 1);
              if (iVar7 != 0) goto LAB_00e4a92c;
              iVar13 = iVar13 + 1;
              *(undefined1 *)(*(long *)(param_2[0x35] + lVar11 * 8) + (ulong)uVar14) = 0;
              if (*(int *)(param_2 + 0x23) <= iVar13) break;
            }
            (*(code *)param_2[7])(param_2);
            pbVar8 = (byte *)*param_2;
          } while (pbVar8 < pbVar15);
          *(int *)(param_2 + 0x23) = iVar13;
          if (bVar5) {
            __s2 = *(char **)param_2[0x29];
            iVar7 = strcmp(".notdef",__s2);
            if (iVar7 == 0) {
              return;
            }
            iVar7 = (*(code *)param_2[0x46])(puVar3,0,__s2,*(undefined4 *)param_2[0x2a]);
            if ((((iVar7 == 0) &&
                 (iVar7 = (*(code *)param_2[0x46])
                                    (puVar3,1,*(undefined8 *)param_2[0x35],
                                     *(undefined4 *)param_2[0x36]), iVar7 == 0)) &&
                (iVar7 = (*(code *)param_2[0x46])
                                   (puVar3,2,*(undefined8 *)(param_2[0x29] + (long)iVar6 * 8),
                                    *(undefined4 *)(param_2[0x2a] + (long)iVar6 * 4)), iVar7 == 0))
               && (((iVar7 = (*(code *)param_2[0x46])
                                       (puVar3,3,*(undefined8 *)(param_2[0x35] + (long)iVar6 * 8),
                                        *(undefined4 *)(param_2[0x36] + (long)iVar6 * 4)),
                    iVar7 == 0 &&
                    (iVar7 = (*(code *)param_2[0x2e])
                                       (puVar2,iVar6,*(undefined8 *)param_2[0x41],
                                        *(undefined4 *)param_2[0x42]), iVar7 == 0)) &&
                   ((iVar7 = (*(code *)param_2[0x3a])
                                       (puVar1,iVar6,*(undefined8 *)(param_2[0x41] + 8),
                                        *(undefined4 *)(param_2[0x42] + 4)), iVar7 == 0 &&
                    ((iVar7 = (*(code *)param_2[0x2e])
                                        (puVar2,0,*(undefined8 *)(param_2[0x41] + 0x10),
                                         *(undefined4 *)(param_2[0x42] + 8)), iVar7 == 0 &&
                     (iVar7 = (*(code *)param_2[0x3a])
                                        (puVar1,0,*(undefined8 *)(param_2[0x41] + 0x18),
                                         *(undefined4 *)(param_2[0x42] + 0xc)), iVar7 == 0)))))))) {
              return;
            }
            goto LAB_00e4a92c;
          }
        }
        else {
          *(undefined4 *)(param_2 + 0x23) = 0;
        }
      }
    }
  }
LAB_00e4a928:
  iVar7 = 3;
LAB_00e4a92c:
  *(int *)(param_2 + 3) = iVar7;
  return;
}

