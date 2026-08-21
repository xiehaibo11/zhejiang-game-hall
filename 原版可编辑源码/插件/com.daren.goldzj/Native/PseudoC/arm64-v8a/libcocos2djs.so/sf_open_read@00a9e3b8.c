
undefined8 * sf_open_read(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  code *pcVar7;
  undefined8 *__ptr;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  char *pcVar12;
  uint uVar13;
  code *pcVar14;
  ulong uVar15;
  code *pcVar16;
  ulong unaff_x24;
  uint uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint local_ac;
  ushort local_a4;
  ushort local_a2;
  int local_a0;
  ushort local_96;
  undefined4 local_7c;
  byte local_78;
  byte local_77;
  byte local_76;
  byte local_75;
  int local_74;
  uint local_70;
  int local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((DAT_01d38e98 & 1) == 0) {
                    /* try { // try from 00a9e408 to 00b9e413 has its CatchHandler @ 00a9e58c */
    DAT_01d38e70 = FUN_00a9ec68;
    DAT_01d38e78 = fread;
    DAT_01d38e80 = fseek;
    DAT_01d38e88 = fclose;
    DAT_01d38e90 = ftell;
    DAT_01d38e98 = 1;
  }
                    /* try { // try from 00a9e444 to 00b9e44b has its CatchHandler @ 00a9e588 */
  if ((param_1 == 0) || (param_2 == (undefined8 *)0x0)) {
                    /* try { // try from 00a9e480 to 00b9e487 has its CatchHandler @ 00a9e590 */
    __android_log_print(6,"tinysndfile","path=%p info=%p\n",param_1,param_2);
  }
  else {
    __ptr = malloc(0x58);
    *(undefined4 *)((long)__ptr + 0x2c) = 1;
    puVar1 = __ptr + 6;
    *__ptr = 0;
    pcVar7 = DAT_01d38e88;
    pcVar6 = DAT_01d38e80;
    pcVar14 = DAT_01d38e78;
    pcVar16 = DAT_01d38e70;
    if (param_3 == (undefined8 *)0x0) {
      __ptr[10] = DAT_01d38e90;
      __ptr[7] = pcVar14;
      *puVar1 = pcVar16;
      __ptr[9] = pcVar7;
      __ptr[8] = pcVar6;
    }
    else {
      uVar20 = param_3[1];
      uVar19 = *param_3;
      uVar22 = param_3[3];
      uVar21 = param_3[2];
      __ptr[10] = param_3[4];
      __ptr[7] = uVar20;
      *puVar1 = uVar19;
      __ptr[9] = uVar22;
      __ptr[8] = uVar21;
    }
    lVar8 = (*(code *)*puVar1)(param_1,param_4);
    if (lVar8 == 0) {
      puVar10 = (undefined4 *)__errno();
                    /* try { // try from 00a9e520 to 00b9e537 has its CatchHandler @ 00a9e584 */
                    /* try { // try from 00a9e538 to 00b9e5ab has its CatchHandler @ 00a9e31c */
      __android_log_print(6,"tinysndfile","fopen %s failed errno %d\n",param_1,*puVar10);
      free(__ptr);
    }
    else {
      pcVar16 = (code *)__ptr[7];
      __ptr[1] = lVar8;
      uVar9 = (*pcVar16)(&local_74,1,0xc,lVar8);
      if (uVar9 < 0xc) {
        pcVar12 = "actual %zu < 44\n";
LAB_00a9e50c:
        __android_log_print(6,"tinysndfile",pcVar12,uVar9);
      }
      else {
        if (local_74 == 0x46464952) {
          if (local_70 < 4) {
                    /* catch() { ... } // from try @ 00a9e520 with catch @ 00a9e584 */
                    /* catch() { ... } // from try @ 00a9e444 with catch @ 00a9e588 */
                    /* catch() { ... } // from try @ 00a9e408 with catch @ 00a9e58c */
                    /* catch() { ... } // from try @ 00a9e480 with catch @ 00a9e590 */
            pcVar12 = "riffSize %u < 4\n";
            uVar18 = (ulong)local_70;
LAB_00a9e598:
            __android_log_print(6,"tinysndfile",pcVar12,uVar18);
            goto LAB_00a9e59c;
          }
          if (local_6c == 0x45564157) {
            uVar15 = (ulong)(local_70 - 4);
            if (local_70 - 4 < 8) {
              uVar19 = 0;
              bVar5 = false;
            }
            else {
              bVar4 = false;
              uVar19 = 0;
              local_ac = 1;
              bVar5 = false;
              do {
                while( true ) {
                  lVar11 = (*pcVar16)(&local_7c,1,8,lVar8);
                  if (lVar11 != 8) {
                    /* catch() { ... } // from try @ 00a9e760 with catch @ 00a9e93c
                       catch() { ... } // from try @ 00a9e830 with catch @ 00a9e93c */
                    /* catch() { ... } // from try @ 00a9e83c with catch @ 00a9e944 */
                    __android_log_print(6,"tinysndfile","actual %zu != %zu\n",lVar11,8);
                    goto LAB_00a9e59c;
                  }
                  uVar9 = uVar15 - 8;
                  uVar18 = (ulong)local_75 << 0x18 | (ulong)local_76 << 0x10 | (ulong)local_77 << 8
                           | (ulong)local_78;
                  uVar15 = uVar9 - uVar18;
                  uVar17 = (uint)uVar18;
                  if (uVar9 < uVar18) {
                    __android_log_print(6,"tinysndfile","chunkSize %u > remaining %zu\n",uVar18);
                    goto LAB_00a9e59c;
                  }
                  if (local_7c != 0x74636166) break;
joined_r0x00a9e78c:
                  if (uVar17 != 0) {
                    pcVar14 = (code *)__ptr[8];
LAB_00a9e798:
                    (*pcVar14)(lVar8,uVar18,1);
                  }
joined_r0x00a9e7a8:
                  if (uVar15 < 8) goto LAB_00a9e8dc;
                }
                if (local_7c != 0x61746164) {
                  if (local_7c != 0x20746d66) {
                    /* try { // try from 00a9e764 to 00b9e82f has its CatchHandler @ 00a9e6f8 */
                    __android_log_print(6,"tinysndfile","ignoring unknown chunk %c%c%c%c\n",
                                        local_7c & 0xff,local_7c._1_1_,local_7c._2_1_,local_7c._3_1_
                                       );
                    goto joined_r0x00a9e78c;
                  }
                  if (!bVar4) {
                    if (1 < uVar17) {
                      uVar9 = (*pcVar16)(&local_a4,1,2,lVar8);
                      if (uVar9 == 2) {
                        uVar17 = (uint)local_a4;
                    /* catch() { ... } // from try @ 00a9e764 with catch @ 00a9e6f8
                       catch() { ... } // from try @ 00a9e89c with catch @ 00a9e6f8 */
                        if ((uVar17 == 1) || (uVar17 == 3)) {
                          uVar9 = 0x10;
                          if (uVar18 < 0x10) goto LAB_00a9ea10;
                        }
                        else {
                          if (uVar17 != 0xfffe) {
                    /* try { // try from 00a9e9fc to 00b9ea03 has its CatchHandler @ 00a9ea60 */
                            pcVar12 = "unsupported format %u\n";
                    /* try { // try from 00a9ea04 to 00b9ea73 has its CatchHandler @ 00a9e9b4 */
                            uVar18 = (ulong)uVar17;
                            goto LAB_00a9e598;
                          }
                          uVar9 = 0x28;
                          if (uVar18 < 0x28) {
LAB_00a9ea10:
                            __android_log_print(6,"tinysndfile","chunkSize %u < minSize %zu\n",
                                                uVar18,uVar9);
                            goto LAB_00a9e59c;
                          }
                        }
                        lVar11 = (*pcVar16)((ulong)&local_a4 | 2,1,uVar9 - 2,lVar8);
                        if (lVar11 == uVar9 - 2) {
                          if (uVar9 < uVar18) {
                            (*(code *)__ptr[8])(lVar8,uVar18 - uVar9,1);
                          }
                          uVar18 = (ulong)local_a2;
                          uVar13 = (uint)local_a2;
                    /* try { // try from 00a9e830 to 00b9e837 has its CatchHandler @ 00a9e93c */
                          if ((uVar13 < 9) && ((1 << (ulong)(uVar13 & 0x1f) & 0x156U) != 0)) {
                            if (local_a0 == 0) {
                              pcVar12 = "samplerate %u == 0\n";
                              uVar18 = 0;
                            }
                            else {
                    /* try { // try from 00a9e83c to 00b9e843 has its CatchHandler @ 00a9e944 */
                              uVar2 = local_96 - 8 >> 3 | (uint)local_96 << 0x1d;
                              if (uVar2 < 4) {
                                unaff_x24 = (local_96 >> 3) * uVar18;
                                __ptr[2] = unaff_x24;
                                *(int *)((long)__ptr + 0x24) = local_a0;
                                *(uint *)(__ptr + 5) = uVar13;
                    /* try { // try from 00a9e874 to 00b9e89b has its CatchHandler @ 00a9e928 */
                                uVar13 = 4;
                                switch(uVar2) {
                                case 0:
                                  break;
                                case 1:
                                  uVar13 = 2;
                                  break;
                                case 2:
                                  uVar13 = 10;
                    /* try { // try from 00a9e89c to 00b9e9b3 has its CatchHandler @ 00a9e6f8 */
                                  break;
                                case 3:
                                  uVar13 = 6;
                                  if (uVar17 != 3) {
                                    uVar13 = 8;
                                  }
                                  break;
                                default:
                                  goto switchD_00a9e88c_default;
                                }
                                local_ac = local_ac | uVar13;
                                *(uint *)((long)__ptr + 0x2c) = local_ac;
switchD_00a9e88c_default:
                                bVar4 = true;
                                goto joined_r0x00a9e7a8;
                              }
                              pcVar12 = "bitsPerSample %u != 8 or 16 or 24 or 32\n";
                              uVar18 = (ulong)local_96;
                            }
                          }
                          else {
                    /* catch() { ... } // from try @ 00a9e9fc with catch @ 00a9ea60 */
                            pcVar12 = "unsupported channels %u\n";
                          }
                          goto LAB_00a9e598;
                        }
                        __android_log_print(6,"tinysndfile","actual %zu != %zu\n",lVar11,
                                            uVar9 - 0x10);
                        goto LAB_00a9e59c;
                      }
                      pcVar12 = "actual %zu != 2\n";
                      goto LAB_00a9e50c;
                    }
                    pcVar12 = "chunkSize %u < 2\n";
                    goto LAB_00a9e598;
                  }
                  pcVar12 = "multiple fmt\n";
                  goto LAB_00a9e56c;
                }
                if (!bVar4) {
                    /* try { // try from 00a9e9b4 to 00b9e9fb has its CatchHandler @ 00a9e9b4
                       catch() { ... } // from try @ 00a9e9b4 with catch @ 00a9e9b4
                       catch() { ... } // from try @ 00a9ea04 with catch @ 00a9e9b4 */
                  pcVar12 = "data not preceded by fmt\n";
                  goto LAB_00a9e56c;
                }
                if (bVar5) {
                  pcVar12 = "multiple data\n";
                  goto LAB_00a9e56c;
                }
                uVar9 = 0;
                if (unaff_x24 != 0) {
                  uVar9 = uVar18 / unaff_x24;
                }
                __ptr[3] = uVar9;
                *(int *)(__ptr + 4) = (int)uVar9;
                uVar19 = (*(code *)__ptr[10])(lVar8);
                if (uVar17 != 0) {
                  pcVar14 = (code *)__ptr[8];
                  bVar5 = true;
                    /* try { // try from 00a9e760 to 00b9e763 has its CatchHandler @ 00a9e93c */
                  goto LAB_00a9e798;
                }
                bVar5 = true;
              } while (7 < uVar15);
            }
LAB_00a9e8dc:
            if (uVar15 != 0) {
              __android_log_print(6,"tinysndfile","partial chunk at end of RIFF, remaining %zu\n",
                                  uVar15);
              goto LAB_00a9e59c;
            }
            if (bVar5) {
              (*(code *)__ptr[8])(lVar8,uVar19,0);
              uVar19 = __ptr[4];
              param_2[1] = __ptr[5];
              *param_2 = uVar19;
                    /* catch() { ... } // from try @ 00a9e874 with catch @ 00a9e928 */
              goto LAB_00a9e5b4;
            }
            pcVar12 = "missing data\n";
          }
          else {
            pcVar12 = "missing WAVE\n";
          }
        }
        else {
          pcVar12 = "wav != RIFF\n";
        }
LAB_00a9e56c:
        __android_log_print(6,"tinysndfile",pcVar12);
      }
LAB_00a9e59c:
      free(__ptr);
      (*(code *)__ptr[9])(lVar8);
    }
  }
  __ptr = (undefined8 *)0x0;
LAB_00a9e5b4:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __ptr;
}

