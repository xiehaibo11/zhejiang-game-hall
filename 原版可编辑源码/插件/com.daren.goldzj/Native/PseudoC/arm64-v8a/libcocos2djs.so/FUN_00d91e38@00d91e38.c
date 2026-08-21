
void FUN_00d91e38(long param_1,long param_2,long param_3,uint param_4)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  undefined2 *puVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  
  if (0 < (int)param_4) {
    lVar28 = *(long *)(param_1 + 0x290);
    uVar2 = *(uint *)(param_1 + 0x88);
    uVar3 = *(uint *)(param_1 + 0x90);
    uVar29 = (ulong)uVar3;
    lVar30 = *(long *)(param_1 + 0x1b8);
    uVar6 = uVar2 - 1;
    uVar27 = 0;
    lVar14 = uVar29 - (uVar3 & 1);
    do {
      memset(*(void **)(param_3 + uVar27 * 8),0,(ulong)uVar2);
      if (0 < (int)uVar3) {
        if (uVar2 == 0) {
          iVar20 = *(int *)(lVar28 + 0x90);
          lVar15 = 0;
          if ((1 < uVar3) && (lVar18 = lVar14, puVar16 = (undefined8 *)(lVar28 + 0x78), lVar14 != 0)
             ) {
            do {
              lVar18 = lVar18 + -2;
              puVar1 = (undefined2 *)*puVar16;
              puVar10 = (undefined2 *)puVar16[-1];
              if (iVar20 != 0) {
                puVar1 = (undefined2 *)*puVar16 + 1;
                puVar10 = (undefined2 *)puVar16[-1] + 1;
              }
              *puVar10 = 0;
              *puVar1 = 0;
              puVar16 = puVar16 + 2;
            } while (lVar18 != 0);
            lVar15 = lVar14;
            if ((uVar3 & 1) == 0) goto LAB_00d9208c;
          }
          lVar18 = uVar29 - lVar15;
          puVar16 = (undefined8 *)(lVar28 + 0x70 + lVar15 * 8);
          do {
            lVar18 = lVar18 + -1;
            puVar1 = (undefined2 *)*puVar16;
            if (iVar20 != 0) {
              puVar1 = (undefined2 *)*puVar16 + 1;
            }
            *puVar1 = 0;
            puVar16 = puVar16 + 1;
          } while (lVar18 != 0);
        }
        else {
          uVar13 = 0;
          do {
            lVar15 = *(long *)(param_3 + uVar27 * 8);
            pbVar17 = (byte *)(*(long *)(param_2 + uVar27 * 8) + uVar13);
            if (*(int *)(lVar28 + 0x90) == 0) {
              lVar18 = *(long *)(lVar28 + uVar13 * 8 + 0x70);
              lVar19 = 1;
              uVar23 = uVar3;
            }
            else {
              pbVar17 = pbVar17 + uVar6 * uVar3;
              lVar15 = lVar15 + (ulong)uVar6;
              lVar19 = -1;
              lVar18 = *(long *)(lVar28 + uVar13 * 8 + 0x70) + (ulong)(uVar2 + 1) * 2;
              uVar23 = -uVar3;
            }
            lVar21 = 0;
            lVar24 = *(long *)(*(long *)(lVar28 + 0x30) + uVar13 * 8);
            lVar25 = *(long *)(*(long *)(lVar28 + 0x20) + uVar13 * 8);
            iVar11 = 0;
            iVar20 = 0;
            uVar26 = (ulong)uVar2;
            iVar22 = 0;
            do {
              lVar12 = lVar21 * 2;
              bVar4 = *pbVar17;
              pbVar17 = pbVar17 + (int)uVar23;
              uVar7 = (int)uVar26 - 1;
              uVar26 = (ulong)uVar7;
              bVar4 = *(byte *)(lVar30 + (ulong)bVar4 +
                                         (long)(iVar11 + *(short *)(lVar18 + lVar19 * 2 + lVar12) +
                                                8 >> 4));
              bVar5 = *(byte *)(lVar24 + (ulong)bVar4);
              *(byte *)(lVar15 + lVar21) = *(char *)(lVar15 + lVar21) + bVar5;
              lVar21 = lVar21 + lVar19;
              iVar8 = (uint)bVar4 - (uint)*(byte *)(lVar25 + (ulong)bVar5);
              sVar9 = (short)iVar20;
              iVar20 = iVar8 * 5 + iVar22;
              iVar11 = iVar8 * 7;
              *(short *)(lVar18 + lVar12) = (short)iVar8 * 3 + sVar9;
              iVar22 = iVar8;
            } while (uVar7 != 0);
            uVar13 = uVar13 + 1;
            *(short *)(lVar18 + ((ulong)uVar6 * 2 + 2) * lVar19) = (short)iVar20;
          } while (uVar13 != uVar29);
        }
      }
LAB_00d9208c:
      uVar27 = uVar27 + 1;
      *(uint *)(lVar28 + 0x90) = (uint)(*(int *)(lVar28 + 0x90) == 0);
    } while (uVar27 != param_4);
  }
  return;
}

