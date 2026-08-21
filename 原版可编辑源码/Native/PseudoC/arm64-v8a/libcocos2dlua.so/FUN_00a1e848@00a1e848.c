
ulong FUN_00a1e848(long param_1,ushort *param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  ushort *puVar10;
  undefined2 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((*(uint *)(param_1 + 0x44) & 0xff) == 0) {
    uVar9 = 0;
    if (0x7f < param_3) {
LAB_00a1e908:
      iVar4 = FUN_00a208f0(&local_4c,param_3);
      iVar8 = (int)uVar9;
      if (iVar4 == -1) {
LAB_00a1e944:
                    /* try { // try from 00a1e944 to 00b1e99b has its CatchHandler @ 00a1e8a8 */
        iVar4 = FUN_00a20bf4(&local_4c,param_3);
        if (iVar4 != -1) {
          if (iVar4 != 2) {
LAB_00a1ea30:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if ((param_3 & 0xffffffdf) == 0xca) {
                    /* catch() { ... } // from try @ 00a1e93c with catch @ 00a1e980 */
            if (((char)local_4c != -0x78) || ((local_4c._1_1_ != 0x66 && (local_4c._1_1_ != 0xa7))))
            goto LAB_00a1ea30;
            *(uint *)(param_1 + 0x44) = (uint)local_4c._1_1_;
            goto LAB_00a1e9d4;
          }
LAB_00a1e9b0:
          uVar9 = (ulong)(iVar8 + 2);
          if (param_4 < uVar9) goto LAB_00a1e9d0;
          goto LAB_00a1ea00;
        }
                    /* try { // try from 00a1e99c to 00b1e9e7 has its CatchHandler @ 00a1e99c
                       catch() { ... } // from try @ 00a1e99c with catch @ 00a1e99c
                       catch() { ... } // from try @ 00a1e9ec with catch @ 00a1e99c */
        iVar4 = FUN_00a20e58(&local_4c,param_3);
                    /* catch() { ... } // from try @ 00a1e9e8 with catch @ 00a1ea20 */
        if ((iVar4 != -1) || (iVar4 = FUN_00a2159c(&local_4c,param_3), iVar4 != -1)) {
          if (iVar4 != 2) goto LAB_00a1ea30;
          goto LAB_00a1e9b0;
        }
                    /* try { // try from 00a1ea34 to 00b1ee33 has its CatchHandler @ 00a1ea34
                       catch() { ... } // from try @ 00a1ea34 with catch @ 00a1ea34
                       catch() { ... } // from try @ 00a1eeb4 with catch @ 00a1ea34 */
        if (0xef < param_3 - 0x3400) {
          if (param_3 >> 7 == 0x70) {
            uVar5 = (param_3 >> 4) - 0x380;
            puVar7 = &UNK_012fce34;
            goto LAB_00a1ef7c;
          }
          if ((param_3 & 0xffffff00) == 0x3a00) {
            uVar5 = (param_3 >> 4) - 0x3a0;
            puVar7 = &UNK_013a041c;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x3e00 < 0xf0) {
            uVar5 = (param_3 >> 4) - 0x3e0;
            puVar7 = &UNK_013a045c;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x4000 < 400) {
            uVar5 = (param_3 >> 4) - 0x400;
            puVar7 = &UNK_013a0498;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x4300 < 0x1f0) {
            uVar5 = (param_3 >> 4) - 0x430;
            puVar7 = &UNK_013a04fc;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x4600 < 0xb0) {
            uVar5 = (param_3 >> 4) - 0x460;
            puVar7 = &UNK_013a0578;
            goto LAB_00a1ef7c;
          }
          if (param_3 >> 6 == 0x124) {
            uVar5 = (param_3 >> 4) - 0x490;
            puVar7 = &UNK_012fc6b4;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x5200 < 0x50) {
            uVar5 = (param_3 >> 4) - 0x520;
            puVar7 = &UNK_013a05a4;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x5400 < 0x50) {
            uVar5 = (param_3 >> 4) - 0x540;
            puVar7 = &UNK_013a05b8;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x5700 < 0x1a0) {
            uVar5 = (param_3 >> 4) - 0x570;
            puVar7 = &UNK_013a05cc;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x6200 < 0xd0) {
            uVar5 = (param_3 >> 4) - 0x620;
            puVar7 = &UNK_013a0634;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x6600 < 400) {
            uVar5 = (param_3 >> 4) - 0x660;
            puVar7 = &UNK_013a0668;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x6a00 < 0x30) {
            uVar5 = (param_3 >> 4) - 0x6a0;
            puVar7 = &UNK_013a06cc;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x7000 < 0x70) {
            uVar5 = (param_3 >> 4) - 0x700;
            puVar7 = &UNK_013a06d8;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x7300 < 0x1d0) {
            uVar5 = (param_3 >> 4) - 0x730;
            puVar7 = &UNK_013a06f4;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x7900 < 0x2d0) {
            uVar5 = (param_3 >> 4) - 0x790;
            puVar7 = &UNK_013a0768;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x8400 < 0x220) {
            uVar5 = (param_3 >> 4) - 0x840;
            puVar7 = &UNK_013a081c;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x8800 < 0xa0) {
            uVar5 = (param_3 >> 4) - 0x880;
            puVar7 = &UNK_013a08a4;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x8b00 < 0x90) {
            uVar5 = (param_3 >> 4) - 0x8b0;
            puVar7 = &UNK_013a08cc;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x9000 < 0x50) {
            uVar5 = (param_3 >> 4) - 0x900;
            puVar7 = &UNK_013a08f0;
            goto LAB_00a1ef7c;
          }
          if (param_3 >> 5 == 0x490) {
            uVar5 = (param_3 >> 4) - 0x920;
            puVar7 = &UNK_012fd1a4;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x9400 < 0x30) {
            uVar5 = (param_3 >> 4) - 0x940;
            puVar7 = &UNK_013a0904;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x9700 < 0x50) {
            uVar5 = (param_3 >> 4) - 0x970;
            puVar7 = &UNK_013a0910;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x9f00 < 0xd0) {
            uVar5 = (param_3 >> 4) - 0x9f0;
            puVar7 = &UNK_013a0924;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x20a00 < 0x90) {
            uVar5 = (param_3 >> 4) - 0x20a0;
            puVar7 = &UNK_013a0958;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x21d00 < 0x60) {
            uVar5 = (param_3 >> 4) - 0x21d0;
            puVar7 = &UNK_013a097c;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x22400 < 0xd0) {
            uVar5 = (param_3 >> 4) - 0x2240;
            puVar7 = &UNK_013a0994;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x23100 < 0x160) {
                    /* try { // try from 00a1ee34 to 00b1ee67 has its CatchHandler @ 00a1ef34 */
            uVar5 = (param_3 >> 4) - 0x2310;
            puVar7 = &UNK_013a09c8;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x23500 < 0x1a0) {
            uVar5 = (param_3 >> 4) - 0x2350;
            puVar7 = &UNK_013a0a20;
            goto LAB_00a1ef7c;
          }
                    /* try { // try from 00a1ee68 to 00b1ee7b has its CatchHandler @ 00a1ef00 */
          if (param_3 - 0x24100 < 0x70) {
            uVar5 = (param_3 >> 4) - 0x2410;
            puVar7 = &UNK_013a0a88;
                    /* try { // try from 00a1ee80 to 00b1eeb3 has its CatchHandler @ 00a1ef04 */
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x25800 < 0xe0) {
            uVar5 = (param_3 >> 4) - 0x2580;
            puVar7 = &UNK_013a0aa4;
            goto LAB_00a1ef7c;
          }
                    /* try { // try from 00a1eeb4 to 00b1ef4f has its CatchHandler @ 00a1ea34 */
          if (param_3 - 0x25d00 < 0xc0) {
            uVar5 = (param_3 >> 4) - 0x25d0;
            puVar7 = &UNK_013a0adc;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x26000 < 0x30) {
            uVar5 = (param_3 >> 4) - 0x2600;
            puVar7 = &UNK_013a0b0c;
            goto LAB_00a1ef7c;
          }
                    /* catch() { ... } // from try @ 00a1ee68 with catch @ 00a1ef00 */
                    /* catch() { ... } // from try @ 00a1ee80 with catch @ 00a1ef04 */
          if (param_3 - 0x26e00 < 0x90) {
            uVar5 = (param_3 >> 4) - 0x26e0;
            puVar7 = &UNK_013a0b18;
            goto LAB_00a1ef7c;
          }
          if (param_3 - 0x27b00 < 0x70) {
            uVar5 = (param_3 >> 4) - 0x27b0;
                    /* catch() { ... } // from try @ 00a1ee34 with catch @ 00a1ef34 */
            puVar7 = (undefined *)0x13a0b3c;
            goto LAB_00a1ef7c;
          }
          if (param_3 >> 4 == 0x2890) {
                    /* try { // try from 00a1ef50 to 00b1efa7 has its CatchHandler @ 00a1ef50
                       catch() { ... } // from try @ 00a1ef50 with catch @ 00a1ef50
                       catch() { ... } // from try @ 00a1efc0 with catch @ 00a1ef50
                       catch() { ... } // from try @ 00a1f070 with catch @ 00a1ef50
                       catch() { ... } // from try @ 00a1f0c0 with catch @ 00a1ef50
                       catch() { ... } // from try @ 00a1f10c with catch @ 00a1ef50 */
            uVar5 = (param_3 >> 4) - 0x2890;
            puVar7 = &UNK_0138ca7e;
            goto LAB_00a1ef7c;
          }
          if ((param_3 & 0xffffff00) == 0x2ad00) {
            uVar5 = (param_3 >> 4) - 0x2ad0;
            puVar7 = &UNK_013a0b58;
            goto LAB_00a1ef7c;
          }
LAB_00a1f008:
          uVar9 = 0xffffffff;
                    /* try { // try from 00a1f00c to 00b1f06f has its CatchHandler @ 00a1f13c */
          goto LAB_00a1e9d4;
        }
        uVar5 = (param_3 >> 4) - 0x340;
        puVar7 = &DAT_013a03e0;
LAB_00a1ef7c:
        uVar1 = 1 << (ulong)(param_3 & 0xf);
        uVar6 = (uint)*(ushort *)((long)(puVar7 + (ulong)uVar5 * 4) + 2);
        if ((uVar1 & uVar6) == 0) goto LAB_00a1f008;
        uVar6 = uVar6 & uVar1 - 1;
                    /* try { // try from 00a1efa8 to 00b1efbf has its CatchHandler @ 00a1f13c */
        uVar6 = (uVar6 >> 1 & 0x55555555) + (uVar6 & 0x55555555);
        uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
                    /* try { // try from 00a1efc0 to 00b1f00b has its CatchHandler @ 00a1ef50 */
        uVar6 = (uVar6 >> 4 & 0xffffff0f) + (uVar6 & 0xf0f0f0f);
        uVar9 = (ulong)(iVar8 + 2);
        local_4c = *(ushort *)
                    (&DAT_013a0b98 +
                    ((ulong)*(ushort *)(puVar7 + (ulong)uVar5 * 4) +
                    (ulong)((uVar6 & 0xf) + (uVar6 >> 8))) * 2) >> 8 |
                   *(ushort *)
                    (&DAT_013a0b98 +
                    ((ulong)*(ushort *)(puVar7 + (ulong)uVar5 * 4) +
                    (ulong)((uVar6 & 0xf) + (uVar6 >> 8))) * 2) << 8;
        if (param_4 < uVar9) goto LAB_00a1e9d0;
        *param_2 = local_4c;
      }
      else {
        if (iVar4 != 2) goto LAB_00a1ea30;
                    /* try { // try from 00a1e93c to 00b1e943 has its CatchHandler @ 00a1e980 */
        if (((char)local_4c == -0x39) || (((char)local_4c == -0x3a && (0xa0 < local_4c._1_1_))))
        goto LAB_00a1e944;
        uVar9 = (ulong)(iVar8 + 2);
        if (param_4 < uVar9) goto LAB_00a1e9d0;
LAB_00a1ea00:
        *(char *)param_2 = (char)local_4c;
        *(byte *)((long)param_2 + 1) = local_4c._1_1_;
      }
      *(undefined4 *)(param_1 + 0x44) = 0;
      goto LAB_00a1e9d4;
    }
LAB_00a1e8d0:
    if (uVar9 < param_4) {
      *(char *)param_2 = (char)param_3;
      *(undefined4 *)(param_1 + 0x44) = 0;
      uVar9 = (ulong)((uint)uVar9 | 1);
      goto LAB_00a1e9d4;
    }
  }
  else {
    cVar2 = (char)*(uint *)(param_1 + 0x44);
    if ((param_3 | 8) == 0x30c) {
      if (1 < param_4) {
        *(undefined1 *)param_2 = 0x88;
                    /* try { // try from 00a1e8a8 to 00b1e93b has its CatchHandler @ 00a1e8a8
                       catch() { ... } // from try @ 00a1e8a8 with catch @ 00a1e8a8
                       catch() { ... } // from try @ 00a1e944 with catch @ 00a1e8a8 */
        *(byte *)((long)param_2 + 1) = cVar2 + ((byte)(param_3 >> 2) & 6) + -4;
        *(undefined4 *)(param_1 + 0x44) = 0;
        uVar9 = 2;
        goto LAB_00a1e9d4;
      }
    }
    else if (1 < param_4) {
      *(char *)((long)param_2 + 1) = cVar2;
      puVar10 = param_2 + 1;
      *(undefined1 *)param_2 = 0x88;
      uVar9 = 2;
      param_2 = puVar10;
      if (param_3 < 0x80) goto LAB_00a1e8d0;
      goto LAB_00a1e908;
    }
  }
LAB_00a1e9d0:
  uVar9 = 0xfffffffe;
LAB_00a1e9d4:
  if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 00a1e9e8 to 00b1e9eb has its CatchHandler @ 00a1ea20 */
                    /* try { // try from 00a1e9ec to 00b1ea33 has its CatchHandler @ 00a1e99c */
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

