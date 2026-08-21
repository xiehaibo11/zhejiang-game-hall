
/* cocos2d::Bundle3D::loadMeshDatasBinary(cocos2d::MeshDatas&) */

void __thiscall cocos2d::Bundle3D::loadMeshDatasBinary(Bundle3D *this,MeshDatas *param_1)

{
  BundleReader *this_00;
  float *pfVar1;
  ulong uVar2;
  ulong *puVar3;
  vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *this_01;
  undefined8 *puVar4;
  Bundle3D BVar5;
  long lVar6;
  ushort *puVar7;
  int *piVar8;
  int *piVar11;
  undefined4 uVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  Bundle3D *pBVar19;
  Bundle3D *extraout_x0;
  void *pvVar20;
  ulong uVar21;
  int *piVar22;
  int *piVar23;
  ulong uVar24;
  undefined8 *puVar25;
  MeshData *pMVar26;
  uint uVar27;
  long lVar28;
  uint uVar29;
  void *__dest;
  ushort *puVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  Vec3 aVStack_118 [16];
  Vec3 aVStack_108 [16];
  int local_f8 [7];
  uint local_dc;
  uint local_d8;
  uint local_d4;
  basic_string local_d0;
  undefined7 uStack_cf;
  ulong uStack_c8;
  void *local_c0;
  int local_b4;
  MeshData *local_b0;
  uint local_a4;
  ushort *local_a0;
  ushort *puStack_98;
  undefined1 *local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  long local_70;
  int *piVar9;
  int *piVar10;
  int *piVar12;
  int *piVar13;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_a0,"");
  lVar16 = seekToFirstType(this,0x22,(basic_string *)&local_a0);
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (lVar16 == 0) {
    uVar17 = 0;
  }
  else {
    this_00 = (BundleReader *)(this + 0xe0);
    local_a4 = 0;
    lVar16 = BundleReader::read(this_00,&local_a4,4,1);
    uVar17 = 0;
    if (lVar16 == 1) {
      uVar17 = 1;
      local_b0 = (MeshData *)0x0;
      if (local_a4 != 0) {
        uVar27 = 0;
        do {
          local_b4 = 0;
          lVar16 = BundleReader::read(this_00,&local_b4,4,1);
          iVar31 = local_b4;
          iVar15 = 9;
          if ((lVar16 != 1) || (local_b4 == 0)) {
LAB_00d204ec:
            if (iVar15 == 9) {
LAB_00d204f4:
              pMVar26 = local_b0;
              if (local_b0 != (MeshData *)0x0) {
                MeshData::~MeshData(local_b0);
                operator_delete(pMVar26);
              }
              local_b0 = (MeshData *)0x0;
              puVar25 = *(undefined8 **)param_1;
              puVar4 = *(undefined8 **)(param_1 + 8);
              if (puVar25 != puVar4) {
                do {
                  pMVar26 = (MeshData *)*puVar25;
                  if (pMVar26 != (MeshData *)0x0) {
                    MeshData::~MeshData(pMVar26);
                    operator_delete(pMVar26);
                  }
                  puVar25 = puVar25 + 1;
                } while (puVar4 != puVar25);
                puVar25 = *(undefined8 **)param_1;
              }
              uVar17 = 0;
              *(undefined8 **)(param_1 + 8) = puVar25;
              goto LAB_00d20564;
            }
            break;
          }
          uVar24 = (ulong)local_b4;
          local_b0 = operator_new(0x90,(nothrow_t *)&std::nothrow);
          if (local_b0 != (MeshData *)0x0) {
            *(long *)local_b0 = 0;
            *(long *)(local_b0 + 8) = 0;
            *(undefined4 *)(local_b0 + 0x18) = 0;
            *(long *)(local_b0 + 0x10) = 0;
            *(long *)(local_b0 + 0x28) = 0;
            *(long *)(local_b0 + 0x20) = 0;
            *(long *)(local_b0 + 0x38) = 0;
            *(long *)(local_b0 + 0x30) = 0;
            *(long *)(local_b0 + 0x48) = 0;
            *(long *)(local_b0 + 0x40) = 0;
            *(long *)(local_b0 + 0x58) = 0;
            *(long *)(local_b0 + 0x50) = 0;
            *(undefined8 *)(local_b0 + 100) = 0;
            *(undefined8 *)(local_b0 + 0x5c) = 0;
            *(long *)(local_b0 + 0x78) = 0;
            *(long *)(local_b0 + 0x80) = 0;
            *(long *)(local_b0 + 0x70) = 0;
            *(undefined4 *)(local_b0 + 0x88) = 0;
          }
          lVar16 = *(long *)(local_b0 + 0x70);
          *(int *)(local_b0 + 0x88) = iVar31;
          uVar21 = *(long *)(local_b0 + 0x78) - lVar16 >> 4;
          if (uVar21 < uVar24) {
            std::__ndk1::
            vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>::
            __append((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
                      *)(local_b0 + 0x70),uVar24 - uVar21);
            iVar31 = *(int *)(local_b0 + 0x88);
          }
          else if (uVar21 != uVar24) {
            *(ulong *)(local_b0 + 0x78) = lVar16 + uVar24 * 0x10;
          }
          if (0 < iVar31) {
            lVar28 = 0;
            lVar16 = 0;
            do {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string<decltype(nullptr)>
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_a0,"");
              lVar18 = BundleReader::read(this_00,local_f8,4,1);
              if (lVar18 == 1) {
                BundleReader::readString();
                pBVar19 = (Bundle3D *)BundleReader::readString();
                if (((ulong)local_a0 & 1) != 0) {
                  *local_90 = 0;
                  puStack_98 = (ushort *)0x0;
                  if (((ulong)local_a0 & 1) != 0) {
                    operator_delete(local_90);
                    pBVar19 = extraout_x0;
                  }
                }
                puStack_98 = (ushort *)CONCAT44(fStack_7c,fStack_80);
                local_a0 = (ushort *)CONCAT44(fStack_84,local_88);
                local_90 = (undefined1 *)CONCAT44(fStack_74,local_78);
                lVar18 = *(long *)(local_b0 + 0x70);
                *(int *)(lVar18 + lVar28) = local_f8[0];
                ((int *)(lVar18 + lVar28))[3] = local_f8[0] << 2;
                pBVar19 = (Bundle3D *)parseGLType(pBVar19,&local_d0);
                *(int *)(*(long *)(local_b0 + 0x70) + lVar28 + 4) = (int)pBVar19;
                uVar14 = parseGLProgramAttribute(pBVar19,(basic_string *)&local_a0);
                *(undefined4 *)(*(long *)(local_b0 + 0x70) + lVar28 + 8) = uVar14;
                if (((byte)local_d0 & 1) != 0) {
                  operator_delete(local_c0);
                }
                iVar15 = 0;
              }
              else {
                iVar15 = 9;
              }
              if (((ulong)local_a0 & 1) != 0) {
                operator_delete(local_90);
              }
              if (iVar15 != 0) goto LAB_00d204ec;
              lVar16 = lVar16 + 1;
              lVar28 = lVar28 + 0x10;
            } while (lVar16 < *(int *)(local_b0 + 0x88));
          }
          local_d4 = 0;
          lVar16 = BundleReader::read(this_00,&local_d4,4,1);
          if ((lVar16 != 1) || (uVar24 = (ulong)local_d4, local_d4 == 0)) goto LAB_00d204f4;
          pvVar20 = *(void **)local_b0;
          uVar21 = *(long *)(local_b0 + 8) - (long)pvVar20 >> 2;
          if (uVar21 < uVar24) {
            std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
                      ((vector<float,std::__ndk1::allocator<float>> *)local_b0,uVar24 - uVar21);
            uVar24 = (ulong)local_d4;
            pvVar20 = *(void **)local_b0;
          }
          else if (uVar21 != uVar24) {
            *(void **)(local_b0 + 8) = (void *)((long)pvVar20 + uVar24 * 4);
          }
          uVar24 = BundleReader::read(this_00,pvVar20,4,uVar24);
          if (uVar24 != local_d4) goto LAB_00d204f4;
          local_d8 = 1;
          BundleReader::read(this_00,&local_d8,4,1);
          if (local_d8 != 0) {
            uVar29 = 0;
            do {
              puStack_98 = (ushort *)0x0;
              local_90 = (undefined1 *)0x0;
              local_a0 = (ushort *)0x0;
              BundleReader::readString();
              pMVar26 = local_b0;
              pvVar20 = local_c0;
              uVar24 = uStack_c8;
              puVar3 = *(ulong **)(local_b0 + 0x40);
              if (puVar3 == *(ulong **)(local_b0 + 0x48)) {
                std::__ndk1::
                vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                ::
                __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                          ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                            *)(local_b0 + 0x38),&local_d0);
              }
              else {
                *puVar3 = 0;
                puVar3[1] = 0;
                puVar3[2] = 0;
                if (((byte)local_d0 & 1) == 0) {
                  puVar3[2] = (ulong)local_c0;
                  puVar3[1] = uStack_c8;
                  *puVar3 = CONCAT71(uStack_cf,local_d0);
                }
                else {
                  if (0xffffffffffffffef < uStack_c8) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_c8 < 0x17) {
                    __dest = (void *)((long)puVar3 + 1);
                    *(char *)puVar3 = (char)((int)uStack_c8 << 1);
                    if (uStack_c8 != 0) goto LAB_00d20184;
                  }
                  else {
                    uVar21 = uStack_c8 + 0x10 & 0xfffffffffffffff0;
                    __dest = operator_new(uVar21);
                    puVar3[1] = uVar24;
                    puVar3[2] = (ulong)__dest;
                    *puVar3 = uVar21 | 1;
LAB_00d20184:
                    memcpy(__dest,pvVar20,uVar24);
                  }
                  *(undefined1 *)((long)__dest + uVar24) = 0;
                }
                *(ulong **)(pMVar26 + 0x40) = puVar3 + 3;
              }
              lVar16 = BundleReader::read(this_00,&local_dc,4,1);
              if (lVar16 == 1) {
                uVar24 = (ulong)local_dc;
                uVar21 = (long)puStack_98 - (long)local_a0 >> 1;
                if (uVar21 < uVar24) {
                  std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
                  __append((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                           &local_a0,uVar24 - uVar21);
                  uVar24 = (ulong)local_dc;
                }
                else if (uVar21 != uVar24) {
                  puStack_98 = local_a0 + uVar24;
                }
                uVar24 = BundleReader::read(this_00,local_a0,2,uVar24);
                pMVar26 = local_b0;
                if (uVar24 != local_dc) goto LAB_00d20338;
                this_01 = *(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> **)
                           (local_b0 + 0x28);
                if (this_01 ==
                    *(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> **)
                     (local_b0 + 0x30)) {
                  std::__ndk1::
                  vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
                  ::
                  __push_back_slow_path<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>const&>
                            ((vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
                              *)(local_b0 + 0x20),(vector *)&local_a0);
                }
                else {
                  std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::vector
                            (this_01,(vector *)&local_a0);
                  *(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> **)
                   (pMVar26 + 0x28) = this_01 + 0x18;
                }
                pMVar26 = local_b0;
                *(int *)(local_b0 + 0x68) =
                     (int)((ulong)(*(long *)(local_b0 + 0x28) - *(long *)(local_b0 + 0x20)) >> 3) *
                     -0x55555555;
                BVar5 = this[0x38];
                uVar24 = (ulong)((byte)BVar5 >> 1);
                if (((byte)BVar5 & 1) != 0) {
                  uVar24 = *(ulong *)(this + 0x40);
                }
                if (uVar24 == 3) {
                  pBVar19 = this + 0x39;
                  if (((byte)BVar5 & 1) != 0) {
                    pBVar19 = *(Bundle3D **)(this + 0x48);
                  }
                  iVar15 = memcmp(pBVar19,"0.3",3);
                  if (((iVar15 != 0) && (iVar15 = memcmp(pBVar19,&DAT_013c6afc,3), iVar15 != 0)) &&
                     (iVar15 = memcmp(pBVar19,&DAT_01418e73,3), iVar15 != 0)) goto LAB_00d202d8;
                  lVar16 = *(long *)(pMVar26 + 0x70);
                  lVar28 = *(long *)(pMVar26 + 0x78);
                  if (lVar16 == lVar28) {
                    iVar15 = 0;
                  }
                  else {
                    uVar21 = (lVar28 - lVar16) - 0x10U >> 4;
                    uVar24 = uVar21 + 1;
                    if (uVar24 < 9) {
                      iVar15 = 0;
                    }
                    else {
                      uVar2 = 8;
                      if ((uVar24 & 7) != 0) {
                        uVar2 = uVar24 & 7;
                      }
                      piVar22 = (int *)(lVar16 + 0x4c);
                      iVar15 = 0;
                      iVar31 = 0;
                      iVar32 = 0;
                      iVar33 = 0;
                      lVar16 = lVar16 + (uVar24 - uVar2) * 0x10;
                      lVar18 = (uVar21 - uVar2) + 1;
                      iVar34 = 0;
                      iVar35 = 0;
                      iVar36 = 0;
                      iVar37 = 0;
                      do {
                        piVar23 = piVar22 + -0x10;
                        iVar38 = *piVar22;
                        piVar8 = piVar22 + 4;
                        piVar9 = piVar22 + 8;
                        piVar10 = piVar22 + 0xc;
                        piVar11 = piVar22 + -0xc;
                        piVar12 = piVar22 + -8;
                        piVar13 = piVar22 + -4;
                        lVar18 = lVar18 + -8;
                        piVar22 = piVar22 + 0x20;
                        iVar34 = iVar38 + iVar34;
                        iVar35 = *piVar8 + iVar35;
                        iVar36 = *piVar9 + iVar36;
                        iVar37 = *piVar10 + iVar37;
                        iVar15 = *piVar23 + iVar15;
                        iVar31 = *piVar11 + iVar31;
                        iVar32 = *piVar12 + iVar32;
                        iVar33 = *piVar13 + iVar33;
                      } while (lVar18 != 0);
                      iVar15 = iVar34 + iVar15 + iVar35 + iVar31 + iVar36 + iVar32 + iVar37 + iVar33
                      ;
                    }
                    do {
                      piVar22 = (int *)(lVar16 + 0xc);
                      lVar16 = lVar16 + 0x10;
                      iVar15 = *piVar22 + iVar15;
                    } while (lVar28 != lVar16);
                  }
                  AABB::AABB((AABB *)&local_88);
                  puVar7 = puStack_98;
                  iVar31 = iVar15 + 3;
                  if (-1 < iVar15) {
                    iVar31 = iVar15;
                  }
                  if (local_a0 != puStack_98) {
                    puVar30 = local_a0;
                    do {
                      pfVar1 = (float *)(*(long *)pMVar26 +
                                        (long)(iVar31 >> 2) * (ulong)*puVar30 * 4);
                      Vec3::Vec3((Vec3 *)local_f8,*pfVar1,pfVar1[1],pfVar1[2]);
                      AABB::updateMinMax((AABB *)&local_88,(Vec3 *)local_f8,1);
                      puVar30 = puVar30 + 1;
                    } while (puVar7 != puVar30);
                  }
                  FUN_00d1c324((vector<float,std::__ndk1::allocator<float>> *)(pMVar26 + 0x50),
                               &local_88);
                }
                else {
LAB_00d202d8:
                  lVar16 = BundleReader::read(this_00,&local_88,4,6);
                  pMVar26 = local_b0;
                  if (lVar16 != 6) goto LAB_00d20338;
                  Vec3::Vec3(aVStack_108,local_88,fStack_84,fStack_80);
                  Vec3::Vec3(aVStack_118,fStack_7c,local_78,fStack_74);
                  AABB::AABB((AABB *)local_f8,aVStack_108,aVStack_118);
                  FUN_00d1c324((vector<float,std::__ndk1::allocator<float>> *)(pMVar26 + 0x50),
                               local_f8);
                }
                iVar15 = 0;
              }
              else {
LAB_00d20338:
                iVar15 = 9;
              }
              if (((byte)local_d0 & 1) != 0) {
                operator_delete(local_c0);
              }
              if (local_a0 != (ushort *)0x0) {
                puStack_98 = local_a0;
                operator_delete(local_a0);
              }
              if (iVar15 != 0) goto LAB_00d204b4;
              uVar29 = uVar29 + 1;
            } while (uVar29 < local_d8);
          }
          puVar25 = *(undefined8 **)(param_1 + 8);
          if (puVar25 == *(undefined8 **)(param_1 + 0x10)) {
            std::__ndk1::vector<cocos2d::MeshData*,std::__ndk1::allocator<cocos2d::MeshData*>>::
            __push_back_slow_path<cocos2d::MeshData*const&>
                      ((vector<cocos2d::MeshData*,std::__ndk1::allocator<cocos2d::MeshData*>> *)
                       param_1,&local_b0);
          }
          else {
            iVar15 = 0;
            *puVar25 = local_b0;
            *(undefined8 **)(param_1 + 8) = puVar25 + 1;
LAB_00d204b4:
            if (iVar15 != 0) goto LAB_00d204ec;
          }
          uVar27 = uVar27 + 1;
        } while (uVar27 < local_a4);
        uVar17 = 1;
      }
    }
  }
LAB_00d20564:
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar17);
}

