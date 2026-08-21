
uint getSameNameThreadIdArray(char *param_1,void *param_2,int param_3,uint param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  DIR *__dirp;
  dirent *pdVar8;
  int *piVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  uint uVar17;
  byte bVar18;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined8 uVar19;
  byte bVar26;
  byte bVar27;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  undefined8 uVar28;
  byte bVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar42;
  undefined8 uVar41;
  short sVar43;
  short sVar44;
  
  uVar5 = 0;
  if (((param_1 != (char *)0x0) && (param_2 != (void *)0x0)) && (0 < param_3)) {
    log2Console(4,"eup","Get ID array of thread whose name is same with: %s",param_1);
    uVar5 = getpid();
    pcVar7 = calloc(1,0x100);
    if ((pcVar7 != (char *)0x0) &&
       (iVar6 = snprintf(pcVar7,0x100,"/proc/%d/task",(ulong)uVar5), iVar6 < 1)) {
      piVar9 = (int *)__errno();
      pcVar7 = strerror(*piVar9);
      log2Console(5,"eup","Failed to construct task path of pid \'%d\' for: %s",(ulong)uVar5,pcVar7)
      ;
      return 0;
    }
    __dirp = opendir(pcVar7);
    if (__dirp == (DIR *)0x0) {
      piVar9 = (int *)__errno();
      pcVar10 = strerror(*piVar9);
      log2Console(5,"eup","Failed to open task path \'%s\' for: %s",pcVar7,pcVar10);
      uVar5 = 0;
    }
    else {
      pdVar8 = readdir(__dirp);
      if (pdVar8 == (dirent *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar17 = 0;
        do {
          pcVar7 = pdVar8->d_name;
          iVar6 = strcmp(pcVar7,".");
          uVar5 = uVar17;
          if (((iVar6 != 0) && (iVar6 = strcmp(pcVar7,".."), iVar6 != 0)) &&
             (uVar13 = (uint)(byte)*pcVar7, *pcVar7 != 0)) {
            pcVar7 = pdVar8->d_name;
            iVar6 = 0;
            do {
              pcVar7 = pcVar7 + 1;
              if ((9 < (uVar13 - 0x30 & 0xff)) ||
                 (iVar2 = iVar6 * 10 + uVar13 + -0x30, iVar2 < iVar6)) goto LAB_00115b30;
              uVar13 = (uint)(byte)*pcVar7;
              iVar6 = iVar2;
            } while (uVar13 != 0);
            pcVar7 = (char *)getThreadName(iVar2);
            iVar6 = strncmp(param_1,pcVar7,0xf);
            if (iVar6 == 0) {
              if ((int)uVar17 < 1) {
                bVar18 = 0;
              }
              else {
                uVar11 = (ulong)uVar17;
                if (uVar17 < 8) {
                  uVar14 = 0;
                  bVar18 = 0;
                }
                else {
                  uVar14 = uVar11 & 0xfffffff8;
                  uVar19 = 0;
                  uVar28 = 0;
                  puVar15 = (undefined8 *)((long)param_2 + 0x10);
                  uVar16 = uVar14;
                  do {
                    puVar1 = puVar15 + -2;
                    puVar3 = puVar15 + -1;
                    puVar4 = puVar15 + 1;
                    uVar41 = *puVar15;
                    uVar16 = uVar16 - 8;
                    puVar15 = puVar15 + 4;
                    sVar36 = -(ushort)((int)*puVar1 == iVar2);
                    sVar37 = -(ushort)((int)((ulong)*puVar1 >> 0x20) == iVar2);
                    sVar38 = -(ushort)((int)*puVar3 == iVar2);
                    sVar39 = -(ushort)((int)((ulong)*puVar3 >> 0x20) == iVar2);
                    sVar40 = -(ushort)((int)uVar41 == iVar2);
                    sVar42 = -(ushort)((int)((ulong)uVar41 >> 0x20) == iVar2);
                    sVar43 = -(ushort)((int)*puVar4 == iVar2);
                    sVar44 = -(ushort)((int)((ulong)*puVar4 >> 0x20) == iVar2);
                    bVar18 = (byte)uVar19 | (byte)sVar36;
                    bVar20 = (byte)((ulong)uVar19 >> 8) | (byte)((ushort)sVar36 >> 8);
                    bVar21 = (byte)((ulong)uVar19 >> 0x10) | (byte)sVar37;
                    bVar22 = (byte)((ulong)uVar19 >> 0x18) | (byte)((ushort)sVar37 >> 8);
                    bVar23 = (byte)((ulong)uVar19 >> 0x20) | (byte)sVar38;
                    bVar24 = (byte)((ulong)uVar19 >> 0x28) | (byte)((ushort)sVar38 >> 8);
                    bVar25 = (byte)((ulong)uVar19 >> 0x30) | (byte)sVar39;
                    bVar26 = (byte)((ulong)uVar19 >> 0x38) | (byte)((ushort)sVar39 >> 8);
                    uVar19 = CONCAT17(bVar26,CONCAT16(bVar25,CONCAT15(bVar24,CONCAT14(bVar23,
                                                  CONCAT13(bVar22,CONCAT12(bVar21,CONCAT11(bVar20,
                                                  bVar18)))))));
                    bVar27 = (byte)uVar28 | (byte)sVar40;
                    bVar29 = (byte)((ulong)uVar28 >> 8) | (byte)((ushort)sVar40 >> 8);
                    bVar30 = (byte)((ulong)uVar28 >> 0x10) | (byte)sVar42;
                    bVar31 = (byte)((ulong)uVar28 >> 0x18) | (byte)((ushort)sVar42 >> 8);
                    bVar32 = (byte)((ulong)uVar28 >> 0x20) | (byte)sVar43;
                    bVar33 = (byte)((ulong)uVar28 >> 0x28) | (byte)((ushort)sVar43 >> 8);
                    bVar34 = (byte)((ulong)uVar28 >> 0x30) | (byte)sVar44;
                    bVar35 = (byte)((ulong)uVar28 >> 0x38) | (byte)((ushort)sVar44 >> 8);
                    uVar28 = CONCAT17(bVar35,CONCAT16(bVar34,CONCAT15(bVar33,CONCAT14(bVar32,
                                                  CONCAT13(bVar31,CONCAT12(bVar30,CONCAT11(bVar29,
                                                  bVar27)))))));
                  } while (uVar16 != 0);
                  bVar27 = bVar27 | bVar18;
                  bVar30 = bVar30 | bVar21;
                  uVar19 = CONCAT17(bVar35 | bVar26,
                                    CONCAT16(bVar34 | bVar25,
                                             CONCAT15(bVar33 | bVar24,
                                                      CONCAT14(bVar32 | bVar23,
                                                               CONCAT13(bVar31 | bVar22,
                                                                        CONCAT12(bVar30,CONCAT11(
                                                  bVar29 | bVar20,bVar27)))))));
                  uVar19 = NEON_ext(uVar19,uVar19,4,1);
                  bVar18 = bVar27 | (byte)uVar19 | bVar30 | (byte)((ulong)uVar19 >> 0x10);
                  if (uVar14 == uVar11) goto LAB_00115afc;
                }
                lVar12 = uVar11 - uVar14;
                piVar9 = (int *)((long)param_2 + uVar14 * 4);
                do {
                  lVar12 = lVar12 + -1;
                  bVar18 = bVar18 | *piVar9 == iVar2;
                  piVar9 = piVar9 + 1;
                } while (lVar12 != 0);
              }
LAB_00115afc:
              log2Console(3,"eup","Found a thread with same name and its ID is: %d",iVar2);
              if (((int)uVar17 < param_3) && ((bVar18 & 1) == 0)) {
                uVar5 = uVar17 + 1;
                *(int *)((long)param_2 + (long)(int)uVar17 * 4) = iVar2;
              }
            }
          }
LAB_00115b30:
          pdVar8 = readdir(__dirp);
          uVar17 = uVar5;
        } while (pdVar8 != (dirent *)0x0);
        if ((1 < (int)uVar5) && ((param_4 & 1) != 0)) {
          qsort(param_2,(long)(int)uVar5,4,intArrayCompare);
        }
      }
      closedir(__dirp);
    }
  }
  return uVar5;
}

