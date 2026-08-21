
/* cocos2d::Bundle3D::loadMeshDatasBinary_0_2(cocos2d::MeshDatas&) */

void __thiscall cocos2d::Bundle3D::loadMeshDatasBinary_0_2(Bundle3D *this,MeshDatas *param_1)

{
  BundleReader *this_00;
  float *pfVar1;
  ulong uVar2;
  vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *this_01;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  ushort *puVar7;
  int *piVar8;
  int *piVar11;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  long lVar19;
  int *piVar20;
  uint uVar21;
  MeshData *pMVar22;
  undefined8 *puVar23;
  ushort *puVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  undefined4 local_c0 [7];
  uint local_a4;
  uint local_a0;
  uint local_9c;
  MeshData *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  void *local_80;
  int local_78 [4];
  long local_68;
  int *piVar9;
  int *piVar10;
  int *piVar12;
  int *piVar13;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_90,"");
  lVar14 = seekToFirstType(this,0x22,(basic_string *)&local_90);
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (lVar14 == 0) {
LAB_00d22cc0:
    uVar15 = 0;
    goto LAB_00d22cc4;
  }
  puVar23 = *(undefined8 **)param_1;
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar23 != puVar3) {
    do {
      pMVar22 = (MeshData *)*puVar23;
      if (pMVar22 != (MeshData *)0x0) {
        MeshData::~MeshData(pMVar22);
        operator_delete(pMVar22);
      }
      puVar23 = puVar23 + 1;
    } while (puVar3 != puVar23);
    puVar23 = *(undefined8 **)param_1;
  }
  *(undefined8 **)(param_1 + 8) = puVar23;
  local_98 = operator_new(0x90,(nothrow_t *)&std::nothrow);
  if (local_98 != (MeshData *)0x0) {
    *(undefined8 *)local_98 = 0;
    *(undefined8 *)(local_98 + 8) = 0;
    *(undefined4 *)(local_98 + 0x18) = 0;
    *(undefined8 *)(local_98 + 0x10) = 0;
    *(undefined8 *)(local_98 + 0x78) = 0;
    *(undefined8 *)(local_98 + 0x80) = 0;
    *(undefined8 *)(local_98 + 0x70) = 0;
    *(undefined8 *)(local_98 + 0x28) = 0;
    *(undefined8 *)(local_98 + 0x20) = 0;
    *(undefined8 *)(local_98 + 0x38) = 0;
    *(undefined8 *)(local_98 + 0x30) = 0;
    *(undefined8 *)(local_98 + 0x48) = 0;
    *(undefined8 *)(local_98 + 0x40) = 0;
    *(undefined8 *)(local_98 + 0x58) = 0;
    *(undefined8 *)(local_98 + 0x50) = 0;
    *(undefined8 *)(local_98 + 100) = 0;
    *(undefined8 *)(local_98 + 0x5c) = 0;
    *(undefined4 *)(local_98 + 0x88) = 0;
  }
  this_00 = (BundleReader *)(this + 0xe0);
  local_9c = 0;
  lVar14 = BundleReader::read(this_00,&local_9c,4,1);
  if ((lVar14 == 1) && (local_9c != 0)) {
    uVar21 = 0;
    do {
      lVar14 = BundleReader::read(this_00,local_c0,4,1);
      if ((lVar14 != 1) || (lVar14 = BundleReader::read(this_00,local_78,4,1), lVar14 != 1))
      goto LAB_00d22c9c;
      local_90 = (ushort *)CONCAT44(0x1406,local_78[0]);
      switch(local_c0[0]) {
      case 0:
        local_c0[0] = 0;
        break;
      case 2:
        local_c0[0] = 2;
        break;
      case 3:
        local_c0[0] = 6;
        break;
      case 4:
        local_c0[0] = 7;
        break;
      case 5:
        local_c0[0] = 8;
      }
      uStack_88 = (ushort *)CONCAT44(local_78[0] << 2,local_c0[0]);
      puVar23 = *(undefined8 **)(local_98 + 0x78);
      if (puVar23 == *(undefined8 **)(local_98 + 0x80)) {
        std::__ndk1::
        vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>::
        __push_back_slow_path<cocos2d::MeshVertexAttrib_const&>
                  ((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
                    *)(local_98 + 0x70),(MeshVertexAttrib *)&local_90);
      }
      else {
        puVar23[1] = uStack_88;
        *puVar23 = local_90;
        *(undefined8 **)(local_98 + 0x78) = puVar23 + 2;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < local_9c);
    lVar14 = BundleReader::read(this_00,(vector<float,std::__ndk1::allocator<float>> *)
                                        (local_98 + 0x18),4,1);
    if (lVar14 == 1) {
      uVar16 = (ulong)*(int *)(local_98 + 0x18);
      if (*(int *)(local_98 + 0x18) != 0) {
        uVar17 = *(long *)(local_98 + 8) - *(long *)local_98 >> 2;
        if (uVar17 < uVar16) {
          std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
                    ((vector<float,std::__ndk1::allocator<float>> *)local_98,uVar16 - uVar17);
          uVar16 = (ulong)*(int *)(local_98 + 0x18);
        }
        else if (uVar17 != uVar16) {
          *(ulong *)(local_98 + 8) = *(long *)local_98 + uVar16 * 4;
        }
        lVar14 = BundleReader::read(this_00,*(void **)local_98,4,uVar16);
        if (lVar14 == *(int *)(local_98 + 0x18)) {
          lVar14 = BundleReader::read(this_00,&local_a0,4,1);
          if (lVar14 == 1) {
            if (local_a0 != 0) {
              uVar21 = 0;
              do {
                lVar14 = BundleReader::read(this_00,&local_a4,4,1);
                if (lVar14 != 1) goto LAB_00d22c9c;
                uStack_88 = (ushort *)0x0;
                local_80 = (void *)0x0;
                local_90 = (ushort *)0x0;
                if (local_a4 == 0) {
                  uVar16 = 0;
                }
                else {
                  std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
                  __append((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                           &local_90,(ulong)local_a4);
                  uVar16 = (ulong)local_a4;
                }
                uVar16 = BundleReader::read(this_00,local_90,2,uVar16);
                pMVar22 = local_98;
                if (uVar16 == local_a4) {
                  this_01 = *(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> **)
                             (local_98 + 0x28);
                  if (this_01 ==
                      *(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> **)
                       (local_98 + 0x30)) {
                    std::__ndk1::
                    vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
                    ::
                    __push_back_slow_path<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>const&>
                              ((vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
                                *)(local_98 + 0x20),(vector *)&local_90);
                  }
                  else {
                    std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
                    vector(this_01,(vector *)&local_90);
                    *(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> **)
                     (pMVar22 + 0x28) = this_01 + 0x18;
                  }
                  pMVar22 = local_98;
                  lVar14 = *(long *)(local_98 + 0x70);
                  lVar4 = *(long *)(local_98 + 0x78);
                  if (lVar14 == lVar4) {
                    iVar25 = 0;
                  }
                  else {
                    uVar17 = (lVar4 - lVar14) - 0x10U >> 4;
                    uVar16 = uVar17 + 1;
                    if (uVar16 < 9) {
                      iVar25 = 0;
                    }
                    else {
                      uVar2 = 8;
                      if ((uVar16 & 7) != 0) {
                        uVar2 = uVar16 & 7;
                      }
                      piVar18 = (int *)(lVar14 + 0x4c);
                      iVar25 = 0;
                      iVar26 = 0;
                      iVar27 = 0;
                      iVar28 = 0;
                      lVar14 = lVar14 + (uVar16 - uVar2) * 0x10;
                      lVar19 = (uVar17 - uVar2) + 1;
                      iVar29 = 0;
                      iVar30 = 0;
                      iVar31 = 0;
                      iVar32 = 0;
                      do {
                        piVar20 = piVar18 + -0x10;
                        iVar33 = *piVar18;
                        piVar8 = piVar18 + 4;
                        piVar9 = piVar18 + 8;
                        piVar10 = piVar18 + 0xc;
                        piVar11 = piVar18 + -0xc;
                        piVar12 = piVar18 + -8;
                        piVar13 = piVar18 + -4;
                        lVar19 = lVar19 + -8;
                        piVar18 = piVar18 + 0x20;
                        iVar29 = iVar33 + iVar29;
                        iVar30 = *piVar8 + iVar30;
                        iVar31 = *piVar9 + iVar31;
                        iVar32 = *piVar10 + iVar32;
                        iVar25 = *piVar20 + iVar25;
                        iVar26 = *piVar11 + iVar26;
                        iVar27 = *piVar12 + iVar27;
                        iVar28 = *piVar13 + iVar28;
                      } while (lVar19 != 0);
                      iVar25 = iVar29 + iVar25 + iVar30 + iVar26 + iVar31 + iVar27 + iVar32 + iVar28
                      ;
                    }
                    do {
                      piVar18 = (int *)(lVar14 + 0xc);
                      lVar14 = lVar14 + 0x10;
                      iVar25 = *piVar18 + iVar25;
                    } while (lVar4 != lVar14);
                  }
                  AABB::AABB((AABB *)local_c0);
                  puVar7 = uStack_88;
                  iVar26 = iVar25 + 3;
                  if (-1 < iVar25) {
                    iVar26 = iVar25;
                  }
                  if (local_90 != uStack_88) {
                    puVar24 = local_90;
                    do {
                      pfVar1 = (float *)(*(long *)pMVar22 +
                                        (long)(iVar26 >> 2) * (ulong)*puVar24 * 4);
                      Vec3::Vec3((Vec3 *)local_78,*pfVar1,pfVar1[1],pfVar1[2]);
                      AABB::updateMinMax((AABB *)local_c0,(Vec3 *)local_78,1);
                      puVar24 = puVar24 + 1;
                    } while (puVar7 != puVar24);
                  }
                  FUN_00d1c324((vector<float,std::__ndk1::allocator<float>> *)(pMVar22 + 0x50),
                               local_c0);
                  bVar6 = false;
                }
                else {
                  if (local_98 != (MeshData *)0x0) {
                    MeshData::~MeshData(local_98);
                    operator_delete(pMVar22);
                  }
                  local_98 = (MeshData *)0x0;
                  bVar6 = true;
                }
                if (local_90 != (ushort *)0x0) {
                  uStack_88 = local_90;
                  operator_delete(local_90);
                }
                if (bVar6) goto LAB_00d22cc0;
                uVar21 = uVar21 + 1;
              } while (uVar21 < local_a0);
            }
            puVar23 = *(undefined8 **)(param_1 + 8);
            if (puVar23 == *(undefined8 **)(param_1 + 0x10)) {
              std::__ndk1::vector<cocos2d::MeshData*,std::__ndk1::allocator<cocos2d::MeshData*>>::
              __push_back_slow_path<cocos2d::MeshData*const&>
                        ((vector<cocos2d::MeshData*,std::__ndk1::allocator<cocos2d::MeshData*>> *)
                         param_1,&local_98);
            }
            else {
              *puVar23 = local_98;
              *(undefined8 **)(param_1 + 8) = puVar23 + 1;
            }
            uVar15 = 1;
            goto LAB_00d22cc4;
          }
          goto LAB_00d22c9c;
        }
        goto LAB_00d22cf4;
      }
    }
    else {
LAB_00d22cf4:
      if (local_98 == (MeshData *)0x0) goto LAB_00d22cb4;
    }
    pMVar22 = local_98;
    MeshData::~MeshData(local_98);
LAB_00d22cb0:
    operator_delete(pMVar22);
  }
  else {
LAB_00d22c9c:
    pMVar22 = local_98;
    if (local_98 != (MeshData *)0x0) {
      MeshData::~MeshData(local_98);
      goto LAB_00d22cb0;
    }
  }
LAB_00d22cb4:
  uVar15 = 0;
  local_98 = (MeshData *)0x0;
LAB_00d22cc4:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar15);
}

