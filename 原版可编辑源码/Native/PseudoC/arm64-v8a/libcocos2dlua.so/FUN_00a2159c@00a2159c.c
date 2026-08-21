
undefined8 FUN_00a2159c(ushort *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  
                    /* try { // try from 00a215a4 to 00b215ab has its CatchHandler @ 00a21704 */
  if (param_2 >> 9 < 0x10d) {
    if (param_2 >> 9 < 0x37) {
      if (param_2 - 0x3400 < 0x50) {
        uVar2 = (param_2 >> 4) - 0x340;
        puVar4 = &DAT_0139f396;
      }
      else {
                    /* try { // try from 00a2165c to 00b2165f has its CatchHandler @ 00a21750 */
                    /* try { // try from 00a21660 to 00b21717 has its CatchHandler @ 00a2146c */
        if (param_2 - 0x3600 < 0x380) {
          uVar2 = (param_2 >> 4) - 0x360;
          puVar4 = &UNK_0139f3aa;
        }
        else if (param_2 - 0x3b00 < 0xa0) {
          uVar2 = (param_2 >> 4) - 0x3b0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a215a4 with catch @ 00a21704
                        */
          puVar4 = &UNK_0139f48a;
        }
        else if ((param_2 & 0xffffff00) == 0x3d00) {
                    /* try { // try from 00a2178c to 00b2178f has its CatchHandler @ 00a217bc */
                    /* try { // try from 00a21790 to 00b217cf has its CatchHandler @ 00a2146c */
          uVar2 = (param_2 >> 4) - 0x3d0;
          puVar4 = &UNK_0139f4b2;
        }
        else if (param_2 - 0x3f00 < 0x2f0) {
          uVar2 = (param_2 >> 4) - 0x3f0;
          puVar4 = &UNK_0139f4f2;
        }
        else if (param_2 - 0x4300 < 0x450) {
          uVar2 = (param_2 >> 4) - 0x430;
          puVar4 = &UNK_0139f5ae;
        }
        else if (param_2 - 0x4a00 < 0xb0) {
          uVar2 = (param_2 >> 4) - 0x4a0;
          puVar4 = &UNK_0139f6c2;
        }
        else if (param_2 - 0x4c00 < 400) {
          uVar2 = (param_2 >> 4) - 0x4c0;
          puVar4 = &UNK_0139f6ee;
        }
        else if (param_2 - 0x4f00 < 0xc0) {
          uVar2 = (param_2 >> 4) - 0x4f0;
          puVar4 = &UNK_0139f752;
        }
        else if ((param_2 & 0xffffff00) == 0x5600) {
          uVar2 = (param_2 >> 4) - 0x560;
          puVar4 = &UNK_0139f782;
        }
        else if (param_2 - 0x5900 < 0x480) {
          uVar2 = (param_2 >> 4) - 0x590;
          puVar4 = &UNK_0139f7c2;
        }
        else {
                    /* catch() { ... } // from try @ 00a21c60 with catch @ 00a21c04 */
          if (param_2 >> 6 == 0x17c) {
            uVar2 = (param_2 >> 4) - 0x5f0;
            puVar4 = &LAB_012fc6a4;
          }
          else {
                    /* catch() { ... } // from try @ 00a21c44 with catch @ 00a21c7c */
                    /* catch() { ... } // from try @ 00a21c5c with catch @ 00a21c80 */
            if (0x16f < param_2 - 0x6600) {
              return 0xffffffff;
            }
            uVar2 = (param_2 >> 4) - 0x660;
            puVar4 = &UNK_0139f8e2;
          }
        }
      }
    }
    else if (param_2 >> 5 < 0x373) {
                    /* try { // try from 00a21624 to 00b21627 has its CatchHandler @ 00a21754 */
      uVar2 = (param_2 >> 4) - 0x6e0;
      puVar4 = &UNK_0139f93e;
    }
    else if (param_2 - 0x7100 < 0x130) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a214e8 with catch @ 00a216b4
                        */
      uVar2 = (param_2 >> 4) - 0x710;
      puVar4 = &UNK_0139f956;
    }
    else if (param_2 - 0x7400 < 0xa0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21718 with catch @ 00a21740
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21578 with catch @ 00a21744
                        */
      uVar2 = (param_2 >> 4) - 0x740;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21538 with catch @ 00a21748
                        */
      puVar4 = &UNK_0139f9a2;
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a2178c with catch @ 00a217bc
                        */
      if (param_2 - 0x7900 < 0xd0) {
        uVar2 = (param_2 >> 4) - 0x790;
        puVar4 = &UNK_0139f9ca;
      }
      else if (param_2 - 32000 < 0xa0) {
        uVar2 = (param_2 >> 4) - 2000;
        puVar4 = &UNK_0139f9fe;
      }
      else if (param_2 - 0x8100 < 0x70) {
        uVar2 = (param_2 >> 4) - 0x810;
        puVar4 = &UNK_0139fa26;
      }
      else if (param_2 - 0x8500 < 0xa0) {
        uVar2 = (param_2 >> 4) - 0x850;
        puVar4 = &UNK_0139fa42;
      }
      else if (param_2 >> 8 == 0x8a) {
        uVar2 = (param_2 >> 4) - 0x8a0;
        puVar4 = &UNK_0139fa6a;
      }
      else if (param_2 - 0x9700 < 0x160) {
        uVar2 = (param_2 >> 4) - 0x970;
        puVar4 = &UNK_0139faaa;
      }
      else if (param_2 - 0x9f00 < 0xc0) {
        uVar2 = (param_2 >> 4) - 0x9f0;
        puVar4 = &UNK_0139fb02;
      }
      else {
                    /* try { // try from 00a21bb8 to 00b21bbb has its CatchHandler @ 00a21be0 */
                    /* try { // try from 00a21bbc to 00b21c03 has its CatchHandler @ 00a21b54 */
        if (param_2 - 0x20100 < 0x140) {
          uVar2 = (param_2 >> 4) - 0x2010;
          puVar4 = &UNK_0139fb32;
        }
        else {
          if (0x19f < param_2 - 0x20a00) {
            return 0xffffffff;
          }
                    /* try { // try from 00a21c44 to 00b21c4b has its CatchHandler @ 00a21c7c */
          uVar2 = (param_2 >> 4) - 0x20a0;
          puVar4 = &UNK_0139fb82;
        }
      }
    }
  }
  else {
                    /* try { // try from 00a215dc to 00b215eb has its CatchHandler @ 00a216d0 */
    if (param_2 < 0x26b00) {
                    /* try { // try from 00a215ec to 00b21623 has its CatchHandler @ 00a2146c */
      if (param_2 - 0x21a00 < 0x70) {
        uVar2 = (param_2 >> 4) - 0x21a0;
        puVar4 = &UNK_0139fbea;
      }
      else if (param_2 - 0x21d00 < 0x130) {
        uVar2 = (param_2 >> 4) - 0x21d0;
        puVar4 = &UNK_0139fc06;
      }
      else if (param_2 - 0x22100 < 0xd0) {
                    /* try { // try from 00a21718 to 00b2171b has its CatchHandler @ 00a21740 */
        uVar2 = (param_2 >> 4) - 0x2210;
        puVar4 = &UNK_0139fc52;
      }
      else if (param_2 - 0x22700 < 0xa0) {
        uVar2 = (param_2 >> 4) - 0x2270;
        puVar4 = &UNK_0139fc86;
      }
      else if (param_2 - 0x23200 < 0x60) {
        uVar2 = (param_2 >> 4) - 0x2320;
        puVar4 = &UNK_0139fcae;
      }
      else if (param_2 - 0x23500 < 0x120) {
        uVar2 = (param_2 >> 4) - 0x2350;
        puVar4 = &UNK_0139fcc6;
      }
      else if ((param_2 & 0xffffffe0) == 0x23b00) {
        uVar2 = (param_2 >> 4) - 0x23b0;
        puVar4 = &UNK_012fd19c;
      }
      else if (param_2 - 0x23e00 < 0x2f0) {
        uVar2 = (param_2 >> 4) - 0x23e0;
        puVar4 = &UNK_0139fd0e;
      }
      else if (param_2 - 0x24200 < 0xc0) {
                    /* try { // try from 00a21a74 to 00b21a77 has its CatchHandler @ 00a21ab8 */
        uVar2 = (param_2 >> 4) - 0x2420;
        puVar4 = &UNK_0139fdca;
      }
      else if ((param_2 & 0xfffffff0) == 0x24b00) {
                    /* try { // try from 00a21b04 to 00b21b07 has its CatchHandler @ 00a21b40 */
        uVar2 = (param_2 >> 4) - 0x24b0;
        puVar4 = &UNK_0138ca7a;
      }
      else if (param_2 - 0x25400 < 0xa0) {
                    /* try { // try from 00a21ba0 to 00b21ba7 has its CatchHandler @ 00a21bdc */
        uVar2 = (param_2 >> 4) - 0x2540;
        puVar4 = &UNK_0139fdfa;
      }
      else {
        if (0x5f < param_2 - 0x25a00) {
          return 0xffffffff;
        }
        uVar2 = (param_2 >> 4) - 0x25a0;
        puVar4 = &UNK_0139fe22;
      }
    }
    else if (param_2 < 0x26c50) {
      uVar2 = (param_2 >> 4) - 0x26b0;
      puVar4 = &UNK_0139fe3a;
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a215dc with catch @ 00a216d0
                        */
      if (param_2 - 0x26e00 < 0x90) {
        uVar2 = (param_2 >> 4) - 0x26e0;
        puVar4 = &UNK_0139fe8e;
      }
      else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a2165c with catch @ 00a21750
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21624 with catch @ 00a21754
                        */
        if (param_2 - 0x27000 < 0xe0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21590 with catch @ 00a21768
                        */
          uVar2 = (param_2 >> 4) - 0x2700;
          puVar4 = &UNK_0139feb2;
        }
        else if ((param_2 & 0xfffffe00) == 0x27200) {
          uVar2 = (param_2 >> 4) - 0x2720;
          puVar4 = &UNK_0139feea;
        }
        else if (param_2 - 0x27b00 < 0x1d0) {
          uVar2 = (param_2 >> 4) - 0x27b0;
          puVar4 = &UNK_0139ff6a;
        }
        else if (param_2 - 0x28600 < 0xc0) {
          uVar2 = (param_2 >> 4) - 0x2860;
          puVar4 = &UNK_0139ffde;
        }
        else if (param_2 - 0x28900 < 0x70) {
          uVar2 = (param_2 >> 4) - 0x2890;
          puVar4 = &UNK_013a000e;
        }
        else if (param_2 - 0x28b00 < 0xc0) {
          uVar2 = (param_2 >> 4) - 0x28b0;
          puVar4 = &UNK_013a002a;
        }
        else if ((param_2 & 0xffffff80) == 0x29000) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21a74 with catch @ 00a21ab8
                        */
          uVar2 = (param_2 >> 4) - 0x2900;
          puVar4 = &UNK_012fce14;
        }
        else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21b04 with catch @ 00a21b40
                        */
          if (param_2 - 0x29800 < 0x150) {
                    /* try { // try from 00a21b54 to 00b21b9f has its CatchHandler @ 00a21b54
                       catch() { ... } // from try @ 00a21b54 with catch @ 00a21b54
                       catch() { ... } // from try @ 00a21bbc with catch @ 00a21b54 */
            uVar2 = (param_2 >> 4) - 0x2980;
            puVar4 = &UNK_013a005a;
          }
          else {
                    /* catch() { ... } // from try @ 00a21ba0 with catch @ 00a21bdc */
                    /* catch() { ... } // from try @ 00a21bb8 with catch @ 00a21be0 */
            if (param_2 - 0x29e00 < 0xc0) {
              uVar2 = (param_2 >> 4) - 0x29e0;
              puVar4 = &UNK_013a00ae;
            }
            else {
                    /* try { // try from 00a21c5c to 00b21c5f has its CatchHandler @ 00a21c80 */
                    /* try { // try from 00a21c60 to 00b21c9b has its CatchHandler @ 00a21c04 */
              if (param_2 - 0x2a100 < 0xc0) {
                uVar2 = (param_2 >> 4) - 0x2a10;
                puVar4 = &UNK_013a00de;
              }
              else {
                if (0x5f < param_2 - 0x2a300) {
                  return 0xffffffff;
                }
                uVar2 = (param_2 >> 4) - 0x2a30;
                puVar4 = &UNK_013a010e;
              }
            }
          }
        }
      }
    }
  }
                    /* try { // try from 00a21cc8 to 00b21ccb has its CatchHandler @ 00a21d0c */
  uVar1 = 1 << (ulong)(param_2 & 0xf);
  uVar3 = (uint)*(ushort *)((long)(puVar4 + (ulong)uVar2 * 4) + 2);
  if ((uVar1 & uVar3) == 0) {
    return 0xffffffff;
  }
  uVar3 = uVar3 & uVar1 - 1;
  uVar3 = (uVar3 >> 1 & 0x55555555) + (uVar3 & 0x55555555);
  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21cc8 with catch @ 00a21d0c
                        */
  uVar3 = (uVar3 >> 4 & 0xffffff0f) + (uVar3 & 0xf0f0f0f);
  *param_1 = *(ushort *)
              (&DAT_013a0126 +
              ((ulong)*(ushort *)(puVar4 + (ulong)uVar2 * 4) + (ulong)((uVar3 & 0xf) + (uVar3 >> 8))
              ) * 2) >> 8 |
             *(ushort *)
              (&DAT_013a0126 +
              ((ulong)*(ushort *)(puVar4 + (ulong)uVar2 * 4) + (ulong)((uVar3 & 0xf) + (uVar3 >> 8))
              ) * 2) << 8;
  return 2;
}

