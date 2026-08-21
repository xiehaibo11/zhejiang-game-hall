
/* cocos2d::Terrain::Chunk::updateIndicesLOD() */

void __thiscall cocos2d::Terrain::Chunk::updateIndicesLOD(Chunk *this)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  Terrain *this_00;
  undefined8 uVar14;
  void *pvVar15;
  int iVar16;
  int iVar17;
  ushort *puVar18;
  ushort *puVar19;
  int iVar20;
  ushort *puVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  void *__s2;
  long lVar26;
  ulong uVar27;
  int iVar28;
  int iVar29;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  lVar26 = *(long *)(this + 0xb8);
  if (lVar26 == 0) {
    local_90 = -1;
  }
  else {
    local_90 = *(int *)(lVar26 + 0xa0);
  }
  if (*(long *)(this + 0xc0) == 0) {
    uStack_8c = 0xffffffff;
  }
  else {
    uStack_8c = *(undefined4 *)(*(long *)(this + 0xc0) + 0xa0);
  }
  if (*(long *)(this + 0xd0) == 0) {
    uStack_88 = 0xffffffff;
  }
  else {
    uStack_88 = *(undefined4 *)(*(long *)(this + 0xd0) + 0xa0);
  }
  if (*(long *)(this + 200) == 0) {
    uStack_84 = 0xffffffff;
  }
  else {
    uStack_84 = *(undefined4 *)(*(long *)(this + 200) + 0xa0);
  }
  uVar23 = *(uint *)(this + 0xa0);
  if ((*(uint *)(this + 0xa4) == uVar23) &&
     (iVar13 = memcmp(&local_90,this + 0xa8,0x10), iVar13 == 0)) goto LAB_00d4a43c;
  __s2 = *(void **)(*(long *)(this + 0xe8) + 0x2f8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d48ac8 with catch @ 00d48c44
                        */
  pvVar15 = *(void **)(*(long *)(this + 0xe8) + 0x300);
  if (__s2 != pvVar15) {
    uStack_78 = CONCAT44(uStack_84,uStack_88);
    local_80 = CONCAT44(uStack_8c,local_90);
    lVar5 = (long)pvVar15 - (long)__s2;
    local_70 = uVar23;
    if (lVar5 != 0) {
      uVar27 = 0;
      do {
        iVar13 = memcmp(&local_80,__s2,0x14);
        if (iVar13 == 0) {
          *(undefined8 *)(this + 0x1c) = *(undefined8 *)((long)__s2 + 0x14);
          goto LAB_00d4a43c;
        }
        uVar27 = uVar27 + 1;
        __s2 = (void *)((long)__s2 + 0x1c);
      } while (uVar27 < (ulong)((lVar5 >> 2) * 0x6db6db6db6db6db7));
    }
  }
  *(undefined8 *)(this + 0x1c) = 0;
  iVar13 = 1 << (ulong)(uVar23 & 0x1f);
  iVar20 = (int)*(float *)(this + 0xf4);
  iVar16 = (int)*(float *)(this + 0xf0);
  *(uint *)(this + 0xa4) = uVar23;
  *(ulong *)(this + 0xb0) = CONCAT44(uStack_84,uStack_88);
  *(ulong *)(this + 0xa8) = CONCAT44(uStack_8c,local_90);
  if (((((lVar26 == 0) || (*(int *)(lVar26 + 0xa0) <= (int)uVar23)) &&
       ((*(long *)(this + 0xc0) == 0 || (*(int *)(*(long *)(this + 0xc0) + 0xa0) <= (int)uVar23))))
      && ((*(long *)(this + 0xd0) == 0 || (*(int *)(*(long *)(this + 0xd0) + 0xa0) <= (int)uVar23)))
      ) && ((*(long *)(this + 200) == 0 || (*(int *)(*(long *)(this + 200) + 0xa0) <= (int)uVar23)))
     ) {
    lVar26 = *(long *)(this + (long)(int)uVar23 * 0x18 + 0x28);
    *(long *)(this + (long)(int)uVar23 * 0x18 + 0x30) = lVar26;
    if (0 < iVar20) {
      iVar28 = 0;
      iVar17 = 0;
      iVar29 = iVar13 * (iVar16 + 1);
      iVar1 = iVar13;
      do {
        if (0 < iVar16) {
          iVar25 = 0;
          sVar7 = (short)(iVar16 + 1 << (ulong)(uVar23 & 0x1f));
          do {
            lVar26 = (long)*(int *)(this + 0xa0);
            sVar12 = (short)iVar25;
            uVar2 = (short)iVar28 + sVar12;
            puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
            puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
            if (puVar18 < puVar21) {
              puVar19 = puVar18 + 1;
              *puVar18 = uVar2;
              *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
            }
            else {
              local_80._0_2_ = uVar2;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
              lVar26 = (long)*(int *)(this + 0xa0);
              puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
              puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
            }
            uVar2 = sVar7 + (short)iVar28 + sVar12;
            if (puVar19 < puVar21) {
              puVar18 = puVar19 + 1;
              *puVar19 = uVar2;
              *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
            }
            else {
              local_80._0_2_ = uVar2;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
              lVar26 = (long)*(int *)(this + 0xa0);
              puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
              puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
            }
            uVar3 = (short)iVar1 + sVar12;
            if (puVar18 < puVar21) {
              puVar19 = puVar18 + 1;
              *puVar18 = uVar3;
              *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
            }
            else {
              local_80._0_2_ = uVar3;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
              lVar26 = (long)*(int *)(this + 0xa0);
              puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
              puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
            }
            if (puVar19 < puVar21) {
              puVar18 = puVar19 + 1;
              *puVar19 = uVar3;
              *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
            }
            else {
              local_80._0_2_ = uVar3;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
              lVar26 = (long)*(int *)(this + 0xa0);
              puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
              puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
            }
            if (puVar18 < puVar21) {
              puVar19 = puVar18 + 1;
              *puVar18 = uVar2;
              *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
            }
            else {
              local_80._0_2_ = uVar2;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
              lVar26 = (long)*(int *)(this + 0xa0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d49474 with catch @ 00d49420
                        */
              puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
              puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
            }
            uVar2 = sVar7 + (short)iVar1 + sVar12;
            local_80 = CONCAT62(local_80._2_6_,uVar2);
            if (puVar19 < puVar21) {
              *puVar19 = uVar2;
              *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19 + 1;
            }
            else {
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
            }
            iVar25 = iVar25 + iVar13;
          } while (iVar25 < iVar16);
        }
        iVar17 = iVar17 + iVar13;
        iVar1 = iVar1 + iVar29;
        iVar28 = iVar28 + iVar29;
      } while (iVar17 < iVar20);
      uVar23 = *(uint *)(this + 0xa0);
                    /* try { // try from 00d4a3f8 to 00e4a44b has its CatchHandler @ 00d4a560 */
      lVar26 = *(long *)(this + (long)(int)uVar23 * 0x18 + 0x30);
    }
    puVar21 = *(ushort **)(this + (long)(int)uVar23 * 0x18 + 0x28);
    this_00 = *(Terrain **)(this + 0xe8);
  }
  else {
    iVar17 = iVar20 - iVar13;
    *(undefined8 *)(this + (long)(int)uVar23 * 0x18 + 0x30) =
         *(undefined8 *)(this + (long)(int)uVar23 * 0x18 + 0x28);
    uVar22 = uVar23;
    if (iVar13 < iVar17) {
      iVar28 = iVar13 * (iVar16 + 3);
      iVar25 = iVar13 * (iVar16 + 1);
      iVar29 = iVar13 * (iVar16 + 2);
      iVar1 = iVar13;
      do {
        if (iVar13 < iVar16 - iVar13) {
          iVar24 = 0;
          sVar7 = (short)(iVar16 + 1 << (ulong)(uVar23 & 0x1f));
          do {
            lVar26 = (long)*(int *)(this + 0xa0);
            sVar12 = (short)iVar24;
            uVar2 = (short)iVar29 + sVar12;
                    /* try { // try from 00d48de8 to 00e48def has its CatchHandler @ 00d490c8 */
                    /* try { // try from 00d48df0 to 00e48f4b has its CatchHandler @ 00d48d94 */
            puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
            puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
            if (puVar18 < puVar21) {
              puVar19 = puVar18 + 1;
              *puVar18 = uVar2;
              *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
            }
            else {
              local_80._0_2_ = uVar2;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
              lVar26 = (long)*(int *)(this + 0xa0);
              puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
              puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
            }
            uVar2 = sVar7 + (short)iVar29 + sVar12;
            if (puVar19 < puVar21) {
              puVar18 = puVar19 + 1;
              *puVar19 = uVar2;
              *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
            }
            else {
              local_80._0_2_ = uVar2;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
              lVar26 = (long)*(int *)(this + 0xa0);
              puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
              puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
            }
            uVar3 = (short)iVar28 + sVar12;
            if (puVar18 < puVar21) {
              puVar19 = puVar18 + 1;
              *puVar18 = uVar3;
              *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
            }
            else {
              local_80._0_2_ = uVar3;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
              lVar26 = (long)*(int *)(this + 0xa0);
              puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
              puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
            }
            if (puVar19 < puVar21) {
              puVar18 = puVar19 + 1;
              *puVar19 = uVar3;
              *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
            }
            else {
              local_80._0_2_ = uVar3;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
              lVar26 = (long)*(int *)(this + 0xa0);
              puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
              puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
            }
            if (puVar18 < puVar21) {
              puVar19 = puVar18 + 1;
              *puVar18 = uVar2;
              *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
            }
            else {
              local_80._0_2_ = uVar2;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
              lVar26 = (long)*(int *)(this + 0xa0);
              puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
              puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
            }
            uVar2 = sVar7 + (short)iVar28 + sVar12;
            local_80 = CONCAT62(local_80._2_6_,uVar2);
            if (puVar19 < puVar21) {
              *puVar19 = uVar2;
              *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19 + 1;
            }
            else {
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
            }
            iVar24 = iVar24 + iVar13;
          } while (iVar13 + iVar24 < iVar16 - iVar13);
        }
        iVar1 = iVar1 + iVar13;
        iVar28 = iVar28 + iVar25;
        iVar29 = iVar29 + iVar25;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d48df0 with catch @ 00d48d94
                       catch(type#1 @ 00000000) { ... } // from try @ 00d48fbc with catch @ 00d48d94
                        */
      } while (iVar1 < iVar17);
      uVar22 = *(uint *)(this + 0xa0);
                    /* try { // try from 00d48f4c to 00e48f57 has its CatchHandler @ 00d490b4 */
      lVar26 = *(long *)(this + 0xb8);
    }
    iVar1 = 1 << (ulong)(uVar22 + 1 & 0x1f);
    sVar7 = (short)iVar13;
    sVar12 = (short)iVar16;
    if ((lVar26 == 0) || (*(int *)(lVar26 + 0xa0) <= (int)uVar22)) {
      iVar28 = iVar20;
      if ((*(long *)(this + 200) != 0) &&
         (iVar28 = iVar17, *(int *)(*(long *)(this + 200) + 0xa0) <= (int)uVar22)) {
        iVar28 = iVar20;
      }
      if (*(long *)(this + 0xd0) == 0) {
        iVar29 = 0;
        if (0 < iVar28) goto LAB_00d49450;
      }
      else {
        iVar29 = iVar13;
        if (*(int *)(*(long *)(this + 0xd0) + 0xa0) <= (int)uVar22) {
          iVar29 = 0;
        }
        if (iVar29 < iVar28) {
LAB_00d49450:
          iVar25 = 0;
          sVar10 = (short)(iVar16 + 1);
          sVar11 = (short)iVar29 * sVar10;
                    /* try { // try from 00d4946c to 00e49473 has its CatchHandler @ 00d495e8 */
          sVar10 = ((short)iVar29 + sVar7) * sVar10;
                    /* try { // try from 00d49474 to 00e495eb has its CatchHandler @ 00d49420 */
          while( true ) {
            sVar9 = (short)iVar25;
            uVar2 = sVar7 + sVar11 + sVar9;
            puVar18 = *(ushort **)(this + (long)(int)uVar22 * 0x18 + 0x30);
            lVar26 = (long)(int)uVar22;
            uVar3 = sVar11 + sVar9;
            puVar21 = *(ushort **)(this + (long)(int)uVar22 * 0x18 + 0x38);
            if (puVar18 < puVar21) {
              puVar19 = puVar18 + 1;
              *puVar18 = uVar2;
              *(ushort **)(this + (long)(int)uVar22 * 0x18 + 0x30) = puVar19;
            }
            else {
              local_80._0_2_ = uVar2;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
              lVar26 = (long)*(int *)(this + 0xa0);
              puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
              puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
            }
            if (puVar19 < puVar21) {
              puVar18 = puVar19 + 1;
              *puVar19 = uVar3;
              *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
            }
            else {
              local_80._0_2_ = uVar3;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
              lVar26 = (long)*(int *)(this + 0xa0);
              puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
              puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
            }
            uVar3 = sVar10 + sVar9;
            if (puVar18 < puVar21) {
              puVar19 = puVar18 + 1;
              *puVar18 = uVar3;
              *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
            }
            else {
              local_80._0_2_ = uVar3;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
              lVar26 = (long)*(int *)(this + 0xa0);
              puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
              puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
            }
            if (puVar19 < puVar21) {
              puVar18 = puVar19 + 1;
              *puVar19 = uVar2;
              *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
            }
            else {
              local_80._0_2_ = uVar2;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
              lVar26 = (long)*(int *)(this + 0xa0);
              puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
              puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
            }
            if (puVar18 < puVar21) {
              puVar19 = puVar18 + 1;
              *puVar18 = uVar3;
              *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
            }
            else {
              local_80._0_2_ = uVar3;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
              lVar26 = (long)*(int *)(this + 0xa0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4946c with catch @ 00d495e8
                        */
              puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
              puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
            }
            iVar29 = iVar29 + iVar13;
            uVar2 = sVar7 + sVar10 + sVar9;
            local_80 = CONCAT62(local_80._2_6_,uVar2);
            if (puVar19 < puVar21) {
              *puVar19 = uVar2;
              *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19 + 1;
            }
            else {
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
            }
            if (iVar28 <= iVar29) break;
            uVar22 = *(uint *)(this + 0xa0);
            iVar25 = iVar25 + iVar13 * (iVar16 + 1);
          }
        }
      }
    }
    else if (0 < iVar20) {
      iVar28 = 0;
      iVar25 = iVar1 * (iVar16 + 1);
      sVar11 = (short)iVar25;
      iVar29 = iVar1;
      while( true ) {
        uVar3 = (ushort)iVar28;
        uVar2 = sVar7 + uVar3;
                    /* try { // try from 00d48fb4 to 00e48fbb has its CatchHandler @ 00d4909c */
        puVar18 = *(ushort **)(this + (long)(int)uVar22 * 0x18 + 0x30);
        lVar26 = (long)(int)uVar22;
                    /* try { // try from 00d48fbc to 00e490cb has its CatchHandler @ 00d48d94 */
        puVar21 = *(ushort **)(this + (long)(int)uVar22 * 0x18 + 0x38);
        if (puVar18 < puVar21) {
          puVar19 = puVar18 + 1;
          *puVar18 = uVar2;
          *(ushort **)(this + (long)(int)uVar22 * 0x18 + 0x30) = puVar19;
        }
        else {
          local_80._0_2_ = uVar2;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        if (puVar19 < puVar21) {
          puVar18 = puVar19 + 1;
          *puVar19 = uVar3;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
        }
        else {
          local_80._0_2_ = uVar3;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        uVar4 = sVar11 + uVar3;
        if (puVar18 < puVar21) {
          puVar19 = puVar18 + 1;
          *puVar18 = uVar4;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
        }
        else {
          local_80._0_2_ = uVar4;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        if (puVar19 < puVar21) {
          puVar18 = puVar19 + 1;
          *puVar19 = uVar2;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
        }
        else {
          local_80._0_2_ = uVar2;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d48fb4 with catch @ 00d4909c
                        */
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d48f4c with catch @ 00d490b4
                        */
        if (puVar18 < puVar21) {
          puVar19 = puVar18 + 1;
          *puVar18 = uVar4;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
        }
        else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d48de8 with catch @ 00d490c8
                        */
          local_80._0_2_ = uVar4;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        uVar2 = sVar7 * (sVar12 + 2) + uVar3;
        if (puVar19 < puVar21) {
          puVar18 = puVar19 + 1;
          *puVar19 = uVar2;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
        }
        else {
          local_80._0_2_ = uVar2;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        if (puVar18 < puVar21) {
          puVar19 = puVar18 + 1;
          *puVar18 = uVar2;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
        }
        else {
          local_80._0_2_ = uVar2;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        if (puVar19 < puVar21) {
          puVar18 = puVar19 + 1;
          *puVar19 = uVar4;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
        }
        else {
          local_80._0_2_ = uVar4;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        uVar3 = sVar7 + sVar11 + uVar3;
        local_80 = CONCAT62(local_80._2_6_,uVar3);
        if (puVar18 < puVar21) {
          *puVar18 = uVar3;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18 + 1;
        }
        else {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
        }
        if (iVar20 <= iVar29) break;
        uVar22 = *(uint *)(this + 0xa0);
        iVar28 = iVar28 + iVar25;
        iVar29 = iVar29 + iVar1;
      }
    }
    if ((*(long *)(this + 0xc0) == 0) ||
       (iVar28 = *(int *)(this + 0xa0), *(int *)(*(long *)(this + 0xc0) + 0xa0) <= iVar28)) {
      iVar28 = iVar20;
                    /* try { // try from 00d498e8 to 00e498ef has its CatchHandler @ 00d49a6c */
      if ((*(long *)(this + 200) != 0) &&
         (iVar28 = iVar17, *(int *)(*(long *)(this + 200) + 0xa0) <= *(int *)(this + 0xa0))) {
        iVar28 = iVar20;
      }
      if (*(long *)(this + 0xd0) == 0) {
        iVar29 = 0;
        if (0 < iVar28) goto LAB_00d4992c;
      }
      else {
        iVar29 = iVar13;
        if (*(int *)(*(long *)(this + 0xd0) + 0xa0) <= *(int *)(this + 0xa0)) {
          iVar29 = 0;
        }
        if (iVar29 < iVar28) {
LAB_00d4992c:
          sVar10 = (short)(iVar16 + 1);
          sVar11 = (short)iVar29 * sVar10;
          sVar10 = ((short)iVar29 + sVar7) * sVar10;
          iVar25 = iVar16;
          do {
            lVar26 = (long)*(int *)(this + 0xa0);
            sVar9 = (short)iVar25;
            uVar2 = sVar11 + sVar9;
            puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
            puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
            if (puVar18 < puVar21) {
              puVar19 = puVar18 + 1;
              *puVar18 = uVar2;
              *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
            }
            else {
              local_80._0_2_ = uVar2;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
              lVar26 = (long)*(int *)(this + 0xa0);
              puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
              puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
            }
            local_80._0_2_ = (sVar11 - sVar7) + sVar9;
            if (puVar19 < puVar21) {
              puVar18 = puVar19 + 1;
              *puVar19 = (ushort)local_80;
              *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
            }
            else {
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
              lVar26 = (long)*(int *)(this + 0xa0);
              puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
              puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
            }
            uVar3 = (sVar10 - sVar7) + sVar9;
            if (puVar18 < puVar21) {
              puVar19 = puVar18 + 1;
              *puVar18 = uVar3;
              *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
            }
            else {
              local_80._0_2_ = uVar3;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
              lVar26 = (long)*(int *)(this + 0xa0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d49964 with catch @ 00d49a4c
                        */
              puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
              puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
            }
            if (puVar19 < puVar21) {
              puVar18 = puVar19 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d498e8 with catch @ 00d49a6c
                        */
              *puVar19 = uVar2;
              *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
            }
            else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d49788 with catch @ 00d49a80
                        */
              local_80._0_2_ = uVar2;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
              lVar26 = (long)*(int *)(this + 0xa0);
              puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
              puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
            }
            uVar2 = sVar10 + sVar9;
            if (puVar18 < puVar21) {
              puVar19 = puVar18 + 1;
              *puVar18 = uVar3;
              *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
            }
            else {
              local_80._0_2_ = uVar3;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
              lVar26 = (long)*(int *)(this + 0xa0);
              puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
              puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
            }
            iVar29 = iVar29 + iVar13;
            local_80 = CONCAT62(local_80._2_6_,uVar2);
            if (puVar19 < puVar21) {
              *puVar19 = uVar2;
              *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19 + 1;
            }
            else {
                    /* try { // try from 00d49964 to 00e4996b has its CatchHandler @ 00d49a4c */
                    /* try { // try from 00d4996c to 00e49a83 has its CatchHandler @ 00d49738 */
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
            }
            iVar25 = iVar25 + iVar13 * (iVar16 + 1);
          } while (iVar29 < iVar28);
        }
      }
    }
    else if (0 < iVar20) {
      iVar29 = 0;
      iVar24 = iVar1 * (iVar16 + 1);
      sVar11 = (short)iVar24;
      iVar25 = iVar1;
      while( true ) {
        lVar26 = (long)iVar28;
        sVar10 = (short)iVar29;
        uVar2 = sVar12 + sVar10;
        puVar18 = *(ushort **)(this + (long)iVar28 * 0x18 + 0x30);
        puVar21 = *(ushort **)(this + (long)iVar28 * 0x18 + 0x38);
        if (puVar18 < puVar21) {
          puVar19 = puVar18 + 1;
          *puVar18 = uVar2;
          *(ushort **)(this + (long)iVar28 * 0x18 + 0x30) = puVar19;
        }
        else {
          local_80._0_2_ = uVar2;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        local_80._0_2_ = (sVar12 - sVar7) + sVar10;
        if (puVar19 < puVar21) {
          puVar18 = puVar19 + 1;
          *puVar19 = (ushort)local_80;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
        }
        else {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        uVar3 = sVar12 * (sVar7 + 1) + sVar10;
        if (puVar18 < puVar21) {
          puVar19 = puVar18 + 1;
          *puVar18 = uVar3;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
        }
        else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d49790 with catch @ 00d49738
                       catch(type#1 @ 00000000) { ... } // from try @ 00d4996c with catch @ 00d49738
                        */
          local_80._0_2_ = uVar3;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        if (puVar19 < puVar21) {
          puVar18 = puVar19 + 1;
          *puVar19 = uVar2;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
        }
        else {
          local_80._0_2_ = uVar2;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
                    /* try { // try from 00d49788 to 00e4978f has its CatchHandler @ 00d49a80 */
          puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
                    /* try { // try from 00d49790 to 00e498e7 has its CatchHandler @ 00d49738 */
        if (puVar18 < puVar21) {
          puVar19 = puVar18 + 1;
          *puVar18 = uVar3;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
        }
        else {
          local_80._0_2_ = uVar3;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        uVar3 = sVar11 + (sVar12 - sVar7) + sVar10;
        if (puVar19 < puVar21) {
          puVar18 = puVar19 + 1;
          *puVar19 = uVar3;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
        }
        else {
          local_80._0_2_ = uVar3;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        if (puVar18 < puVar21) {
          puVar19 = puVar18 + 1;
          *puVar18 = uVar2;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
        }
        else {
          local_80._0_2_ = uVar2;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        uVar2 = sVar12 + sVar11 + sVar10;
        if (puVar19 < puVar21) {
          puVar18 = puVar19 + 1;
          *puVar19 = uVar3;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
        }
        else {
          local_80._0_2_ = uVar3;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        local_80 = CONCAT62(local_80._2_6_,uVar2);
        if (puVar18 < puVar21) {
          *puVar18 = uVar2;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18 + 1;
        }
        else {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
        }
        if (iVar20 <= iVar25) break;
        iVar28 = *(int *)(this + 0xa0);
        iVar29 = iVar29 + iVar24;
        iVar25 = iVar25 + iVar1;
      }
    }
    sVar10 = sVar7 * 2;
    sVar11 = (short)iVar1;
    if ((*(long *)(this + 200) == 0) ||
       (iVar28 = *(int *)(this + 0xa0), *(int *)(*(long *)(this + 200) + 0xa0) <= iVar28)) {
      if (iVar13 < iVar16 - iVar13) {
        iVar28 = 0;
        sVar9 = (short)iVar17 * (sVar12 + 1);
        sVar12 = (short)iVar20 * (sVar12 + 1);
        do {
          lVar26 = (long)*(int *)(this + 0xa0);
          sVar8 = (short)iVar28;
          uVar2 = sVar7 + sVar9 + sVar8;
          puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
          if (puVar18 < puVar21) {
            puVar19 = puVar18 + 1;
            *puVar18 = uVar2;
            *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
          }
          else {
            local_80._0_2_ = uVar2;
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
            lVar26 = (long)*(int *)(this + 0xa0);
            puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
            puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
          }
          uVar2 = sVar7 + sVar12 + sVar8;
          if (puVar19 < puVar21) {
            puVar18 = puVar19 + 1;
            *puVar19 = uVar2;
            *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
          }
          else {
            local_80._0_2_ = uVar2;
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
            lVar26 = (long)*(int *)(this + 0xa0);
            puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
            puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
          }
          uVar3 = sVar10 + sVar9 + sVar8;
          if (puVar18 < puVar21) {
            puVar19 = puVar18 + 1;
            *puVar18 = uVar3;
            *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
          }
          else {
            local_80._0_2_ = uVar3;
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
            lVar26 = (long)*(int *)(this + 0xa0);
            puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
            puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
          }
          if (puVar19 < puVar21) {
            puVar18 = puVar19 + 1;
            *puVar19 = uVar3;
            *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
          }
          else {
            local_80._0_2_ = uVar3;
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
            lVar26 = (long)*(int *)(this + 0xa0);
            puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
            puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
          }
          if (puVar18 < puVar21) {
            puVar19 = puVar18 + 1;
            *puVar18 = uVar2;
            *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
          }
          else {
            local_80._0_2_ = uVar2;
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
            lVar26 = (long)*(int *)(this + 0xa0);
            puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
            puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
          }
          uVar2 = sVar10 + sVar12 + sVar8;
          local_80 = CONCAT62(local_80._2_6_,uVar2);
          if (puVar19 < puVar21) {
            *puVar19 = uVar2;
            *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19 + 1;
          }
          else {
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          }
          iVar28 = iVar28 + iVar13;
        } while (iVar13 + iVar28 < iVar16 - iVar13);
      }
    }
    else if (0 < iVar16) {
      iVar29 = 0;
      sVar9 = (short)iVar20 * (sVar12 + 1);
      sVar12 = (short)iVar17 * (sVar12 + 1);
      while( true ) {
        sVar8 = (short)iVar29;
        puVar18 = *(ushort **)(this + (long)iVar28 * 0x18 + 0x30);
        lVar26 = (long)iVar28;
        puVar21 = *(ushort **)(this + (long)iVar28 * 0x18 + 0x38);
        if (puVar18 < puVar21) {
          puVar19 = puVar18 + 1;
          *puVar18 = sVar12 + sVar8;
          *(ushort **)(this + (long)iVar28 * 0x18 + 0x30) = puVar19;
        }
        else {
          local_80._0_2_ = sVar12 + sVar8;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        uVar2 = sVar9 + sVar8;
        if (puVar19 < puVar21) {
          puVar18 = puVar19 + 1;
          *puVar19 = uVar2;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
        }
        else {
          local_80._0_2_ = uVar2;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        uVar3 = sVar7 + sVar12 + sVar8;
        if (puVar18 < puVar21) {
          puVar19 = puVar18 + 1;
          *puVar18 = uVar3;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
        }
        else {
          local_80._0_2_ = uVar3;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        if (puVar19 < puVar21) {
          puVar18 = puVar19 + 1;
          *puVar19 = uVar3;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
        }
        else {
          local_80._0_2_ = uVar3;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        if (puVar18 < puVar21) {
          puVar19 = puVar18 + 1;
          *puVar18 = uVar2;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
        }
        else {
          local_80._0_2_ = uVar2;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        uVar2 = sVar11 + sVar9 + sVar8;
        if (puVar19 < puVar21) {
          puVar18 = puVar19 + 1;
          *puVar19 = uVar2;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
        }
        else {
          local_80._0_2_ = uVar2;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        if (puVar18 < puVar21) {
          puVar19 = puVar18 + 1;
          *puVar18 = uVar3;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
        }
        else {
          local_80._0_2_ = uVar3;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        if (puVar19 < puVar21) {
          puVar18 = puVar19 + 1;
          *puVar19 = uVar2;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
        }
        else {
          local_80._0_2_ = uVar2;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        uVar2 = sVar11 + sVar12 + sVar8;
        local_80 = CONCAT62(local_80._2_6_,uVar2);
        if (puVar18 < puVar21) {
          *puVar18 = uVar2;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18 + 1;
        }
        else {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
        }
        iVar29 = iVar29 + iVar1;
        if (iVar16 <= iVar29) break;
        iVar28 = *(int *)(this + 0xa0);
      }
    }
    if ((*(long *)(this + 0xd0) == 0) ||
       (iVar20 = *(int *)(this + 0xa0), *(int *)(*(long *)(this + 0xd0) + 0xa0) <= iVar20)) {
      if (iVar13 < iVar16 - iVar13) {
        iVar20 = 0;
        sVar12 = (short)(iVar16 + 1 << (ulong)(uVar23 & 0x1f));
        do {
          lVar26 = (long)*(int *)(this + 0xa0);
          sVar11 = (short)iVar20;
          uVar2 = sVar7 + sVar11;
          puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
          if (puVar18 < puVar21) {
            puVar19 = puVar18 + 1;
            *puVar18 = uVar2;
            *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
                    /* try { // try from 00d4a298 to 00e4a2eb has its CatchHandler @ 00d4a298
                       catch() { ... } // from try @ 00d4a298 with catch @ 00d4a298
                       catch() { ... } // from try @ 00d4a4e8 with catch @ 00d4a298 */
          }
          else {
            local_80._0_2_ = uVar2;
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
            lVar26 = (long)*(int *)(this + 0xa0);
            puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
            puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
          }
          local_80._0_2_ = sVar12 + sVar7 + sVar11;
          if (puVar19 < puVar21) {
            puVar18 = puVar19 + 1;
            *puVar19 = (ushort)local_80;
            *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
          }
          else {
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
                    /* try { // try from 00d4a2ec to 00e4a2f7 has its CatchHandler @ 00d4a554 */
            lVar26 = (long)*(int *)(this + 0xa0);
                    /* try { // try from 00d4a2f8 to 00e4a31f has its CatchHandler @ 00d4a558 */
            puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
            puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
          }
          uVar3 = sVar10 + sVar12 + sVar11;
          if (puVar18 < puVar21) {
            puVar19 = puVar18 + 1;
            *puVar18 = uVar3;
            *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
          }
          else {
                    /* try { // try from 00d4a320 to 00e4a32f has its CatchHandler @ 00d4a550 */
            local_80._0_2_ = uVar3;
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
            lVar26 = (long)*(int *)(this + 0xa0);
                    /* try { // try from 00d4a330 to 00e4a33b has its CatchHandler @ 00d4a54c */
            puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
            puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
          }
          if (puVar19 < puVar21) {
            puVar18 = puVar19 + 1;
            *puVar19 = uVar2;
            *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
          }
          else {
                    /* try { // try from 00d4a35c to 00e4a3af has its CatchHandler @ 00d4a564 */
            local_80._0_2_ = uVar2;
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
            lVar26 = (long)*(int *)(this + 0xa0);
            puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
            puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
          }
          if (puVar18 < puVar21) {
            puVar19 = puVar18 + 1;
            *puVar18 = uVar3;
            *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
          }
          else {
            local_80._0_2_ = uVar3;
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
            lVar26 = (long)*(int *)(this + 0xa0);
            puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
            puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
          }
          local_80 = CONCAT62(local_80._2_6_,sVar10 + sVar11);
                    /* try { // try from 00d4a3c8 to 00e4a3d7 has its CatchHandler @ 00d4a548 */
          if (puVar19 < puVar21) {
            *puVar19 = sVar10 + sVar11;
            *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19 + 1;
          }
          else {
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          }
          iVar20 = iVar20 + iVar13;
        } while (iVar13 + iVar20 < iVar16 - iVar13);
      }
    }
    else if (0 < iVar16) {
      iVar13 = 0;
      sVar12 = (short)(iVar16 + 1 << (ulong)(uVar23 & 0x1f));
      while( true ) {
        uVar2 = (ushort)iVar13;
        puVar18 = *(ushort **)(this + (long)iVar20 * 0x18 + 0x30);
        lVar26 = (long)iVar20;
        puVar21 = *(ushort **)(this + (long)iVar20 * 0x18 + 0x38);
        if (puVar18 < puVar21) {
          puVar19 = puVar18 + 1;
          *puVar18 = uVar2;
          *(ushort **)(this + (long)iVar20 * 0x18 + 0x30) = puVar19;
        }
        else {
          local_80._0_2_ = uVar2;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        local_80._0_2_ = sVar12 + uVar2;
        if (puVar19 < puVar21) {
          puVar18 = puVar19 + 1;
          *puVar19 = (ushort)local_80;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
        }
        else {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        uVar3 = sVar12 + sVar7 + uVar2;
        if (puVar18 < puVar21) {
          puVar19 = puVar18 + 1;
          *puVar18 = uVar3;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
        }
        else {
          local_80._0_2_ = uVar3;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        if (puVar19 < puVar21) {
          puVar18 = puVar19 + 1;
          *puVar19 = uVar2;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
        }
        else {
          local_80._0_2_ = uVar2;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        if (puVar18 < puVar21) {
          puVar19 = puVar18 + 1;
          *puVar18 = uVar3;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
        }
        else {
          local_80._0_2_ = uVar3;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        iVar13 = iVar13 + iVar1;
        uVar4 = (ushort)iVar13;
        if (puVar19 < puVar21) {
          puVar18 = puVar19 + 1;
          *puVar19 = uVar4;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
        }
        else {
          local_80._0_2_ = uVar4;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        if (puVar18 < puVar21) {
          puVar19 = puVar18 + 1;
          *puVar18 = uVar4;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar19;
        }
        else {
          local_80._0_2_ = uVar4;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar19 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        if (puVar19 < puVar21) {
          puVar18 = puVar19 + 1;
          *puVar19 = uVar3;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18;
        }
        else {
          local_80._0_2_ = uVar3;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
          lVar26 = (long)*(int *)(this + 0xa0);
          puVar18 = *(ushort **)(this + lVar26 * 0x18 + 0x30);
          puVar21 = *(ushort **)(this + lVar26 * 0x18 + 0x38);
        }
        uVar2 = sVar12 + sVar11 + uVar2;
        local_80 = CONCAT62(local_80._2_6_,uVar2);
        if (puVar18 < puVar21) {
          *puVar18 = uVar2;
          *(ushort **)(this + lVar26 * 0x18 + 0x30) = puVar18 + 1;
        }
        else {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar26 * 0x18 + 0x28),(ushort *)&local_80);
        }
        if (iVar16 <= iVar13) break;
        iVar20 = *(int *)(this + 0xa0);
      }
    }
                    /* try { // try from 00d4a3d8 to 00e4a3e3 has its CatchHandler @ 00d4a544 */
    uVar23 = *(uint *)(this + 0xa0);
    this_00 = *(Terrain **)(this + 0xe8);
    puVar21 = *(ushort **)(this + (long)(int)uVar23 * 0x18 + 0x28);
    lVar26 = *(long *)(this + (long)(int)uVar23 * 0x18 + 0x30);
  }
  uVar14 = insertIndicesLOD(this_00,&local_90,uVar23,puVar21,
                            (int)((ulong)(lVar26 - (long)puVar21) >> 1));
  *(undefined8 *)(this + 0x1c) = uVar14;
LAB_00d4a43c:
  if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* try { // try from 00d4a464 to 00e4a473 has its CatchHandler @ 00d4a540 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

