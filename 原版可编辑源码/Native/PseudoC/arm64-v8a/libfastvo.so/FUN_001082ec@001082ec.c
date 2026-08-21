
void FUN_001082ec(long param_1,long param_2,long param_3,long param_4,uint param_5,uint param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  short *psVar6;
  undefined8 *puVar7;
  char *pcVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  short asStack_70 [4];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar12 = (ulong)param_6;
  lVar4 = -(uVar12 * 2 + 0xf & 0x3fffffff0);
  if (0 < (int)param_5) {
    uVar13 = 0;
    lVar14 = (long)(int)param_6;
    uVar15 = uVar12 & 0xfffffff0;
    puVar16 = (undefined8 *)(param_1 + 8);
    do {
      if ((int)param_6 < 1) {
        *(undefined4 *)(param_4 + uVar13 * 4) = 0;
      }
      else {
        uVar9 = uVar15;
        puVar7 = (undefined8 *)(&stack0xffffffffffffffa0 + lVar4);
        puVar10 = puVar16;
        if (param_6 < 0x10) {
          uVar9 = 0;
LAB_001083ac:
          lVar11 = uVar12 - uVar9;
          psVar6 = (short *)((long)asStack_70 + uVar9 * 2 + lVar4 + -0x70 + 0x70);
          pcVar8 = (char *)(param_1 + uVar9);
          do {
            lVar11 = lVar11 + -1;
            *psVar6 = (short)*pcVar8;
            psVar6 = psVar6 + 1;
            pcVar8 = pcVar8 + 1;
          } while (lVar11 != 0);
        }
        else {
          do {
            uVar30 = puVar10[-1];
            uVar31 = *puVar10;
            puVar10 = puVar10 + 2;
            uVar9 = uVar9 - 0x10;
            puVar7[-1] = CONCAT26((short)(char)((ulong)uVar30 >> 0x38),
                                  CONCAT24((short)(char)((ulong)uVar30 >> 0x30),
                                           CONCAT22((short)(char)((ulong)uVar30 >> 0x28),
                                                    (short)(char)((ulong)uVar30 >> 0x20))));
            puVar7[-2] = CONCAT26((short)(char)((ulong)uVar30 >> 0x18),
                                  CONCAT24((short)(char)((ulong)uVar30 >> 0x10),
                                           CONCAT22((short)(char)((ulong)uVar30 >> 8),
                                                    (short)(char)uVar30)));
            puVar7[1] = CONCAT26((short)(char)((ulong)uVar31 >> 0x38),
                                 CONCAT24((short)(char)((ulong)uVar31 >> 0x30),
                                          CONCAT22((short)(char)((ulong)uVar31 >> 0x28),
                                                   (short)(char)((ulong)uVar31 >> 0x20))));
            *puVar7 = CONCAT26((short)(char)((ulong)uVar31 >> 0x18),
                               CONCAT24((short)(char)((ulong)uVar31 >> 0x10),
                                        CONCAT22((short)(char)((ulong)uVar31 >> 8),
                                                 (short)(char)uVar31)));
            puVar7 = puVar7 + 4;
          } while (uVar9 != 0);
          uVar9 = uVar15;
          if (uVar15 != uVar12) goto LAB_001083ac;
        }
        *(undefined4 *)(param_4 + uVar13 * 4) = 0;
        if (0 < (int)param_6) {
          uVar9 = 0;
          iVar5 = 0;
          uVar17 = 1;
          lVar11 = param_2;
          puVar10 = (undefined8 *)(param_2 + -6);
          do {
            uVar2 = uVar9 + 1;
            if (uVar2 < 8) {
              uVar18 = 0;
              uVar22 = 0;
LAB_0010845c:
              psVar6 = (short *)(lVar11 + uVar18 * -2);
              do {
                lVar1 = uVar18 * 2;
                uVar18 = uVar18 + 1;
                uVar22 = uVar22 + (int)*psVar6 *
                                  (int)*(short *)((long)asStack_70 + lVar1 + lVar4 + -0x70 + 0x70);
                psVar6 = psVar6 + -1;
              } while (uVar2 != uVar18);
            }
            else {
              uVar19 = uVar17 & 0xfffffffffffffff8;
              uVar18 = uVar2 & 0xfffffffffffffff8;
              iVar21 = 0;
              iVar23 = 0;
              iVar24 = 0;
              iVar25 = 0;
              iVar26 = 0;
              iVar27 = 0;
              iVar28 = 0;
              iVar29 = 0;
              puVar20 = puVar10;
              puVar7 = (undefined8 *)((long)&local_68 + lVar4);
              do {
                uVar30 = puVar7[-1];
                uVar31 = *puVar7;
                puVar7 = puVar7 + 2;
                uVar19 = uVar19 - 8;
                uVar32 = NEON_rev64(*puVar20,2);
                uVar33 = NEON_rev64(puVar20[-1],2);
                iVar21 = iVar21 + (int)(short)uVar32 * (int)(short)uVar30;
                iVar23 = iVar23 + (int)(short)((ulong)uVar32 >> 0x10) *
                                  (int)(short)((ulong)uVar30 >> 0x10);
                iVar24 = iVar24 + (int)(short)((ulong)uVar32 >> 0x20) *
                                  (int)(short)((ulong)uVar30 >> 0x20);
                iVar25 = iVar25 + (int)(short)((ulong)uVar32 >> 0x30) *
                                  (int)(short)((ulong)uVar30 >> 0x30);
                iVar26 = iVar26 + (int)(short)uVar33 * (int)(short)uVar31;
                iVar27 = iVar27 + (int)(short)((ulong)uVar33 >> 0x10) *
                                  (int)(short)((ulong)uVar31 >> 0x10);
                iVar28 = iVar28 + (int)(short)((ulong)uVar33 >> 0x20) *
                                  (int)(short)((ulong)uVar31 >> 0x20);
                iVar29 = iVar29 + (int)(short)((ulong)uVar33 >> 0x30) *
                                  (int)(short)((ulong)uVar31 >> 0x30);
                puVar20 = puVar20 + -2;
              } while (uVar19 != 0);
              uVar22 = iVar26 + iVar21 + iVar27 + iVar23 + iVar28 + iVar24 + iVar29 + iVar25;
              if (uVar2 != uVar18) goto LAB_0010845c;
            }
            iVar21 = (int)(uVar22 << 3) >> 0x10;
            *(short *)(param_3 + uVar13 * lVar14 * 2 + uVar9 * 2) = (short)(uVar22 >> 0xd);
            uVar9 = uVar9 + 1;
            uVar17 = uVar17 + 1;
            iVar5 = iVar5 + iVar21 * iVar21;
            puVar10 = (undefined8 *)((long)puVar10 + 2);
            lVar11 = lVar11 + 2;
          } while (uVar9 != uVar12);
          *(int *)(param_4 + uVar13 * 4) = iVar5;
        }
      }
      uVar13 = uVar13 + 1;
      puVar16 = (undefined8 *)((long)puVar16 + lVar14);
      param_1 = param_1 + lVar14;
    } while (uVar13 != param_5);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

