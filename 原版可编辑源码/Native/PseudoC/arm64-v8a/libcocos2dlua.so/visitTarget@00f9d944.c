
/* cocos2d::EventDispatcher::visitTarget(cocos2d::Node*, bool) */

void __thiscall
cocos2d::EventDispatcher::visitTarget(EventDispatcher *this,Node *param_1,bool param_2)

{
  undefined8 *puVar1;
  piecewise_construct_t *ppVar2;
  piecewise_construct_t *ppVar3;
  ulong uVar4;
  long lVar5;
  piecewise_construct_t *ppVar6;
  int iVar7;
  long *plVar8;
  void *pvVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  piecewise_construct_t *ppVar18;
  void *pvVar19;
  Node *pNVar20;
  ulong uVar21;
  undefined2 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  piecewise_construct_t *local_98;
  piecewise_construct_t *local_90;
  piecewise_construct_t *local_88;
  Node *local_80;
  piecewise_construct_t *local_78 [2];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_80 = param_1;
  (**(code **)(*(long *)param_1 + 0x2b0))(param_1);
  plVar8 = (long *)(**(code **)(*(long *)param_1 + 0x240))(param_1);
  uVar21 = (ulong)param_1 >> 0x20;
  lVar11 = plVar8[1] - *plVar8;
  if (lVar11 < 1) {
    uVar17 = *(ulong *)(this + 0x80);
    if (uVar17 != 0) {
      uVar10 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ uVar21) * -0x622015f714c7d297;
      uVar24 = CONCAT17(POPCOUNT((char)(uVar17 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(uVar17 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(uVar17 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(uVar17 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(uVar17 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(uVar17 >> 0x10)
                                                                             ),
                                                                     CONCAT11(POPCOUNT((char)(uVar17
                                                                                             >> 8)),
                                                                              POPCOUNT((char)uVar17)
                                                                             )))))));
      uVar22 = NEON_uaddlv(uVar24,1);
      uVar10 = (uVar10 ^ uVar21 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
      uVar21 = CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar22) & 0xffffffff;
      uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
      if (uVar21 < 2) {
        uVar12 = uVar10 & uVar17 - 1;
      }
      else {
        uVar12 = uVar10;
        if (uVar17 <= uVar10) {
          uVar12 = 0;
          if (uVar17 != 0) {
            uVar12 = uVar10 / uVar17;
          }
          uVar12 = uVar10 - uVar12 * uVar17;
        }
      }
      plVar8 = *(long **)(*(long *)(this + 0x78) + uVar12 * 8);
      if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
        do {
          uVar14 = plVar8[1];
          if (uVar14 == uVar10) {
                    /* try { // try from 00f9dba0 to 0109dbc7 has its CatchHandler @ 00f9dba0
                       catch() { ... } // from try @ 00f9dba0 with catch @ 00f9dba0
                       catch() { ... } // from try @ 00f9dbd0 with catch @ 00f9dba0 */
            if ((Node *)plVar8[2] == param_1) {
              uVar23 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
              local_98 = (piecewise_construct_t *)local_78;
              local_78[0] = (piecewise_construct_t *)CONCAT44(local_78[0]._4_4_,uVar23);
              lVar11 = std::__ndk1::
                       __hash_table<std::__ndk1::__hash_value_type<float,std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>,std::__ndk1::__unordered_map_hasher<float,std::__ndk1::__hash_value_type<float,std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>,std::__ndk1::hash<float>,true>,std::__ndk1::__unordered_map_equal<float,std::__ndk1::__hash_value_type<float,std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>,std::__ndk1::equal_to<float>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<float,std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>>>
                       ::
                       __emplace_unique_key_args<float,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<float&&>,std::__ndk1::tuple<>>
                                 ((float *)(this + 200),(piecewise_construct_t *)local_78,
                                  (tuple *)&DAT_0144ae1e,(tuple *)&local_98);
              puVar1 = *(undefined8 **)(lVar11 + 0x20);
              if (puVar1 == *(undefined8 **)(lVar11 + 0x28)) {
                std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
                __push_back_slow_path<cocos2d::Node*const&>
                          ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)
                           (lVar11 + 0x18),&local_80);
                    /* try { // try from 00f9df20 to 0109df27 has its CatchHandler @ 00f9e054 */
              }
              else {
                *puVar1 = local_80;
                *(undefined8 **)(lVar11 + 0x20) = puVar1 + 1;
              }
              break;
            }
          }
          else {
            if (uVar21 < 2) {
              uVar14 = uVar14 & uVar17 - 1;
            }
            else {
                    /* try { // try from 00f9dbc8 to 0109dbcf has its CatchHandler @ 00f9dc04 */
              if (uVar17 <= uVar14) {
                    /* try { // try from 00f9dbd0 to 0109dc17 has its CatchHandler @ 00f9dba0 */
                uVar16 = 0;
                if (uVar17 != 0) {
                  uVar16 = uVar14 / uVar17;
                }
                uVar14 = uVar14 - uVar16 * uVar17;
              }
            }
            if (uVar14 != uVar12) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  else {
    pNVar20 = *(Node **)*plVar8;
    lVar11 = lVar11 >> 3;
    if (pNVar20 == (Node *)0x0) {
      uVar17 = 0;
    }
    else {
      uVar10 = 0;
      do {
        iVar7 = (**(code **)(*(long *)pNVar20 + 0x30))(pNVar20);
        if (-1 < iVar7) {
          uVar17 = uVar10 & 0xffffffff;
          uVar10 = *(ulong *)(this + 0x80);
          goto joined_r0x00f9db74;
        }
        visitTarget(this,pNVar20,false);
        uVar17 = uVar10 + 1;
        if (lVar11 <= (long)uVar17) {
          uVar17 = (ulong)((int)uVar10 + 1);
          uVar10 = *(ulong *)(this + 0x80);
          goto joined_r0x00f9db74;
        }
        pNVar20 = *(Node **)(*plVar8 + uVar10 * 8 + 8);
        uVar10 = uVar17;
      } while (pNVar20 != (Node *)0x0);
    }
    uVar10 = *(ulong *)(this + 0x80);
joined_r0x00f9db74:
    if (uVar10 != 0) {
                    /* try { // try from 00f9da94 to 0109db07 has its CatchHandler @ 00f9da94
                       catch() { ... } // from try @ 00f9da94 with catch @ 00f9da94
                       catch() { ... } // from try @ 00f9db18 with catch @ 00f9da94 */
      uVar12 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ uVar21) * -0x622015f714c7d297;
      uVar24 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(uVar10 >> 0x10)
                                                                             ),
                                                                     CONCAT11(POPCOUNT((char)(uVar10
                                                                                             >> 8)),
                                                                              POPCOUNT((char)uVar10)
                                                                             )))))));
      uVar22 = NEON_uaddlv(uVar24,1);
      uVar12 = (uVar12 ^ uVar21 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
      uVar21 = CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar22) & 0xffffffff;
      uVar12 = (uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
      if (uVar21 < 2) {
        uVar14 = uVar12 & uVar10 - 1;
      }
      else {
        uVar14 = uVar12;
        if (uVar10 <= uVar12) {
          uVar14 = 0;
          if (uVar10 != 0) {
            uVar14 = uVar12 / uVar10;
          }
          uVar14 = uVar12 - uVar14 * uVar10;
        }
      }
      plVar15 = *(long **)(*(long *)(this + 0x78) + uVar14 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
                    /* try { // try from 00f9db08 to 0109db17 has its CatchHandler @ 00f9db68 */
        do {
          uVar16 = plVar15[1];
          if (uVar16 == uVar12) {
                    /* try { // try from 00f9db18 to 0109db9f has its CatchHandler @ 00f9da94 */
            if ((Node *)plVar15[2] == param_1) {
              uVar23 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
                    /* catch() { ... } // from try @ 00f9dbc8 with catch @ 00f9dc04 */
              local_98 = (piecewise_construct_t *)local_78;
              local_78[0] = (piecewise_construct_t *)CONCAT44(local_78[0]._4_4_,uVar23);
              lVar13 = std::__ndk1::
                       __hash_table<std::__ndk1::__hash_value_type<float,std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>,std::__ndk1::__unordered_map_hasher<float,std::__ndk1::__hash_value_type<float,std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>,std::__ndk1::hash<float>,true>,std::__ndk1::__unordered_map_equal<float,std::__ndk1::__hash_value_type<float,std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>,std::__ndk1::equal_to<float>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<float,std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>>>
                       ::
                       __emplace_unique_key_args<float,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<float&&>,std::__ndk1::tuple<>>
                                 ((float *)(this + 200),(piecewise_construct_t *)local_78,
                                  (tuple *)&DAT_0144ae1e,(tuple *)&local_98);
              puVar1 = *(undefined8 **)(lVar13 + 0x20);
              if (puVar1 == *(undefined8 **)(lVar13 + 0x28)) {
                std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
                __push_back_slow_path<cocos2d::Node*const&>
                          ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)
                           (lVar13 + 0x18),&local_80);
              }
              else {
                *puVar1 = local_80;
                *(undefined8 **)(lVar13 + 0x20) = puVar1 + 1;
              }
              break;
            }
          }
          else {
            if (uVar21 < 2) {
              uVar16 = uVar16 & uVar10 - 1;
            }
            else if (uVar10 <= uVar16) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar16 / uVar10;
              }
              uVar16 = uVar16 - uVar4 * uVar10;
            }
            if (uVar16 != uVar14) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
    for (uVar17 = uVar17 & 0xffffffff; (long)uVar17 < lVar11; uVar17 = uVar17 + 1) {
      pNVar20 = *(Node **)(*plVar8 + uVar17 * 8);
      if (pNVar20 != (Node *)0x0) {
        visitTarget(this,pNVar20,false);
      }
    }
  }
  if (param_2) {
    local_90 = (piecewise_construct_t *)0x0;
    local_88 = (piecewise_construct_t *)0x0;
    local_98 = (piecewise_construct_t *)0x0;
    uVar21 = *(ulong *)(this + 0xe0);
    if (uVar21 != 0) {
      if (uVar21 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_90 = operator_new(uVar21 << 2);
      local_88 = local_90 + uVar21 * 4;
    }
    local_98 = local_90;
    for (plVar8 = *(long **)(this + 0xd8); plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      while (local_90 == local_88) {
        std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
        __push_back_slow_path<float_const&>
                  ((vector<float,std::__ndk1::allocator<float>> *)&local_98,(float *)(plVar8 + 2));
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_00f9dd64;
      }
      *(float *)local_90 = *(float *)(plVar8 + 2);
      local_90 = local_90 + 4;
    }
LAB_00f9dd64:
    ppVar18 = local_90;
    ppVar6 = local_98;
    uVar21 = (long)local_90 - (long)local_98 >> 2;
    if ((long)local_90 - (long)local_98 < 0x201) {
      pvVar9 = (void *)0x0;
      uVar17 = 0;
    }
    else {
      uVar17 = uVar21;
      if (0x1ffffffffffffffe < (long)uVar21) {
        uVar17 = 0x1fffffffffffffff;
      }
      do {
        pvVar9 = operator_new(uVar17 << 2,(nothrow_t *)&std::nothrow);
        if (pvVar9 != (void *)0x0) goto LAB_00f9ddb8;
        uVar17 = uVar17 >> 1;
      } while (uVar17 != 0);
      pvVar9 = (void *)0x0;
    }
LAB_00f9ddb8:
                    /* catch() { ... } // from try @ 00f9df68 with catch @ 00f9ddbc */
    FUN_00fa1d58(ppVar6,ppVar18,local_78,uVar21,pvVar9,uVar17);
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
    ppVar6 = local_90;
    if (local_98 != local_90) {
      ppVar18 = local_98;
      do {
        local_78[0] = ppVar18;
        lVar11 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<float,std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>,std::__ndk1::__unordered_map_hasher<float,std::__ndk1::__hash_value_type<float,std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>,std::__ndk1::hash<float>,true>,std::__ndk1::__unordered_map_equal<float,std::__ndk1::__hash_value_type<float,std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>,std::__ndk1::equal_to<float>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<float,std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>>>
                 ::
                 __emplace_unique_key_args<float,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<float_const&>,std::__ndk1::tuple<>>
                           ((float *)(this + 200),ppVar18,(tuple *)&DAT_0144ae1e,(tuple *)local_78);
        ppVar3 = *(piecewise_construct_t **)(lVar11 + 0x20);
                    /* try { // try from 00f9de2c to 0109de33 has its CatchHandler @ 00f9e14c */
        for (ppVar2 = *(piecewise_construct_t **)(lVar11 + 0x18); ppVar2 != ppVar3;
            ppVar2 = ppVar2 + 8) {
          iVar7 = *(int *)(this + 0x140);
          *(int *)(this + 0x140) = iVar7 + 1;
          local_78[0] = ppVar2;
          lVar11 = std::__ndk1::
                   __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
                   ::
                   __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*const&>,std::__ndk1::tuple<>>
                             ((Node **)(this + 0xa0),ppVar2,(tuple *)&DAT_0144ae1e,(tuple *)local_78
                             );
          *(int *)(lVar11 + 0x18) = iVar7 + 1;
        }
        ppVar18 = ppVar18 + 4;
      } while (ppVar18 != ppVar6);
    }
    if (*(long *)(this + 0xe0) != 0) {
      puVar1 = *(void **)(this + 0xd8);
                    /* try { // try from 00f9de7c to 0109de83 has its CatchHandler @ 00f9e09c */
      while (puVar1 != (void *)0x0) {
        pvVar9 = (void *)puVar1[3];
        pvVar19 = (void *)*puVar1;
        if (pvVar9 != (void *)0x0) {
          puVar1[4] = pvVar9;
          operator_delete(pvVar9);
        }
        operator_delete(puVar1);
        puVar1 = pvVar19;
      }
      lVar11 = *(long *)(this + 0xd0);
      *(undefined8 *)(this + 0xd8) = 0;
      if (lVar11 != 0) {
        lVar13 = 0;
        do {
          *(undefined8 *)(*(long *)(this + 200) + lVar13 * 8) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar11 != lVar13);
      }
      *(undefined8 *)(this + 0xe0) = 0;
    }
    if (local_98 != (piecewise_construct_t *)0x0) {
      local_90 = local_98;
      operator_delete(local_98);
    }
  }
                    /* try { // try from 00f9dee4 to 0109deef has its CatchHandler @ 00f9e008 */
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00f9df0c to 0109df0f has its CatchHandler @ 00f9e060 */
  return;
}

