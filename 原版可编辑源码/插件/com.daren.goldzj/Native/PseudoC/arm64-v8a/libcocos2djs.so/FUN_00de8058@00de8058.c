
bool FUN_00de8058(long param_1,long param_2)

{
  long lVar1;
  byte *pbVar2;
  short *psVar3;
  undefined4 *puVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  byte bVar13;
  short sVar14;
  byte bVar15;
  undefined2 uVar16;
  char cVar17;
  byte bVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined1 uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined2 *puVar30;
  uint uVar31;
  long lVar32;
  long lVar33;
  uint uVar34;
  void *__s;
  long lVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  long lVar39;
  uint local_8c;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar37 = *(long *)(param_1 + 0xb10);
  lVar35 = (long)*(int *)(param_1 + 0xb58);
  lVar36 = *(long *)(param_1 + 0xb60);
  pbVar2 = (byte *)(lVar37 + lVar35 * 2);
  if ((*(int *)(param_1 + 0xaf0) == 0) ||
     (cVar19 = *(char *)(lVar36 + lVar35 * 800 + 0x31d), cVar19 == '\0')) {
    __s = (void *)(lVar36 + lVar35 * 800);
    uVar38 = (ulong)*(byte *)((long)__s + 0x31e);
    memset(__s,0,0x300);
    if (*(char *)((long)__s + 0x300) == '\0') {
      lVar33 = lVar37 + lVar35 * 2;
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      iVar24 = FUN_00de8a28(param_2,param_1 + 0x958,
                            (uint)*(byte *)(lVar37 + -1) + (uint)*(byte *)(lVar33 + 1),
                            param_1 + uVar38 * 0x20 + 0x42c,0,&local_80);
      *(bool *)(lVar37 + -1) = 0 < iVar24;
      *(bool *)(lVar33 + 1) = 0 < iVar24;
      if (iVar24 < 2) {
        puVar30 = (undefined2 *)(lVar36 + lVar35 * 800);
        uVar16 = (undefined2)((int)(short)local_80 + 3U >> 3);
        *puVar30 = uVar16;
        puVar30[0x10] = uVar16;
        puVar30[0x20] = uVar16;
        puVar30[0x30] = uVar16;
        puVar30[0x40] = uVar16;
        puVar30[0x50] = uVar16;
        puVar30[0x60] = uVar16;
        puVar30[0x70] = uVar16;
        puVar30[0x80] = uVar16;
        puVar30[0x90] = uVar16;
        puVar30[0xa0] = uVar16;
        puVar30[0xb0] = uVar16;
        puVar30[0xc0] = uVar16;
        puVar30[0xd0] = uVar16;
        puVar30[0xe0] = uVar16;
        puVar30[0xf0] = uVar16;
      }
      else {
        (*DAT_01d54510)(&local_80,__s);
      }
      lVar33 = param_1 + 0x8d0;
      iVar24 = 1;
    }
    else {
      iVar24 = 0;
      lVar33 = param_1 + 0xa68;
    }
    local_8c = 0;
    lVar1 = param_1 + uVar38 * 0x20 + 0x424;
    lVar32 = 0;
    uVar29 = *pbVar2 & 0xf;
    uVar34 = *(byte *)(lVar37 + -2) & 0xf;
    do {
      psVar3 = (short *)((long)__s + lVar32);
      iVar20 = FUN_00de8a28(param_2,lVar33,(uVar34 & 1) + (uVar29 & 1),lVar1,iVar24,psVar3);
      sVar14 = *psVar3;
      uVar27 = uVar29 >> 1 & 1;
      if (iVar24 < iVar20) {
        uVar27 = uVar27 + 1;
      }
      iVar21 = FUN_00de8a28(param_2,lVar33,uVar27,lVar1,iVar24,psVar3 + 0x10);
      uVar27 = 8;
      if (iVar20 < 2) {
        uVar27 = (uint)(sVar14 != 0) << 2;
      }
      uVar7 = 0xc;
      if (iVar20 < 4) {
        uVar7 = uVar27;
      }
      uVar27 = 2;
      if (iVar21 < 2) {
        uVar27 = (uint)(psVar3[0x10] != 0);
      }
      uVar6 = (uVar29 >> 1 & 2) >> 1;
      uVar28 = 3;
      if (iVar21 < 4) {
        uVar28 = uVar27;
      }
      if (iVar24 < iVar21) {
        uVar6 = uVar6 + 1;
      }
      iVar22 = FUN_00de8a28(param_2,lVar33,uVar6,lVar1,iVar24,psVar3 + 0x20);
      uVar27 = 2;
      if (iVar22 < 2) {
        uVar27 = (uint)(psVar3[0x20] != 0);
      }
      uVar6 = 3;
      if (iVar22 < 4) {
        uVar6 = uVar27;
      }
      uVar29 = uVar29 >> 3;
      if (iVar24 < iVar22) {
        uVar29 = uVar29 + 1;
      }
      iVar23 = FUN_00de8a28(param_2,lVar33,uVar29,lVar1,iVar24,psVar3 + 0x30);
      lVar32 = lVar32 + 0x80;
      uVar34 = uVar34 >> 1 | (uint)(iVar24 < iVar23) << 7;
      uVar29 = (((uint)(iVar24 < iVar22) << 7 |
                ((uint)(iVar24 < iVar20) << 6 | (uint)(iVar24 < iVar21) << 7) >> 1) >> 1 |
               (uint)(iVar24 < iVar23) << 7) >> 4;
      uVar27 = 2;
      if (iVar23 < 2) {
        uVar27 = (uint)(psVar3[0x30] != 0);
      }
      uVar8 = 3;
      if (iVar23 < 4) {
        uVar8 = uVar27;
      }
      local_8c = (uVar6 | (uVar28 | uVar7) << 2) << 2 | local_8c << 8 | uVar8;
    } while ((int)lVar32 != 0x200);
    lVar33 = param_1 + 0x9e0;
    lVar32 = param_1 + uVar38 * 0x20;
    lVar1 = lVar32 + 0x434;
    bVar13 = *pbVar2;
    bVar15 = *(byte *)(lVar37 + -2);
    lVar39 = lVar36 + lVar35 * 800;
    iVar24 = FUN_00de8a28(param_2,lVar33,(bVar15 >> 4 & 1) + (bVar13 >> 4 & 1),lVar1,0,
                          lVar39 + 0x200);
    sVar14 = *(short *)(lVar39 + 0x200);
    bVar13 = bVar13 >> 5 & 1;
    if (0 < iVar24) {
      bVar13 = bVar13 + 1;
    }
    bVar18 = bVar15 >> 5 & 1;
    bVar15 = bVar18;
    if (0 < iVar24) {
      bVar15 = bVar18 + 1;
    }
    iVar20 = FUN_00de8a28(bVar18,param_2,lVar33,bVar13,lVar1,0,lVar39 + 0x220);
    uVar27 = 8;
    if (iVar24 < 2) {
      uVar27 = (uint)(sVar14 != 0) << 2;
    }
    uVar7 = 0xc;
    if (iVar24 < 4) {
      uVar7 = uVar27;
    }
    uVar27 = 2;
    if (iVar20 < 2) {
      uVar27 = (uint)(*(short *)(lVar39 + 0x220) != 0);
    }
    uVar6 = 3;
    if (iVar20 < 4) {
      uVar6 = uVar27;
    }
    iVar24 = FUN_00de8a28(param_2,lVar33,bVar15,lVar1,0,lVar39 + 0x240);
    uVar28 = 2;
    uVar27 = uVar28;
    if (iVar24 < 2) {
      uVar27 = (uint)(*(short *)(lVar39 + 0x240) != 0);
    }
    uVar8 = 3;
    if (iVar24 < 4) {
      uVar8 = uVar27;
    }
    if (iVar20 < 1) {
      uVar28 = 1;
    }
    uVar27 = (uint)(0 < iVar20);
    if (0 < iVar24) {
      uVar27 = uVar28;
    }
    iVar21 = FUN_00de8a28(param_2,lVar33,uVar27,lVar1,0,lVar39 + 0x260);
    bVar13 = *pbVar2;
    bVar15 = *(byte *)(lVar37 + -2);
    uVar28 = 2;
    uVar27 = uVar28;
    if (iVar21 < 2) {
      uVar27 = (uint)(*(short *)(lVar39 + 0x260) != 0);
    }
    uVar9 = 3;
    if (iVar21 < 4) {
      uVar9 = uVar27;
    }
    iVar22 = FUN_00de8a28(param_2,lVar33,(bVar15 >> 6 & 1) + (bVar13 >> 6 & 1),lVar1,0,
                          lVar39 + 0x280);
    sVar14 = *(short *)(lVar39 + 0x280);
    cVar19 = -((char)bVar13 >> 7);
    if (0 < iVar22) {
      cVar19 = cVar19 + '\x01';
    }
    cVar17 = -((char)bVar15 >> 7);
    cVar5 = cVar17;
    if (0 < iVar22) {
      cVar5 = cVar17 + '\x01';
    }
    iVar23 = FUN_00de8a28(cVar17,param_2,lVar33,cVar19,lVar1,0,lVar39 + 0x2a0);
    uVar27 = 8;
    if (iVar22 < 2) {
      uVar27 = (uint)(sVar14 != 0) << 2;
    }
    uVar10 = 0xc;
    if (iVar22 < 4) {
      uVar10 = uVar27;
    }
    if (iVar23 < 2) {
      uVar28 = (uint)(*(short *)(lVar39 + 0x2a0) != 0);
    }
    uVar27 = 3;
    if (iVar23 < 4) {
      uVar27 = uVar28;
    }
    iVar22 = FUN_00de8a28(param_2,lVar33,cVar5,lVar1,0,lVar39 + 0x2c0);
    uVar31 = 2;
    uVar28 = uVar31;
    if (iVar22 < 2) {
      uVar28 = (uint)(*(short *)(lVar39 + 0x2c0) != 0);
    }
    uVar11 = 3;
    if (iVar22 < 4) {
      uVar11 = uVar28;
    }
    if (iVar23 < 1) {
      uVar31 = 1;
    }
    uVar28 = (uint)(0 < iVar23);
    if (0 < iVar22) {
      uVar28 = uVar31;
    }
    iVar25 = FUN_00de8a28(param_2,lVar33,uVar28,lVar1,0,lVar39 + 0x2e0);
    sVar14 = *(short *)(lVar39 + 0x2e0);
    *pbVar2 = (byte)uVar29 | (0 < iVar24 | (0 < iVar21) << 1) << 4 |
              (0 < iVar22 | (0 < iVar25) << 1) << 6;
    uVar26 = 0;
    *(byte *)(lVar37 + -2) =
         (byte)(uVar34 >> 4) | (0 < iVar20) << 4 | (0 < iVar21) << 5 | (0 < iVar23) << 6 |
         (0 < iVar25) << 7;
    uVar29 = 2;
    if (iVar25 < 2) {
      uVar29 = (uint)(sVar14 != 0);
    }
    uVar34 = 3;
    if (iVar25 < 4) {
      uVar34 = uVar29;
    }
    uVar29 = uVar9 | (uVar8 | (uVar6 | uVar7) << 2) << 2 |
             (uVar34 | (uVar11 | (uVar27 | uVar10) << 2) << 2) << 8;
    *(uint *)(lVar39 + 0x314) = local_8c;
    *(uint *)(lVar39 + 0x318) = uVar29;
    if ((uVar29 & 0xaaaa) == 0) {
      uVar26 = (undefined1)*(undefined4 *)(lVar32 + 0x440);
    }
    cVar19 = uVar29 == 0 && local_8c == 0;
    *(undefined1 *)(lVar36 + lVar35 * 800 + 0x31c) = uVar26;
  }
  else {
    *pbVar2 = 0;
    *(undefined1 *)(lVar37 + -2) = 0;
    if (*(char *)(lVar36 + lVar35 * 800 + 0x300) == '\0') {
      *(undefined1 *)(lVar37 + lVar35 * 2 + 1) = 0;
      *(undefined1 *)(lVar37 + -1) = 0;
    }
    lVar37 = lVar36 + lVar35 * 800;
    *(undefined1 *)(lVar37 + 0x31c) = 0;
    *(undefined8 *)(lVar37 + 0x314) = 0;
  }
  if (0 < *(int *)(param_1 + 0xb68)) {
    lVar36 = lVar36 + lVar35 * 800;
    uVar12 = *(undefined4 *)
              (param_1 + (ulong)*(byte *)(lVar36 + 0x31e) * 8 + (ulong)*(byte *)(lVar36 + 0x300) * 4
              + 0xb6c);
    puVar4 = (undefined4 *)(*(long *)(param_1 + 0xb18) + (long)*(int *)(param_1 + 0xb58) * 4);
    *puVar4 = uVar12;
    *(byte *)((long)puVar4 + 2) = (byte)((uint)uVar12 >> 0x10) | cVar19 == '\0';
  }
  return *(int *)(param_2 + 0x28) == 0;
}

