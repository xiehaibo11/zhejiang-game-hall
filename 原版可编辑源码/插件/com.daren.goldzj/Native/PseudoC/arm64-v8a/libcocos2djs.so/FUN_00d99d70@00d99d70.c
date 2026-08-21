
void FUN_00d99d70(long param_1,long param_2,long param_3,long param_4,uint param_5,int param_6,
                 uint param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 auStack_150 [256];
  
  if (param_7 != 0) {
    puVar1 = *(undefined8 **)(param_2 + 0x58);
    uVar2 = (ulong)param_7;
    pcVar3 = *(code **)(*(long *)(param_1 + 0x228) + (long)*(int *)(param_2 + 4) * 8 + 0xa8);
    puVar4 = (undefined8 *)(param_4 + 0x40);
    do {
      (*pcVar3)(auStack_150,param_3 + (ulong)param_5 * 8,param_6);
      uVar2 = uVar2 - 1;
      puVar4[-8] = CONCAT26((short)(int)(SUB84(auStack_150._8_8_,4) *
                                         (float)((ulong)puVar1[1] >> 0x20) + 16384.5) + -0x4000,
                            CONCAT24((short)(int)((float)auStack_150._8_8_ * (float)puVar1[1] +
                                                 16384.5) + -0x4000,
                                     CONCAT22((short)(int)(SUB84(auStack_150._0_8_,4) *
                                                           (float)((ulong)*puVar1 >> 0x20) + 16384.5
                                                          ) + -0x4000,
                                              (short)(int)((float)auStack_150._0_8_ * (float)*puVar1
                                                          + 16384.5) + -0x4000)));
      puVar4[-7] = CONCAT26((short)(int)(SUB84(auStack_150._24_8_,4) *
                                         (float)((ulong)puVar1[3] >> 0x20) + 16384.5) + -0x4000,
                            CONCAT24((short)(int)((float)auStack_150._24_8_ * (float)puVar1[3] +
                                                 16384.5) + -0x4000,
                                     CONCAT22((short)(int)(SUB84(auStack_150._16_8_,4) *
                                                           (float)((ulong)puVar1[2] >> 0x20) +
                                                          16384.5) + -0x4000,
                                              (short)(int)((float)auStack_150._16_8_ *
                                                           (float)puVar1[2] + 16384.5) + -0x4000)));
      puVar4[-6] = CONCAT26((short)(int)(SUB84(auStack_150._40_8_,4) *
                                         (float)((ulong)puVar1[5] >> 0x20) + 16384.5) + -0x4000,
                            CONCAT24((short)(int)((float)auStack_150._40_8_ * (float)puVar1[5] +
                                                 16384.5) + -0x4000,
                                     CONCAT22((short)(int)(SUB84(auStack_150._32_8_,4) *
                                                           (float)((ulong)puVar1[4] >> 0x20) +
                                                          16384.5) + -0x4000,
                                              (short)(int)((float)auStack_150._32_8_ *
                                                           (float)puVar1[4] + 16384.5) + -0x4000)));
      puVar4[-5] = CONCAT26((short)(int)(SUB84(auStack_150._56_8_,4) *
                                         (float)((ulong)puVar1[7] >> 0x20) + 16384.5) + -0x4000,
                            CONCAT24((short)(int)((float)auStack_150._56_8_ * (float)puVar1[7] +
                                                 16384.5) + -0x4000,
                                     CONCAT22((short)(int)(SUB84(auStack_150._48_8_,4) *
                                                           (float)((ulong)puVar1[6] >> 0x20) +
                                                          16384.5) + -0x4000,
                                              (short)(int)((float)auStack_150._48_8_ *
                                                           (float)puVar1[6] + 16384.5) + -0x4000)));
      puVar4[-4] = CONCAT26((short)(int)(SUB84(auStack_150._72_8_,4) *
                                         (float)((ulong)puVar1[9] >> 0x20) + 16384.5) + -0x4000,
                            CONCAT24((short)(int)((float)auStack_150._72_8_ * (float)puVar1[9] +
                                                 16384.5) + -0x4000,
                                     CONCAT22((short)(int)(SUB84(auStack_150._64_8_,4) *
                                                           (float)((ulong)puVar1[8] >> 0x20) +
                                                          16384.5) + -0x4000,
                                              (short)(int)((float)auStack_150._64_8_ *
                                                           (float)puVar1[8] + 16384.5) + -0x4000)));
      puVar4[-3] = CONCAT26((short)(int)(SUB84(auStack_150._88_8_,4) *
                                         (float)((ulong)puVar1[0xb] >> 0x20) + 16384.5) + -0x4000,
                            CONCAT24((short)(int)((float)auStack_150._88_8_ * (float)puVar1[0xb] +
                                                 16384.5) + -0x4000,
                                     CONCAT22((short)(int)(SUB84(auStack_150._80_8_,4) *
                                                           (float)((ulong)puVar1[10] >> 0x20) +
                                                          16384.5) + -0x4000,
                                              (short)(int)((float)auStack_150._80_8_ *
                                                           (float)puVar1[10] + 16384.5) + -0x4000)))
      ;
      puVar4[-2] = CONCAT26((short)(int)(SUB84(auStack_150._104_8_,4) *
                                         (float)((ulong)puVar1[0xd] >> 0x20) + 16384.5) + -0x4000,
                            CONCAT24((short)(int)((float)auStack_150._104_8_ * (float)puVar1[0xd] +
                                                 16384.5) + -0x4000,
                                     CONCAT22((short)(int)(SUB84(auStack_150._96_8_,4) *
                                                           (float)((ulong)puVar1[0xc] >> 0x20) +
                                                          16384.5) + -0x4000,
                                              (short)(int)((float)auStack_150._96_8_ *
                                                           (float)puVar1[0xc] + 16384.5) + -0x4000))
                           );
      puVar4[-1] = CONCAT26((short)(int)(SUB84(auStack_150._120_8_,4) *
                                         (float)((ulong)puVar1[0xf] >> 0x20) + 16384.5) + -0x4000,
                            CONCAT24((short)(int)((float)auStack_150._120_8_ * (float)puVar1[0xf] +
                                                 16384.5) + -0x4000,
                                     CONCAT22((short)(int)(SUB84(auStack_150._112_8_,4) *
                                                           (float)((ulong)puVar1[0xe] >> 0x20) +
                                                          16384.5) + -0x4000,
                                              (short)(int)((float)auStack_150._112_8_ *
                                                           (float)puVar1[0xe] + 16384.5) + -0x4000))
                           );
      *puVar4 = CONCAT26((short)(int)(SUB84(auStack_150._136_8_,4) *
                                      (float)((ulong)puVar1[0x11] >> 0x20) + 16384.5) + -0x4000,
                         CONCAT24((short)(int)((float)auStack_150._136_8_ * (float)puVar1[0x11] +
                                              16384.5) + -0x4000,
                                  CONCAT22((short)(int)(SUB84(auStack_150._128_8_,4) *
                                                        (float)((ulong)puVar1[0x10] >> 0x20) +
                                                       16384.5) + -0x4000,
                                           (short)(int)((float)auStack_150._128_8_ *
                                                        (float)puVar1[0x10] + 16384.5) + -0x4000)));
      puVar4[1] = CONCAT26((short)(int)(SUB84(auStack_150._152_8_,4) *
                                        (float)((ulong)puVar1[0x13] >> 0x20) + 16384.5) + -0x4000,
                           CONCAT24((short)(int)((float)auStack_150._152_8_ * (float)puVar1[0x13] +
                                                16384.5) + -0x4000,
                                    CONCAT22((short)(int)(SUB84(auStack_150._144_8_,4) *
                                                          (float)((ulong)puVar1[0x12] >> 0x20) +
                                                         16384.5) + -0x4000,
                                             (short)(int)((float)auStack_150._144_8_ *
                                                          (float)puVar1[0x12] + 16384.5) + -0x4000))
                          );
      puVar4[2] = CONCAT26((short)(int)(SUB84(auStack_150._168_8_,4) *
                                        (float)((ulong)puVar1[0x15] >> 0x20) + 16384.5) + -0x4000,
                           CONCAT24((short)(int)((float)auStack_150._168_8_ * (float)puVar1[0x15] +
                                                16384.5) + -0x4000,
                                    CONCAT22((short)(int)(SUB84(auStack_150._160_8_,4) *
                                                          (float)((ulong)puVar1[0x14] >> 0x20) +
                                                         16384.5) + -0x4000,
                                             (short)(int)((float)auStack_150._160_8_ *
                                                          (float)puVar1[0x14] + 16384.5) + -0x4000))
                          );
      puVar4[3] = CONCAT26((short)(int)(SUB84(auStack_150._184_8_,4) *
                                        (float)((ulong)puVar1[0x17] >> 0x20) + 16384.5) + -0x4000,
                           CONCAT24((short)(int)((float)auStack_150._184_8_ * (float)puVar1[0x17] +
                                                16384.5) + -0x4000,
                                    CONCAT22((short)(int)(SUB84(auStack_150._176_8_,4) *
                                                          (float)((ulong)puVar1[0x16] >> 0x20) +
                                                         16384.5) + -0x4000,
                                             (short)(int)((float)auStack_150._176_8_ *
                                                          (float)puVar1[0x16] + 16384.5) + -0x4000))
                          );
      puVar4[4] = CONCAT26((short)(int)(SUB84(auStack_150._200_8_,4) *
                                        (float)((ulong)puVar1[0x19] >> 0x20) + 16384.5) + -0x4000,
                           CONCAT24((short)(int)((float)auStack_150._200_8_ * (float)puVar1[0x19] +
                                                16384.5) + -0x4000,
                                    CONCAT22((short)(int)(SUB84(auStack_150._192_8_,4) *
                                                          (float)((ulong)puVar1[0x18] >> 0x20) +
                                                         16384.5) + -0x4000,
                                             (short)(int)((float)auStack_150._192_8_ *
                                                          (float)puVar1[0x18] + 16384.5) + -0x4000))
                          );
      puVar4[5] = CONCAT26((short)(int)(SUB84(auStack_150._216_8_,4) *
                                        (float)((ulong)puVar1[0x1b] >> 0x20) + 16384.5) + -0x4000,
                           CONCAT24((short)(int)((float)auStack_150._216_8_ * (float)puVar1[0x1b] +
                                                16384.5) + -0x4000,
                                    CONCAT22((short)(int)(SUB84(auStack_150._208_8_,4) *
                                                          (float)((ulong)puVar1[0x1a] >> 0x20) +
                                                         16384.5) + -0x4000,
                                             (short)(int)((float)auStack_150._208_8_ *
                                                          (float)puVar1[0x1a] + 16384.5) + -0x4000))
                          );
      puVar4[6] = CONCAT26((short)(int)(SUB84(auStack_150._232_8_,4) *
                                        (float)((ulong)puVar1[0x1d] >> 0x20) + 16384.5) + -0x4000,
                           CONCAT24((short)(int)((float)auStack_150._232_8_ * (float)puVar1[0x1d] +
                                                16384.5) + -0x4000,
                                    CONCAT22((short)(int)(SUB84(auStack_150._224_8_,4) *
                                                          (float)((ulong)puVar1[0x1c] >> 0x20) +
                                                         16384.5) + -0x4000,
                                             (short)(int)((float)auStack_150._224_8_ *
                                                          (float)puVar1[0x1c] + 16384.5) + -0x4000))
                          );
      puVar4[7] = CONCAT26((short)(int)(SUB84(auStack_150._248_8_,4) *
                                        (float)((ulong)puVar1[0x1f] >> 0x20) + 16384.5) + -0x4000,
                           CONCAT24((short)(int)((float)auStack_150._248_8_ * (float)puVar1[0x1f] +
                                                16384.5) + -0x4000,
                                    CONCAT22((short)(int)(SUB84(auStack_150._240_8_,4) *
                                                          (float)((ulong)puVar1[0x1e] >> 0x20) +
                                                         16384.5) + -0x4000,
                                             (short)(int)((float)auStack_150._240_8_ *
                                                          (float)puVar1[0x1e] + 16384.5) + -0x4000))
                          );
      puVar4 = puVar4 + 0x10;
      param_6 = *(int *)(param_2 + 0x24) + param_6;
    } while (uVar2 != 0);
  }
  return;
}

