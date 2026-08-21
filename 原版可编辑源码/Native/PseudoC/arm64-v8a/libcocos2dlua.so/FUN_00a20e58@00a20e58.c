
undefined8 FUN_00a20e58(ushort *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  
  uVar3 = param_2 >> 8;
  if (uVar3 < 0x9f) {
    if (uVar3 < 0x69) {
      if (param_2 - 0x3500 < 0x60) {
        uVar2 = (param_2 >> 4) - 0x350;
        puVar4 = &DAT_0139e08c;
      }
      else if (param_2 - 0x3c00 < 0x2e0) {
        uVar2 = (param_2 >> 4) - 0x3c0;
        puVar4 = &UNK_0139e0a4;
      }
      else if ((param_2 & 0xffffff80) == 0x4000) {
        uVar2 = (param_2 >> 4) - 0x400;
                    /* try { // try from 00a20fa0 to 00b20fb3 has its CatchHandler @ 00a21040 */
        puVar4 = &UNK_012fcd94;
      }
      else if (param_2 - 0x4200 < 0xb0) {
        uVar2 = (param_2 >> 4) - 0x420;
        puVar4 = &UNK_0139e15c;
      }
      else if (param_2 - 0x4b00 < 400) {
        uVar2 = (param_2 >> 4) - 0x4b0;
        puVar4 = &UNK_0139e188;
      }
      else if (param_2 - 0x4e00 < 0x3b0) {
        uVar2 = (param_2 >> 4) - 0x4e0;
        puVar4 = &UNK_0139e1ec;
      }
      else {
                    /* try { // try from 00a211d4 to 00b211fb has its CatchHandler @ 00a213e4 */
        if (param_2 - 0x5300 < 0x140) {
          uVar2 = (param_2 >> 4) - 0x530;
          puVar4 = &UNK_0139e2d8;
        }
        else {
                    /* try { // try from 00a21278 to 00b21287 has its CatchHandler @ 00a2136c */
          if (param_2 - 0x5700 < 0x1e0) {
                    /* try { // try from 00a21288 to 00b212bf has its CatchHandler @ 00a21108 */
            uVar2 = (param_2 >> 4) - 0x570;
            puVar4 = &UNK_0139e328;
          }
          else if (param_2 - 0x5a00 < 0x5d0) {
            uVar2 = (param_2 >> 4) - 0x5a0;
            puVar4 = &UNK_0139e3a0;
          }
          else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21240 with catch @ 00a213a0
                        */
            if (param_2 - 0x6100 < 0x30) {
              uVar2 = (param_2 >> 4) - 0x610;
                    /* try { // try from 00a213b4 to 00b213b7 has its CatchHandler @ 00a213dc */
              puVar4 = &UNK_0139e514;
            }
            else {
                    /* try { // try from 00a21428 to 00b2142b has its CatchHandler @ 00a21458 */
                    /* try { // try from 00a2142c to 00b2146b has its CatchHandler @ 00a21108 */
              if (param_2 - 0x6500 < 0x90) {
                uVar2 = (param_2 >> 4) - 0x650;
                puVar4 = &UNK_0139e520;
              }
              else {
                if (0x6f < param_2 - 0x6700) {
                  return 0xffffffff;
                }
                uVar2 = (param_2 >> 4) - 0x670;
                puVar4 = &UNK_0139e544;
              }
            }
          }
        }
      }
    }
    else {
      uVar2 = param_2 >> 4;
      if (uVar2 < 0x6a7) {
        uVar2 = uVar2 - 0x690;
        puVar4 = &UNK_0139e560;
      }
      else if (param_2 >> 9 == 0x36) {
        uVar2 = uVar2 - 0x6c0;
        puVar4 = &UNK_0139e5bc;
      }
      else if (param_2 - 0x7000 < 0x4c0) {
        uVar2 = uVar2 - 0x700;
        puVar4 = &UNK_0139e63c;
      }
      else if (param_2 - 0x7600 < 0x2f0) {
        uVar2 = uVar2 - 0x760;
        puVar4 = &UNK_0139e76c;
      }
      else if (param_2 - 0x7a00 < 0x470) {
        uVar2 = uVar2 - 0x7a0;
        puVar4 = &UNK_0139e828;
                    /* try { // try from 00a21108 to 00b21183 has its CatchHandler @ 00a21108
                       catch(type#1 @ 00000000) { ... } // from try @ 00a21108 with catch @ 00a21108
                       catch(type#1 @ 00000000) { ... } // from try @ 00a2118c with catch @ 00a21108
                       catch(type#1 @ 00000000) { ... } // from try @ 00a21288 with catch @ 00a21108
                       catch(type#1 @ 00000000) { ... } // from try @ 00a212fc with catch @ 00a21108
                       catch(type#1 @ 00000000) { ... } // from try @ 00a2142c with catch @ 00a21108
                        */
      }
      else if (uVar3 == 0x82) {
                    /* try { // try from 00a21184 to 00b2118b has its CatchHandler @ 00a21350 */
        uVar2 = uVar2 - 0x820;
        puVar4 = &UNK_0139e944;
                    /* try { // try from 00a2118c to 00b211d3 has its CatchHandler @ 00a21108 */
      }
      else if (param_2 - 0x8500 < 0x110) {
                    /* try { // try from 00a2122c to 00b2122f has its CatchHandler @ 00a21404 */
        uVar2 = uVar2 - 0x850;
        puVar4 = &UNK_0139e984;
      }
      else if (param_2 - 0x8800 < 0xa0) {
        uVar2 = uVar2 - 0x880;
        puVar4 = &UNK_0139e9c8;
      }
      else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21184 with catch @ 00a21350
                        */
        if (param_2 - 0x8b00 < 0x90) {
          uVar2 = uVar2 - 0x8b0;
          puVar4 = &UNK_0139e9f0;
        }
        else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a213b4 with catch @ 00a213dc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21214 with catch @ 00a213e0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a211d4 with catch @ 00a213e4
                        */
          if (param_2 - 0x8e00 < 0x1d0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a212f8 with catch @ 00a213ec
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a212c0 with catch @ 00a213f0
                        */
            uVar2 = uVar2 - 0x8e0;
            puVar4 = &UNK_0139ea14;
          }
          else {
                    /* try { // try from 00a2146c to 00b214e7 has its CatchHandler @ 00a2146c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a2146c with catch @ 00a2146c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a214f0 with catch @ 00a2146c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a215ec with catch @ 00a2146c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a21660 with catch @ 00a2146c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a21790 with catch @ 00a2146c
                        */
            if (param_2 - 0x9100 < 0x300) {
              uVar2 = uVar2 - 0x910;
              puVar4 = &UNK_0139ea88;
            }
            else {
              if (0x2ef < param_2 - 0x9700) {
                return 0xffffffff;
              }
              uVar2 = uVar2 - 0x970;
              puVar4 = &UNK_0139eb48;
            }
          }
        }
      }
    }
  }
  else if (param_2 >> 9 < 299) {
                    /* try { // try from 00a20ea8 to 00b20f6b has its CatchHandler @ 00a20ea8
                       catch() { ... } // from try @ 00a20ea8 with catch @ 00a20ea8
                       catch() { ... } // from try @ 00a21004 with catch @ 00a20ea8 */
    if (param_2 - 0x9f00 < 0xb0) {
      uVar2 = (param_2 >> 4) - 0x9f0;
      puVar4 = &UNK_0139ec04;
    }
    else if (param_2 >> 6 == 0x850) {
      uVar2 = (param_2 >> 4) - 0x2140;
      puVar4 = &UNK_012fc694;
    }
    else {
                    /* try { // try from 00a20fb8 to 00b20feb has its CatchHandler @ 00a21044 */
      if (param_2 - 0x21900 < 0x90) {
        uVar2 = (param_2 >> 4) - 0x2190;
        puVar4 = &UNK_0139ec30;
      }
      else if (param_2 - 0x21d00 < 0xc0) {
                    /* catch() { ... } // from try @ 00a20fa0 with catch @ 00a21040 */
                    /* catch() { ... } // from try @ 00a20fb8 with catch @ 00a21044 */
        uVar2 = (param_2 >> 4) - 0x21d0;
        puVar4 = &UNK_0139ec54;
      }
      else if ((param_2 & 0xffffff80) == 0x22000) {
        uVar2 = (param_2 >> 4) - 0x2200;
        puVar4 = &UNK_012fcdb4;
      }
      else if (param_2 >> 5 == 0x1138) {
        uVar2 = (param_2 >> 4) - 0x2270;
        puVar4 = &UNK_012fd18c;
      }
      else if ((param_2 & 0xfffffe00) == 0x23200) {
        uVar2 = (param_2 >> 4) - 0x2320;
        puVar4 = &UNK_0139ec84;
                    /* try { // try from 00a21214 to 00b2121b has its CatchHandler @ 00a213e0 */
      }
      else if (param_2 - 0x23c00 < 0x70) {
        uVar2 = (param_2 >> 4) - 0x23c0;
                    /* try { // try from 00a212c0 to 00b212c3 has its CatchHandler @ 00a213f0 */
        puVar4 = &UNK_0139ed04;
      }
      else if (param_2 - 0x24100 < 0x50) {
        uVar2 = (param_2 >> 4) - 0x2410;
        puVar4 = &UNK_0139ed20;
      }
      else if (param_2 >> 4 == 0x2450) {
        uVar2 = (param_2 >> 4) - 0x2450;
        puVar4 = &UNK_0138ca6e;
      }
      else if (param_2 - 0x24900 < 0x120) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21428 with catch @ 00a21458
                        */
        uVar2 = (param_2 >> 4) - 0x2490;
        puVar4 = &UNK_0139ed34;
      }
      else {
        if (0xcf < param_2 - 0x25100) {
          return 0xffffffff;
        }
                    /* try { // try from 00a214e8 to 00b214ef has its CatchHandler @ 00a216b4 */
        uVar2 = (param_2 >> 4) - 0x2510;
        puVar4 = &UNK_0139ed7c;
                    /* try { // try from 00a214f0 to 00b21537 has its CatchHandler @ 00a2146c */
      }
    }
  }
  else if (param_2 < 0x256a0) {
    uVar2 = (param_2 >> 4) - 0x2560;
    puVar4 = &UNK_0139edb0;
  }
  else {
                    /* try { // try from 00a20f6c to 00b20f9f has its CatchHandler @ 00a21074 */
    if (param_2 - 0x25c00 < 0x140) {
      uVar2 = (param_2 >> 4) - 0x25c0;
      puVar4 = &UNK_0139edd8;
    }
    else if (param_2 >> 5 == 0x1358) {
                    /* try { // try from 00a20ffc to 00b21003 has its CatchHandler @ 00a21074 */
                    /* try { // try from 00a21004 to 00b2108f has its CatchHandler @ 00a20ea8 */
      uVar2 = (param_2 >> 4) - 0x26b0;
      puVar4 = &UNK_012fd194;
    }
    else {
                    /* catch() { ... } // from try @ 00a20f6c with catch @ 00a21074
                       catch() { ... } // from try @ 00a20ffc with catch @ 00a21074 */
      if ((param_2 & 0xffffff80) == 0x26d00) {
        uVar2 = (param_2 >> 4) - 0x26d0;
        puVar4 = &UNK_012fcdd4;
      }
      else if (param_2 - 0x26f00 < 0xc0) {
        uVar2 = (param_2 >> 4) - 0x26f0;
        puVar4 = &UNK_0139ee28;
      }
      else if ((param_2 & 0xfffffff0) == 0x28700) {
                    /* try { // try from 00a21240 to 00b21247 has its CatchHandler @ 00a213a0 */
        uVar2 = (param_2 >> 4) - 0x2870;
        puVar4 = &UNK_0138ca76;
      }
      else if ((param_2 & 0xfffffff0) == 160000) {
        uVar2 = (param_2 >> 4) - 10000;
        puVar4 = &UNK_0138ca72;
      }
      else if (param_2 - 0x28900 < 0x1f0) {
        uVar2 = (param_2 >> 4) - 0x2890;
        puVar4 = &UNK_0139ee58;
      }
      else if (param_2 - 0x28d00 < 0xc0) {
                    /* try { // try from 00a212f8 to 00b212fb has its CatchHandler @ 00a213ec */
        uVar2 = (param_2 >> 4) - 0x28d0;
                    /* try { // try from 00a212fc to 00b213b3 has its CatchHandler @ 00a21108 */
        puVar4 = &UNK_0139eed4;
      }
      else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21278 with catch @ 00a2136c
                        */
        if (param_2 - 0x29900 < 0x50) {
          uVar2 = (param_2 >> 4) - 0x2990;
          puVar4 = &UNK_0139ef04;
        }
        else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a2122c with catch @ 00a21404
                        */
          if ((param_2 & 0xffffff80) == 0x29c00) {
            uVar2 = (param_2 >> 4) - 0x29c0;
            puVar4 = &UNK_012fcdf4;
          }
          else {
            if (0x1bf < param_2 - 0x2a100) {
              return 0xffffffff;
            }
            uVar2 = (param_2 >> 4) - 0x2a10;
            puVar4 = &UNK_0139ef18;
          }
        }
      }
    }
  }
  uVar1 = 1 << (ulong)(param_2 & 0xf);
  uVar3 = (uint)*(ushort *)((long)(puVar4 + (ulong)uVar2 * 4) + 2);
  if ((uVar1 & uVar3) == 0) {
    return 0xffffffff;
  }
  uVar3 = uVar3 & uVar1 - 1;
                    /* try { // try from 00a21538 to 00b2155f has its CatchHandler @ 00a21748 */
  uVar3 = (uVar3 >> 1 & 0x55555555) + (uVar3 & 0x55555555);
  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
  uVar3 = (uVar3 >> 4 & 0xffffff0f) + (uVar3 & 0xf0f0f0f);
                    /* try { // try from 00a21578 to 00b2157f has its CatchHandler @ 00a21744 */
  *param_1 = *(ushort *)
              (&DAT_0139ef88 +
              ((ulong)*(ushort *)(puVar4 + (ulong)uVar2 * 4) + (ulong)((uVar3 & 0xf) + (uVar3 >> 8))
              ) * 2) >> 8 |
             *(ushort *)
              (&DAT_0139ef88 +
              ((ulong)*(ushort *)(puVar4 + (ulong)uVar2 * 4) + (ulong)((uVar3 & 0xf) + (uVar3 >> 8))
              ) * 2) << 8;
                    /* try { // try from 00a21590 to 00b21593 has its CatchHandler @ 00a21768 */
  return 2;
}

