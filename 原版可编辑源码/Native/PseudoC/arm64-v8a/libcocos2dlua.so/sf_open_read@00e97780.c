
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
  undefined8 *puVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
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
  puVar17 = &DAT_0178f470;
  if ((DAT_0178f498 & 1) == 0) {
    DAT_0178f470 = FUN_00e98028;
    DAT_0178f478 = fread;
    DAT_0178f480 = fseek;
    DAT_0178f488 = fclose;
    DAT_0178f490 = ftell;
    DAT_0178f498 = 1;
  }
  if ((param_1 == 0) || (param_2 == (undefined8 *)0x0)) {
    __android_log_print(6,"tinysndfile","path=%p info=%p\n",param_1,param_2);
  }
  else {
    __ptr = malloc(0x58);
    *(undefined4 *)((long)__ptr + 0x2c) = 1;
    puVar1 = __ptr + 6;
    *__ptr = 0;
    pcVar7 = DAT_0178f488;
    pcVar6 = DAT_0178f480;
    pcVar14 = DAT_0178f478;
    pcVar16 = DAT_0178f470;
    if (param_3 == (undefined8 *)0x0) {
      __ptr[10] = DAT_0178f490;
      __ptr[7] = pcVar14;
      *puVar1 = pcVar16;
      __ptr[9] = pcVar7;
      __ptr[8] = pcVar6;
    }
    else {
      uVar21 = param_3[1];
      uVar20 = *param_3;
      uVar23 = param_3[3];
      uVar22 = param_3[2];
      __ptr[10] = param_3[4];
      __ptr[7] = uVar21;
      *puVar1 = uVar20;
      __ptr[9] = uVar23;
      __ptr[8] = uVar22;
    }
    lVar8 = (*(code *)*puVar1)(param_1,param_4);
    if (lVar8 == 0) {
      puVar10 = (undefined4 *)__errno();
      __android_log_print(6,"tinysndfile","fopen %s failed errno %d\n",param_1,*puVar10);
      free(__ptr);
    }
    else {
      pcVar16 = (code *)__ptr[7];
      __ptr[1] = lVar8;
      uVar9 = (*pcVar16)(&local_74,1,0xc,lVar8);
      if (uVar9 < 0xc) {
        pcVar12 = "actual %zu < 44\n";
LAB_00e978cc:
        __android_log_print(6,"tinysndfile",pcVar12,uVar9);
      }
      else {
        if (local_74 == 0x46464952) {
          if (local_70 < 4) {
            pcVar12 = "riffSize %u < 4\n";
            uVar19 = (ulong)local_70;
LAB_00e97958:
            __android_log_print(6,"tinysndfile",pcVar12,uVar19);
            goto LAB_00e9795c;
          }
          if (local_6c == 0x45564157) {
            uVar15 = (ulong)(local_70 - 4);
            if (local_70 - 4 < 8) {
              uVar20 = 0;
              bVar5 = false;
            }
            else {
              bVar4 = false;
              uVar20 = 0;
              local_ac = 1;
              bVar5 = false;
              do {
                while( true ) {
                  lVar11 = (*pcVar16)(&local_7c,1,8,lVar8);
                  if (lVar11 != 8) {
                    __android_log_print(6,"tinysndfile","actual %zu != %zu\n",lVar11,8);
                    goto LAB_00e9795c;
                  }
                  uVar9 = uVar15 - 8;
                  uVar19 = (ulong)local_75 << 0x18 | (ulong)local_76 << 0x10 | (ulong)local_77 << 8
                           | (ulong)local_78;
                  uVar15 = uVar9 - uVar19;
                  uVar18 = (uint)uVar19;
                  if (uVar9 < uVar19) {
                    __android_log_print(6,"tinysndfile","chunkSize %u > remaining %zu\n",uVar19);
                    goto LAB_00e9795c;
                  }
                  if (local_7c != 0x74636166) break;
joined_r0x00e97a24:
                  if (uVar18 != 0) {
                    pcVar14 = (code *)__ptr[8];
LAB_00e97a30:
                    (*pcVar14)(lVar8,uVar19,1);
                  }
joined_r0x00e97c8c:
                  if (uVar15 < 8) goto LAB_00e97c9c;
                }
                if (local_7c != 0x61746164) {
                  if (local_7c != 0x20746d66) {
                    __android_log_print(6,"tinysndfile","ignoring unknown chunk %c%c%c%c\n",
                                        local_7c & 0xff,local_7c._1_1_,local_7c._2_1_,local_7c._3_1_
                                       );
                    goto joined_r0x00e97a24;
                  }
                  if (!bVar4) {
                    if (1 < uVar18) {
                      uVar9 = (*pcVar16)(&local_a4,1,2,lVar8);
                      if (uVar9 == 2) {
                        uVar18 = (uint)local_a4;
                        if ((uVar18 == 1) || (uVar18 == 3)) {
                          uVar9 = 0x10;
                          if (uVar19 < 0x10) {
LAB_00e97dd0:
                            __android_log_print(6,"tinysndfile","chunkSize %u < minSize %zu\n",
                                                uVar19,uVar9);
                            goto LAB_00e9795c;
                          }
                        }
                        else {
                          if (uVar18 != 0xfffe) {
                            pcVar12 = "unsupported format %u\n";
                            uVar19 = (ulong)uVar18;
                            goto LAB_00e97958;
                          }
                          uVar9 = 0x28;
                          if (uVar19 < 0x28) goto LAB_00e97dd0;
                        }
                        lVar11 = (*pcVar16)((ulong)&local_a4 | 2,1,uVar9 - 2,lVar8);
                        if (lVar11 == uVar9 - 2) {
                          if (uVar9 < uVar19) {
                            (*(code *)__ptr[8])(lVar8,uVar19 - uVar9,1);
                          }
                          uVar19 = (ulong)local_a2;
                          uVar13 = (uint)local_a2;
                          if ((uVar13 < 9) && ((1 << (ulong)(uVar13 & 0x1f) & 0x156U) != 0)) {
                            if (local_a0 == 0) {
                              pcVar12 = "samplerate %u == 0\n";
                              uVar19 = 0;
                            }
                            else {
                              uVar2 = local_96 - 8 >> 3 | (uint)local_96 << 0x1d;
                              if (uVar2 < 4) {
                                puVar17 = (undefined8 *)((local_96 >> 3) * uVar19);
                                __ptr[2] = puVar17;
                                *(int *)((long)__ptr + 0x24) = local_a0;
                                *(uint *)(__ptr + 5) = uVar13;
                                uVar13 = 4;
                                switch(uVar2) {
                                case 0:
                                  break;
                                case 1:
                                  uVar13 = 2;
                                  break;
                                case 2:
                                  uVar13 = 10;
                                  break;
                                case 3:
                                  uVar13 = 6;
                                  if (uVar18 != 3) {
                                    uVar13 = 8;
                                  }
                                  break;
                                default:
                                  goto switchD_00e97c4c_default;
                                }
                                local_ac = local_ac | uVar13;
                                *(uint *)((long)__ptr + 0x2c) = local_ac;
switchD_00e97c4c_default:
                                bVar4 = true;
                                goto joined_r0x00e97c8c;
                              }
                              pcVar12 = "bitsPerSample %u != 8 or 16 or 24 or 32\n";
                              uVar19 = (ulong)local_96;
                            }
                          }
                          else {
                            pcVar12 = "unsupported channels %u\n";
                          }
                          goto LAB_00e97958;
                        }
                        __android_log_print(6,"tinysndfile","actual %zu != %zu\n",lVar11,
                                            uVar9 - 0x10);
                        goto LAB_00e9795c;
                      }
                      pcVar12 = "actual %zu != 2\n";
                      goto LAB_00e978cc;
                    }
                    pcVar12 = "chunkSize %u < 2\n";
                    goto LAB_00e97958;
                  }
                  pcVar12 = "multiple fmt\n";
                  goto LAB_00e9792c;
                }
                if (!bVar4) {
                  pcVar12 = "data not preceded by fmt\n";
                  goto LAB_00e9792c;
                }
                if (bVar5) {
                  pcVar12 = "multiple data\n";
                  goto LAB_00e9792c;
                }
                uVar9 = 0;
                if (puVar17 != (undefined8 *)0x0) {
                  uVar9 = uVar19 / (ulong)puVar17;
                }
                __ptr[3] = uVar9;
                *(int *)(__ptr + 4) = (int)uVar9;
                uVar20 = (*(code *)__ptr[10])(lVar8);
                if (uVar18 != 0) {
                  pcVar14 = (code *)__ptr[8];
                  bVar5 = true;
                  goto LAB_00e97a30;
                }
                bVar5 = true;
              } while (7 < uVar15);
            }
LAB_00e97c9c:
            if (uVar15 != 0) {
              __android_log_print(6,"tinysndfile","partial chunk at end of RIFF, remaining %zu\n",
                                  uVar15);
              goto LAB_00e9795c;
            }
            if (bVar5) {
              (*(code *)__ptr[8])(lVar8,uVar20,0);
              uVar20 = __ptr[4];
              param_2[1] = __ptr[5];
              *param_2 = uVar20;
              goto LAB_00e97974;
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
LAB_00e9792c:
        __android_log_print(6,"tinysndfile",pcVar12);
      }
LAB_00e9795c:
      free(__ptr);
      (*(code *)__ptr[9])(lVar8);
    }
  }
  __ptr = (undefined8 *)0x0;
LAB_00e97974:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

