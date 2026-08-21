
void FUN_00101ae8(char *param_1,undefined8 *param_2,size_t *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *__ptr;
  size_t sVar8;
  void *__dest;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  uVar18 = (DAT_00113194 + -1) * DAT_00113194;
  bVar7 = (uVar18 & 1) == 0;
  bVar1 = DAT_00113190 < 10;
  bVar6 = -1 < DAT_00113190;
  do {
    __ptr = malloc(0x20);
    __ptr[1] = 0xc0d5823421772905;
    *__ptr = 0xa66e1f1cfff3a2e6;
    __ptr[3] = 0xf68ba90383a3cb39;
    __ptr[2] = 0x377a24ed16530706;
    sVar8 = strlen(param_1);
    uVar11 = sVar8 + 1;
    uVar10 = uVar11 >> 4;
    if ((uVar11 & 0xf) != 0) {
      uVar10 = uVar10 + 1;
    }
    sVar8 = uVar10 << 4;
    __dest = calloc(sVar8,1);
    pvVar9 = malloc(sVar8);
    memcpy(__dest,param_1,uVar11);
  } while (bVar6 && (int)uVar18 < 0);
  if (bVar1 || bVar7) {
    uVar11 = 0;
    do {
      if (uVar10 <= uVar11) {
        free(__dest);
        free(__ptr);
        *param_2 = pvVar9;
        *param_3 = sVar8;
        if (DAT_00113190 < 0) {
          return;
        }
        do {
          if (-1 < (DAT_00113194 + -1) * DAT_00113194) {
            return;
          }
          free(__dest);
          free(__ptr);
          *param_2 = pvVar9;
          *param_3 = sVar8;
          free(__dest);
          free(__ptr);
          *param_2 = pvVar9;
          *param_3 = sVar8;
        } while (-1 < DAT_00113190);
        return;
      }
      puVar14 = (uint *)((long)__dest + uVar11 * 0x10);
      uVar15 = *puVar14;
      uVar18 = puVar14[1];
      uVar17 = puVar14[2];
      uVar16 = puVar14[3];
      puVar4 = (uint *)((long)pvVar9 + uVar11 * 0x10);
      lVar13 = -8;
      puVar14 = &DAT_0010f67c;
      do {
        iVar12 = (int)lVar13;
        lVar13 = lVar13 + 1;
        uVar2 = *(int *)((long)__ptr + (ulong)puVar14[-3] * 4) + uVar15;
        uVar3 = *(int *)((long)__ptr + (ulong)puVar14[-2] * 4) + uVar16;
        uVar18 = ((uint)((byte)(&DAT_0010f570)[uVar2 >> 0x18] >> 3) |
                 CONCAT13((&DAT_0010f570)[uVar2 >> 0x18],
                          CONCAT12((&DAT_0010f570)[(ulong)(uVar2 >> 0x10) & 0xff],
                                   CONCAT11((&DAT_0010f570)[(ulong)(uVar2 >> 8) & 0xff],
                                            (&DAT_0010f570)[(ulong)uVar2 & 0xff]))) << 5) ^ uVar18;
        uVar3 = (uint)(CONCAT24(CONCAT11((&DAT_0010f570)[(ulong)(uVar3 >> 8) & 0xff],
                                         (&DAT_0010f570)[(ulong)uVar3 & 0xff]),
                                (uint)(byte)(&DAT_0010f570)[(ulong)(uVar3 >> 8) & 0xff] << 8 |
                                (uint)(byte)(&DAT_0010f570)[(ulong)(uVar3 >> 0x10) & 0xff] << 0x10 |
                                (uint)(byte)(&DAT_0010f570)[uVar3 >> 0x18] << 0x18) >> 0xb) ^ uVar17
        ;
        uVar17 = *(int *)((long)__ptr + (ulong)puVar14[-1] * 4) + uVar18;
        uVar2 = uVar3 + uVar18 + *(int *)((long)__ptr + (ulong)*puVar14 * 4);
        uVar17 = uVar15 - (int)(CONCAT34(CONCAT12((&DAT_0010f570)[(ulong)(uVar17 >> 0x10) & 0xff],
                                                  CONCAT11((&DAT_0010f570)
                                                           [(ulong)(uVar17 >> 8) & 0xff],
                                                           (&DAT_0010f570)[(ulong)uVar17 & 0xff])),
                                         (uint)(byte)(&DAT_0010f570)[(ulong)(uVar17 >> 0x10) & 0xff]
                                         << 0x10 | (uint)(byte)(&DAT_0010f570)[uVar17 >> 0x18] <<
                                                   0x18) >> 0x13);
        uVar15 = *(int *)((long)__ptr + (ulong)puVar14[2] * 4) + uVar17;
        uVar5 = (uint)(CONCAT24(CONCAT11((&DAT_0010f570)[(ulong)(uVar2 >> 8) & 0xff],
                                         (&DAT_0010f570)[(ulong)uVar2 & 0xff]),
                                (uint)(byte)(&DAT_0010f570)[(ulong)(uVar2 >> 8) & 0xff] << 8 |
                                (uint)(byte)(&DAT_0010f570)[(ulong)(uVar2 >> 0x10) & 0xff] << 0x10 |
                                (uint)(byte)(&DAT_0010f570)[uVar2 >> 0x18] << 0x18) >> 0xb) ^
                iVar12 + 9U;
        uVar3 = uVar3 - uVar5;
        uVar2 = uVar3 + *(int *)((long)__ptr + (ulong)puVar14[1] * 4);
        uVar15 = (uint)(CONCAT24(CONCAT11((&DAT_0010f570)[(ulong)(uVar15 >> 8) & 0xff],
                                          (&DAT_0010f570)[(ulong)uVar15 & 0xff]),
                                 (uint)(byte)(&DAT_0010f570)[(ulong)(uVar15 >> 8) & 0xff] << 8 |
                                 (uint)(byte)(&DAT_0010f570)[(ulong)(uVar15 >> 0x10) & 0xff] << 0x10
                                 | (uint)(byte)(&DAT_0010f570)[uVar15 >> 0x18] << 0x18) >> 0xb) ^
                 uVar5 + uVar18;
        uVar18 = (int)(CONCAT34(CONCAT12((&DAT_0010f570)[(ulong)(uVar2 >> 0x10) & 0xff],
                                         CONCAT11((&DAT_0010f570)[(ulong)(uVar2 >> 8) & 0xff],
                                                  (&DAT_0010f570)[(ulong)uVar2 & 0xff])),
                                (uint)(byte)(&DAT_0010f570)[(ulong)(uVar2 >> 0x10) & 0xff] << 0x10 |
                                (uint)(byte)(&DAT_0010f570)[uVar2 >> 0x18] << 0x18) >> 0x13) +
                 uVar16;
        uVar16 = *(int *)((long)__ptr + (ulong)puVar14[3] * 4) + uVar18;
        puVar14 = puVar14 + 7;
        uVar16 = ((uint)((byte)(&DAT_0010f570)[uVar16 >> 0x18] >> 3) |
                 CONCAT13((&DAT_0010f570)[uVar16 >> 0x18],
                          CONCAT12((&DAT_0010f570)[(ulong)(uVar16 >> 0x10) & 0xff],
                                   CONCAT11((&DAT_0010f570)[(ulong)(uVar16 >> 8) & 0xff],
                                            (&DAT_0010f570)[(ulong)uVar16 & 0xff]))) << 5) ^ uVar3;
      } while (lVar13 != 0);
      uVar11 = uVar11 + 1;
      *puVar4 = uVar18;
      puVar4[1] = uVar16;
      puVar4[2] = uVar15;
      puVar4[3] = uVar17;
    } while (bVar1 || bVar7);
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

