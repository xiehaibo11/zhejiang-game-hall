
void lwsl_hexdump_level(uint param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  byte abStack_b8 [80];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((DAT_0177ece8 & param_1) != 0) {
    _lws_log(param_1,&DAT_013c61e6);
    if (param_3 != 0) {
      uVar10 = 0;
      do {
                    /* try { // try from 01043860 to 011438b7 has its CatchHandler @ 01043818 */
        iVar4 = sprintf((char *)abStack_b8,"%04X: ",(ulong)uVar10);
        uVar12 = (ulong)uVar10;
        pbVar7 = abStack_b8 + iVar4;
        if (uVar12 < param_3) {
          uVar11 = (ulong)(uVar10 + 1);
          iVar4 = sprintf((char *)pbVar7,"%02X ",(ulong)*(byte *)(param_2 + uVar12));
                    /* catch() { ... } // from try @ 01043858 with catch @ 0104389c */
          pbVar7 = pbVar7 + iVar4;
          if (uVar11 < param_3) {
            pbVar5 = (byte *)(param_2 + uVar11);
            uVar11 = (ulong)(uVar10 + 2);
            iVar4 = sprintf((char *)pbVar7,"%02X ",(ulong)*pbVar5);
            pbVar7 = pbVar7 + iVar4;
            if (uVar11 < param_3) {
              pbVar5 = (byte *)(param_2 + uVar11);
              uVar11 = (ulong)(uVar10 + 3);
              iVar4 = sprintf((char *)pbVar7,"%02X ",(ulong)*pbVar5);
              pbVar7 = pbVar7 + iVar4;
              if (uVar11 < param_3) {
                pbVar5 = (byte *)(param_2 + uVar11);
                uVar11 = (ulong)(uVar10 + 4);
                iVar4 = sprintf((char *)pbVar7,"%02X ",(ulong)*pbVar5);
                pbVar7 = pbVar7 + iVar4;
                if (uVar11 < param_3) {
                  pbVar5 = (byte *)(param_2 + uVar11);
                  uVar11 = (ulong)(uVar10 + 5);
                  iVar4 = sprintf((char *)pbVar7,"%02X ",(ulong)*pbVar5);
                  pbVar7 = pbVar7 + iVar4;
                  if (uVar11 < param_3) {
                    pbVar5 = (byte *)(param_2 + uVar11);
                    uVar11 = (ulong)(uVar10 + 6);
                    iVar4 = sprintf((char *)pbVar7,"%02X ",(ulong)*pbVar5);
                    pbVar7 = pbVar7 + iVar4;
                    if (uVar11 < param_3) {
                      pbVar5 = (byte *)(param_2 + uVar11);
                      uVar11 = (ulong)(uVar10 + 7);
                      iVar4 = sprintf((char *)pbVar7,"%02X ",(ulong)*pbVar5);
                      pbVar7 = pbVar7 + iVar4;
                      if (uVar11 < param_3) {
                        pbVar5 = (byte *)(param_2 + uVar11);
                        uVar11 = (ulong)(uVar10 + 8);
                        iVar4 = sprintf((char *)pbVar7,"%02X ",(ulong)*pbVar5);
                        pbVar7 = pbVar7 + iVar4;
                        if (uVar11 < param_3) {
                          pbVar5 = (byte *)(param_2 + uVar11);
                          uVar11 = (ulong)(uVar10 + 9);
                          iVar4 = sprintf((char *)pbVar7,"%02X ",(ulong)*pbVar5);
                          pbVar7 = pbVar7 + iVar4;
                          if (uVar11 < param_3) {
                            pbVar5 = (byte *)(param_2 + uVar11);
                            uVar11 = (ulong)(uVar10 + 10);
                            iVar4 = sprintf((char *)pbVar7,"%02X ",(ulong)*pbVar5);
                            pbVar7 = pbVar7 + iVar4;
                            if (uVar11 < param_3) {
                              pbVar5 = (byte *)(param_2 + uVar11);
                              uVar11 = (ulong)(uVar10 + 0xb);
                              iVar4 = sprintf((char *)pbVar7,"%02X ",(ulong)*pbVar5);
                              pbVar7 = pbVar7 + iVar4;
                              if (uVar11 < param_3) {
                                pbVar5 = (byte *)(param_2 + uVar11);
                                uVar11 = (ulong)(uVar10 + 0xc);
                                iVar4 = sprintf((char *)pbVar7,"%02X ",(ulong)*pbVar5);
                                pbVar7 = pbVar7 + iVar4;
                                if (uVar11 < param_3) {
                                  pbVar5 = (byte *)(param_2 + uVar11);
                                  uVar11 = (ulong)(uVar10 + 0xd);
                                  iVar4 = sprintf((char *)pbVar7,"%02X ",(ulong)*pbVar5);
                                  pbVar7 = pbVar7 + iVar4;
                                  if (uVar11 < param_3) {
                                    pbVar5 = (byte *)(param_2 + uVar11);
                                    uVar11 = (ulong)(uVar10 + 0xe);
                                    iVar4 = sprintf((char *)pbVar7,"%02X ",(ulong)*pbVar5);
                                    pbVar7 = pbVar7 + iVar4;
                                    if (uVar11 < param_3) {
                                      pbVar5 = (byte *)(param_2 + uVar11);
                    /* catch() { ... } // from try @ 01043a98 with catch @ 01043a50 */
                                      uVar11 = (ulong)(uVar10 + 0xf);
                                      iVar4 = sprintf((char *)pbVar7,"%02X ",(ulong)*pbVar5);
                                      pbVar7 = pbVar7 + iVar4;
                                      if (uVar11 < param_3) {
                                        pbVar5 = (byte *)(param_2 + uVar11);
                                        uVar11 = (ulong)(uVar10 + 0x10);
                                        iVar4 = sprintf((char *)pbVar7,"%02X ",(ulong)*pbVar5);
                                        pbVar7 = pbVar7 + iVar4;
                                        iVar4 = 0x10;
                                      }
                                      else {
                                        iVar4 = 0xf;
                                      }
                                    }
                                    else {
                                      iVar4 = 0xe;
                                    }
                                  }
                                  else {
                                    iVar4 = 0xd;
                                  }
                                }
                                else {
                                  iVar4 = 0xc;
                    /* catch() { ... } // from try @ 01043a90 with catch @ 01043af0 */
                                }
                              }
                              else {
                                iVar4 = 0xb;
                              }
                            }
                            else {
                              iVar4 = 10;
                            }
                          }
                          else {
                            iVar4 = 9;
                          }
                        }
                        else {
                          iVar4 = 8;
                        }
                      }
                      else {
                        iVar4 = 7;
                      }
                    }
                    else {
                      iVar4 = 6;
                    }
                  }
                  else {
                    iVar4 = 5;
                  }
                }
                else {
                  iVar4 = 4;
                }
              }
              else {
                iVar4 = 3;
              }
            }
            else {
              iVar4 = 2;
            }
          }
          else {
            iVar4 = 1;
                    /* try { // try from 01043a98 to 01143b0b has its CatchHandler @ 01043a50 */
          }
        }
        else {
          iVar4 = 0;
          uVar11 = (ulong)uVar10;
                    /* try { // try from 01043a90 to 01143a97 has its CatchHandler @ 01043af0 */
        }
        uVar6 = 0x10 - iVar4;
        uVar1 = (ulong)uVar6 + 1;
        pbVar5 = pbVar7;
        if (uVar1 < 2) {
LAB_01043b58:
          uVar6 = iVar4 - 1;
          do {
            pbVar7 = pbVar5;
            uVar6 = uVar6 + 1;
            pbVar5 = pbVar7 + 3;
            pbVar7[0] = 0x20;
            pbVar7[1] = 0x20;
            pbVar7[2] = 0x20;
            pbVar7[3] = 0;
          } while (uVar6 < 0x10);
          if (param_3 <= uVar12) goto LAB_01043da8;
LAB_01043b78:
          bVar2 = *(byte *)(param_2 + uVar12);
          if (0x5e < *(byte *)(param_2 + uVar12) - 0x20) {
            bVar2 = 0x2e;
          }
          *pbVar5 = bVar2;
          if (param_3 <= uVar10 + 1) {
            pbVar5 = pbVar7 + 4;
                    /* catch() { ... } // from try @ 01043d24 with catch @ 01043d84 */
            lVar8 = 0xe;
            goto LAB_01043dac;
          }
          bVar2 = *(byte *)(param_2 + (ulong)(uVar10 + 1));
          if (0x5e < bVar2 - 0x20) {
            bVar2 = 0x2e;
          }
          pbVar7[4] = bVar2;
          if (param_3 <= uVar10 + 2) {
            pbVar5 = pbVar7 + 5;
            lVar8 = 0xd;
            goto LAB_01043dac;
          }
          bVar2 = *(byte *)(param_2 + (ulong)(uVar10 + 2));
          if (0x5e < bVar2 - 0x20) {
            bVar2 = 0x2e;
          }
          pbVar7[5] = bVar2;
          if (param_3 <= uVar10 + 3) {
            pbVar5 = pbVar7 + 6;
            lVar8 = 0xc;
            goto LAB_01043dac;
          }
          bVar2 = *(byte *)(param_2 + (ulong)(uVar10 + 3));
          if (0x5e < bVar2 - 0x20) {
            bVar2 = 0x2e;
          }
          pbVar7[6] = bVar2;
          if (param_3 <= uVar10 + 4) {
            pbVar5 = pbVar7 + 7;
            lVar8 = 0xb;
            goto LAB_01043dac;
          }
          bVar2 = *(byte *)(param_2 + (ulong)(uVar10 + 4));
          if (0x5e < bVar2 - 0x20) {
            bVar2 = 0x2e;
          }
          pbVar7[7] = bVar2;
          if (param_3 <= uVar10 + 5) {
            pbVar5 = pbVar7 + 8;
            lVar8 = 10;
            goto LAB_01043dac;
          }
          bVar2 = *(byte *)(param_2 + (ulong)(uVar10 + 5));
          if (0x5e < bVar2 - 0x20) {
            bVar2 = 0x2e;
          }
          pbVar7[8] = bVar2;
          if (param_3 <= uVar10 + 6) {
            pbVar5 = pbVar7 + 9;
            lVar8 = 9;
            goto LAB_01043dac;
          }
          bVar2 = *(byte *)(param_2 + (ulong)(uVar10 + 6));
          if (0x5e < bVar2 - 0x20) {
            bVar2 = 0x2e;
          }
          pbVar7[9] = bVar2;
          if (param_3 <= uVar10 + 7) {
            pbVar5 = pbVar7 + 10;
            lVar8 = 8;
            goto LAB_01043dac;
          }
          bVar2 = *(byte *)(param_2 + (ulong)(uVar10 + 7));
          if (0x5e < bVar2 - 0x20) {
            bVar2 = 0x2e;
          }
          pbVar7[10] = bVar2;
          if (param_3 <= uVar10 + 8) {
            pbVar5 = pbVar7 + 0xb;
            lVar8 = 7;
            goto LAB_01043dac;
          }
          bVar2 = *(byte *)(param_2 + (ulong)(uVar10 + 8));
          if (0x5e < bVar2 - 0x20) {
            bVar2 = 0x2e;
          }
          pbVar7[0xb] = bVar2;
          if (param_3 <= uVar10 + 9) {
            pbVar5 = pbVar7 + 0xc;
            lVar8 = 6;
            goto LAB_01043dac;
          }
          bVar2 = *(byte *)(param_2 + (ulong)(uVar10 + 9));
          if (0x5e < bVar2 - 0x20) {
            bVar2 = 0x2e;
          }
          pbVar7[0xc] = bVar2;
          if (param_3 <= uVar10 + 10) {
                    /* catch() { ... } // from try @ 01043860 with catch @ 01043818 */
            pbVar5 = pbVar7 + 0xd;
            lVar8 = 5;
            goto LAB_01043dac;
          }
          bVar2 = *(byte *)(param_2 + (ulong)(uVar10 + 10));
          if (0x5e < bVar2 - 0x20) {
            bVar2 = 0x2e;
          }
          pbVar7[0xd] = bVar2;
          if (param_3 <= uVar10 + 0xb) {
            pbVar5 = pbVar7 + 0xe;
            lVar8 = 4;
            goto LAB_01043dac;
          }
          bVar2 = *(byte *)(param_2 + (ulong)(uVar10 + 0xb));
                    /* try { // try from 01043cf0 to 01143d23 has its CatchHandler @ 01043cf0
                       catch() { ... } // from try @ 01043cf0 with catch @ 01043cf0
                       catch() { ... } // from try @ 01043d60 with catch @ 01043cf0 */
          if (0x5e < bVar2 - 0x20) {
            bVar2 = 0x2e;
          }
          pbVar7[0xe] = bVar2;
          if (param_3 <= uVar10 + 0xc) {
            pbVar5 = pbVar7 + 0xf;
            lVar8 = 3;
            goto LAB_01043dac;
          }
          bVar2 = *(byte *)(param_2 + (ulong)(uVar10 + 0xc));
          if (0x5e < bVar2 - 0x20) {
            bVar2 = 0x2e;
          }
          pbVar7[0xf] = bVar2;
          if (param_3 <= uVar10 + 0xd) {
            pbVar5 = pbVar7 + 0x10;
            lVar8 = 2;
            goto LAB_01043dac;
          }
          bVar2 = *(byte *)(param_2 + (ulong)(uVar10 + 0xd));
                    /* try { // try from 01043d24 to 01143d4f has its CatchHandler @ 01043d84 */
          if (0x5e < bVar2 - 0x20) {
            bVar2 = 0x2e;
          }
          pbVar7[0x10] = bVar2;
          if (param_3 <= uVar10 + 0xe) {
            pbVar5 = pbVar7 + 0x11;
            lVar8 = 1;
            goto LAB_01043dac;
          }
          bVar2 = *(byte *)(param_2 + (ulong)(uVar10 + 0xe));
          if (0x5e < bVar2 - 0x20) {
            bVar2 = 0x2e;
          }
          pbVar7[0x11] = bVar2;
                    /* try { // try from 01043d5c to 01143d5f has its CatchHandler @ 01043d6c */
          if (param_3 <= uVar10 + 0xf) {
            lVar8 = 0;
                    /* try { // try from 01043858 to 0114385f has its CatchHandler @ 0104389c */
            pbVar5 = pbVar7 + 0x12;
            goto LAB_01043dac;
          }
                    /* try { // try from 01043d60 to 01143d97 has its CatchHandler @ 01043cf0 */
          bVar2 = *(byte *)(param_2 + (ulong)(uVar10 + 0xf));
          pbVar9 = pbVar7 + 0x13;
                    /* catch() { ... } // from try @ 01043d5c with catch @ 01043d6c */
          if (0x5e < bVar2 - 0x20) {
            bVar2 = 0x2e;
          }
          pbVar7[0x12] = bVar2;
          pbVar7 = pbVar7 + 0x14;
        }
        else {
          lVar8 = uVar1 - (~uVar6 & 1);
          iVar4 = iVar4 + (int)lVar8;
          pbVar5 = pbVar7 + lVar8 * 3;
          pbVar9 = pbVar7;
          do {
            pbVar9[0] = 0x20;
            pbVar9[1] = 0x20;
            pbVar9[2] = 0x20;
            pbVar9[3] = 0;
            pbVar9[3] = 0x20;
            pbVar9[4] = 0x20;
            pbVar9[5] = 0x20;
            pbVar9[6] = 0;
            lVar8 = lVar8 + -2;
            pbVar9 = pbVar9 + 6;
          } while (lVar8 != 0);
          if ((~uVar6 & 1) != 0) goto LAB_01043b58;
          pbVar7 = pbVar7 + (ulong)uVar6 * 3;
          if (uVar12 < param_3) goto LAB_01043b78;
LAB_01043da8:
          lVar8 = 0xf;
LAB_01043dac:
          memset(pbVar5,0x20,lVar8 + 1);
          pbVar9 = pbVar5 + lVar8 + 1;
          pbVar7 = pbVar5 + lVar8 + 2;
        }
                    /* try { // try from 01043dc8 to 01143dcb has its CatchHandler @ 01043df4 */
        *pbVar9 = 10;
        *pbVar7 = 0;
        _lws_log(param_1,"%s",abStack_b8);
        uVar10 = (uint)uVar11;
      } while (uVar11 < param_3);
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01043dc8 with catch @ 01043df4
                        */
    _lws_log(param_1,&DAT_013c61e6);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

