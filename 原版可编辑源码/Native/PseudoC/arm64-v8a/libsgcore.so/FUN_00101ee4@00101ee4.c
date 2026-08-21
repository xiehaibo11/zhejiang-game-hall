
void * FUN_00101ee4(long param_1,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  undefined8 *__ptr;
  void *pvVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  
  bVar6 = -1 < DAT_00113190;
  uVar7 = (DAT_00113194 + -1) * DAT_00113194;
  bVar1 = 9 < DAT_00113190;
  do {
    __ptr = malloc(0x20);
    __ptr[1] = 0xc0d5823421772905;
    *__ptr = 0xa66e1f1cfff3a2e6;
    __ptr[3] = 0xf68ba90383a3cb39;
    __ptr[2] = 0x377a24ed16530706;
  } while (bVar1 && (uVar7 & 1) != 0);
  if ((param_2 & 0xf) == 0) {
    do {
      pvVar8 = malloc(param_2);
    } while (bVar6 && (int)uVar7 < 0);
    if (param_2 >> 4 != 0) {
      uVar9 = 0;
      do {
        puVar12 = (uint *)(param_1 + uVar9 * 0x10);
        uVar15 = *puVar12;
        uVar13 = puVar12[1];
        uVar7 = puVar12[2];
        uVar10 = puVar12[3];
        lVar11 = uVar9 * 0x10;
        lVar14 = 8;
        puVar12 = &DAT_0010f74c;
        do {
          uVar2 = *(int *)((long)__ptr + (ulong)*puVar12 * 4) + uVar15;
          uVar3 = *(int *)((long)__ptr + (ulong)puVar12[-1] * 4) + uVar10;
          uVar4 = ((uint)((byte)(&DAT_0010f570)[uVar2 >> 0x18] >> 3) |
                  CONCAT13((&DAT_0010f570)[uVar2 >> 0x18],
                           CONCAT12((&DAT_0010f570)[(ulong)(uVar2 >> 0x10) & 0xff],
                                    CONCAT11((&DAT_0010f570)[(ulong)(uVar2 >> 8) & 0xff],
                                             (&DAT_0010f570)[(ulong)uVar2 & 0xff]))) << 5) ^ uVar13;
          uVar7 = (uint)(CONCAT24(CONCAT11((&DAT_0010f570)[(ulong)(uVar3 >> 8) & 0xff],
                                           (&DAT_0010f570)[(ulong)uVar3 & 0xff]),
                                  (uint)(byte)(&DAT_0010f570)[(ulong)(uVar3 >> 8) & 0xff] << 8 |
                                  (uint)(byte)(&DAT_0010f570)[(ulong)(uVar3 >> 0x10) & 0xff] << 0x10
                                  | (uint)(byte)(&DAT_0010f570)[uVar3 >> 0x18] << 0x18) >> 0xb) ^
                  uVar7;
          uVar13 = *(int *)((long)__ptr + (ulong)puVar12[-2] * 4) + uVar4;
          uVar2 = uVar7 + uVar4 + *(int *)((long)__ptr + (ulong)puVar12[-3] * 4);
          uVar13 = uVar15 - (int)(CONCAT34(CONCAT12((&DAT_0010f570)[(ulong)(uVar13 >> 0x10) & 0xff],
                                                    CONCAT11((&DAT_0010f570)
                                                             [(ulong)(uVar13 >> 8) & 0xff],
                                                             (&DAT_0010f570)[(ulong)uVar13 & 0xff]))
                                           ,(uint)(byte)(&DAT_0010f570)
                                                        [(ulong)(uVar13 >> 0x10) & 0xff] << 0x10 |
                                            (uint)(byte)(&DAT_0010f570)[uVar13 >> 0x18] << 0x18) >>
                                 0x13);
          uVar3 = *(int *)((long)__ptr + (ulong)puVar12[-5] * 4) + uVar13;
          uVar5 = (uint)(CONCAT24(CONCAT11((&DAT_0010f570)[(ulong)(uVar2 >> 8) & 0xff],
                                           (&DAT_0010f570)[(ulong)uVar2 & 0xff]),
                                  (uint)(byte)(&DAT_0010f570)[(ulong)(uVar2 >> 8) & 0xff] << 8 |
                                  (uint)(byte)(&DAT_0010f570)[(ulong)(uVar2 >> 0x10) & 0xff] << 0x10
                                  | (uint)(byte)(&DAT_0010f570)[uVar2 >> 0x18] << 0x18) >> 0xb) ^
                  (uint)lVar14;
          uVar15 = uVar7 - uVar5;
          uVar7 = uVar15 + *(int *)((long)__ptr + (ulong)puVar12[-4] * 4);
          uVar7 = (int)(CONCAT34(CONCAT12((&DAT_0010f570)[(ulong)(uVar7 >> 0x10) & 0xff],
                                          CONCAT11((&DAT_0010f570)[(ulong)(uVar7 >> 8) & 0xff],
                                                   (&DAT_0010f570)[(ulong)uVar7 & 0xff])),
                                 (uint)(byte)(&DAT_0010f570)[(ulong)(uVar7 >> 0x10) & 0xff] << 0x10
                                 | (uint)(byte)(&DAT_0010f570)[uVar7 >> 0x18] << 0x18) >> 0x13) +
                  uVar10;
          uVar2 = *(int *)((long)__ptr + (ulong)puVar12[-6] * 4) + uVar7;
          uVar10 = (uint)(CONCAT24(CONCAT11((&DAT_0010f570)[(ulong)(uVar3 >> 8) & 0xff],
                                            (&DAT_0010f570)[(ulong)uVar3 & 0xff]),
                                   (uint)(byte)(&DAT_0010f570)[(ulong)(uVar3 >> 8) & 0xff] << 8 |
                                   (uint)(byte)(&DAT_0010f570)[(ulong)(uVar3 >> 0x10) & 0xff] <<
                                   0x10 | (uint)(byte)(&DAT_0010f570)[uVar3 >> 0x18] << 0x18) >> 0xb
                         ) ^ uVar5 + uVar4;
          lVar14 = lVar14 + -1;
          uVar15 = ((uint)((byte)(&DAT_0010f570)[uVar2 >> 0x18] >> 3) |
                   CONCAT13((&DAT_0010f570)[uVar2 >> 0x18],
                            CONCAT12((&DAT_0010f570)[(ulong)(uVar2 >> 0x10) & 0xff],
                                     CONCAT11((&DAT_0010f570)[(ulong)(uVar2 >> 8) & 0xff],
                                              (&DAT_0010f570)[(ulong)uVar2 & 0xff]))) << 5) ^ uVar15
          ;
          puVar12 = puVar12 + -7;
        } while (lVar14 != 0);
        uVar9 = uVar9 + 1;
        puVar12 = (uint *)((long)pvVar8 + lVar11);
        *puVar12 = uVar7;
        puVar12[1] = uVar15;
        puVar12[2] = uVar10;
        puVar12[3] = uVar13;
      } while (uVar9 < param_2 >> 4);
    }
    while( true ) {
      free(__ptr);
      uVar7 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 10) || ((uVar7 & 1) == 0)) break;
      free(__ptr);
    }
  }
  else {
    while( true ) {
      free(__ptr);
      pvVar8 = (void *)0x0;
      uVar7 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 0) || (-1 < (int)uVar7)) break;
      free(__ptr);
    }
  }
  do {
  } while (-1 < DAT_00113190 && (int)uVar7 < 0);
  return pvVar8;
}

