
/* cocos2d::AutoPolygon::triangulate(std::__ndk1::vector<cocos2d::Vec2,
   std::__ndk1::allocator<cocos2d::Vec2> > const&) */

void cocos2d::AutoPolygon::triangulate(vector *param_1)

{
  Point *pPVar1;
  Vec3 *pVVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  ushort *__src;
  Point *pPVar6;
  void *pvVar7;
  Vec3 *__dest;
  void *pvVar8;
  long *in_x1;
  vector *pvVar9;
  undefined8 *in_x8;
  double *pdVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  float *pfVar15;
  size_t __n;
  Vec3 *this;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 local_100;
  float local_f8;
  float local_f0;
  float fStack_ec;
  float local_e8;
  ushort local_e4 [2];
  ushort *local_e0;
  ushort *local_d8;
  ushort *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  Point *local_b0;
  Point *local_a8;
  CDT aCStack_98 [16];
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  long local_70;
  
  lVar13 = tpidr_el0;
  local_70 = *(long *)(lVar13 + 0x28);
  puVar3 = (undefined8 *)*in_x1;
  puVar12 = (undefined8 *)in_x1[1];
  if ((ulong)((long)puVar12 - (long)puVar3 >> 3) < 3) {
    if (((byte)param_1[0x10] & 1) == 0) {
      pvVar9 = param_1 + 0x11;
    }
    else {
      pvVar9 = *(vector **)(param_1 + 0x20);
    }
    log("AUTOPOLYGON: cannot triangulate %s with less than 3 points",pvVar9);
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    lVar13 = *(long *)(lVar13 + 0x28);
  }
  else {
    local_80 = (undefined8 *)0x0;
    puStack_78 = (undefined8 *)0x0;
    local_88 = (undefined8 *)0x0;
    for (; puVar3 != puVar12; puVar3 = puVar3 + 1) {
      local_b0 = operator_new(0x28,(nothrow_t *)&std::nothrow);
      if (local_b0 != (Point *)0x0) {
        uVar21 = *puVar3;
        *(double *)(local_b0 + 0x18) = 0.0;
        *(double *)(local_b0 + 0x20) = 0.0;
        *(double *)(local_b0 + 0x10) = 0.0;
        *(double *)(local_b0 + 8) = (double)(float)((ulong)uVar21 >> 0x20);
        *(double *)local_b0 = (double)(float)uVar21;
      }
      if (local_80 == puStack_78) {
        std::__ndk1::vector<p2t::Point*,std::__ndk1::allocator<p2t::Point*>>::
        __push_back_slow_path<p2t::Point*const&>
                  ((vector<p2t::Point*,std::__ndk1::allocator<p2t::Point*>> *)&local_88,&local_b0);
      }
      else {
        *local_80 = local_b0;
        local_80 = local_80 + 1;
      }
    }
    p2t::CDT::CDT(aCStack_98,(vector *)&local_88);
    p2t::CDT::Triangulate(aCStack_98);
    p2t::CDT::GetTriangles();
    pPVar6 = local_a8;
    local_c0 = (undefined8 *)0x0;
    local_b8 = (undefined8 *)0x0;
    local_d0 = (ushort *)0x0;
    local_c8 = (undefined8 *)0x0;
    local_e0 = (ushort *)0x0;
    local_d8 = (ushort *)0x0;
    local_e4[0] = 0;
    puVar3 = local_80;
    for (pPVar1 = local_b0; puVar12 = local_c8, puVar16 = local_c0, local_80 = puVar3,
        puVar20 = local_88, pPVar1 != pPVar6; pPVar1 = pPVar1 + 8) {
      lVar18 = 0;
      do {
        pdVar10 = *(double **)((long)*(double *)pPVar1 + lVar18 * 8 + 8);
        Vec3::Vec3((Vec3 *)&local_f0,(float)*pdVar10,(float)pdVar10[1],0.0);
        puVar3 = local_c8;
        uVar5 = Color4B::WHITE;
        if ((ulong)local_e4[0] != 0) {
                    /* try { // try from 00f648b8 to 010648c3 has its CatchHandler @ 00f649d4 */
          uVar11 = 0;
          pfVar15 = (float *)((long)local_c8 + 4);
          do {
            if (((pfVar15[-1] == local_f0) && (*pfVar15 == fStack_ec)) && (pfVar15[1] == local_e8))
            {
              local_100 = CONCAT62(local_100._2_6_,(ushort)uVar11);
              if (local_d8 < local_d0) {
                *local_d8 = (ushort)uVar11;
                local_d8 = local_d8 + 1;
              }
              else {
                    /* catch() { ... } // from try @ 00f64a64 with catch @ 00f64a38 */
                std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
                __push_back_slow_path<unsigned_short>
                          ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                           &local_e0,(ushort *)&local_100);
              }
              goto LAB_00f64878;
            }
            uVar11 = uVar11 + 1;
            pfVar15 = pfVar15 + 6;
          } while (local_e4[0] != uVar11);
        }
        local_100 = CONCAT44(fStack_ec,local_f0);
        local_f8 = local_e8;
        if (local_c0 == local_b8) {
          __n = (long)local_c0 - (long)local_c8;
          uVar11 = ((long)__n >> 3) * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar11) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          lVar14 = (long)local_b8 - (long)local_c8 >> 3;
          uVar19 = 0xaaaaaaaaaaaaaaa;
          if ((ulong)(lVar14 * -0x5555555555555555) < 0x555555555555555) {
            uVar17 = lVar14 * 0x5555555555555556;
                    /* try { // try from 00f649a8 to 010649b3 has its CatchHandler @ 00f649d0 */
            uVar19 = uVar11;
            if (uVar11 <= uVar17) {
              uVar19 = uVar17;
            }
            if (uVar19 != 0) goto LAB_00f649b4;
            pvVar8 = (void *)0x0;
          }
          else {
LAB_00f649b4:
                    /* try { // try from 00f649b4 to 010649f3 has its CatchHandler @ 00f6452c */
            pvVar8 = operator_new(uVar19 * 0x18);
          }
          puVar12 = (undefined8 *)((long)pvVar8 + ((long)__n >> 3) * 8);
                    /* catch() { ... } // from try @ 00f649a8 with catch @ 00f649d0 */
          puVar20 = (undefined8 *)((long)pvVar8 + uVar19 * 0x18);
                    /* catch() { ... } // from try @ 00f648b8 with catch @ 00f649d4 */
                    /* catch() { ... } // from try @ 00f64718 with catch @ 00f649d8 */
          *(float *)(puVar12 + 1) = local_f8;
          *(undefined4 *)((long)puVar12 + 0xc) = uVar5;
          puVar16 = (undefined8 *)((long)puVar12 - __n);
          puVar12[2] = 0;
          *puVar12 = local_100;
          if (0 < (long)__n) {
            memcpy(puVar16,puVar3,__n);
          }
          local_c8 = puVar16;
          local_c0 = puVar12 + 3;
          local_b8 = puVar20;
          if (puVar3 != (undefined8 *)0x0) {
            operator_delete(puVar3);
          }
        }
        else {
          local_c0[2] = 0;
          *local_c0 = local_100;
          *(float *)(local_c0 + 1) = local_e8;
          *(undefined4 *)((long)local_c0 + 0xc) = uVar5;
          local_c0 = local_c0 + 3;
        }
        if (local_d8 == local_d0) {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short_const&>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)&local_e0,
                     local_e4);
        }
        else {
          *local_d8 = local_e4[0];
          local_d8 = local_d8 + 1;
        }
        local_e4[0] = local_e4[0] + 1;
