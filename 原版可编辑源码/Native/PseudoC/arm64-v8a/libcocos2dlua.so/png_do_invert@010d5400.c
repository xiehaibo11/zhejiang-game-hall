
void png_do_invert(long param_1,byte *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (*(char *)(param_1 + 0x10) == '\x04') {
    if (*(char *)(param_1 + 0x11) == '\x10') {
      uVar1 = *(ulong *)(param_1 + 8);
      if (uVar1 != 0) {
        uVar3 = 0;
        do {
          pbVar4 = param_2 + uVar3;
          uVar3 = uVar3 + 4;
          *pbVar4 = ~*pbVar4;
          pbVar4[1] = ~pbVar4[1];
        } while (uVar3 < uVar1);
      }
    }
    else if ((*(char *)(param_1 + 0x11) == '\b') && (uVar1 = *(ulong *)(param_1 + 8), uVar1 != 0)) {
      uVar3 = 0;
      do {
        param_2[uVar3] = ~param_2[uVar3];
        uVar3 = uVar3 + 2;
      } while (uVar3 < uVar1);
    }
  }
  else if ((*(char *)(param_1 + 0x10) == '\0') && (uVar1 = *(ulong *)(param_1 + 8), uVar1 != 0)) {
    if (uVar1 < 0x20) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar1 & 0xffffffffffffffe0;
                    /* catch() { ... } // from try @ 010d53ec with catch @ 010d54a0 */
      if (uVar3 != 0) {
                    /* catch() { ... } // from try @ 010d539c with catch @ 010d54a4 */
                    /* catch() { ... } // from try @ 010d534c with catch @ 010d54a8 */
        pbVar4 = param_2 + 0x10;
                    /* catch() { ... } // from try @ 010d52fc with catch @ 010d54ac */
        uVar5 = uVar3;
        do {
                    /* catch() { ... } // from try @ 010d52ac with catch @ 010d54b0 */
          uVar7 = *(undefined8 *)(pbVar4 + -8);
          uVar6 = *(undefined8 *)(pbVar4 + -0x10);
          uVar9 = *(undefined8 *)(pbVar4 + 8);
          uVar8 = *(undefined8 *)pbVar4;
          uVar5 = uVar5 - 0x20;
          *(ulong *)(pbVar4 + -8) =
               CONCAT17(~(byte)((ulong)uVar7 >> 0x38),
                        CONCAT16(~(byte)((ulong)uVar7 >> 0x30),
                                 CONCAT15(~(byte)((ulong)uVar7 >> 0x28),
                                          CONCAT14(~(byte)((ulong)uVar7 >> 0x20),
                                                   CONCAT13(~(byte)((ulong)uVar7 >> 0x18),
                                                            CONCAT12(~(byte)((ulong)uVar7 >> 0x10),
                                                                     CONCAT11(~(byte)((ulong)uVar7
                                                                                     >> 8),
                                                                              ~(byte)uVar7)))))));
          *(ulong *)(pbVar4 + -0x10) =
               CONCAT17(~(byte)((ulong)uVar6 >> 0x38),
                        CONCAT16(~(byte)((ulong)uVar6 >> 0x30),
                                 CONCAT15(~(byte)((ulong)uVar6 >> 0x28),
                                          CONCAT14(~(byte)((ulong)uVar6 >> 0x20),
                                                   CONCAT13(~(byte)((ulong)uVar6 >> 0x18),
                                                            CONCAT12(~(byte)((ulong)uVar6 >> 0x10),
                                                                     CONCAT11(~(byte)((ulong)uVar6
                                                                                     >> 8),
                                                                              ~(byte)uVar6)))))));
          *(ulong *)(pbVar4 + 8) =
               CONCAT17(~(byte)((ulong)uVar9 >> 0x38),
                        CONCAT16(~(byte)((ulong)uVar9 >> 0x30),
                                 CONCAT15(~(byte)((ulong)uVar9 >> 0x28),
                                          CONCAT14(~(byte)((ulong)uVar9 >> 0x20),
                                                   CONCAT13(~(byte)((ulong)uVar9 >> 0x18),
                                                            CONCAT12(~(byte)((ulong)uVar9 >> 0x10),
                                                                     CONCAT11(~(byte)((ulong)uVar9
                                                                                     >> 8),
                                                                              ~(byte)uVar9)))))));
          *(ulong *)pbVar4 =
               CONCAT17(~(byte)((ulong)uVar8 >> 0x38),
                        CONCAT16(~(byte)((ulong)uVar8 >> 0x30),
                                 CONCAT15(~(byte)((ulong)uVar8 >> 0x28),
                                          CONCAT14(~(byte)((ulong)uVar8 >> 0x20),
                                                   CONCAT13(~(byte)((ulong)uVar8 >> 0x18),
                                                            CONCAT12(~(byte)((ulong)uVar8 >> 0x10),
                                                                     CONCAT11(~(byte)((ulong)uVar8
                                                                                     >> 8),
                                                                              ~(byte)uVar8)))))));
          pbVar4 = pbVar4 + 0x20;
        } while (uVar5 != 0);
        param_2 = param_2 + uVar3;
        if (uVar1 == uVar3) {
          return;
        }
      }
    }
    lVar2 = uVar1 - uVar3;
    do {
      lVar2 = lVar2 + -1;
      *param_2 = ~*param_2;
      param_2 = param_2 + 1;
    } while (lVar2 != 0);
  }
  return;
}

