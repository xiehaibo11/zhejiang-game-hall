
ulong FUN_010743dc(long *param_1,long *param_2,long param_3,uint param_4,char param_5)

{
  short sVar1;
  code *pcVar2;
  ushort uVar3;
  undefined2 uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  uint local_68;
  uint local_64;
  
  lVar15 = *(long *)(param_3 + 8);
  lVar14 = *(long *)(lVar15 + 0xc0);
  memset(param_1,0,0x170);
  uVar16 = param_4;
  if ((param_5 != '\0') || ((param_4 >> 1 & 1) != 0)) goto LAB_01074638;
  uVar6 = *(uint *)(param_2 + 0x42);
  uVar16 = param_4 & 0x80;
  if ((int)uVar6 < 0) {
    lVar17 = *param_2;
    lVar19 = *(long *)(lVar17 + 0xb8);
    param_2[0x42] = -1;
    uVar5 = *(ushort *)(lVar17 + 0x1e0);
    *(uint *)((long)param_2 + 0xec) = (uint)uVar5;
    uVar3 = *(ushort *)(lVar17 + 0x1e2);
    *(undefined4 *)(param_2 + 0x1d) = 0;
    param_2[0x21] = 0;
    *(undefined4 *)(param_2 + 0x1f) = 0;
    *(uint *)((long)param_2 + 0xfc) = (uint)uVar3;
    param_2[0x34] = *(long *)(lVar17 + 0x410);
    uVar4 = *(undefined2 *)(lVar17 + 0x1de);
    *(undefined2 *)((long)param_2 + 0xd9) = 0;
    param_2[0x1a] = 0;
    param_2[0x19] = 0;
    param_2[0x18] = 0;
    param_2[0x17] = 0;
    *(undefined2 *)(param_2 + 0x36) = uVar4;
    lVar20 = ft_mem_realloc(lVar19,0x28,0,uVar5,0,&local_68);
    param_2[0x1e] = lVar20;
    uVar6 = local_68;
    if (local_68 != 0) {
LAB_01074540:
      local_68 = uVar6;
      FUN_01075ed4(param_2);
      if (local_68 != 0) {
        return (ulong)local_68;
      }
      uVar6 = *(uint *)(param_2 + 0x42);
      goto LAB_01074554;
    }
    lVar20 = ft_mem_realloc(lVar19,0x28,0,*(undefined4 *)((long)param_2 + 0xfc),0,&local_68);
    param_2[0x20] = lVar20;
    uVar6 = local_68;
    if (local_68 != 0) goto LAB_01074540;
    lVar20 = ft_mem_realloc(lVar19,8,0,param_2[0x34],0,&local_68);
    param_2[0x35] = lVar20;
    uVar6 = local_68;
    if (local_68 != 0) goto LAB_01074540;
    lVar20 = ft_mem_realloc(lVar19,8,0,(short)param_2[0x36],0,&local_68);
    param_2[0x37] = lVar20;
    uVar6 = local_68;
    if (local_68 != 0) goto LAB_01074540;
    sVar1 = *(short *)(lVar17 + 0x1dc) + 4;
    param_2[0x3f] = 0;
    param_2[0x3e] = 0;
    param_2[0x3d] = 0;
    param_2[0x3c] = 0;
    param_2[0x3b] = 0;
    param_2[0x3a] = 0;
    param_2[0x39] = 0;
                    /* try { // try from 01074744 to 0117474b has its CatchHandler @ 010748f4 */
    param_2[0x38] = lVar19;
                    /* try { // try from 0107474c to 011747e3 has its CatchHandler @ 010746b4 */
    lVar20 = ft_mem_realloc(lVar19,0x10,0,sVar1,0,&local_64);
    param_2[0x3a] = lVar20;
    if (local_64 != 0) {
LAB_0107480c:
      lVar20 = param_2[0x38];
      uVar6 = local_64;
      if (lVar20 != 0) {
        ft_mem_free(lVar20,param_2[0x3e]);
        param_2[0x3e] = 0;
                    /* try { // try from 01074838 to 0117483f has its CatchHandler @ 010748ec */
        ft_mem_free(lVar20,param_2[0x3d]);
        param_2[0x3d] = 0;
                    /* try { // try from 01074840 to 0117488f has its CatchHandler @ 010746b4 */
        ft_mem_free(lVar20,param_2[0x3b]);
        param_2[0x3b] = 0;
        ft_mem_free(lVar20,param_2[0x3a]);
        param_2[0x3a] = 0;
        ft_mem_free(lVar20,param_2[0x3c]);
        param_2[0x3c] = 0;
        param_2[0x38] = 0;
        param_2[0x39] = 0;
        local_68 = local_64;
        uVar6 = local_64;
        if (local_64 == 0) goto LAB_01074880;
      }
      goto LAB_01074540;
    }
    lVar20 = ft_mem_realloc(lVar19,0x10,0,sVar1,0,&local_64);
    param_2[0x3b] = lVar20;
    if (local_64 != 0) goto LAB_0107480c;
    lVar20 = ft_mem_realloc(lVar19,0x10,0,sVar1,0,&local_64);
    param_2[0x3c] = lVar20;
    if (local_64 != 0) goto LAB_0107480c;
    lVar20 = ft_mem_realloc(lVar19,1,0,sVar1,0,&local_64);
    param_2[0x3d] = lVar20;
    if (local_64 != 0) goto LAB_0107480c;
                    /* try { // try from 010747e4 to 011747eb has its CatchHandler @ 010748f0 */
                    /* try { // try from 010747ec to 01174837 has its CatchHandler @ 010746b4 */
    lVar20 = ft_mem_realloc(lVar19,2,0,0,0,&local_64);
    param_2[0x3e] = lVar20;
    if (local_64 != 0) goto LAB_0107480c;
    *(short *)(param_2 + 0x39) = sVar1;
    *(undefined2 *)((long)param_2 + 0x1ca) = 0;
                    /* try { // try from 01074a9c to 01174a9f has its CatchHandler @ 01074ab0 */
    local_68 = 0;
                    /* try { // try from 01074aa0 to 01174ac3 has its CatchHandler @ 01074a70 */
LAB_01074880:
                    /* try { // try from 01074890 to 01174897 has its CatchHandler @ 010748e8 */
    *(short *)((long)param_2 + 0x1cc) = sVar1;
                    /* try { // try from 01074898 to 0117490f has its CatchHandler @ 010746b4 */
    memcpy(param_2 + 0x28,tt_default_graphics_state,0x60);
    pcVar10 = *(code **)(*(long *)(*(long *)(lVar17 + 0xb0) + 8) + 0x148);
    pcVar2 = TT_RunIns;
    if (pcVar10 != (code *)0x0) {
      pcVar2 = pcVar10;
    }
    *(code **)(lVar17 + 0x420) = pcVar2;
    lVar20 = *param_2;
    if ((char)param_2[0x40] == '\0') {
                    /* catch() { ... } // from try @ 01074890 with catch @ 010748e8 */
      lVar17 = *(long *)(*(long *)(lVar20 + 0xb0) + 0x38);
                    /* catch() { ... } // from try @ 01074838 with catch @ 010748ec */
    }
    else {
      lVar17 = param_2[0x41];
    }
    if (lVar17 == 0) {
      uVar6 = 0x99;
      goto LAB_01074540;
    }
                    /* catch() { ... } // from try @ 010747e4 with catch @ 010748f0 */
                    /* catch() { ... } // from try @ 01074744 with catch @ 010748f4 */
    uVar6 = FUN_01075b40(lVar17,lVar20,param_2);
    if (uVar6 != 0) goto LAB_01074540;
    *(undefined4 *)(lVar17 + 0x2e8) = 0;
    *(undefined8 *)(lVar17 + 0x20) = 0;
    *(undefined1 *)(lVar17 + 0x358) = 0;
    *(undefined8 *)(lVar17 + 0x340) = 0x40;
    *(undefined8 *)(lVar17 + 0x350) = 0;
    *(undefined8 *)(lVar17 + 0x348) = 0;
    *(undefined8 *)(lVar17 + 0x3c8) = 0x4000;
    *(undefined4 *)(lVar17 + 0x188) = 0;
    *(undefined2 *)(lVar17 + 0x1d0) = 0;
    *(char *)(lVar17 + 0x3c1) = (char)uVar16;
    *(undefined8 *)(lVar17 + 0x1d8) = 0x10000;
    *(undefined8 *)(lVar17 + 0x1e0) = 0;
    *(undefined8 *)(lVar17 + 0x198) = 0;
    *(undefined8 *)(lVar17 + 400) = 0;
    uVar11 = *(undefined8 *)(lVar20 + 0x3f8);
    uVar9 = *(undefined8 *)(lVar20 + 0x3f0);
    *(undefined8 *)(lVar17 + 0x318) = 0;
    *(undefined8 *)(lVar17 + 0x310) = 0;
    *(undefined8 *)(lVar17 + 0x328) = 0;
    *(undefined8 *)(lVar17 + 800) = 0;
    *(undefined8 *)(lVar17 + 0x300) = uVar11;
    *(undefined8 *)(lVar17 + 0x308) = uVar9;
    if (*(long *)(lVar20 + 0x3f0) == 0) {
      *(undefined4 *)(param_2 + 0x42) = 0;
    }
    else {
      *(undefined8 *)(lVar17 + 0x288) = uVar9;
      *(undefined8 *)(lVar17 + 0x278) = uVar11;
      *(undefined8 *)(lVar17 + 0x280) = 0;
      *(undefined4 *)(lVar17 + 0x270) = 1;
      uVar6 = (**(code **)(lVar20 + 0x420))(lVar17);
      *(uint *)(param_2 + 0x42) = uVar6;
      if (uVar6 != 0) goto LAB_01074540;
    }
    *(undefined4 *)(param_2 + 0x1d) = *(undefined4 *)(lVar17 + 0x2c0);
    *(undefined4 *)(param_2 + 0x1f) = *(undefined4 *)(lVar17 + 0x2d0);
    *(undefined4 *)(param_2 + 0x21) = *(undefined4 *)(lVar17 + 0x2e0);
    *(undefined4 *)((long)param_2 + 0x10c) = *(undefined4 *)(lVar17 + 0x2e4);
    lVar20 = *(long *)(lVar17 + 0x300);
    param_2[0x23] = *(long *)(lVar17 + 0x308);
    param_2[0x22] = lVar20;
    lVar20 = *(long *)(lVar17 + 0x310);
    param_2[0x25] = *(long *)(lVar17 + 0x318);
    param_2[0x24] = lVar20;
    lVar20 = *(long *)(lVar17 + 800);
    param_2[0x27] = *(long *)(lVar17 + 0x328);
    param_2[0x26] = lVar20;
    if ((int)*(uint *)((long)param_2 + 0x214) < 0) goto LAB_010749e0;
  }
  else {
    uVar7 = *(uint *)((long)param_2 + 0x214);
    if ((int)uVar7 < 0) {
LAB_01074554:
      if ((uVar6 != 0) || (-1 < *(int *)((long)param_2 + 0x214))) goto LAB_01074564;
LAB_010749e0:
      if (param_2[0x34] != 0) {
        lVar20 = *param_2;
        uVar8 = 1;
        uVar21 = 0;
        do {
          uVar18 = uVar8;
          uVar9 = FT_MulFix((long)*(short *)(*(long *)(lVar20 + 0x418) + uVar21 * 2),param_2[0x16]);
          *(undefined8 *)(param_2[0x35] + uVar21 * 8) = uVar9;
          uVar8 = (ulong)((int)uVar18 + 1);
          uVar21 = uVar18;
        } while (uVar18 < (ulong)param_2[0x34]);
      }
      uVar8 = (ulong)*(ushort *)((long)param_2 + 0x1cc);
      if (uVar8 != 0) {
        puVar12 = (undefined8 *)param_2[0x3a];
        puVar13 = (undefined8 *)param_2[0x3b];
        do {
          *puVar12 = 0;
          puVar12[1] = 0;
          *puVar13 = 0;
          puVar13[1] = 0;
          uVar8 = uVar8 - 1;
          puVar12 = puVar12 + 2;
          puVar13 = puVar13 + 2;
        } while (uVar8 != 0);
      }
      uVar5 = *(ushort *)(param_2 + 0x36);
      if (uVar5 != 0) {
        uVar6 = (uint)uVar5;
        if (uVar5 < 2) {
          uVar6 = 1;
        }
        memset((void *)param_2[0x37],0,(ulong)(uVar6 - 1) * 8 + 8);
      }
                    /* try { // try from 01074a70 to 01174a9b has its CatchHandler @ 01074a70
                       catch() { ... } // from try @ 01074a70 with catch @ 01074a70
                       catch() { ... } // from try @ 01074aa0 with catch @ 01074a70 */
      memcpy(param_2 + 0x28,tt_default_graphics_state,0x60);
      uVar8 = FUN_01075d80(param_2,uVar16);
      uVar7 = (uint)uVar8;
    }
    else {
      if (uVar6 != 0) {
        return (ulong)uVar6;
      }
      uVar8 = (ulong)uVar7;
    }
    if (uVar7 != 0) {
      return uVar8;
    }
  }
LAB_01074564:
  if ((char)param_2[0x40] == '\0') {
    lVar20 = *(long *)(*(long *)(lVar15 + 0xb0) + 0x38);
  }
  else {
    lVar20 = param_2[0x41];
  }
  if (lVar20 == 0) {
    return 0x99;
  }
  uVar8 = FUN_01075b40(lVar20,lVar15,param_2);
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  if (((param_4 & 0xf0000) != 0x20000) != (bool)*(char *)(lVar20 + 0x420)) {
    *(bool *)(lVar20 + 0x420) = (param_4 & 0xf0000) != 0x20000;
    if (param_2[0x34] != 0) {
      uVar8 = 1;
      uVar21 = 0;
      do {
        uVar18 = uVar8;
        uVar9 = FT_MulFix((long)*(short *)(*(long *)(lVar15 + 0x418) + uVar21 * 2),param_2[0x16]);
        *(undefined8 *)(param_2[0x35] + uVar21 * 8) = uVar9;
        uVar8 = (ulong)((int)uVar18 + 1);
        uVar21 = uVar18;
      } while (uVar18 < (ulong)param_2[0x34]);
    }
    uVar8 = FUN_01075d80(param_2,uVar16);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
  }
  uVar16 = (*(byte *)(lVar20 + 0x25c) & 1) << 1 | param_4;
  if ((*(byte *)(lVar20 + 0x25c) >> 1 & 1) != 0) {
    memcpy((void *)(lVar20 + 0x210),tt_default_graphics_state,0x60);
  }
  *(byte *)(lVar20 + 0x3c1) = (byte)param_4 & 0x80;
  param_1[0x23] = lVar20;
  param_1[0x24] = *(long *)(lVar20 + 0x2b8);
LAB_01074638:
  if (*(long *)(*(long *)(lVar15 + 0xf0) + 0x60) == 0) {
    uVar8 = (**(code **)(lVar15 + 0x330))(lVar15,0x676c7966,lVar14,0);
    lVar20 = 0;
    if (((uint)uVar8 & 0xff) != 0x8e) {
      if ((uint)uVar8 != 0) {
        return uVar8;
      }
      lVar20 = FT_Stream_Pos(lVar14);
    }
  }
  else {
    lVar20 = 0;
  }
  param_1[0x12] = lVar20;
  if (param_5 == '\0') {
    lVar20 = **(long **)(param_3 + 0x128);
    FT_GlyphLoader_Rewind(lVar20);
    param_1[3] = lVar20;
  }
  *param_1 = lVar15;
  param_1[1] = (long)param_2;
                    /* try { // try from 010746b4 to 01174743 has its CatchHandler @ 010746b4
                       catch() { ... } // from try @ 010746b4 with catch @ 010746b4
                       catch() { ... } // from try @ 0107474c with catch @ 010746b4
                       catch() { ... } // from try @ 010747ec with catch @ 010746b4
                       catch() { ... } // from try @ 01074840 with catch @ 010746b4
                       catch() { ... } // from try @ 01074898 with catch @ 010746b4 */
  param_1[2] = param_3;
  param_1[4] = (long)(int)uVar16;
  param_1[6] = lVar14;
  return 0;
}