LAB_00f64878:
        lVar18 = lVar18 + 1;
      } while (lVar18 != 3);
      puVar3 = local_80;
    }
    for (; local_c8 = puVar12, local_c0 = puVar16, puVar20 != puVar3; puVar20 = puVar20 + 1) {
      pvVar8 = (void *)*puVar20;
      if (pvVar8 != (void *)0x0) {
        pvVar7 = *(void **)((long)pvVar8 + 0x10);
        if (pvVar7 != (void *)0x0) {
          *(void **)((long)pvVar8 + 0x18) = pvVar7;
          operator_delete(pvVar7);
        }
                    /* try { // try from 00f64a5c to 01064a63 has its CatchHandler @ 00f64a8c */
        operator_delete(pvVar8);
      }
                    /* try { // try from 00f64a64 to 01064aa7 has its CatchHandler @ 00f64a38 */
      puVar12 = local_c8;
      puVar16 = local_c0;
    }
                    /* catch() { ... } // from try @ 00f64a5c with catch @ 00f64a8c */
    uVar19 = (long)puVar16 - (long)puVar12;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = ((long)uVar19 >> 3) * -0x5555555555555555;
    uVar11 = uVar19;
    if (SUB168(auVar4 * ZEXT816(0x18),8) != 0) {
      uVar11 = 0xffffffffffffffff;
    }
    __dest = operator_new__(uVar11,(nothrow_t *)&std::nothrow);
    if ((__dest != (Vec3 *)0x0) && (uVar19 != 0)) {
      this = __dest;
      do {
        Vec3::Vec3(this);
        Color4B::Color4B((Color4B *)(this + 0xc));
        pVVar2 = this + 0x18;
        *(undefined4 *)(this + 0x10) = 0;
        *(undefined4 *)(this + 0x14) = 0;
        puVar16 = local_c0;
        puVar12 = local_c8;
        this = pVVar2;
      } while (pVVar2 != __dest + ((long)uVar19 >> 3) * 8);
    }
    memcpy(__dest,puVar12,(long)puVar16 - (long)puVar12);
    __src = local_e0;
    uVar17 = (long)local_d8 - (long)local_e0;
    uVar19 = (long)uVar17 >> 1;
    uVar11 = uVar19 * 2;
    if (CARRY8(uVar19,uVar19)) {
      uVar11 = 0xffffffffffffffff;
    }
    pvVar8 = operator_new__(uVar11,(nothrow_t *)&std::nothrow);
    memcpy(pvVar8,__src,uVar17);
    *in_x8 = __dest;
    in_x8[1] = pvVar8;
    *(int *)(in_x8 + 2) = (int)((ulong)((long)local_c0 - (long)local_c8) >> 3) * -0x55555555;
    *(int *)((long)in_x8 + 0x14) = (int)(uVar17 >> 1);
    if (__src != (ushort *)0x0) {
      local_d8 = __src;
      operator_delete(__src);
    }
    if (local_c8 != (undefined8 *)0x0) {
      local_c0 = local_c8;
      operator_delete(local_c8);
    }
    if (local_b0 != (Point *)0x0) {
      local_a8 = local_b0;
      operator_delete(local_b0);
    }
    p2t::CDT::~CDT(aCStack_98);
    if (local_88 != (undefined8 *)0x0) {
      local_80 = local_88;
      operator_delete(local_88);
    }
    lVar13 = *(long *)(lVar13 + 0x28);
  }
  if (lVar13 != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

