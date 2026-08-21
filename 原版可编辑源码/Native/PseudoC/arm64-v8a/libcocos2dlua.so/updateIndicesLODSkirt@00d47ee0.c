
/* cocos2d::Terrain::Chunk::updateIndicesLODSkirt() */

void __thiscall cocos2d::Terrain::Chunk::updateIndicesLODSkirt(Chunk *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  short sVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  ushort *puVar15;
  ushort *puVar16;
  ushort *puVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  ushort local_6c [2];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar1 = *(uint *)(this + 0xa0);
  if (*(uint *)(this + 0xa4) != uVar1) {
    *(uint *)(this + 0xa4) = uVar1;
    lVar14 = *(long *)(*(long *)(this + 0xe8) + 0x310);
    lVar10 = *(long *)(*(long *)(this + 0xe8) + 0x318);
    if ((lVar14 != lVar10) && (lVar10 = lVar10 - lVar14, lVar10 != 0)) {
      uVar11 = 0;
      lVar14 = lVar14 + 8;
      do {
        if (*(uint *)(lVar14 + -8) == uVar1) {
          *(undefined8 *)(this + 0x1c) = *(undefined8 *)(lVar14 + -4);
          goto LAB_00d48904;
        }
        uVar11 = uVar11 + 1;
        lVar14 = lVar14 + 0xc;
      } while (uVar11 < (ulong)((lVar10 >> 2) * -0x5555555555555555));
    }
    *(undefined8 *)(this + 0x1c) = 0;
    iVar12 = (int)*(float *)(this + 0xf4);
    iVar9 = (int)*(float *)(this + 0xf0);
    iVar2 = 1 << (ulong)(uVar1 & 0x1f);
    sVar7 = (short)iVar2;
    if (0 < iVar12) {
      iVar23 = 0;
      iVar13 = 0;
      iVar3 = iVar2 * (iVar9 + 1);
      iVar21 = iVar2;
      do {
        if (0 < iVar9) {
          iVar22 = 0;
          sVar20 = (short)(iVar9 + 1 << (ulong)(uVar1 & 0x1f));
          do {
            lVar14 = (long)*(int *)(this + 0xa0);
            sVar19 = (short)iVar22;
            local_6c[0] = (short)iVar23 + sVar19;
            puVar15 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
            puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
            if (puVar15 < puVar17) {
              puVar16 = puVar15 + 1;
              *puVar15 = local_6c[0];
              *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar16;
            }
            else {
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar14 * 0x18 + 0x28),local_6c);
              lVar14 = (long)*(int *)(this + 0xa0);
              puVar16 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
              puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
            }
            uVar4 = sVar20 + (short)iVar23 + sVar19;
            if (puVar16 < puVar17) {
              puVar15 = puVar16 + 1;
              *puVar16 = uVar4;
              *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar15;
            }
            else {
              local_6c[0] = uVar4;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar14 * 0x18 + 0x28),local_6c);
              lVar14 = (long)*(int *)(this + 0xa0);
              puVar15 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
              puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
            }
            uVar5 = (short)iVar21 + sVar19;
            if (puVar15 < puVar17) {
              puVar16 = puVar15 + 1;
              *puVar15 = uVar5;
              *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar16;
            }
            else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4812c with catch @ 00d480d8
                        */
              local_6c[0] = uVar5;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar14 * 0x18 + 0x28),local_6c);
              lVar14 = (long)*(int *)(this + 0xa0);
              puVar16 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
              puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
            }
            if (puVar16 < puVar17) {
              puVar15 = puVar16 + 1;
              *puVar16 = uVar5;
              *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar15;
            }
            else {
              local_6c[0] = uVar5;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar14 * 0x18 + 0x28),local_6c);
              lVar14 = (long)*(int *)(this + 0xa0);
                    /* try { // try from 00d48124 to 00e4812b has its CatchHandler @ 00d482a0 */
                    /* try { // try from 00d4812c to 00e482a3 has its CatchHandler @ 00d480d8 */
              puVar15 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
              puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
            }
            if (puVar15 < puVar17) {
              puVar16 = puVar15 + 1;
              *puVar15 = uVar4;
              *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar16;
            }
            else {
              local_6c[0] = uVar4;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar14 * 0x18 + 0x28),local_6c);
              lVar14 = (long)*(int *)(this + 0xa0);
              puVar16 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
              puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
            }
            local_6c[0] = sVar20 + (short)iVar21 + sVar19;
            if (puVar16 < puVar17) {
              *puVar16 = local_6c[0];
              *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar16 + 1;
            }
            else {
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                         (this + lVar14 * 0x18 + 0x28),local_6c);
            }
            iVar22 = iVar22 + iVar2;
          } while (iVar22 < iVar9);
        }
        iVar13 = iVar13 + iVar2;
        iVar21 = iVar21 + iVar3;
        iVar23 = iVar23 + iVar3;
      } while (iVar13 < iVar12);
      if (0 < iVar12) {
        iVar23 = 0;
        iVar13 = iVar9 + 1;
        sVar20 = (short)iVar13 * ((short)iVar12 + 1);
        iVar21 = iVar9;
        do {
          lVar14 = (long)*(int *)(this + 0xa0);
          uVar4 = (ushort)iVar21;
          puVar15 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
          puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
          if (puVar15 < puVar17) {
            puVar16 = puVar15 + 1;
            *puVar15 = uVar4;
            *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar16;
          }
          else {
            local_6c[0] = uVar4;
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (this + lVar14 * 0x18 + 0x28),local_6c);
            lVar14 = (long)*(int *)(this + 0xa0);
            puVar16 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
            puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
          }
          uVar4 = (short)(iVar13 << (ulong)(uVar1 & 0x1f)) + uVar4;
          if (puVar16 < puVar17) {
            puVar15 = puVar16 + 1;
            *puVar16 = uVar4;
            *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar15;
          }
          else {
            local_6c[0] = uVar4;
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (this + lVar14 * 0x18 + 0x28),local_6c);
            lVar14 = (long)*(int *)(this + 0xa0);
            puVar15 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
            puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
          }
          uVar5 = sVar20 + (short)iVar23;
          if (puVar15 < puVar17) {
            puVar16 = puVar15 + 1;
            *puVar15 = uVar5;
            *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar16;
          }
          else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d48124 with catch @ 00d482a0
                        */
            local_6c[0] = uVar5;
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (this + lVar14 * 0x18 + 0x28),local_6c);
            lVar14 = (long)*(int *)(this + 0xa0);
            puVar16 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
            puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
          }
          if (puVar16 < puVar17) {
            puVar15 = puVar16 + 1;
            *puVar16 = uVar5;
            *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar15;
          }
          else {
            local_6c[0] = uVar5;
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (this + lVar14 * 0x18 + 0x28),local_6c);
            lVar14 = (long)*(int *)(this + 0xa0);
            puVar15 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
            puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
          }
          if (puVar15 < puVar17) {
            puVar16 = puVar15 + 1;
            *puVar15 = uVar4;
            *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar16;
          }
          else {
            local_6c[0] = uVar4;
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (this + lVar14 * 0x18 + 0x28),local_6c);
            lVar14 = (long)*(int *)(this + 0xa0);
            puVar16 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
            puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
          }
          local_6c[0] = sVar7 + sVar20 + (short)iVar23;
          if (puVar16 < puVar17) {
            *puVar16 = local_6c[0];
            *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar16 + 1;
          }
          else {
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (this + lVar14 * 0x18 + 0x28),local_6c);
          }
          iVar21 = iVar21 + iVar2 * iVar13;
          iVar23 = iVar23 + iVar2;
        } while (iVar23 < iVar12);
      }
    }
    if (0 < iVar9) {
      iVar13 = 0;
      sVar20 = (short)iVar12 * ((short)iVar9 + 1);
      do {
        lVar14 = (long)*(int *)(this + 0xa0);
        sVar19 = (short)iVar13;
        local_6c[0] = sVar20 + sVar19;
        puVar15 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
        puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
        if (puVar15 < puVar17) {
          puVar16 = puVar15 + 1;
          *puVar15 = local_6c[0];
          *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar16;
        }
        else {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar14 * 0x18 + 0x28),local_6c);
          lVar14 = (long)*(int *)(this + 0xa0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4844c with catch @ 00d483f0
                       catch(type#1 @ 00000000) { ... } // from try @ 00d48618 with catch @ 00d483f0
                        */
          puVar16 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
          puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
        }
        local_6c[0] = sVar19 + (short)*(undefined4 *)(*(long *)(this + 0xe8) + 0x805e8);
        if (puVar16 < puVar17) {
          puVar15 = puVar16 + 1;
          *puVar16 = local_6c[0];
          *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar15;
        }
        else {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar14 * 0x18 + 0x28),local_6c);
          lVar14 = (long)*(int *)(this + 0xa0);
          puVar15 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
          puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
        }
        uVar4 = sVar7 + sVar20 + sVar19;
                    /* try { // try from 00d48444 to 00e4844b has its CatchHandler @ 00d48724 */
                    /* try { // try from 00d4844c to 00e485a7 has its CatchHandler @ 00d483f0 */
        if (puVar15 < puVar17) {
          puVar16 = puVar15 + 1;
          *puVar15 = uVar4;
          *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar16;
        }
        else {
          local_6c[0] = uVar4;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar14 * 0x18 + 0x28),local_6c);
          lVar14 = (long)*(int *)(this + 0xa0);
          puVar16 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
          puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
        }
        if (puVar16 < puVar17) {
          puVar15 = puVar16 + 1;
          *puVar16 = uVar4;
          *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar15;
        }
        else {
          local_6c[0] = uVar4;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar14 * 0x18 + 0x28),local_6c);
          lVar14 = (long)*(int *)(this + 0xa0);
          puVar15 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
          puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
        }
        sVar18 = (short)*(undefined4 *)(*(long *)(this + 0xe8) + 0x805e8);
        local_6c[0] = sVar19 + sVar18;
        if (puVar15 < puVar17) {
          puVar16 = puVar15 + 1;
          *puVar15 = local_6c[0];
          *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar16;
        }
        else {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar14 * 0x18 + 0x28),local_6c);
          lVar14 = (long)*(int *)(this + 0xa0);
          sVar18 = (short)*(undefined4 *)(*(long *)(this + 0xe8) + 0x805e8);
          puVar16 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
          puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
        }
        iVar13 = iVar13 + iVar2;
        local_6c[0] = sVar7 + sVar18 + sVar19;
        if (puVar16 < puVar17) {
          *puVar16 = local_6c[0];
          *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar16 + 1;
        }
        else {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar14 * 0x18 + 0x28),local_6c);
        }
      } while (iVar13 < iVar9);
    }
    if (0 < iVar12) {
      iVar13 = 0;
      iVar21 = 0;
      iVar23 = iVar2 * (iVar9 + 1);
      do {
        lVar14 = (long)*(int *)(this + 0xa0);
        uVar4 = (ushort)iVar13;
        puVar15 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
        puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
        if (puVar15 < puVar17) {
          puVar16 = puVar15 + 1;
                    /* try { // try from 00d485a8 to 00e485b3 has its CatchHandler @ 00d48710 */
          *puVar15 = uVar4;
          *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar16;
        }
        else {
          local_6c[0] = uVar4;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar14 * 0x18 + 0x28),local_6c);
          lVar14 = (long)*(int *)(this + 0xa0);
          puVar16 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
          puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
        }
        sVar20 = (short)iVar21;
        local_6c[0] = sVar20 + (short)*(undefined4 *)(*(long *)(this + 0xe8) + 0x805ec);
        if (puVar16 < puVar17) {
          puVar15 = puVar16 + 1;
          *puVar16 = local_6c[0];
          *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar15;
        }
        else {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar14 * 0x18 + 0x28),local_6c);
          lVar14 = (long)*(int *)(this + 0xa0);
                    /* try { // try from 00d48610 to 00e48617 has its CatchHandler @ 00d486f8 */
                    /* try { // try from 00d48618 to 00e48727 has its CatchHandler @ 00d483f0 */
          puVar15 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
          puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
        }
        uVar4 = (short)iVar23 + uVar4;
        if (puVar15 < puVar17) {
          puVar16 = puVar15 + 1;
          *puVar15 = uVar4;
          *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar16;
        }
        else {
          local_6c[0] = uVar4;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar14 * 0x18 + 0x28),local_6c);
          lVar14 = (long)*(int *)(this + 0xa0);
          puVar16 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
          puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
        }
        if (puVar16 < puVar17) {
          puVar15 = puVar16 + 1;
          *puVar16 = uVar4;
          *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar15;
        }
        else {
          local_6c[0] = uVar4;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar14 * 0x18 + 0x28),local_6c);
          lVar14 = (long)*(int *)(this + 0xa0);
          puVar15 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
          puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
        }
        sVar19 = (short)*(undefined4 *)(*(long *)(this + 0xe8) + 0x805ec);
        local_6c[0] = sVar20 + sVar19;
        if (puVar15 < puVar17) {
          puVar16 = puVar15 + 1;
          *puVar15 = local_6c[0];
          *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar16;
        }
        else {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar14 * 0x18 + 0x28),local_6c);
          lVar14 = (long)*(int *)(this + 0xa0);
          sVar19 = (short)*(undefined4 *)(*(long *)(this + 0xe8) + 0x805ec);
          puVar16 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
          puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d48610 with catch @ 00d486f8
                        */
        iVar21 = iVar21 + iVar2;
        local_6c[0] = sVar7 + sVar19 + sVar20;
        if (puVar16 < puVar17) {
          *puVar16 = local_6c[0];
          *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar16 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d485a8 with catch @ 00d48710
                        */
        }
        else {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar14 * 0x18 + 0x28),local_6c);
        }
        iVar13 = iVar13 + iVar23;
      } while (iVar21 < iVar12);
    }
    if (0 < iVar9) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d48444 with catch @ 00d48724
                        */
      iVar12 = 0;
      do {
        lVar14 = (long)*(int *)(this + 0xa0);
        iVar13 = iVar12 + iVar2;
        uVar4 = (ushort)iVar13;
        puVar15 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
        puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
        if (puVar15 < puVar17) {
          puVar16 = puVar15 + 1;
          *puVar15 = uVar4;
          *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar16;
        }
        else {
          local_6c[0] = uVar4;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar14 * 0x18 + 0x28),local_6c);
          lVar14 = (long)*(int *)(this + 0xa0);
          puVar16 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
          puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
        }
        uVar5 = (ushort)iVar12;
        local_6c[0] = uVar5 + (short)*(undefined4 *)(*(long *)(this + 0xe8) + 0x805f0);
        if (puVar16 < puVar17) {
          puVar15 = puVar16 + 1;
          *puVar16 = local_6c[0];
          *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar15;
        }
        else {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar14 * 0x18 + 0x28),local_6c);
          lVar14 = (long)*(int *)(this + 0xa0);
          puVar15 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
          puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
        }
        if (puVar15 < puVar17) {
          puVar16 = puVar15 + 1;
          *puVar15 = uVar5;
          *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar16;
        }
        else {
          local_6c[0] = uVar5;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar14 * 0x18 + 0x28),local_6c);
          lVar14 = (long)*(int *)(this + 0xa0);
          puVar16 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
          puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
        }
        sVar20 = (short)*(undefined4 *)(*(long *)(this + 0xe8) + 0x805f0);
        local_6c[0] = sVar7 + uVar5 + sVar20;
        if (puVar16 < puVar17) {
          puVar15 = puVar16 + 1;
          *puVar16 = local_6c[0];
          *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar15;
        }
        else {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar14 * 0x18 + 0x28),local_6c);
          lVar14 = (long)*(int *)(this + 0xa0);
          sVar20 = (short)*(undefined4 *)(*(long *)(this + 0xe8) + 0x805f0);
          puVar15 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
          puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
        }
        local_6c[0] = sVar20 + uVar5;
        if (puVar15 < puVar17) {
          puVar16 = puVar15 + 1;
          *puVar15 = local_6c[0];
          *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar16;
        }
        else {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar14 * 0x18 + 0x28),local_6c);
          lVar14 = (long)*(int *)(this + 0xa0);
          puVar16 = *(ushort **)(this + lVar14 * 0x18 + 0x30);
          puVar17 = *(ushort **)(this + lVar14 * 0x18 + 0x38);
        }
        if (puVar16 < puVar17) {
          *puVar16 = uVar4;
          *(ushort **)(this + lVar14 * 0x18 + 0x30) = puVar16 + 1;
          local_6c[0] = uVar4;
        }
        else {
          local_6c[0] = uVar4;
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (this + lVar14 * 0x18 + 0x28),local_6c);
        }
        iVar12 = iVar13;
      } while (iVar13 < iVar9);
    }
    iVar2 = *(int *)(this + 0xa0);
    uVar8 = insertIndicesLODSkirt
                      (*(Terrain **)(this + 0xe8),iVar2,
                       *(ushort **)(this + (long)iVar2 * 0x18 + 0x28),
                       (int)((ulong)(*(long *)(this + (long)iVar2 * 0x18 + 0x30) -
                                    (long)*(ushort **)(this + (long)iVar2 * 0x18 + 0x28)) >> 1));
    *(undefined8 *)(this + 0x1c) = uVar8;
  }
LAB_00d48904:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

