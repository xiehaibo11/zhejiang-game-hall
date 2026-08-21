
/* cocos2d::Bundle3D::loadMeshDatasBinary_0_1(cocos2d::MeshDatas&) */

void __thiscall cocos2d::Bundle3D::loadMeshDatasBinary_0_1(Bundle3D *this,MeshDatas *param_1)

{
  BundleReader *this_00;
  vector<float,std::__ndk1::allocator<float>> *pvVar1;
  float *pfVar2;
  ulong uVar3;
  vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *this_01;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  ushort *puVar8;
  int *piVar9;
  int *piVar12;
  long lVar15;
  MeshData *pMVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  long lVar21;
  int *piVar22;
  uint uVar23;
  undefined8 *puVar24;
  MeshData *this_02;
  ushort *puVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  undefined4 local_98 [6];
  uint local_80;
  uint local_7c;
  MeshData *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  void *local_60;
  int local_58 [4];
  long local_48;
  int *piVar10;
  int *piVar11;
  int *piVar13;
  int *piVar14;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,"");
  lVar15 = seekToFirstType(this,0x22,(basic_string *)&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (lVar15 == 0) {
LAB_00d1fbb0:
    uVar17 = 0;
    goto LAB_00d1fbb4;
  }
  puVar24 = *(undefined8 **)param_1;
  puVar4 = *(undefined8 **)(param_1 + 8);
  if (puVar24 != puVar4) {
    do {
      pMVar16 = (MeshData *)*puVar24;
      if (pMVar16 != (MeshData *)0x0) {
        MeshData::~MeshData(pMVar16);
        operator_delete(pMVar16);
      }
      puVar24 = puVar24 + 1;
    } while (puVar4 != puVar24);
    puVar24 = *(undefined8 **)param_1;
  }
  *(undefined8 **)(param_1 + 8) = puVar24;
  pMVar16 = operator_new(0x90,(nothrow_t *)&std::nothrow);
  if (pMVar16 == (MeshData *)0x0) {
    this_02 = (MeshData *)0x0;
  }
  else {
    *(undefined8 *)pMVar16 = 0;
    *(undefined8 *)(pMVar16 + 8) = 0;
    *(undefined4 *)(pMVar16 + 0x18) = 0;
    *(undefined8 *)(pMVar16 + 0x10) = 0;
    *(undefined8 *)(pMVar16 + 0x78) = 0;
    *(undefined8 *)(pMVar16 + 0x80) = 0;
    *(undefined8 *)(pMVar16 + 0x70) = 0;
    *(undefined8 *)(pMVar16 + 0x28) = 0;
    *(undefined8 *)(pMVar16 + 0x20) = 0;
    *(undefined8 *)(pMVar16 + 0x38) = 0;
    *(undefined8 *)(pMVar16 + 0x30) = 0;
    *(undefined8 *)(pMVar16 + 0x48) = 0;
    *(undefined8 *)(pMVar16 + 0x40) = 0;
    *(undefined8 *)(pMVar16 + 0x58) = 0;
    *(undefined8 *)(pMVar16 + 0x50) = 0;
    *(undefined8 *)(pMVar16 + 100) = 0;
    *(undefined8 *)(pMVar16 + 0x5c) = 0;
    *(undefined4 *)(pMVar16 + 0x88) = 0;
    this_02 = pMVar16;
  }
  this_00 = (BundleReader *)(this + 0xe0);
  local_7c = 0;
  local_78 = pMVar16;
  lVar15 = BundleReader::read(this_00,&local_7c,4,1);
  if ((lVar15 == 1) && (local_7c != 0)) {
    uVar23 = 0;
    do {
      lVar15 = BundleReader::read(this_00,local_98,4,1);
      if ((lVar15 != 1) || (lVar15 = BundleReader::read(this_00,local_58,4,1), lVar15 != 1)) {
        pMVar16 = local_78;
        if (local_78 == (MeshData *)0x0) goto LAB_00d1fb2c;
        MeshData::~MeshData(local_78);
        goto LAB_00d1fb28;
      }
      local_70 = (ushort *)CONCAT44(0x1406,local_58[0]);
      switch(local_98[0]) {
      case 0:
        local_98[0] = 0;
        break;
      case 2:
        local_98[0] = 2;
        break;
      case 3:
        local_98[0] = 6;
        break;
      case 4:
        local_98[0] = 7;
        break;
      case 5:
        local_98[0] = 8;
      }
      uStack_68 = (ushort *)CONCAT44(local_58[0] << 2,local_98[0]);
      puVar24 = *(undefined8 **)(local_78 + 0x78);
      if (puVar24 == *(undefined8 **)(local_78 + 0x80)) {
        std::__ndk1::
        vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>::
        __push_back_slow_path<cocos2d::MeshVertexAttrib_const&>
                  ((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
                    *)(local_78 + 0x70),(MeshVertexAttrib *)&local_70);
      }
      else {
        puVar24[1] = uStack_68;
        *puVar24 = local_70;
        *(undefined8 **)(local_78 + 0x78) = puVar24 + 2;
      }
      this_02 = local_78;
      uVar23 = uVar23 + 1;
    } while (uVar23 < local_7c);
    pvVar1 = (vector<float,std::__ndk1::allocator<float>> *)(local_78 + 0x18);
    lVar15 = BundleReader::read(this_00,pvVar1,4,1);
    pMVar16 = this_02;
    if (lVar15 != 1) goto joined_r0x00d1fa34;
    iVar26 = *(int *)pvVar1;
    uVar18 = (ulong)iVar26;
    if (iVar26 != 0) {
      uVar19 = *(long *)(this_02 + 8) - *(long *)this_02 >> 2;
      if (uVar19 < uVar18) {
        std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
                  ((vector<float,std::__ndk1::allocator<float>> *)this_02,uVar18 - uVar19);
        uVar18 = (ulong)*(int *)(local_78 + 0x18);
        this_02 = local_78;
      }
      else if (uVar19 != uVar18) {
        *(ulong *)(this_02 + 8) = *(long *)this_02 + uVar18 * 4;
      }
      lVar15 = BundleReader::read(this_00,*(void **)this_02,4,uVar18);
      pMVar16 = this_02;
      if ((lVar15 == *(int *)(this_02 + 0x18)) &&
         (lVar15 = BundleReader::read(this_00,&local_80,4,1), lVar15 == 1)) {
        uStack_68 = (ushort *)0x0;
        local_60 = (void *)0x0;
        local_70 = (ushort *)0x0;
        if (local_80 == 0) {
          uVar18 = 0;
        }
        else {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::__append
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)&local_70,
                     (ulong)local_80);
          uVar18 = (ulong)local_80;
        }
        uVar18 = BundleReader::read(this_00,local_70,2,uVar18);
        pMVar16 = local_78;
        if (uVar18 == local_80) {
          this_01 = *(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> **)
                     (local_78 + 0x28);
          if (this_01 ==
              *(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> **)(local_78 + 0x30))
          {
            std::__ndk1::
            vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
            ::
            __push_back_slow_path<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>const&>
                      ((vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
                        *)(local_78 + 0x20),(vector *)&local_70);
          }
          else {
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::vector
                      (this_01,(vector *)&local_70);
            *(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> **)(pMVar16 + 0x28) =
                 this_01 + 0x18;
          }
          pMVar16 = local_78;
          lVar15 = *(long *)(local_78 + 0x70);
          lVar5 = *(long *)(local_78 + 0x78);
          if (lVar15 == lVar5) {
            iVar26 = 0;
          }
          else {
            uVar19 = (lVar5 - lVar15) - 0x10U >> 4;
            uVar18 = uVar19 + 1;
            if (uVar18 < 9) {
              iVar27 = 0;
            }
            else {
              uVar3 = 8;
              if ((uVar18 & 7) != 0) {
                uVar3 = uVar18 & 7;
              }
              piVar20 = (int *)(lVar15 + 0x4c);
              iVar26 = 0;
              iVar27 = 0;
              iVar28 = 0;
              iVar29 = 0;
              lVar15 = lVar15 + (uVar18 - uVar3) * 0x10;
              lVar21 = (uVar19 - uVar3) + 1;
              iVar30 = 0;
              iVar31 = 0;
              iVar32 = 0;
              iVar33 = 0;
              do {
                piVar22 = piVar20 + -0x10;
                iVar34 = *piVar20;
                piVar9 = piVar20 + 4;
                piVar10 = piVar20 + 8;
                piVar11 = piVar20 + 0xc;
                piVar12 = piVar20 + -0xc;
                piVar13 = piVar20 + -8;
                piVar14 = piVar20 + -4;
                lVar21 = lVar21 + -8;
                piVar20 = piVar20 + 0x20;
                iVar30 = iVar34 + iVar30;
                iVar31 = *piVar9 + iVar31;
                iVar32 = *piVar10 + iVar32;
                iVar33 = *piVar11 + iVar33;
                iVar26 = *piVar22 + iVar26;
                iVar27 = *piVar12 + iVar27;
                iVar28 = *piVar13 + iVar28;
                iVar29 = *piVar14 + iVar29;
              } while (lVar21 != 0);
              iVar27 = iVar30 + iVar26 + iVar31 + iVar27 + iVar32 + iVar28 + iVar33 + iVar29;
            }
            do {
              piVar20 = (int *)(lVar15 + 0xc);
              lVar15 = lVar15 + 0x10;
              iVar27 = *piVar20 + iVar27;
            } while (lVar5 != lVar15);
            iVar26 = iVar27 + 3;
            if (-1 < iVar27) {
              iVar26 = iVar27;
            }
            iVar26 = iVar26 >> 2;
          }
          AABB::AABB((AABB *)local_98);
          puVar8 = uStack_68;
          if (local_70 != uStack_68) {
            puVar25 = local_70;
            do {
              pfVar2 = (float *)(*(long *)pMVar16 + (long)iVar26 * (ulong)*puVar25 * 4);
              Vec3::Vec3((Vec3 *)local_58,*pfVar2,pfVar2[1],pfVar2[2]);
              AABB::updateMinMax((AABB *)local_98,(Vec3 *)local_58,1);
              puVar25 = puVar25 + 1;
            } while (puVar8 != puVar25);
          }
          FUN_00d1c324(pMVar16 + 0x50,local_98);
          bVar7 = false;
        }
        else {
          if (local_78 != (MeshData *)0x0) {
            MeshData::~MeshData(local_78);
            operator_delete(pMVar16);
          }
          local_78 = (MeshData *)0x0;
          bVar7 = true;
        }
        if (local_70 != (ushort *)0x0) {
          uStack_68 = local_70;
          operator_delete(local_70);
        }
        if (!bVar7) {
          puVar24 = *(undefined8 **)(param_1 + 8);
          if (puVar24 == *(undefined8 **)(param_1 + 0x10)) {
            std::__ndk1::vector<cocos2d::MeshData*,std::__ndk1::allocator<cocos2d::MeshData*>>::
            __push_back_slow_path<cocos2d::MeshData*const&>
                      ((vector<cocos2d::MeshData*,std::__ndk1::allocator<cocos2d::MeshData*>> *)
                       param_1,&local_78);
          }
          else {
            *puVar24 = local_78;
            *(undefined8 **)(param_1 + 8) = puVar24 + 1;
          }
          uVar17 = 1;
          goto LAB_00d1fbb4;
        }
        goto LAB_00d1fbb0;
      }
      goto joined_r0x00d1fa34;
    }
LAB_00d1fb20:
    MeshData::~MeshData(this_02);
LAB_00d1fb28:
    operator_delete(pMVar16);
  }
  else {
joined_r0x00d1fa34:
    if (this_02 != (MeshData *)0x0) goto LAB_00d1fb20;
  }
LAB_00d1fb2c:
  uVar17 = 0;
  local_78 = (MeshData *)0x0;
LAB_00d1fbb4:
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar17);
}

