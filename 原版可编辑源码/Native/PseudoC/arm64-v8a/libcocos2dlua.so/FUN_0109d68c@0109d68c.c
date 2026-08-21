
/* WARNING: Removing unreachable block (ram,0x0109df58) */

ulong FUN_0109d68c(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,long *param_5)

{
  long *plVar1;
  undefined2 *puVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  undefined2 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined4 uVar20;
  undefined *puVar21;
  long *plVar22;
  short sVar23;
  long *plVar24;
  long lVar25;
  ushort local_a0;
  ushort local_9e;
  ulong local_78;
  uint local_64;
  
  lVar25 = *(long *)(param_2 + 0x360);
  if ((int)param_4 < 1) {
    bVar8 = false;
    bVar7 = false;
  }
  else {
                    /* catch() { ... } // from try @ 0109d79c with catch @ 0109d6d0 */
    bVar7 = false;
    bVar8 = false;
    uVar13 = (ulong)param_4;
    do {
      if (*param_5 == 0x69677066) {
        bVar7 = true;
      }
      else if (*param_5 == 0x69677073) {
        bVar8 = true;
      }
      uVar13 = uVar13 - 1;
                    /* try { // try from 0109d708 to 0119d70f has its CatchHandler @ 0109d8a0 */
      param_5 = param_5 + 2;
    } while (uVar13 != 0);
  }
  if (*(long *)(*(long *)(param_2 + 0xf0) + 0x60) == 0) {
    uVar3 = *(ushort *)(param_2 + 0x120);
    if ((ulong)uVar3 != 0) {
                    /* try { // try from 0109d738 to 0119d743 has its CatchHandler @ 0109d8c0 */
      plVar24 = *(long **)(param_2 + 0x128);
      plVar1 = plVar24 + (ulong)uVar3 * 4;
      plVar22 = plVar24;
      do {
        if ((*plVar22 == 0x676c7966) && (plVar22[3] != 0)) goto LAB_0109d728;
                    /* try { // try from 0109d758 to 0119d763 has its CatchHandler @ 0109d8a8 */
        plVar22 = plVar22 + 4;
      } while (plVar22 < plVar1);
      if (uVar3 != 0) {
        do {
                    /* try { // try from 0109d770 to 0119d77b has its CatchHandler @ 0109d8a4 */
          if ((*plVar24 == 0x43464620) && (plVar24[3] != 0)) goto LAB_0109d794;
          plVar24 = plVar24 + 4;
        } while (plVar24 < plVar1);
      }
    }
                    /* try { // try from 0109d790 to 0119d79b has its CatchHandler @ 0109d8bc */
    plVar24 = (long *)0x0;
LAB_0109d794:
    uVar11 = (uint)(plVar24 != (long *)0x0);
  }
  else {
LAB_0109d728:
    uVar11 = 1;
  }
                    /* try { // try from 0109d79c to 0119d91f has its CatchHandler @ 0109d6d0 */
  iVar10 = (**(code **)(param_2 + 0x330))(param_2,0x73626978,param_1,0);
  if (((iVar10 == 0) || (uVar11 == 0)) && (*(code **)(lVar25 + 0x88) != (code *)0x0)) {
    local_64 = (**(code **)(lVar25 + 0x88))(param_2,param_1);
    bVar9 = local_64 == 0;
    if ((iVar10 == 0) || (local_64 != 0)) goto LAB_0109d7fc;
  }
  else {
    bVar9 = false;
LAB_0109d7fc:
    uVar13 = (**(code **)(lVar25 + 0x30))(param_2,param_1);
    local_64 = (uint)uVar13;
    if (local_64 != 0) {
      return uVar13;
    }
  }
  if (*(short *)(param_2 + 0x152) == 0) {
    return 8;
  }
  uVar13 = (ulong)(uVar11 & iVar10 != 0);
  (**(code **)(lVar25 + 0x48))(param_2,param_1);
  (**(code **)(lVar25 + 0x40))(param_2,param_1);
  (**(code **)(lVar25 + 0x60))(param_2,param_1);
  uVar11 = (**(code **)(lVar25 + 0x58))(param_2,param_1);
  local_64 = uVar11;
  if (bVar9) {
LAB_0109d86c:
    pcVar14 = *(code **)(lVar25 + 0xc0);
  }
  else {
    uVar12 = (**(code **)(lVar25 + 0x38))(param_2,param_1,0);
    local_64 = (uint)uVar12;
    if (local_64 == 0) {
      uVar12 = (**(code **)(lVar25 + 0xb8))(param_2,param_1,0);
      if (((uint)uVar12 & 0xff) == 0x8e) {
        plVar22 = *(long **)(*(long *)(param_2 + 0xf0) + 0x60);
        if (plVar22 == (long *)0x0) {
          return 0x93;
        }
        if (*(long *)(*plVar22 + 0x10) == 0) {
          return 0x93;
        }
        goto LAB_0109da8c;
      }
      if ((uint)uVar12 != 0) {
        return uVar12;
      }
    }
    else {
      if ((local_64 & 0xff) != 0x8e) {
        return uVar12;
      }
      if (*(long *)(param_2 + 0x118) == 0x74727565) {
        uVar13 = 0;
      }
      else {
        plVar22 = *(long **)(*(long *)(param_2 + 0xf0) + 0x60);
        if (plVar22 == (long *)0x0) {
          return 0x8f;
        }
        if (*(long *)(*plVar22 + 0x10) == 0) {
          return 0x8f;
        }
LAB_0109da8c:
        *(undefined2 *)(param_2 + 0x1b6) = 0;
      }
    }
    local_64 = 0;
    uVar12 = (**(code **)(lVar25 + 0x38))(param_2,param_1,1);
    local_64 = (uint)uVar12;
    if (local_64 == 0) {
      uVar12 = (**(code **)(lVar25 + 0xb8))(param_2,param_1,1);
      local_64 = (uint)uVar12;
      if (local_64 != 0) goto LAB_0109dad0;
      *(undefined1 *)(param_2 + 0x1f0) = 1;
    }
    else {
LAB_0109dad0:
      if (((uint)uVar12 != 0) && (((uint)uVar12 & 0xff) != 0x8e)) {
        return uVar12;
      }
    }
    local_64 = (**(code **)(lVar25 + 0x50))(param_2,param_1);
    if (local_64 == 0) goto LAB_0109d86c;
    *(undefined2 *)(param_2 + 600) = 0xffff;
    pcVar14 = *(code **)(lVar25 + 0xc0);
  }
  if (pcVar14 != (code *)0x0) {
    uVar12 = (*pcVar14)(param_2,param_1);
    local_64 = (uint)uVar12;
    if (local_64 != 0) {
      if ((local_64 & 0xff) != 0x8e) {
        return uVar12;
      }
      local_64 = 0;
    }
  }
                    /* catch() { ... } // from try @ 0109d708 with catch @ 0109d8a0 */
                    /* catch() { ... } // from try @ 0109d770 with catch @ 0109d8a4 */
  uVar12 = (**(code **)(lVar25 + 0x80))(param_2,param_1);
                    /* catch() { ... } // from try @ 0109d758 with catch @ 0109d8a8 */
  local_64 = (uint)uVar12;
  if (local_64 != 0) {
    if ((local_64 & 0xff) != 0x8e) {
      return uVar12;
    }
                    /* catch() { ... } // from try @ 0109d790 with catch @ 0109d8bc */
    *(undefined8 *)(param_2 + 0x380) = 0;
  }
                    /* catch() { ... } // from try @ 0109d738 with catch @ 0109d8c0 */
  (**(code **)(lVar25 + 0x78))(param_2,param_1);
  local_64 = (**(code **)(lVar25 + 0x70))(param_2,param_1);
  plVar22 = (long *)(param_2 + 0x30);
  *plVar22 = 0;
  *(ulong *)(param_2 + 0x20) = (ulong)*(ushort *)(param_2 + 0x1d0);
  plVar24 = (long *)(param_2 + 0x28);
  *plVar24 = 0;
  if ((*(short *)(param_2 + 600) == -1) || ((*(byte *)(param_2 + 0x2ad) & 1) == 0)) {
    uVar12 = FUN_0109fcf4(param_2,0x15,plVar24);
    local_64 = (uint)uVar12;
    if (local_64 != 0) {
      return uVar12;
    }
    lVar15 = *plVar24;
    if ((!bVar7) && (lVar15 == 0)) {
                    /* try { // try from 0109d944 to 0119dccf has its CatchHandler @ 0109d944
                       catch() { ... } // from try @ 0109d944 with catch @ 0109d944
                       catch() { ... } // from try @ 0109dcd4 with catch @ 0109d944
                       catch() { ... } // from try @ 0109de5c with catch @ 0109d944
                       catch() { ... } // from try @ 0109df38 with catch @ 0109d944 */
      uVar12 = FUN_0109fcf4(param_2,0x10,plVar24);
      if ((int)uVar12 != 0) {
        return uVar12;
      }
      lVar15 = *plVar24;
    }
    local_64 = 0;
    if ((lVar15 == 0) && (uVar12 = FUN_0109fcf4(param_2,1,plVar24), (int)uVar12 != 0)) {
      return uVar12;
    }
    local_64 = 0;
    uVar12 = FUN_0109fcf4(param_2,0x16,plVar22);
    local_64 = (uint)uVar12;
    if (local_64 != 0) {
      return uVar12;
    }
    lVar15 = *plVar22;
    if ((!bVar8) && (lVar15 == 0)) {
      uVar12 = FUN_0109fcf4(param_2,0x11,plVar22);
      if ((int)uVar12 != 0) {
        return uVar12;
      }
      lVar15 = *plVar22;
    }
  }
  else {
    if (bVar7) {
LAB_0109da48:
      uVar12 = FUN_0109fcf4(param_2,1,plVar24);
      if ((int)uVar12 != 0) {
        return uVar12;
      }
    }
    else {
      uVar12 = FUN_0109fcf4(param_2,0x10,plVar24);
      if ((int)uVar12 != 0) {
        return uVar12;
      }
      local_64 = 0;
      if (*plVar24 == 0) goto LAB_0109da48;
    }
    local_64 = 0;
    if ((!bVar8) && (uVar12 = FUN_0109fcf4(param_2,0x11,plVar22), (int)uVar12 != 0)) {
      return uVar12;
    }
    lVar15 = *plVar22;
  }
  local_64 = 0;
  if (lVar15 == 0) {
    local_64 = 0;
    uVar12 = FUN_0109fcf4(param_2,2,plVar22);
    local_64 = (uint)uVar12;
    if (local_64 != 0) {
      return uVar12;
    }
  }
  uVar12 = *(ulong *)(param_2 + 0x10) | 0x4000;
  if ((*(uint *)(param_2 + 0x4c0) & 0xfffffffe) != 2) {
    uVar12 = *(ulong *)(param_2 + 0x10);
  }
  uVar16 = uVar12 | uVar13 | 0x18;
  if ((uVar11 == 0) && (*(long *)(param_2 + 0x2e0) != 0x30000)) {
    uVar16 = uVar12 | uVar13 | 0x218;
  }
  if (*(long *)(param_2 + 0x2f8) != 0) {
    uVar16 = uVar16 | 4;
  }
  if (*(char *)(param_2 + 0x1f0) != '\0') {
    uVar16 = uVar16 | 0x20;
  }
  if (*(int *)(param_2 + 0x4dc) != 0) {
    uVar16 = uVar16 | 0x40;
  }
  if ((ulong)*(ushort *)(param_2 + 0x120) != 0) {
    plVar24 = *(long **)(param_2 + 0x128);
    plVar1 = plVar24 + (ulong)*(ushort *)(param_2 + 0x120) * 4;
    plVar22 = plVar24;
    do {
      if ((*plVar22 == 0x676c7966) && (plVar18 = plVar24, plVar22[3] != 0)) goto LAB_0109dc48;
      plVar22 = plVar22 + 4;
    } while (plVar22 < plVar1);
  }
  goto LAB_0109dca4;
  while (plVar18 = plVar18 + 4, plVar18 < plVar1) {
LAB_0109dc48:
    if ((*plVar18 == 0x66766172) && (plVar18[3] != 0)) goto LAB_0109dc74;
  }
  goto LAB_0109dca4;
  while (plVar24 = plVar24 + 4, plVar24 < plVar1) {
LAB_0109dc74:
    if ((*plVar24 == 0x67766172) && (plVar24[3] != 0)) goto LAB_0109dc98;
  }
  plVar24 = (long *)0x0;
LAB_0109dc98:
  if (plVar24 != (long *)0x0) {
    uVar16 = uVar16 | 0x100;
  }
LAB_0109dca4:
  *(ulong *)(param_2 + 0x10) = uVar16;
  if (((int)uVar13 == 0) || (*(short *)(param_2 + 600) == -1)) {
                    /* try { // try from 0109dcd4 to 0119dd47 has its CatchHandler @ 0109d944 */
    uVar13 = (ulong)((*(ushort *)(param_2 + 0x180) & 1) << 1);
    uVar11 = *(ushort *)(param_2 + 0x180) & 2;
    uVar12 = uVar13 | 1;
  }
  else {
    uVar3 = *(ushort *)(param_2 + 0x2ac);
    uVar13 = (ulong)uVar3 & 1;
    if ((uVar3 & 0x200) != 0) {
      uVar13 = 1;
    }
    uVar11 = uVar3 & 0x20;
    uVar12 = uVar13 | 2;
                    /* try { // try from 0109dcd0 to 0119dcd3 has its CatchHandler @ 0109df38 */
  }
  if (uVar11 != 0) {
    uVar13 = uVar12;
  }
  *(ulong *)(param_2 + 0x18) = uVar13;
  FUN_0109ff28(param_2);
  iVar10 = *(int *)(param_2 + 0x48);
  if (0 < iVar10) {
    lVar17 = *(long *)(param_2 + 0x50);
    lVar15 = 0;
    do {
      lVar19 = *(long *)(lVar17 + lVar15 * 8);
      if (*(ushort *)(lVar19 + 0xc) < 4) {
        uVar3 = *(ushort *)(lVar19 + 0xe);
        puVar21 = &UNK_01460200;
                    /* try { // try from 0109dd48 to 0119dd4f has its CatchHandler @ 0109df68 */
        switch(*(ushort *)(lVar19 + 0xc)) {
        case 0:
          puVar21 = &UNK_0146020c;
          break;
        case 1:
          if (uVar3 != 0) goto LAB_0109dd78;
          puVar21 = &UNK_01460218;
          break;
        case 3:
          if ((10 < uVar3) || ((0x47fU >> (ulong)(uVar3 & 0x1f) & 1) == 0)) goto LAB_0109dd78;
          puVar21 = (&PTR_DAT_0172ba90)[(short)uVar3];
        }
        uVar20 = *(undefined4 *)(puVar21 + 8);
      }
      else {
LAB_0109dd78:
        uVar20 = 0;
      }
      lVar15 = lVar15 + 1;
      *(undefined4 *)(lVar19 + 8) = uVar20;
    } while (lVar15 < iVar10);
  }
  uVar11 = *(uint *)(param_2 + 0x4c4);
  if (uVar11 == 0) {
    uVar13 = *(ulong *)(param_2 + 0x10);
    if ((uVar13 & 3) == 0) {
      uVar13 = uVar13 | 1;
      *(ulong *)(param_2 + 0x10) = uVar13;
    }
LAB_0109dea0:
    if ((uVar13 & 1) == 0) {
      uVar12 = 0;
    }
    else {
      sVar4 = *(short *)(param_2 + 0x198);
      sVar5 = *(short *)(param_2 + 0x19a);
      *(long *)(param_2 + 0x70) = (long)*(short *)(param_2 + 0x17a);
      *(long *)(param_2 + 0x68) = (long)*(short *)(param_2 + 0x178);
      sVar23 = (sVar4 - sVar5) + *(short *)(param_2 + 0x19c);
      *(short *)(param_2 + 0x8a) = sVar4;
      *(undefined2 *)(param_2 + 0x88) = *(undefined2 *)(param_2 + 0x152);
      *(short *)(param_2 + 0x8c) = sVar5;
      *(long *)(param_2 + 0x80) = (long)*(short *)(param_2 + 0x17e);
      *(long *)(param_2 + 0x78) = (long)*(short *)(param_2 + 0x17c);
      *(short *)(param_2 + 0x8e) = sVar23;
      if ((sVar4 == 0 && sVar5 == 0) && (*(short *)(param_2 + 600) != -1)) {
        sVar23 = *(short *)(param_2 + 0x2b2);
        sVar4 = *(short *)(param_2 + 0x2b4);
        if (sVar23 == 0 && sVar4 == 0) {
                    /* catch() { ... } // from try @ 0109dd48 with catch @ 0109df68 */
          *(short *)(param_2 + 0x8a) = *(short *)(param_2 + 0x2b8);
                    /* catch() { ... } // from try @ 0109de10 with catch @ 0109df6c */
          sVar23 = *(short *)(param_2 + 0x2b8) + *(short *)(param_2 + 0x2ba);
                    /* catch() { ... } // from try @ 0109de44 with catch @ 0109df70 */
          *(short *)(param_2 + 0x8c) = -*(short *)(param_2 + 0x2ba);
        }
        else {
          *(short *)(param_2 + 0x8a) = sVar23;
                    /* try { // try from 0109df2c to 0119df37 has its CatchHandler @ 0109df38 */
          *(short *)(param_2 + 0x8c) = sVar4;
                    /* catch() { ... } // from try @ 0109dcd0 with catch @ 0109df38
                       catch() { ... } // from try @ 0109df2c with catch @ 0109df38
                       try { // try from 0109df38 to 0119df8b has its CatchHandler @ 0109d944 */
          sVar23 = (sVar23 - sVar4) + *(short *)(param_2 + 0x2b6);
                    /* catch() { ... } // from try @ 0109ddb8 with catch @ 0109df3c */
        }
        *(short *)(param_2 + 0x8e) = sVar23;
      }
      *(undefined2 *)(param_2 + 0x90) = *(undefined2 *)(param_2 + 0x19e);
      if (*(char *)(param_2 + 0x1f0) != '\0') {
        sVar23 = *(short *)(param_2 + 0x206);
      }
      sVar4 = *(short *)(param_2 + 0x2f2);
      *(short *)(param_2 + 0x92) = sVar23;
      uVar12 = 0;
      *(short *)(param_2 + 0x94) =
           *(short *)(param_2 + 0x2f0) - (short)((uint)(int)(short)(sVar4 - (sVar4 >> 0xf)) >> 1);
      *(short *)(param_2 + 0x96) = sVar4;
    }
  }
  else {
    uVar13 = (ulong)*(ushort *)(param_2 + 0x152);
                    /* try { // try from 0109ddb8 to 0119ddd3 has its CatchHandler @ 0109df3c */
    if ((*(ushort *)(param_2 + 0x152) == 0) || (*(short *)(param_2 + 600) == -1)) {
      uVar13 = 1;
      sVar23 = 1;
    }
    else {
      sVar23 = *(short *)(param_2 + 0x25a);
    }
    lVar15 = ft_mem_realloc(*(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x38),0x20,0,(ulong)uVar11,0
                            ,&local_64);
    *(long *)(param_2 + 0x40) = lVar15;
    uVar12 = (ulong)local_64;
    if ((local_64 == 0) &&
       (uVar12 = (**(code **)(lVar25 + 0xd8))(param_2,0,&local_a0), (int)uVar12 == 0)) {
                    /* try { // try from 0109de10 to 0119de27 has its CatchHandler @ 0109df6c */
      lVar17 = 0;
      uVar16 = 1;
      local_64 = 0;
      do {
        puVar2 = (undefined2 *)(lVar15 + lVar17);
        *puVar2 = (short)(local_78 >> 6);
        uVar6 = 0;
        if ((int)uVar13 != 0) {
          uVar6 = (undefined2)
                  ((int)((int)(uVar13 >> 1) + (uint)local_a0 * (int)sVar23) / (int)uVar13);
        }
                    /* try { // try from 0109de44 to 0119de5b has its CatchHandler @ 0109df70 */
        *(ulong *)(puVar2 + 8) = (ulong)local_a0 << 6;
        puVar2[1] = uVar6;
        *(ulong *)(puVar2 + 0xc) = (ulong)local_9e << 6;
        *(ulong *)(puVar2 + 4) = (ulong)local_9e << 6;
                    /* try { // try from 0109de5c to 0119df2b has its CatchHandler @ 0109d944 */
        if (uVar11 <= uVar16) {
          *(uint *)(param_2 + 0x38) = uVar11;
          uVar13 = *(ulong *)(param_2 + 0x10) | 2;
          *(ulong *)(param_2 + 0x10) = uVar13;
          goto LAB_0109dea0;
        }
        lVar15 = *(long *)(param_2 + 0x40);
        uVar12 = (**(code **)(lVar25 + 0xd8))(param_2,uVar16,&local_a0);
        uVar16 = uVar16 + 1;
        lVar17 = lVar17 + 0x20;
        local_64 = (uint)uVar12;
      } while (local_64 == 0);
    }
  }
  return uVar12;
}

