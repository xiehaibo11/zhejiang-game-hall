
/* cocos2d::Bundle3D::getTrianglesList(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Bundle3D::getTrianglesList(Bundle3D *this,basic_string *param_1)

{
  float *pfVar1;
  ushort *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  int *piVar14;
  int *piVar17;
  Bundle3D *this_00;
  long *plVar20;
  ulong uVar21;
  void *pvVar22;
  undefined8 *in_x8;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long lVar25;
  ulong uVar26;
  int *piVar27;
  ulong uVar28;
  long lVar29;
  int *piVar30;
  MeshData *pMVar31;
  undefined8 *puVar32;
  void *pvVar33;
  size_t __n;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  undefined **local_f0;
  long *local_e8;
  long *plStack_e0;
  undefined8 local_d8;
  long *plStack_d0;
  long *local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  void *local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  byte local_88 [8];
  ulong local_80;
  int *local_78;
  long local_70;
  int *piVar15;
  int *piVar16;
  int *piVar18;
  int *piVar19;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  uVar21 = (ulong)((byte)*this >> 1);
  if (((byte)*this & 1) != 0) {
    uVar21 = *(ulong *)(this + 8);
  }
  if (uVar21 < 5) goto LAB_00d298c8;
  this_00 = operator_new(0x138,(nothrow_t *)&std::nothrow);
  if (this_00 != (Bundle3D *)0x0) {
    Bundle3D(this_00);
  }
  plVar20 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar20 + 0x138))(local_88,plVar20,this);
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  local_a0 = (undefined8 *)0x0;
  uVar21 = (ulong)(local_88[0] >> 1);
  if ((local_88[0] & 1) != 0) {
    uVar21 = local_80;
  }
  if (uVar21 == 4) {
    piVar27 = (int *)((ulong)local_88 | 1);
    if ((local_88[0] & 1) != 0) {
      piVar27 = local_78;
    }
    if (*piVar27 != 0x6a626f2e) goto LAB_00d29520;
    local_b0 = (void *)0x0;
    uStack_a8 = 0;
    local_b8 = (void *)0x0;
    plStack_e0 = (long *)0x0;
    local_e8 = (long *)0x0;
    plStack_d0 = (long *)0x0;
    local_d8 = 0;
    local_f0 = &PTR__NodeDatas_016d2d18;
    uStack_c0 = 0;
    local_c8 = (long *)0x0;
    uVar21 = loadObj((MeshDatas *)&local_a0,(MaterialDatas *)&local_b8,(NodeDatas *)&local_f0,
                     (basic_string *)this,(char *)0x0);
    if ((uVar21 & 1) == 0) {
      if (this_00 != (Bundle3D *)0x0) {
        (**(code **)(*(long *)this_00 + 0x40))(this_00);
      }
      bVar7 = false;
      bVar8 = true;
    }
    else {
      bVar8 = false;
      bVar7 = true;
    }
    plVar11 = plStack_e0;
    local_f0 = &PTR__NodeDatas_016d2d18;
    plVar9 = local_c8;
    for (plVar20 = local_e8; plVar13 = local_e8, local_c8 = plVar9, plVar10 = plStack_d0,
        plVar20 != plVar11; plVar20 = plVar20 + 1) {
      if ((long *)*plVar20 != (long *)0x0) {
        (**(code **)(*(long *)*plVar20 + 8))();
      }
      plVar9 = local_c8;
    }
    for (; plStack_e0 = plVar13, plVar10 != plVar9; plVar10 = plVar10 + 1) {
      if ((long *)*plVar10 != (long *)0x0) {
        (**(code **)(*(long *)*plVar10 + 8))();
      }
      plVar13 = plStack_e0;
    }
    local_c8 = plStack_d0;
    if (plStack_d0 != (long *)0x0) {
      operator_delete(plStack_d0);
    }
    if (local_e8 != (long *)0x0) {
      plStack_e0 = local_e8;
      operator_delete(local_e8);
    }
    pvVar33 = local_b8;
    if (local_b8 != (void *)0x0) {
      if (local_b0 != local_b8) {
        pvVar22 = local_b0;
        do {
          pvVar22 = (void *)((long)pvVar22 + -0x30);
          FUN_0090b07c(&uStack_a8,pvVar22);
        } while (pvVar33 != pvVar22);
      }
      local_b0 = pvVar33;
      operator_delete(local_b8);
    }
    puVar12 = local_98;
    puVar32 = local_a0;
    if (bVar7) {
      if (this_00 != (Bundle3D *)0x0) goto LAB_00d2954c;
      goto LAB_00d2955c;
    }
    for (; puVar32 != puVar12; puVar32 = puVar32 + 1) {
      pMVar31 = (MeshData *)*puVar32;
      if (pMVar31 != (MeshData *)0x0) {
        MeshData::~MeshData(pMVar31);
        operator_delete(pMVar31);
      }
    }
    local_98 = local_a0;
    if (local_a0 != (undefined8 *)0x0) {
      operator_delete(local_a0);
    }
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if ((bVar8) || (local_78 = (int *)*in_x8, local_78 == (int *)0x0)) goto LAB_00d298c8;
    in_x8[1] = local_78;
  }
  else {
LAB_00d29520:
    uVar21 = (**(code **)(*(long *)this_00 + 8))(this_00,this);
    if ((uVar21 & 1) == 0) {
      (**(code **)(*(long *)this_00 + 0x40))(this_00);
      puVar12 = local_98;
      for (puVar32 = local_a0; puVar23 = local_a0, puVar32 != puVar12; puVar32 = puVar32 + 1) {
        pMVar31 = (MeshData *)*puVar32;
        if (pMVar31 != (MeshData *)0x0) {
          MeshData::~MeshData(pMVar31);
          operator_delete(pMVar31);
        }
      }
    }
    else {
      (**(code **)(*(long *)this_00 + 0x20))(this_00,&local_a0);
LAB_00d2954c:
      (**(code **)(*(long *)this_00 + 0x40))(this_00);
LAB_00d2955c:
      puVar12 = local_98;
      puVar32 = local_a0;
      puVar23 = local_a0;
      if (local_a0 != local_98) {
        do {
          plVar20 = (long *)*puVar32;
          lVar25 = plVar20[0xe];
          lVar3 = plVar20[0xf];
          if (lVar25 == lVar3) {
            iVar34 = 0;
          }
          else {
            uVar28 = (lVar3 - lVar25) - 0x10U >> 4;
            uVar21 = uVar28 + 1;
            if (uVar21 < 9) {
              iVar34 = 0;
            }
            else {
              uVar26 = 8;
              if ((uVar21 & 7) != 0) {
                uVar26 = uVar21 & 7;
              }
              piVar27 = (int *)(lVar25 + 0x4c);
              iVar34 = 0;
              iVar35 = 0;
              iVar36 = 0;
              iVar37 = 0;
              lVar25 = lVar25 + (uVar21 - uVar26) * 0x10;
              lVar29 = (uVar28 - uVar26) + 1;
              iVar38 = 0;
              iVar39 = 0;
              iVar40 = 0;
              iVar41 = 0;
              do {
                piVar30 = piVar27 + -0x10;
                iVar42 = *piVar27;
                piVar14 = piVar27 + 4;
                piVar15 = piVar27 + 8;
                piVar16 = piVar27 + 0xc;
                piVar17 = piVar27 + -0xc;
                piVar18 = piVar27 + -8;
                piVar19 = piVar27 + -4;
                lVar29 = lVar29 + -8;
                piVar27 = piVar27 + 0x20;
                iVar38 = iVar42 + iVar38;
                iVar39 = *piVar14 + iVar39;
                iVar40 = *piVar15 + iVar40;
                iVar41 = *piVar16 + iVar41;
                iVar34 = *piVar30 + iVar34;
                iVar35 = *piVar17 + iVar35;
                iVar36 = *piVar18 + iVar36;
                iVar37 = *piVar19 + iVar37;
              } while (lVar29 != 0);
              iVar34 = iVar38 + iVar34 + iVar39 + iVar35 + iVar40 + iVar36 + iVar41 + iVar37;
            }
            do {
              piVar27 = (int *)(lVar25 + 0xc);
              lVar25 = lVar25 + 0x10;
              iVar34 = *piVar27 + iVar34;
            } while (lVar3 != lVar25);
          }
          puVar23 = (undefined8 *)plVar20[4];
          puVar4 = (undefined8 *)plVar20[5];
          if (puVar23 != puVar4) {
            do {
              puVar5 = (ushort *)puVar23[1];
              for (puVar2 = (ushort *)*puVar23; puVar2 != puVar5; puVar2 = puVar2 + 1) {
                pfVar1 = (float *)(*plVar20 + (long)(iVar34 >> 2) * (ulong)*puVar2 * 4);
                Vec3::Vec3((Vec3 *)&local_f0,*pfVar1,pfVar1[1],pfVar1[2]);
                puVar24 = (undefined8 *)in_x8[1];
                if (puVar24 < (undefined8 *)in_x8[2]) {
                  *(undefined4 *)(puVar24 + 1) = local_e8._0_4_;
                  *puVar24 = local_f0;
                  in_x8[1] = (long)puVar24 + 0xc;
                }
                else {
                  pvVar33 = (void *)*in_x8;
                  __n = (long)puVar24 - (long)pvVar33;
                  uVar21 = ((long)__n >> 2) * -0x5555555555555555 + 1;
                  if (0x1555555555555555 < uVar21) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__vector_base_common<true>::__throw_length_error();
                  }
                  lVar25 = (long)in_x8[2] - (long)pvVar33 >> 2;
                  uVar28 = 0x1555555555555555;
                  if ((ulong)(lVar25 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
                    uVar26 = lVar25 * 0x5555555555555556;
                    uVar28 = uVar21;
                    if (uVar21 <= uVar26) {
                      uVar28 = uVar26;
                    }
                    if (uVar28 != 0) goto LAB_00d29720;
                    pvVar22 = (void *)0x0;
                  }
                  else {
LAB_00d29720:
                    pvVar22 = operator_new(uVar28 * 0xc);
                  }
                  puVar24 = (undefined8 *)((long)pvVar22 + ((long)__n >> 2) * 4);
                  *(undefined4 *)(puVar24 + 1) = local_e8._0_4_;
                  *puVar24 = local_f0;
                  if (0 < (long)__n) {
                    memcpy((void *)((long)puVar24 - __n),pvVar33,__n);
                  }
                  *in_x8 = (void *)((long)puVar24 - __n);
                  in_x8[1] = (long)puVar24 + 0xc;
                  in_x8[2] = (void *)((long)pvVar22 + uVar28 * 0xc);
                  if (pvVar33 != (void *)0x0) {
                    operator_delete(pvVar33);
                  }
                }
              }
              puVar23 = puVar23 + 3;
            } while (puVar23 != puVar4);
          }
          puVar4 = local_98;
          puVar32 = puVar32 + 1;
        } while (puVar32 != puVar12);
        puVar23 = local_98;
        if (local_a0 != local_98) {
          pMVar31 = (MeshData *)*local_a0;
          puVar32 = local_a0;
          while( true ) {
            if (pMVar31 != (MeshData *)0x0) {
              MeshData::~MeshData(pMVar31);
              operator_delete(pMVar31);
            }
            puVar32 = puVar32 + 1;
            puVar23 = local_a0;
            if (puVar4 == puVar32) break;
            pMVar31 = (MeshData *)*puVar32;
          }
        }
      }
    }
    local_98 = puVar23;
    puVar32 = local_a0;
    if (local_98 != (undefined8 *)0x0) {
      operator_delete(local_98);
      puVar32 = local_98;
    }
    local_98 = puVar32;
    if ((local_88[0] & 1) == 0) goto LAB_00d298c8;
  }
  operator_delete(local_78);
LAB_00d298c8:
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

