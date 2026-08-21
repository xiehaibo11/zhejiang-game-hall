
/* WARNING: Removing unreachable block (ram,0x00f1209c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* v8::internal::LiveEdit::PatchScript(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Script>, v8::internal::Handle<v8::internal::String>, bool,
   v8::debug::LiveEditResult*) */

void v8::internal::LiveEdit::PatchScript
               (Isolate *param_1,ulong *param_2,ulong *param_3,uint param_4,undefined4 *param_5)

{
  Isolate *pIVar1;
  byte bVar2;
  ushort uVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  FunctionLiteral *pFVar7;
  undefined8 *******pppppppuVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulong *puVar14;
  piecewise_construct_t *ppVar15;
  uint *puVar16;
  undefined4 *puVar17;
  int *piVar18;
  FunctionLiteral **ppFVar19;
  FunctionLiteral *pFVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulong *puVar23;
  ulong *puVar24;
  uint uVar25;
  undefined4 uVar26;
  ulong uVar27;
  piecewise_construct_t *ppVar28;
  undefined8 *******pppppppuVar29;
  ulong uVar30;
  piecewise_construct_t *ppVar31;
  piecewise_construct_t *ppVar32;
  long lVar33;
  void *pvVar34;
  ulong uVar35;
  ulong uVar36;
  undefined8 *******pppppppuVar37;
  __tree_node_base *p_Var38;
  piecewise_construct_t *ppVar39;
  ulong uVar40;
  long lVar41;
  undefined8 uVar42;
  undefined8 ******ppppppuVar43;
  ulong uVar44;
  piecewise_construct_t *ppVar45;
  undefined8 ******ppppppuVar46;
  FunctionLiteral *pFVar47;
  Heap *pHVar48;
  undefined8 ******ppppppuVar49;
  undefined8 *****pppppuVar50;
  void *pvVar51;
  long *plVar52;
  piecewise_construct_t *ppVar53;
  long *plVar54;
  piecewise_construct_t *ppVar55;
  undefined8 uVar56;
  piecewise_construct_t *ppVar57;
  undefined8 uVar58;
  ulong uVar59;
  bool bVar60;
  ulong uVar61;
  JavaScriptFrame *this;
  ulong uVar62;
  undefined8 ****ppppuVar63;
  __tree_node_base *p_Var64;
  piecewise_construct_t *ppVar65;
  long *plVar66;
  Logger *pLVar67;
  __tree_node_base *p_Var68;
  long lVar69;
  undefined2 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  ParseInfo aPStack_950 [224];
  undefined8 *local_870;
  undefined8 *local_868;
  undefined8 uStack_860;
  long *local_858;
  long *local_850;
  undefined8 uStack_848;
  ParseInfo aPStack_840 [224];
  void *local_760;
  void *local_758;
  undefined8 local_750;
  ulong local_748;
  Isolate *local_740;
  __tree_node_base *local_738;
  long local_730;
  undefined4 local_724 [3];
  undefined4 *local_718;
  FunctionLiteral *local_710;
  undefined8 uStack_708;
  undefined8 *local_700;
  undefined8 uStack_6f8;
  undefined4 local_6f0;
  FunctionLiteral *local_6e0;
  ulong uStack_6d8;
  undefined8 *local_6d0;
  undefined8 uStack_6c8;
  undefined4 local_6c0;
  void *local_6b0;
  piecewise_construct_t *ppStack_6a8;
  long *local_6a0;
  ulong local_698;
  float local_690;
  undefined8 local_680;
  undefined8 *******pppppppuStack_678;
  undefined8 *******local_670;
  undefined8 local_668;
  undefined4 local_660;
  piecewise_construct_t *local_650;
  piecewise_construct_t *ppStack_648;
  piecewise_construct_t *local_640;
  piecewise_construct_t *ppStack_638;
  undefined8 local_630;
  ulong local_628;
  undefined1 local_620;
  JavaScriptFrame *local_c8;
  FunctionLiteral *local_b0;
  FunctionLiteral *pFStack_a8;
  FunctionLiteral *local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  local_750 = 0;
  local_758 = (void *)0x0;
  local_760 = (void *)0x0;
  uVar59 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 3);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar14 = *(ulong **)(param_1 + 0x95a0);
    if (puVar14 == *(ulong **)(param_1 + 0x95a8)) {
      puVar14 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar14 + 1;
    *puVar14 = uVar59;
  }
  else {
    puVar14 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar59);
  }
  CompareStrings(param_1,puVar14,param_3,&local_760);
  if (local_760 == local_758) {
    *param_5 = 0;
    goto joined_r0x00f0ff8c;
  }
  ParseInfo::ParseInfo(aPStack_840,param_1,param_2);
  local_850 = (long *)0x0;
  uStack_848 = 0;
  local_858 = (long *)0x0;
  uVar59 = FUN_00f12530(param_1,aPStack_840,0,&local_858,param_5);
  if ((uVar59 & 1) != 0) {
    puVar14 = (ulong *)Factory::CloneScript((Factory *)param_1,param_2);
    uVar61 = *puVar14;
    uVar59 = *param_3;
    *(int *)(uVar61 + 3) = (int)uVar59;
    if ((uVar59 & 1) != 0) {
      uVar27 = *(ulong *)((uVar59 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar27 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar61,uVar61 + 3,uVar59);
        uVar27 = *(ulong *)(uVar59 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar27 & 0x18) != 0) && ((*(byte *)((uVar61 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar61,uVar61 + 3,uVar59);
      }
    }
    local_868 = (undefined8 *)0x0;
    uStack_860 = 0;
    local_870 = (undefined8 *)0x0;
    ParseInfo::ParseInfo(aPStack_950,param_1,puVar14);
    uVar59 = FUN_00f12530(param_1,aPStack_950,1,&local_870,param_5);
    pvVar34 = local_758;
    pvVar51 = local_760;
    plVar52 = local_850;
    plVar54 = local_858;
    if ((uVar59 & 1) != 0) {
      local_690 = 1.0;
      uVar59 = ((long)local_758 - (long)local_760 >> 4) + ((long)local_850 - (long)local_858 >> 3);
      pFStack_a8 = (FunctionLiteral *)0x0;
      local_a0 = (FunctionLiteral *)0x0;
      ppStack_6a8 = (piecewise_construct_t *)0x0;
      local_6b0 = (void *)0x0;
      local_698 = 0;
      local_6a0 = (long *)0x0;
      local_b0 = (FunctionLiteral *)0x0;
      pFVar20 = pFStack_a8;
      if (uVar59 != 0) {
        if ((uVar59 & 0x7fffffffffffffff) >> 0x3b != 0) {
LAB_00f1224c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pFStack_a8 = operator_new(uVar59 * 0x20);
        local_a0 = pFStack_a8 + uVar59 * 0x20;
        pFVar20 = pFStack_a8;
      }
      for (; local_b0 = pFVar20, pFVar20 = local_b0, pFVar7 = pFStack_a8, plVar54 != plVar52;
          plVar54 = plVar54 + 1) {
        local_650 = (piecewise_construct_t *)*plVar54;
        local_680._1_7_ = (uint7)((ulong)local_680 >> 8);
        local_680._0_1_ = (ThreadVisitor)0x1;
        FUN_00f14040(&local_b0,&local_650,&local_680);
        local_680 = (undefined **)((ulong)local_680._1_7_ << 8);
        FUN_00f14040(&local_b0,&local_650,&local_680);
        pvVar51 = local_760;
        pvVar34 = local_758;
        pFVar20 = local_b0;
      }
      for (; local_b0 = pFVar20, pFStack_a8 = pFVar7, pvVar51 != pvVar34;
          pvVar51 = (void *)((long)pvVar51 + 0x10)) {
        local_650._1_7_ = (uint7)((ulong)local_650 >> 8);
        local_650._0_1_ = (tuple)0x1;
        FUN_00f141a8(&local_b0,pvVar51,&local_650);
        local_650 = (piecewise_construct_t *)((ulong)local_650._1_7_ << 8);
        FUN_00f141a8(&local_b0,pvVar51,&local_650);
        pFVar20 = local_b0;
        pFVar7 = pFStack_a8;
      }
      local_650 = (piecewise_construct_t *)FUN_00f14314;
      FUN_00f14428(pFVar20,pFVar7,&local_650);
      ppStack_638 = (piecewise_construct_t *)0x0;
      local_640 = (piecewise_construct_t *)0x0;
      local_628 = 0;
      local_630 = 0;
      ppStack_648 = (piecewise_construct_t *)0x0;
      local_650 = (piecewise_construct_t *)0x0;
      pFVar47 = pFVar20;
      if (pFVar20 != pFVar7) {
        ppVar53 = (piecewise_construct_t *)0x0;
        ppVar65 = (piecewise_construct_t *)0x0;
        uVar61 = 0;
        ppVar55 = (piecewise_construct_t *)0x0;
        uVar27 = 0;
        ppVar28 = (piecewise_construct_t *)0x0;
        uVar59 = 0;
        bVar60 = false;
        iVar10 = 0;
        do {
          switch(*(undefined4 *)(pFVar20 + 4)) {
          case 0:
            if (bVar60) {
              iVar13 = -1;
              if (uVar27 == 0) goto LAB_00f0f1d0;
LAB_00f0f140:
              uVar59 = (uVar27 + uVar61) - 1;
              uVar58 = *(undefined8 *)
                        (*(long *)(ppVar65 + (uVar59 >> 4 & 0xffffffffffffff8)) +
                        (uVar59 & 0x7f) * 0x20);
            }
            else {
              iVar13 = FunctionLiteral::start_position(*(FunctionLiteral **)(pFVar20 + 8));
              iVar13 = iVar13 + iVar10;
              if (uVar27 != 0) goto LAB_00f0f140;
LAB_00f0f1d0:
              uVar58 = 0;
            }
            ppVar45 = ppStack_638;
            ppVar28 = local_650;
            sVar4 = (long)ppVar53 - (long)ppVar65;
            uVar42 = *(undefined8 *)(pFVar20 + 8);
            lVar33 = 0;
            if (sVar4 != 0) {
              lVar33 = sVar4 * 0x10 + -1;
            }
            local_680._0_7_ = SUB87(local_6e0,0);
            if (lVar33 == uVar61 + uVar27) {
              uVar59 = uVar61 - 0x80;
              if (uVar61 < 0x80) {
                uVar61 = (long)sVar4 >> 3;
                lVar33 = (long)ppStack_638 - (long)local_650;
                uVar59 = lVar33 >> 2;
                if ((ulong)(lVar33 >> 3) <= uVar61) {
                  if (lVar33 == 0) {
                    uVar59 = 1;
                  }
                  if (uVar59 >> 0x3d == 0) {
                    ppVar15 = operator_new(uVar59 * 8);
                    ppVar45 = ppVar15 + uVar61 * 8;
                    ppVar31 = ppVar15 + uVar59 * 8;
                    pvVar51 = operator_new(0x1000);
                    ppVar57 = ppVar53;
                    if (uVar61 == uVar59) {
                      if (ppVar45 < ppVar15 || (long)ppVar45 - (long)ppVar15 == 0) {
                        uVar59 = (long)ppVar31 - (long)ppVar15 >> 2;
                        if ((long)ppVar31 - (long)ppVar15 == 0) {
                          uVar59 = 1;
                        }
                        if (uVar59 >> 0x3d != 0) goto LAB_00f1224c;
                        ppVar53 = operator_new(uVar59 * 8);
                        ppVar45 = ppVar53 + (uVar59 & 0x7ffffffffffffffc) * 2;
                        ppVar31 = ppVar53 + uVar59 * 8;
                        operator_delete(ppVar15);
                        ppVar57 = ppVar55;
                        ppVar15 = ppVar53;
                      }
                      else {
                        lVar33 = (long)ppVar45 - (long)ppVar15 >> 3;
                        uVar59 = lVar33 + 2;
                        if (-1 < lVar33 + 1) {
                          uVar59 = lVar33 + 1;
                        }
                        ppVar45 = ppVar45 + (uVar59 & 0x3ffffffffffffffe) * -4;
                      }
                    }
                    ppVar53 = ppVar45 + 8;
                    *(void **)ppVar45 = pvVar51;
                    ppVar55 = ppVar53;
                    if (ppVar57 != ppVar65) {
                      do {
                        ppVar53 = ppVar55;
                        ppVar65 = ppVar45;
                        if (ppVar45 == ppVar15) {
                          if (ppVar55 < ppVar31) {
                            lVar33 = (long)ppVar31 - (long)ppVar55 >> 3;
                            uVar59 = lVar33 + 2;
                            if (-1 < lVar33 + 1) {
                              uVar59 = lVar33 + 1;
                            }
                            ppVar53 = ppVar55 + (uVar59 & 0x3ffffffffffffffe) * 4;
                            sVar4 = (long)ppVar55 - (long)ppVar45;
                            ppVar65 = ppVar53;
                            if (sVar4 != 0) {
                              ppVar65 = ppVar53 + -sVar4;
                              memmove(ppVar65,ppVar45,sVar4);
                            }
                          }
                          else {
                            uVar59 = (long)ppVar31 - (long)ppVar15 >> 2;
                            if ((long)ppVar31 - (long)ppVar15 == 0) {
                              uVar59 = 1;
                            }
                            if (uVar59 >> 0x3d != 0) goto LAB_00f1224c;
                            uVar61 = uVar59 + 3 >> 2;
                            ppVar15 = operator_new(uVar59 * 8);
                            ppVar65 = ppVar15 + uVar61 * 8;
                            ppVar31 = ppVar15 + uVar59 * 8;
                            ppVar53 = ppVar65;
                            if (ppVar45 != ppVar55) {
                              uVar59 = ((ulong)(ppVar55 + (-8 - (long)ppVar45)) >> 3) + 1;
                              ppVar28 = ppVar45;
                              ppVar39 = ppVar65;
                              if (3 < uVar59) {
                                uVar27 = (ulong)(ppVar55 + (-8 - (long)ppVar45)) &
                                         0xfffffffffffffff8;
                                if ((ppVar45 + uVar27 + 8 <= ppVar15 + uVar61 * 8) ||
                                   (ppVar15 + uVar27 + uVar61 * 8 + 8 <= ppVar45)) {
                                  uVar27 = uVar59 & 0x3ffffffffffffffc;
                                  ppVar28 = ppVar45 + 0x10;
                                  ppVar53 = ppVar65 + uVar27 * 8;
                                  ppVar39 = ppVar15 + uVar61 * 8 + 0x10;
                                  uVar61 = uVar27;
                                  do {
                                    ppVar32 = ppVar28 + -8;
                                    uVar56 = *(undefined8 *)(ppVar28 + -0x10);
                                    uVar72 = *(undefined8 *)(ppVar28 + 8);
                                    uVar71 = *(undefined8 *)ppVar28;
                                    ppVar28 = ppVar28 + 0x20;
                                    uVar61 = uVar61 - 4;
                                    *(undefined8 *)(ppVar39 + -8) = *(undefined8 *)ppVar32;
                                    *(undefined8 *)(ppVar39 + -0x10) = uVar56;
                                    *(undefined8 *)(ppVar39 + 8) = uVar72;
                                    *(undefined8 *)ppVar39 = uVar71;
                                    ppVar39 = ppVar39 + 0x20;
                                  } while (uVar61 != 0);
                                  ppVar28 = ppVar45 + uVar27 * 8;
                                  ppVar39 = ppVar53;
                                  if (uVar59 == uVar27) goto LAB_00f0f9d0;
                                }
                              }
                              do {
                                ppVar32 = ppVar28 + 8;
                                ppVar53 = ppVar39 + 8;
                                *(undefined8 *)ppVar39 = *(undefined8 *)ppVar28;
                                ppVar28 = ppVar32;
                                ppVar39 = ppVar53;
                              } while (ppVar55 != ppVar32);
                            }
LAB_00f0f9d0:
                            operator_delete(ppVar45);
                          }
                        }
                        ppVar57 = ppVar57 + -8;
                        ppVar45 = ppVar65 + -8;
                        *(undefined8 *)ppVar45 = *(undefined8 *)ppVar57;
                        ppVar55 = ppVar53;
                        ppVar28 = local_650;
                      } while (ppVar57 != ppStack_648);
                    }
                    local_650 = ppVar15;
                    ppStack_648 = ppVar45;
                    local_640 = ppVar53;
                    ppStack_638 = ppVar31;
                    if (ppVar28 != (piecewise_construct_t *)0x0) {
                      operator_delete(ppVar28);
                    }
                    goto LAB_00f0fb00;
                  }
                  goto LAB_00f1224c;
                }
                pvVar51 = operator_new(0x1000);
                if (ppVar45 == ppVar53) {
                  ppVar55 = ppVar65;
                  ppVar31 = ppStack_648;
                  ppVar57 = local_640;
                  if (ppVar65 == ppVar28) {
                    if (ppVar53 < ppVar45) {
                      ppVar55 = ppVar53;
                      ppVar31 = ppVar53;
                      ppVar57 = ppVar53;
                      if (sVar4 != 0) {
                        ppVar55 = ppVar53 + uVar61 * -8;
                        memmove(ppVar55,ppVar65,sVar4);
                        ppVar31 = ppVar55;
                      }
                    }
                    else {
                      if (lVar33 == 0) {
                        uVar59 = 1;
                      }
                      if (uVar59 >> 0x3d != 0) goto LAB_00f1224c;
                      uVar61 = uVar59 + 3 >> 2;
                      local_650 = operator_new(uVar59 * 8);
                      ppVar55 = local_650 + uVar61 * 8;
                      ppStack_638 = local_650 + uVar59 * 8;
                      local_640 = ppVar55;
                      if (ppVar65 != ppVar53) {
                        uVar59 = (sVar4 - 8 >> 3) + 1;
                        ppVar28 = ppVar55;
                        ppVar45 = ppVar65;
                        if (3 < uVar59) {
                          uVar27 = sVar4 - 8 & 0xfffffffffffffff8;
                          if ((ppVar65 + uVar27 + 8 <= local_650 + uVar61 * 8) ||
                             (local_650 + uVar27 + uVar61 * 8 + 8 <= ppVar65)) {
                            uVar27 = uVar59 & 0x3ffffffffffffffc;
                            ppVar28 = ppVar65 + 0x10;
                            ppVar45 = local_650 + uVar61 * 8 + 0x10;
                            uVar61 = uVar27;
                            do {
                              ppVar31 = ppVar28 + -8;
                              uVar56 = *(undefined8 *)(ppVar28 + -0x10);
                              uVar72 = *(undefined8 *)(ppVar28 + 8);
                              uVar71 = *(undefined8 *)ppVar28;
                              ppVar28 = ppVar28 + 0x20;
                              uVar61 = uVar61 - 4;
                              *(undefined8 *)(ppVar45 + -8) = *(undefined8 *)ppVar31;
                              *(undefined8 *)(ppVar45 + -0x10) = uVar56;
                              *(undefined8 *)(ppVar45 + 8) = uVar72;
                              *(undefined8 *)ppVar45 = uVar71;
                              ppVar45 = ppVar45 + 0x20;
                            } while (uVar61 != 0);
                            local_640 = ppVar55 + uVar27 * 8;
                            ppVar28 = ppVar55 + uVar27 * 8;
                            ppVar45 = ppVar65 + uVar27 * 8;
                            if (uVar59 == uVar27) goto LAB_00f0fd5c;
                          }
                        }
                        do {
                          ppVar31 = ppVar45 + 8;
                          local_640 = ppVar28 + 8;
                          *(undefined8 *)ppVar28 = *(undefined8 *)ppVar45;
                          ppVar28 = local_640;
                          ppVar45 = ppVar31;
                        } while (ppVar53 != ppVar31);
                      }
LAB_00f0fd5c:
                      ppVar31 = ppVar55;
                      ppVar57 = local_640;
                      if (ppVar65 != (piecewise_construct_t *)0x0) {
                        ppStack_648 = ppVar55;
                        operator_delete(ppVar65);
                        ppVar31 = ppStack_648;
                        ppVar57 = local_640;
                      }
                    }
                  }
                  local_640 = ppVar57;
                  ppStack_648 = ppVar31;
                  ppVar45 = local_640;
                  ppVar53 = ppStack_648;
                  ppVar28 = local_650;
                  *(void **)(ppVar55 + -8) = pvVar51;
                  uVar56 = *(undefined8 *)(ppStack_648 + -8);
                  ppVar65 = local_640;
                  if (local_640 == ppStack_638) {
                    if (ppStack_648 < local_650 || (long)ppStack_648 - (long)local_650 == 0) {
                      uVar59 = (long)ppStack_638 - (long)local_650 >> 2;
                      if ((long)ppStack_638 - (long)local_650 == 0) {
                        uVar59 = 1;
                      }
                      if (uVar59 >> 0x3d != 0) goto LAB_00f1224c;
                      uVar61 = uVar59 >> 2;
                      local_650 = operator_new(uVar59 * 8);
                      ppStack_648 = local_650 + uVar61 * 8;
                      ppStack_638 = local_650 + uVar59 * 8;
                      ppVar65 = ppStack_648;
                      if (ppVar53 != ppVar45) {
                        uVar59 = ((ulong)(ppVar45 + (-8 - (long)ppVar53)) >> 3) + 1;
                        ppVar55 = ppStack_648;
                        if (3 < uVar59) {
                          uVar27 = (ulong)(ppVar45 + (-8 - (long)ppVar53)) & 0xfffffffffffffff8;
                          if ((ppVar53 + uVar27 + 8 <= local_650 + uVar61 * 8) ||
                             (local_650 + uVar61 * 8 + uVar27 + 8 <= ppVar53)) {
                            uVar27 = uVar59 & 0x3ffffffffffffffc;
                            ppVar65 = ppVar53 + 0x10;
                            ppVar53 = ppVar53 + uVar27 * 8;
                            ppVar55 = local_650 + uVar61 * 8 + 0x10;
                            uVar61 = uVar27;
                            do {
                              ppVar31 = ppVar65 + -8;
                              uVar71 = *(undefined8 *)(ppVar65 + -0x10);
                              uVar73 = *(undefined8 *)(ppVar65 + 8);
                              uVar72 = *(undefined8 *)ppVar65;
                              ppVar65 = ppVar65 + 0x20;
                              uVar61 = uVar61 - 4;
                              *(undefined8 *)(ppVar55 + -8) = *(undefined8 *)ppVar31;
                              *(undefined8 *)(ppVar55 + -0x10) = uVar71;
                              *(undefined8 *)(ppVar55 + 8) = uVar73;
                              *(undefined8 *)ppVar55 = uVar72;
                              ppVar55 = ppVar55 + 0x20;
                            } while (uVar61 != 0);
                            ppVar65 = ppStack_648 + uVar27 * 8;
                            ppVar55 = ppStack_648 + uVar27 * 8;
                            if (uVar59 == uVar27) goto LAB_00f0ff44;
                          }
                        }
                        do {
                          ppVar31 = ppVar53 + 8;
                          *(undefined8 *)ppVar55 = *(undefined8 *)ppVar53;
                          ppVar53 = ppVar31;
                          ppVar65 = ppVar55 + 8;
                          ppVar55 = ppVar55 + 8;
                        } while (ppVar45 != ppVar31);
                      }
LAB_00f0ff44:
                      local_640 = ppVar65;
                      if (ppVar28 != (piecewise_construct_t *)0x0) {
                        operator_delete(ppVar28);
                      }
                    }
                    else {
                      lVar33 = (long)ppStack_648 - (long)local_650 >> 3;
                      uVar59 = lVar33 + 2;
                      if (-1 < lVar33 + 1) {
                        uVar59 = lVar33 + 1;
                      }
                      sVar4 = (long)local_640 - (long)ppStack_648;
                      ppVar53 = ppStack_648 + (uVar59 & 0x3ffffffffffffffe) * -4;
                      if (sVar4 != 0) {
                        memmove(ppVar53,ppStack_648,sVar4);
                      }
                      ppVar65 = ppVar53 + ((long)sVar4 >> 3) * 8;
                      ppStack_648 = ppVar53;
                      local_640 = ppVar65;
                    }
                  }
                  *(undefined8 *)ppVar65 = uVar56;
                }
                else {
                  ppVar55 = ppVar53;
                  if (ppVar53 == ppVar45) {
                    if (ppVar65 < ppVar28 || (long)ppVar65 - (long)ppVar28 == 0) {
                      if (lVar33 == 0) {
                        uVar59 = 1;
                      }
                      if (uVar59 >> 0x3d != 0) goto LAB_00f1224c;
                      uVar61 = uVar59 >> 2;
                      local_650 = operator_new(uVar59 * 8);
                      ppStack_648 = local_650 + uVar61 * 8;
                      ppStack_638 = local_650 + uVar59 * 8;
                      ppVar55 = ppStack_648;
                      if (ppVar65 != ppVar53) {
                        uVar59 = (sVar4 - 8 >> 3) + 1;
                        ppVar45 = ppStack_648;
                        if (3 < uVar59) {
                          uVar27 = sVar4 - 8 & 0xfffffffffffffff8;
                          if ((ppVar65 + uVar27 + 8 <= local_650 + uVar61 * 8) ||
                             (local_650 + uVar61 * 8 + uVar27 + 8 <= ppVar65)) {
                            uVar27 = uVar59 & 0x3ffffffffffffffc;
                            ppVar55 = ppVar65 + 0x10;
                            ppVar45 = local_650 + uVar61 * 8 + 0x10;
                            uVar61 = uVar27;
                            do {
                              ppVar31 = ppVar55 + -8;
                              uVar56 = *(undefined8 *)(ppVar55 + -0x10);
                              uVar72 = *(undefined8 *)(ppVar55 + 8);
                              uVar71 = *(undefined8 *)ppVar55;
                              ppVar55 = ppVar55 + 0x20;
                              uVar61 = uVar61 - 4;
                              *(undefined8 *)(ppVar45 + -8) = *(undefined8 *)ppVar31;
                              *(undefined8 *)(ppVar45 + -0x10) = uVar56;
                              *(undefined8 *)(ppVar45 + 8) = uVar72;
                              *(undefined8 *)ppVar45 = uVar71;
                              ppVar45 = ppVar45 + 0x20;
                            } while (uVar61 != 0);
                            ppVar65 = ppVar65 + uVar27 * 8;
                            ppVar55 = ppStack_648 + uVar27 * 8;
                            ppVar45 = ppStack_648 + uVar27 * 8;
                            if (uVar59 == uVar27) goto LAB_00f0fe6c;
                          }
                        }
                        do {
                          ppVar31 = ppVar65 + 8;
                          ppVar55 = ppVar45 + 8;
                          *(undefined8 *)ppVar45 = *(undefined8 *)ppVar65;
                          ppVar65 = ppVar31;
                          ppVar45 = ppVar55;
                        } while (ppVar53 != ppVar31);
                      }
LAB_00f0fe6c:
                      local_640 = ppVar55;
                      if (ppVar28 != (piecewise_construct_t *)0x0) {
                        operator_delete(ppVar28);
                      }
                    }
                    else {
                      lVar69 = (long)ppVar65 - (long)ppVar28 >> 3;
                      lVar33 = lVar69 + 2;
                      if (-1 < lVar69 + 1) {
                        lVar33 = lVar69 + 1;
                      }
                      if (sVar4 != 0) {
                        memmove(ppVar65 + (lVar33 >> 1) * -8,ppVar65,sVar4);
                      }
                      ppVar55 = ppVar65 + (lVar33 >> 1) * -8 + uVar61 * 8;
                      ppStack_648 = ppVar65 + (lVar33 >> 1) * -8;
                      local_640 = ppVar55;
                    }
                  }
                  *(void **)ppVar55 = pvVar51;
                }
              }
              else {
                ppVar45 = ppVar65 + 8;
                uVar56 = *(undefined8 *)ppVar65;
                ppVar55 = ppVar53;
                ppStack_648 = ppVar45;
                local_630 = uVar59;
                if (ppVar53 == ppStack_638) {
                  if (ppVar45 < local_650 || (long)ppVar45 - (long)local_650 == 0) {
                    uVar59 = (long)ppStack_638 - (long)local_650 >> 2;
                    if ((long)ppStack_638 - (long)local_650 == 0) {
                      uVar59 = 1;
                    }
                    if (uVar59 >> 0x3d != 0) goto LAB_00f1224c;
                    uVar61 = uVar59 >> 2;
                    local_650 = operator_new(uVar59 * 8);
                    ppStack_648 = local_650 + uVar61 * 8;
                    ppStack_638 = local_650 + uVar59 * 8;
                    ppVar55 = ppStack_648;
                    if (ppVar45 != ppVar53) {
                      uVar59 = ((ulong)(ppVar53 + (-0x10 - (long)ppVar65)) >> 3) + 1;
                      ppVar31 = ppStack_648;
                      if (3 < uVar59) {
                        uVar27 = (ulong)(ppVar53 + (-0x10 - (long)ppVar65)) & 0xfffffffffffffff8;
                        if ((ppVar65 + uVar27 + 0x10 <= local_650 + uVar61 * 8) ||
                           (local_650 + uVar61 * 8 + uVar27 + 8 <= ppVar45)) {
                          uVar27 = uVar59 & 0x3ffffffffffffffc;
                          ppVar65 = ppVar65 + 0x18;
                          ppVar45 = ppVar45 + uVar27 * 8;
                          ppVar55 = local_650 + uVar61 * 8 + 0x10;
                          uVar61 = uVar27;
                          do {
                            ppVar31 = ppVar65 + -8;
                            uVar71 = *(undefined8 *)(ppVar65 + -0x10);
                            uVar73 = *(undefined8 *)(ppVar65 + 8);
                            uVar72 = *(undefined8 *)ppVar65;
                            ppVar65 = ppVar65 + 0x20;
                            uVar61 = uVar61 - 4;
                            *(undefined8 *)(ppVar55 + -8) = *(undefined8 *)ppVar31;
                            *(undefined8 *)(ppVar55 + -0x10) = uVar71;
                            *(undefined8 *)(ppVar55 + 8) = uVar73;
                            *(undefined8 *)ppVar55 = uVar72;
                            ppVar55 = ppVar55 + 0x20;
                          } while (uVar61 != 0);
                          ppVar55 = ppStack_648 + uVar27 * 8;
                          ppVar31 = ppStack_648 + uVar27 * 8;
                          if (uVar59 == uVar27) goto LAB_00f0fab8;
                        }
                      }
                      do {
                        ppVar65 = ppVar45 + 8;
                        *(undefined8 *)ppVar31 = *(undefined8 *)ppVar45;
                        ppVar55 = ppVar31 + 8;
                        ppVar31 = ppVar31 + 8;
                        ppVar45 = ppVar65;
                      } while (ppVar53 != ppVar65);
                    }
LAB_00f0fab8:
                    local_640 = ppVar55;
                    if (ppVar28 != (piecewise_construct_t *)0x0) {
                      operator_delete(ppVar28);
                    }
                  }
                  else {
                    lVar33 = (long)ppVar45 - (long)local_650 >> 3;
                    uVar59 = lVar33 + 2;
                    if (-1 < lVar33 + 1) {
                      uVar59 = lVar33 + 1;
                    }
                    sVar4 = (long)ppStack_638 - (long)ppVar45;
                    ppVar65 = ppVar45 + (uVar59 & 0x3ffffffffffffffe) * -4;
                    if (sVar4 != 0) {
                      memmove(ppVar65,ppVar45,sVar4);
                    }
                    ppVar55 = ppVar65 + ((long)sVar4 >> 3) * 8;
                    ppStack_648 = ppVar65;
                    local_640 = ppVar55;
                  }
                }
                *(undefined8 *)ppVar55 = uVar56;
              }
              ppVar53 = local_640 + 8;
              local_640 = ppVar53;
            }
LAB_00f0fb00:
            if (ppVar53 == ppStack_648) {
              puVar21 = (undefined8 *)0x0;
            }
            else {
              puVar21 = (undefined8 *)
                        (*(long *)(ppStack_648 + (local_630 + local_628 >> 4 & 0xffffffffffffff8)) +
                        (local_630 + local_628 & 0x7f) * 0x20);
            }
            *puVar21 = uVar42;
            *(int *)(puVar21 + 1) = iVar13;
            *(undefined4 *)((long)puVar21 + 0xc) = 0xffffffff;
            *(undefined1 *)(puVar21 + 2) = 0;
            uVar26 = local_680._3_4_;
            uVar59 = local_628 + 1;
            puVar21[3] = uVar58;
            *(undefined4 *)((long)puVar21 + 0x14) = uVar26;
            *(undefined4 *)((long)puVar21 + 0x11) = (undefined4)local_680;
            ppVar28 = ppStack_648;
            uVar61 = local_630;
            ppVar55 = ppVar53;
            ppVar65 = ppStack_648;
            uVar27 = uVar59;
            local_628 = uVar59;
            break;
          case 1:
            uVar59 = uVar27 - 1;
            uVar35 = uVar59 + uVar61 >> 7;
            lVar33 = *(long *)(ppVar65 + uVar35 * 8);
            uVar62 = uVar59 + uVar61 & 0x7f;
            if (bVar60) {
              iVar13 = -1;
            }
            else {
              iVar13 = FunctionLiteral::end_position(*(FunctionLiteral **)(pFVar20 + 8));
              iVar13 = iVar13 + iVar10;
            }
            ppVar28 = ppStack_6a8;
            lVar69 = uVar62 * 0x20;
            *(int *)(lVar33 + lVar69 + 0xc) = iVar13;
            lVar33 = *(long *)(ppVar65 + uVar35 * 8);
            uVar30 = *(ulong *)(lVar33 + lVar69);
            uVar35 = ((ulong)(uint)((int)uVar30 << 3) + 8 ^ uVar30 >> 0x20) * -0x622015f714c7d297;
            uVar35 = (uVar35 ^ uVar30 >> 0x20 ^ uVar35 >> 0x2f) * -0x622015f714c7d297;
            ppVar45 = (piecewise_construct_t *)((uVar35 ^ uVar35 >> 0x2f) * -0x622015f714c7d297);
            ppVar55 = ppVar65;
            if (ppStack_6a8 != (piecewise_construct_t *)0x0) {
              uVar58 = CONCAT17(POPCOUNT((char)((ulong)ppStack_6a8 >> 0x38)),
                                CONCAT16(POPCOUNT((char)((ulong)ppStack_6a8 >> 0x30)),
                                         CONCAT15(POPCOUNT((char)((ulong)ppStack_6a8 >> 0x28)),
                                                  CONCAT14(POPCOUNT((char)((ulong)ppStack_6a8 >>
                                                                          0x20)),
                                                           CONCAT13(POPCOUNT((char)((ulong)
                                                  ppStack_6a8 >> 0x18)),
                                                  CONCAT12(POPCOUNT((char)((ulong)ppStack_6a8 >>
                                                                          0x10)),
                                                           CONCAT11(POPCOUNT((char)((ulong)
                                                  ppStack_6a8 >> 8)),POPCOUNT((char)ppStack_6a8)))))
                                                 )));
              uVar70 = NEON_uaddlv(uVar58,1);
              uVar35 = CONCAT62((int6)((ulong)uVar58 >> 0x10),uVar70) & 0xffffffff;
              if (uVar35 < 2) {
                ppVar55 = (piecewise_construct_t *)((ulong)ppVar45 & (ulong)(ppStack_6a8 + -1));
              }
              else {
                ppVar55 = ppVar45;
                if (ppStack_6a8 <= ppVar45) {
                  uVar36 = 0;
                  if (ppStack_6a8 != (piecewise_construct_t *)0x0) {
                    uVar36 = (ulong)ppVar45 / (ulong)ppStack_6a8;
                  }
                  ppVar55 = ppVar45 + -(uVar36 * (long)ppStack_6a8);
                }
              }
              plVar54 = *(long **)((long)local_6b0 + (long)ppVar55 * 8);
              if (plVar54 != (long *)0x0) {
                for (plVar54 = (long *)*plVar54; plVar54 != (long *)0x0; plVar54 = (long *)*plVar54)
                {
                  ppVar31 = (piecewise_construct_t *)plVar54[1];
                  if (ppVar31 != ppVar45) {
                    if (uVar35 < 2) {
                      ppVar31 = (piecewise_construct_t *)
                                ((ulong)ppVar31 & (ulong)(ppStack_6a8 + -1));
                    }
                    else if (ppStack_6a8 <= ppVar31) {
                      uVar36 = 0;
                      if (ppStack_6a8 != (piecewise_construct_t *)0x0) {
                        uVar36 = (ulong)ppVar31 / (ulong)ppStack_6a8;
                      }
                      if (ppVar31 + -(uVar36 * (long)ppStack_6a8) == ppVar55) goto LAB_00f0f36c;
                      break;
                    }
                    if (ppVar31 != ppVar55) break;
                  }
LAB_00f0f36c:
                  if (plVar54[2] == uVar30) goto LAB_00f0f6c4;
                }
              }
            }
            plVar54 = operator_new(0x30);
            plVar54[2] = uVar30;
            lVar33 = lVar33 + uVar62 * 0x20;
            lVar41 = *(long *)(lVar33 + 8);
            lVar69 = *(long *)(lVar33 + 0x18);
            plVar54[4] = *(long *)(lVar33 + 0x10);
            plVar54[3] = lVar41;
            *plVar54 = 0;
            plVar54[1] = (long)ppVar45;
            plVar54[5] = lVar69;
            if ((ppVar28 == (piecewise_construct_t *)0x0) ||
               (local_690 * (float)ppVar28 < (float)(local_698 + 1))) {
              ppVar55 = (piecewise_construct_t *)
                        ((ulong)(ppVar28 < (piecewise_construct_t *)0x3 ||
                                ((ulong)ppVar28 & (ulong)(ppVar28 + -1)) != 0) | (long)ppVar28 << 1)
              ;
              ppVar31 = (piecewise_construct_t *)(long)((float)(local_698 + 1) / local_690);
              if (ppVar31 <= ppVar55) {
                ppVar31 = ppVar55;
              }
              if (ppVar31 + -1 == (piecewise_construct_t *)0x0) {
                ppVar31 = (piecewise_construct_t *)0x2;
                bVar9 = ppVar28 < (piecewise_construct_t *)0x3;
                ppVar55 = ppVar31;
                if (ppVar28 < (piecewise_construct_t *)0x2) goto LAB_00f0f568;
LAB_00f0f45c:
                if (!bVar9) {
                  ppVar31 = (piecewise_construct_t *)(long)((float)local_698 / local_690);
                  if ((ppVar28 < (piecewise_construct_t *)0x3) ||
                     (uVar58 = CONCAT17(POPCOUNT((char)((ulong)ppVar28 >> 0x38)),
                                        CONCAT16(POPCOUNT((char)((ulong)ppVar28 >> 0x30)),
                                                 CONCAT15(POPCOUNT((char)((ulong)ppVar28 >> 0x28)),
                                                          CONCAT14(POPCOUNT((char)((ulong)ppVar28 >>
                                                                                  0x20)),
                                                                   CONCAT13(POPCOUNT((char)((ulong)
                                                  ppVar28 >> 0x18)),
                                                  CONCAT12(POPCOUNT((char)((ulong)ppVar28 >> 0x10)),
                                                           CONCAT11(POPCOUNT((char)((ulong)ppVar28
                                                                                   >> 8)),
                                                                    POPCOUNT((char)ppVar28)))))))),
                     uVar70 = NEON_uaddlv(uVar58,1),
                     1 < (uint)CONCAT62((int6)((ulong)uVar58 >> 0x10),uVar70))) {
                    ppVar31 = (piecewise_construct_t *)std::__ndk1::__next_prime((ulong)ppVar31);
                  }
                  else if ((piecewise_construct_t *)0x1 < ppVar31) {
                    ppVar31 = (piecewise_construct_t *)(1L << (-LZCOUNT(ppVar31 + -1) & 0x3fU));
                  }
                  if (ppVar31 <= ppVar55) {
                    ppVar31 = ppVar55;
                  }
                  if (ppVar31 < ppVar28) goto LAB_00f0f568;
                }
              }
              else {
                if (((ulong)ppVar31 & (ulong)(ppVar31 + -1)) != 0) {
                  ppVar31 = (piecewise_construct_t *)std::__ndk1::__next_prime((ulong)ppVar31);
                  ppVar28 = ppStack_6a8;
                }
                bVar9 = ppVar28 <= ppVar31;
                ppVar55 = ppVar31;
                if (ppVar31 <= ppVar28) goto LAB_00f0f45c;
LAB_00f0f568:
                FUN_00f15330(&local_6b0,ppVar31);
              }
              ppVar28 = ppStack_6a8;
              if (((ulong)ppStack_6a8 & (ulong)(ppStack_6a8 + -1)) == 0) {
                ppVar55 = (piecewise_construct_t *)((ulong)(ppStack_6a8 + -1) & (ulong)ppVar45);
              }
              else {
                ppVar55 = ppVar45;
                if (ppStack_6a8 <= ppVar45) {
                  uVar62 = 0;
                  if (ppStack_6a8 != (piecewise_construct_t *)0x0) {
                    uVar62 = (ulong)ppVar45 / (ulong)ppStack_6a8;
                  }
                  ppVar55 = ppVar45 + -(uVar62 * (long)ppStack_6a8);
                }
              }
            }
            plVar52 = *(long **)((long)local_6b0 + (long)ppVar55 * 8);
            if (plVar52 == (long *)0x0) {
              *plVar54 = (long)local_6a0;
              *(long ***)((long)local_6b0 + (long)ppVar55 * 8) = &local_6a0;
              local_6a0 = plVar54;
              if (*plVar54 != 0) {
                ppVar55 = *(piecewise_construct_t **)(*plVar54 + 8);
                if (((ulong)ppVar28 & (ulong)(ppVar28 + -1)) == 0) {
                  ppVar55 = (piecewise_construct_t *)((ulong)ppVar55 & (ulong)(ppVar28 + -1));
                }
                else if (ppVar28 <= ppVar55) {
                  uVar62 = 0;
                  if (ppVar28 != (piecewise_construct_t *)0x0) {
                    uVar62 = (ulong)ppVar55 / (ulong)ppVar28;
                  }
                  ppVar55 = ppVar55 + -(uVar62 * (long)ppVar28);
                }
                plVar52 = (long *)((long)local_6b0 + (long)ppVar55 * 8);
                goto LAB_00f0f6b0;
              }
            }
            else {
              *plVar54 = *plVar52;
LAB_00f0f6b0:
              *plVar52 = (long)plVar54;
            }
            local_698 = local_698 + 1;
LAB_00f0f6c4:
            lVar33 = 0;
            if ((long)ppVar53 - (long)ppVar65 != 0) {
              lVar33 = ((long)ppVar53 - (long)ppVar65) * 0x10 + -1;
            }
            lVar69 = uVar27 + uVar61;
            ppVar28 = ppVar65;
            ppVar55 = ppVar53;
            uVar27 = uVar59;
            local_628 = uVar59;
            if (0xff < (lVar33 - lVar69) + 1U) {
              operator_delete(*(void **)(ppVar53 + -8));
              ppVar53 = ppVar53 + -8;
              ppVar55 = ppVar53;
              local_640 = ppVar53;
            }
            break;
          case 2:
            bVar60 = true;
            if (uVar59 != 0) {
              uVar62 = (uVar59 + uVar61) - 1;
              *(undefined1 *)
               (*(long *)(ppVar28 + (uVar62 >> 4 & 0xffffffffffffff8)) + (uVar62 & 0x7f) * 0x20 +
               0x10) = 1;
            }
            break;
          case 3:
            bVar60 = false;
            iVar10 = *(int *)(pFVar20 + 8) + iVar10;
          }
          pFVar20 = pFVar20 + 0x10;
          pFVar47 = local_b0;
        } while (pFVar20 != pFVar7);
      }
      FUN_00f154b0(&local_650);
      if (pFVar47 != (FunctionLiteral *)0x0) {
        pFStack_a8 = pFVar47;
        operator_delete(pFVar47);
      }
      puVar22 = local_868;
      uStack_6d8 = 0;
      local_6e0 = (FunctionLiteral *)0x0;
      uStack_6c8 = 0;
      local_6d0 = (undefined8 *)0x0;
      local_6c0 = 0x3f800000;
      uStack_708 = 0;
      local_710 = (FunctionLiteral *)0x0;
      uStack_6f8 = 0;
      local_700 = (undefined8 *)0x0;
      local_6f0 = 0x3f800000;
      local_730 = 0;
      local_738 = (__tree_node_base *)0x0;
      local_740 = (Isolate *)&local_738;
      puVar21 = local_870;
      plVar54 = local_6a0;
joined_r0x00f0ffe4:
      local_6a0 = plVar54;
      if (puVar21 != puVar22) {
        pFVar20 = (FunctionLiteral *)*puVar21;
        p_Var68 = (__tree_node_base *)&local_738;
        p_Var64 = (__tree_node_base *)&local_738;
        if (*(int *)(pFVar20 + 0x1c) == 0) {
          uVar59 = 0xffffffffffffffff;
          p_Var38 = local_738;
        }
        else {
          uVar59 = FunctionLiteral::start_position(pFVar20);
          lVar33 = FunctionLiteral::end_position(pFVar20);
          uVar59 = uVar59 & 0xffffffff | lVar33 << 0x20;
          p_Var38 = local_738;
        }
joined_r0x00f100a0:
        if (p_Var38 != (__tree_node_base *)0x0) {
          do {
            p_Var64 = p_Var38;
            if (*(int *)(p_Var64 + 0x20) <= (int)uVar59) {
              if (*(int *)(p_Var64 + 0x20) < (int)uVar59) goto LAB_00f10084;
              iVar10 = (int)(uVar59 >> 0x20);
              if (*(int *)(p_Var64 + 0x24) <= iVar10) goto code_r0x00f10080;
            }
            p_Var38 = *(__tree_node_base **)p_Var64;
            p_Var68 = p_Var64;
            if (*(__tree_node_base **)p_Var64 == (__tree_node_base *)0x0) {
              p_Var38 = *(__tree_node_base **)p_Var64;
              goto joined_r0x00f100c0;
            }
          } while( true );
        }
        goto LAB_00f100ac;
      }
      local_90 = 0x3f800000;
      local_660 = 0x3f800000;
      pFStack_a8 = (FunctionLiteral *)0x0;
      local_b0 = (FunctionLiteral *)0x0;
      uStack_98 = 0;
      local_a0 = (FunctionLiteral *)0x0;
      pppppppuStack_678 = (undefined8 *******)0x0;
      local_680 = (void *)0x0;
      local_668 = 0;
      local_670 = (undefined8 *******)0x0;
      pvVar51 = local_680;
      pppppppuVar37 = local_670;
      if (plVar54 == (long *)0x0) goto joined_r0x00f105c4;
LAB_00f10140:
      do {
        local_748 = plVar54[2];
        if (*(int *)(local_748 + 0x1c) == 0) {
          lVar33 = -1;
        }
        else {
          lVar33 = plVar54[3];
        }
        p_Var64 = local_738;
        p_Var68 = (__tree_node_base *)&local_738;
        if (local_738 != (__tree_node_base *)0x0) {
          do {
            while( true ) {
              iVar10 = (int)lVar33;
              iVar13 = (int)((ulong)lVar33 >> 0x20);
              if (*(int *)(p_Var64 + 0x20) < iVar10) break;
              if ((iVar10 < *(int *)(p_Var64 + 0x20)) || (iVar13 <= *(int *)(p_Var64 + 0x24))) {
                p_Var38 = *(__tree_node_base **)p_Var64;
                p_Var68 = p_Var64;
              }
              else {
                p_Var38 = *(__tree_node_base **)(p_Var64 + 8);
              }
              p_Var64 = p_Var38;
              if (p_Var38 == (__tree_node_base *)0x0) goto LAB_00f101bc;
            }
            p_Var38 = p_Var64 + 8;
            p_Var64 = *(__tree_node_base **)p_Var38;
          } while (*(__tree_node_base **)p_Var38 != (__tree_node_base *)0x0);
LAB_00f101bc:
          if (((p_Var68 != (__tree_node_base *)&local_738) && (*(int *)(p_Var68 + 0x20) <= iVar10))
             && ((*(int *)(p_Var68 + 0x20) < iVar10 || (*(int *)(p_Var68 + 0x24) <= iVar13)))) {
            lVar33 = *(long *)(*(long *)(local_748 + 0x28) + 8);
            lVar69 = *(long *)(*(long *)(*(__tree_node_base **)(p_Var68 + 0x28) + 0x28) + 8);
            do {
              if ((lVar69 == 0) || (lVar33 == 0)) {
                if (lVar33 == lVar69) {
                  p_Var68 = *(__tree_node_base **)(p_Var68 + 0x28);
                  local_650 = (piecewise_construct_t *)&local_748;
                  lVar33 = std::__ndk1::
                           __hash_table<std::__ndk1::__hash_value_type<v8::internal::FunctionLiteral*,v8::internal::FunctionLiteral*>,std::__ndk1::__unordered_map_hasher<v8::internal::FunctionLiteral*,std::__ndk1::__hash_value_type<v8::internal::FunctionLiteral*,v8::internal::FunctionLiteral*>,std::__ndk1::hash<v8::internal::FunctionLiteral*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::FunctionLiteral*,std::__ndk1::__hash_value_type<v8::internal::FunctionLiteral*,v8::internal::FunctionLiteral*>,std::__ndk1::equal_to<v8::internal::FunctionLiteral*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::FunctionLiteral*,v8::internal::FunctionLiteral*>>>
                           ::
                           __emplace_unique_key_args<v8::internal::FunctionLiteral*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::FunctionLiteral*const&>,std::__ndk1::tuple<>>
                                     (&local_b0,(piecewise_construct_t *)&local_748,
                                      (tuple *)&DAT_019a7834,(tuple *)&local_650);
                  *(__tree_node_base **)(lVar33 + 0x18) = p_Var68;
                  if (pppppppuStack_678 == (undefined8 *******)0x0) goto LAB_00f10124;
                  uVar59 = ((ulong)(uint)((int)local_748 << 3) + 8 ^ local_748 >> 0x20) *
                           -0x622015f714c7d297;
                  uVar58 = CONCAT17(POPCOUNT((char)((ulong)pppppppuStack_678 >> 0x38)),
                                    CONCAT16(POPCOUNT((char)((ulong)pppppppuStack_678 >> 0x30)),
                                             CONCAT15(POPCOUNT((char)((ulong)pppppppuStack_678 >>
                                                                     0x28)),
                                                      CONCAT14(POPCOUNT((char)((ulong)
                                                  pppppppuStack_678 >> 0x20)),
                                                  CONCAT13(POPCOUNT((char)((ulong)pppppppuStack_678
                                                                          >> 0x18)),
                                                           CONCAT12(POPCOUNT((char)((ulong)
                                                  pppppppuStack_678 >> 0x10)),
                                                  CONCAT11(POPCOUNT((char)((ulong)pppppppuStack_678
                                                                          >> 8)),
                                                           POPCOUNT((char)pppppppuStack_678))))))));
                  uVar70 = NEON_uaddlv(uVar58,1);
                  uVar61 = (uVar59 ^ local_748 >> 0x20 ^ uVar59 >> 0x2f) * -0x622015f714c7d297;
                  uVar59 = CONCAT62((int6)((ulong)uVar58 >> 0x10),uVar70) & 0xffffffff;
                  ppppppuVar46 = (undefined8 ******)
                                 ((uVar61 ^ uVar61 >> 0x2f) * -0x622015f714c7d297);
                  if (uVar59 < 2) {
                    ppppppuVar49 = (undefined8 ******)
                                   ((ulong)ppppppuVar46 & (long)pppppppuStack_678 - 1U);
                  }
                  else {
                    ppppppuVar49 = ppppppuVar46;
                    if (pppppppuStack_678 <= ppppppuVar46) {
                      uVar61 = 0;
                      if (pppppppuStack_678 != (undefined8 *******)0x0) {
                        uVar61 = (ulong)ppppppuVar46 / (ulong)pppppppuStack_678;
                      }
                      ppppppuVar49 = (undefined8 ******)
                                     ((long)ppppppuVar46 - uVar61 * (long)pppppppuStack_678);
                    }
                  }
                  plVar52 = *(long **)((long)local_680 + (long)ppppppuVar49 * 8);
                  if ((plVar52 == (long *)0x0) ||
                     (plVar52 = (long *)*plVar52, plVar52 == (long *)0x0)) goto LAB_00f10124;
                  goto LAB_00f10504;
                }
                break;
              }
              ppStack_648 = (piecewise_construct_t *)0x0;
              local_650 = (piecewise_construct_t *)0x0;
              ppStack_638 = (piecewise_construct_t *)0x0;
              local_640 = (piecewise_construct_t *)0x0;
              uVar59 = local_630 >> 0x20;
              local_630 = CONCAT44((int)uVar59,0x3f800000);
              plVar66 = *(long **)(lVar33 + 0x40);
              plVar52 = (long *)(lVar33 + 0x38);
              while (plVar52 != plVar66) {
                lVar41 = *plVar52;
                if ((*(ushort *)(lVar41 + 0x28) & 0x380) == 0x180) {
                  local_724[0] = *(undefined4 *)(lVar41 + 0x20);
                  uVar58 = **(undefined8 **)(lVar41 + 8);
                  local_718 = local_724;
                  lVar41 = std::__ndk1::
                           __hash_table<std::__ndk1::__hash_value_type<int,v8::internal::Handle<v8::internal::String>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::Handle<v8::internal::String>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::Handle<v8::internal::String>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,v8::internal::Handle<v8::internal::String>>>>
                           ::
                           __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int&&>,std::__ndk1::tuple<>>
                                     ((int *)&local_650,(piecewise_construct_t *)local_724,
                                      (tuple *)&DAT_019a7834,(tuple *)&local_718);
                  *(undefined8 *)(lVar41 + 0x18) = uVar58;
                  lVar41 = *plVar52;
                }
                plVar52 = (long *)(lVar41 + 0x18);
              }
              plVar52 = (long *)(lVar69 + 0x38);
              ppVar65 = local_650;
              ppVar53 = local_640;
              if (plVar52 != *(long **)(lVar69 + 0x40)) {
                uVar58 = CONCAT17(POPCOUNT((char)((ulong)ppStack_648 >> 0x38)),
                                  CONCAT16(POPCOUNT((char)((ulong)ppStack_648 >> 0x30)),
                                           CONCAT15(POPCOUNT((char)((ulong)ppStack_648 >> 0x28)),
                                                    CONCAT14(POPCOUNT((char)((ulong)ppStack_648 >>
                                                                            0x20)),
                                                             CONCAT13(POPCOUNT((char)((ulong)
                                                  ppStack_648 >> 0x18)),
                                                  CONCAT12(POPCOUNT((char)((ulong)ppStack_648 >>
                                                                          0x10)),
                                                           CONCAT11(POPCOUNT((char)((ulong)
                                                  ppStack_648 >> 8)),POPCOUNT((char)ppStack_648)))))
                                                  )));
                uVar70 = NEON_uaddlv(uVar58,1);
                uVar59 = CONCAT62((int6)((ulong)uVar58 >> 0x10),uVar70) & 0xffffffff;
LAB_00f102dc:
                lVar41 = *plVar52;
                if ((*(ushort *)(lVar41 + 0x28) & 0x380) == 0x180) {
                  if (ppStack_648 != (piecewise_construct_t *)0x0) {
                    ppVar28 = (piecewise_construct_t *)(long)*(int *)(lVar41 + 0x20);
                    if (uVar59 < 2) {
                      ppVar55 = (piecewise_construct_t *)
                                ((ulong)(ppStack_648 + -1) & (ulong)ppVar28);
LAB_00f10324:
                      plVar52 = *(long **)(local_650 + (long)ppVar55 * 8);
                    }
                    else {
                      ppVar55 = ppVar28;
                      if (ppVar28 < ppStack_648) goto LAB_00f10324;
                      uVar61 = 0;
                      if (ppStack_648 != (piecewise_construct_t *)0x0) {
                        uVar61 = (ulong)ppVar28 / (ulong)ppStack_648;
                      }
                      ppVar55 = ppVar28 + -(uVar61 * (long)ppStack_648);
                      plVar52 = *(long **)(local_650 + (long)ppVar55 * 8);
                    }
                    if ((plVar52 != (long *)0x0) &&
                       (plVar52 = (long *)*plVar52, plVar52 != (long *)0x0)) {
                      do {
                        ppVar45 = (piecewise_construct_t *)plVar52[1];
                        if (ppVar45 == ppVar28) {
                          if ((int)plVar52[2] == *(int *)(lVar41 + 0x20)) goto LAB_00f102b4;
                        }
                        else {
                          if (uVar59 < 2) {
                            ppVar45 = (piecewise_construct_t *)
                                      ((ulong)ppVar45 & (ulong)(ppStack_648 + -1));
                          }
                          else if (ppStack_648 <= ppVar45) {
                            uVar61 = 0;
                            if (ppStack_648 != (piecewise_construct_t *)0x0) {
                              uVar61 = (ulong)ppVar45 / (ulong)ppStack_648;
                            }
                            ppVar45 = ppVar45 + -(uVar61 * (long)ppStack_648);
                          }
                          if (ppVar45 != ppVar55) break;
                        }
                        plVar52 = (long *)*plVar52;
                        if (plVar52 == (long *)0x0) break;
                      } while( true );
                    }
                  }
                  goto LAB_00f10388;
                }
                goto LAB_00f102d0;
              }
LAB_00f103b8:
              lVar33 = *(long *)(lVar33 + 8);
              lVar69 = *(long *)(lVar69 + 8);
              bVar60 = false;
joined_r0x00f103c8:
              while (ppVar53 != (piecewise_construct_t *)0x0) {
                ppVar28 = *(piecewise_construct_t **)ppVar53;
                local_650 = ppVar65;
                operator_delete(ppVar53);
                ppVar65 = local_650;
                ppVar53 = ppVar28;
              }
              local_650 = (piecewise_construct_t *)0x0;
              if (ppVar65 != (piecewise_construct_t *)0x0) {
                operator_delete(ppVar65);
              }
            } while (!bVar60);
          }
        }
        puVar17 = (undefined4 *)FUN_00f15600(&local_680,&local_748);
        *puVar17 = 2;
        plVar52 = plVar54 + 5;
        if ((*plVar52 == 0) || (piVar18 = (int *)FUN_00f15600(&local_680,plVar52), *piVar18 == 2))
        goto LAB_00f10138;
        puVar17 = (undefined4 *)FUN_00f15600(&local_680,plVar52);
        *puVar17 = 1;
        plVar54 = (long *)*plVar54;
        pFVar20 = local_a0;
      } while (plVar54 != (long *)0x0);
      goto joined_r0x00f10544;
    }
    goto LAB_00f121b4;
  }
  goto LAB_00f121cc;
code_r0x00f10080:
  if (iVar10 <= *(int *)(p_Var64 + 0x24)) goto LAB_00f100ac;
LAB_00f10084:
  p_Var68 = p_Var64 + 8;
  p_Var38 = *(__tree_node_base **)(p_Var64 + 8);
  goto joined_r0x00f100a0;
LAB_00f100ac:
  p_Var38 = *(__tree_node_base **)p_Var68;
joined_r0x00f100c0:
  if (p_Var38 == (__tree_node_base *)0x0) {
    p_Var38 = operator_new(0x30);
    *(ulong *)(p_Var38 + 0x20) = uVar59;
    *(undefined8 *)(p_Var38 + 0x28) = 0;
    *(undefined8 *)p_Var38 = 0;
    *(undefined8 *)(p_Var38 + 8) = 0;
    *(__tree_node_base **)(p_Var38 + 0x10) = p_Var64;
    *(__tree_node_base **)p_Var68 = p_Var38;
    p_Var64 = p_Var38;
    if (*(__tree_node_base **)local_740 != (__tree_node_base *)0x0) {
      p_Var64 = *(__tree_node_base **)p_Var68;
      local_740 = (Isolate *)*(__tree_node_base **)local_740;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (local_738,p_Var64);
    local_730 = local_730 + 1;
  }
  puVar21 = puVar21 + 1;
  *(FunctionLiteral **)(p_Var38 + 0x28) = pFVar20;
  plVar54 = local_6a0;
  goto joined_r0x00f0ffe4;
LAB_00f10504:
  do {
    ppppppuVar43 = (undefined8 ******)plVar52[1];
    if (ppppppuVar43 == ppppppuVar46) {
      if (plVar52[2] == local_748) goto LAB_00f10138;
    }
    else {
      if (uVar59 < 2) {
        ppppppuVar43 = (undefined8 ******)((ulong)ppppppuVar43 & (long)pppppppuStack_678 - 1U);
      }
      else if (pppppppuStack_678 <= ppppppuVar43) {
        uVar61 = 0;
        if (pppppppuStack_678 != (undefined8 *******)0x0) {
          uVar61 = (ulong)ppppppuVar43 / (ulong)pppppppuStack_678;
        }
        ppppppuVar43 = (undefined8 ******)((long)ppppppuVar43 - uVar61 * (long)pppppppuStack_678);
      }
      if (ppppppuVar43 != ppppppuVar49) break;
    }
    plVar52 = (long *)*plVar52;
  } while (plVar52 != (long *)0x0);
LAB_00f10124:
  bVar2 = *(byte *)(plVar54 + 4);
  puVar16 = (uint *)FUN_00f15600(&local_680,&local_748);
  *puVar16 = (uint)bVar2;
LAB_00f10138:
  plVar54 = (long *)*plVar54;
  pFVar20 = local_a0;
  if (plVar54 == (long *)0x0) goto joined_r0x00f10544;
  goto LAB_00f10140;
LAB_00f102b4:
  if (*(int *)plVar52[3] != *(int *)**(undefined8 **)(lVar41 + 8)) {
LAB_00f10388:
    bVar60 = true;
    goto joined_r0x00f103c8;
  }
LAB_00f102d0:
  plVar52 = (long *)(lVar41 + 0x18);
  if (plVar52 == *(long **)(lVar69 + 0x40)) goto LAB_00f103b8;
  goto LAB_00f102dc;
joined_r0x00f10544:
  pvVar51 = local_680;
  pppppppuVar37 = local_670;
  if (pFVar20 == (FunctionLiteral *)0x0) goto joined_r0x00f105c4;
  ppVar65 = (piecewise_construct_t *)(pFVar20 + 0x10);
  piVar18 = (int *)FUN_00f15600(&local_680,ppVar65);
  if (*piVar18 == 0) {
    uVar58 = *(undefined8 *)(pFVar20 + 0x18);
    ppFVar19 = &local_710;
LAB_00f10560:
    local_650 = ppVar65;
    lVar33 = std::__ndk1::
             __hash_table<std::__ndk1::__hash_value_type<v8::internal::FunctionLiteral*,v8::internal::FunctionLiteral*>,std::__ndk1::__unordered_map_hasher<v8::internal::FunctionLiteral*,std::__ndk1::__hash_value_type<v8::internal::FunctionLiteral*,v8::internal::FunctionLiteral*>,std::__ndk1::hash<v8::internal::FunctionLiteral*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::FunctionLiteral*,std::__ndk1::__hash_value_type<v8::internal::FunctionLiteral*,v8::internal::FunctionLiteral*>,std::__ndk1::equal_to<v8::internal::FunctionLiteral*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::FunctionLiteral*,v8::internal::FunctionLiteral*>>>
             ::
             __emplace_unique_key_args<v8::internal::FunctionLiteral*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::FunctionLiteral*const&>,std::__ndk1::tuple<>>
                       (ppFVar19,ppVar65,(tuple *)&DAT_019a7834,(tuple *)&local_650);
    *(undefined8 *)(lVar33 + 0x18) = uVar58;
  }
  else {
    piVar18 = (int *)FUN_00f15600(&local_680,ppVar65);
    if (*piVar18 == 1) {
      uVar58 = *(undefined8 *)(pFVar20 + 0x18);
      ppFVar19 = &local_6e0;
      goto LAB_00f10560;
    }
  }
  pFVar20 = *(FunctionLiteral **)pFVar20;
  goto joined_r0x00f10544;
joined_r0x00f105c4:
  while (pppppppuVar37 != (undefined8 *******)0x0) {
    ppppppuVar46 = *pppppppuVar37;
    local_680 = pvVar51;
    operator_delete(pppppppuVar37);
    pvVar51 = local_680;
    pppppppuVar37 = (undefined8 *******)ppppppuVar46;
  }
  local_680 = (undefined **)0x0;
  pFVar20 = local_b0;
  pFVar7 = local_a0;
  if (pvVar51 != (void *)0x0) {
    operator_delete(pvVar51);
    pFVar20 = local_b0;
    pFVar7 = local_a0;
  }
  while (pFVar7 != (FunctionLiteral *)0x0) {
    pFVar47 = *(FunctionLiteral **)pFVar7;
    local_b0 = pFVar20;
    operator_delete(pFVar7);
    pFVar20 = local_b0;
    pFVar7 = pFVar47;
  }
  local_b0 = (FunctionLiteral *)0x0;
  if (pFVar20 != (FunctionLiteral *)0x0) {
    operator_delete(pFVar20);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::pair<int,int>,v8::internal::FunctionLiteral*>,std::__ndk1::__map_value_compare<std::__ndk1::pair<int,int>,std::__ndk1::__value_type<std::__ndk1::pair<int,int>,v8::internal::FunctionLiteral*>,std::__ndk1::less<std::__ndk1::pair<int,int>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<int,int>,v8::internal::FunctionLiteral*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::pair<int,int>,v8::internal::FunctionLiteral*>,std::__ndk1::__map_value_compare<std::__ndk1::pair<int,int>,std::__ndk1::__value_type<std::__ndk1::pair<int,int>,v8::internal::FunctionLiteral*>,std::__ndk1::less<std::__ndk1::pair<int,int>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<int,int>,v8::internal::FunctionLiteral*>>>
             *)&local_740,(__tree_node *)local_738);
  local_680 = &PTR_FUN_01ca46b8;
  local_668 = 0;
  local_670 = (undefined8 *******)0x0;
  pppppppuStack_678 = &local_670;
  for (plVar54 = local_6d0; puVar21 = local_700, plVar54 != (long *)0x0; plVar54 = (long *)*plVar54)
  {
    FUN_00f126a0(&local_680,*(int *)(*param_2 + 0x1f) >> 1,plVar54[2],1);
    FUN_00f126a0(&local_680,*(int *)(*puVar14 + 0x1f) >> 1,plVar54[3],0);
  }
  for (; puVar21 != (undefined8 *)0x0; puVar21 = (undefined8 *)*puVar21) {
    FUN_00f126a0(&local_680,*(int *)(*param_2 + 0x1f) >> 1,puVar21[2],0);
  }
  local_740 = param_1;
  HeapObjectIterator::HeapObjectIterator((HeapObjectIterator *)&local_650,param_1 + 0x8850,1);
  pFVar20 = (FunctionLiteral *)HeapObjectIterator::Next((HeapObjectIterator *)&local_650);
  iVar10 = (int)pFVar20;
  while (iVar10 != 0) {
    uVar59 = (ulong)pFVar20 & 0xffffffff00000000;
    uVar61 = uVar59 | 7;
    if (*(short *)(uVar61 + *(uint *)(pFVar20 + -1)) == 0xa6) {
      local_b0 = (FunctionLiteral *)0x0;
      uVar59 = FUN_00f128d8(&local_680,pFVar20,&local_b0);
      if ((uVar59 & 1) != 0) {
        if (*(CanonicalHandleScope **)(local_740 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          pIVar1 = local_740 + 0x95a0;
          puVar21 = *(undefined8 **)pIVar1;
          if (puVar21 == *(undefined8 **)(local_740 + 0x95a8)) {
            puVar21 = (undefined8 *)HandleScope::Extend(local_740);
          }
          *(undefined8 **)pIVar1 = puVar21 + 1;
          *puVar21 = pFVar20;
        }
        else {
          puVar21 = (undefined8 *)
                    CanonicalHandleScope::Lookup
                              (*(CanonicalHandleScope **)(local_740 + 0x95b8),(ulong)pFVar20);
        }
        *(undefined8 **)(local_b0 + 8) = puVar21;
      }
    }
    else if (*(short *)(uVar61 + *(uint *)(pFVar20 + -1)) == 0x439) {
      local_718 = (undefined4 *)0x0;
      local_b0 = pFVar20;
      uVar59 = FUN_00f128d8(&local_680,uVar59 | *(uint *)(pFVar20 + 0xb),&local_718);
      pFVar20 = local_b0;
      puVar17 = local_718;
      if ((uVar59 & 1) != 0) {
        puVar21 = *(undefined8 **)(local_718 + 6);
        if (puVar21 < *(undefined8 **)(local_718 + 8)) {
          if (*(CanonicalHandleScope **)(local_740 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            pIVar1 = local_740 + 0x95a0;
            puVar22 = *(undefined8 **)pIVar1;
            if (puVar22 == *(undefined8 **)(local_740 + 0x95a8)) {
              puVar22 = (undefined8 *)HandleScope::Extend(local_740);
            }
            *(undefined8 **)pIVar1 = puVar22 + 1;
            *puVar22 = pFVar20;
          }
          else {
            puVar22 = (undefined8 *)
                      CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(local_740 + 0x95b8),(ulong)local_b0);
          }
          *puVar21 = puVar22;
          *(long *)(puVar17 + 6) = *(long *)(puVar17 + 6) + 8;
        }
        else {
          std::__ndk1::
          vector<v8::internal::Handle<v8::internal::JSFunction>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::JSFunction>>>
          ::__emplace_back_slow_path<v8::internal::JSFunction&,v8::internal::Isolate*&>
                    ((vector<v8::internal::Handle<v8::internal::JSFunction>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::JSFunction>>>
                      *)(local_718 + 4),(JSFunction *)&local_b0,&local_740);
        }
      }
    }
    else if ((*(ushort *)(uVar61 + *(uint *)(pFVar20 + -1)) - 0x417 < 3) &&
            (local_b0 = pFVar20, *(uint *)(pFVar20 + 0x1f) < 0xfffffffe)) {
      local_718 = (undefined4 *)0x0;
      uVar59 = FUN_00f128d8(&local_680,uVar59 | *(uint *)((uVar59 | *(uint *)(pFVar20 + 0xb)) + 0xb)
                            ,&local_718);
      pFVar20 = local_b0;
      puVar17 = local_718;
      if ((uVar59 & 1) != 0) {
        puVar21 = *(undefined8 **)(local_718 + 0xc);
        if (puVar21 < *(undefined8 **)(local_718 + 0xe)) {
          if (*(CanonicalHandleScope **)(local_740 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            pIVar1 = local_740 + 0x95a0;
            puVar22 = *(undefined8 **)pIVar1;
            if (puVar22 == *(undefined8 **)(local_740 + 0x95a8)) {
              puVar22 = (undefined8 *)HandleScope::Extend(local_740);
            }
            *(undefined8 **)pIVar1 = puVar22 + 1;
            *puVar22 = pFVar20;
          }
          else {
            puVar22 = (undefined8 *)
                      CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(local_740 + 0x95b8),(ulong)local_b0);
          }
          *puVar21 = puVar22;
          *(long *)(puVar17 + 0xc) = *(long *)(puVar17 + 0xc) + 8;
        }
        else {
          std::__ndk1::
          vector<v8::internal::Handle<v8::internal::JSGeneratorObject>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::JSGeneratorObject>>>
          ::__emplace_back_slow_path<v8::internal::JSGeneratorObject&,v8::internal::Isolate*&>
                    ((vector<v8::internal::Handle<v8::internal::JSGeneratorObject>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::JSGeneratorObject>>>
                      *)(local_718 + 10),(JSGeneratorObject *)&local_b0,&local_740);
        }
      }
    }
    pFVar20 = (FunctionLiteral *)HeapObjectIterator::Next((HeapObjectIterator *)&local_650);
    iVar10 = (int)pFVar20;
  }
  HeapObjectIterator::~HeapObjectIterator((HeapObjectIterator *)&local_650);
  iVar10 = *(int *)(*(long *)(local_740 + 0xb6c8) + 0x48);
  StackFrameIterator::StackFrameIterator((StackFrameIterator *)&local_650,local_740);
  if (local_c8 != (JavaScriptFrame *)0x0) {
    lVar33 = 0;
    iVar13 = 1;
    if (iVar10 == 0) {
      iVar13 = 2;
    }
    this = local_c8;
    if (iVar13 != 2) goto LAB_00f10948;
LAB_00f10974:
    do {
      iVar10 = (**(code **)(*(long *)this + 8))(this);
      if ((iVar10 == 3) || (iVar10 = (**(code **)(*(long *)this + 8))(this), iVar10 == 0x15)) {
        iVar13 = 3;
        goto LAB_00f10930;
      }
      iVar13 = 2;
      while( true ) {
        do {
          uVar11 = (**(code **)(*(long *)this + 8))(this);
          if ((uVar11 < 0x15) && ((1 << (ulong)(uVar11 & 0x1f) & 0x119010U) != 0)) {
            pFStack_a8 = (FunctionLiteral *)0x0;
            local_a0 = (FunctionLiteral *)0x0;
            local_b0 = (FunctionLiteral *)0x0;
            JavaScriptFrame::GetFunctions(this,(vector *)&local_b0);
            pFVar7 = pFStack_a8;
            for (pFVar20 = local_b0; pFVar20 != pFVar7;
                pFVar20 = (FunctionLiteral *)((long)pFVar20 + 8)) {
              if ((iVar13 == 2) &&
                 (uVar11 = *(uint *)(**(long **)pFVar20 + 0x1b) & 0x1f, iVar13 = 2,
                 (uVar11 - 1 & 0xff) < 2 || (uVar11 - 10 & 0xff) < 7)) {
                iVar13 = 3;
              }
              local_718 = (undefined4 *)0x0;
              uVar59 = FUN_00f128d8(&local_680,**(long **)pFVar20,&local_718);
              if (((uVar59 & 1) != 0) && (*(char *)(local_718 + 0x11) != '\0')) {
                local_718[0x10] = iVar13;
                lVar33 = *(long *)(this + 0x20);
              }
            }
            if (local_b0 != (FunctionLiteral *)0x0) {
              pFStack_a8 = local_b0;
              operator_delete(local_b0);
            }
          }
LAB_00f10930:
          StackFrameIterator::Advance((StackFrameIterator *)&local_650);
          if (local_c8 == (JavaScriptFrame *)0x0) goto LAB_00f10a84;
          this = local_c8;
          if (iVar13 == 2) goto LAB_00f10974;
LAB_00f10948:
          this = local_c8;
        } while (iVar13 != 1);
        iVar10 = (**(code **)(*(long *)local_c8 + 0x38))(local_c8);
        if (*(int *)(*(long *)(local_740 + 0xb6c8) + 0x48) == iVar10) break;
        iVar13 = 1;
      }
    } while( true );
  }
  lVar33 = 0;
LAB_00f10a84:
  ThreadManager::IterateArchivedThreads
            (*(ThreadManager **)(local_740 + 0x95f0),(ThreadVisitor *)&local_680);
  for (puVar21 = local_6d0; puVar21 != (undefined8 *)0x0; puVar21 = (undefined8 *)*puVar21) {
    pFVar20 = (FunctionLiteral *)puVar21[2];
    iVar10 = *(int *)(*param_2 + 0x1f);
    iVar13 = FunctionLiteral::start_position(pFVar20);
    if (*(int *)(pFVar20 + 0x1c) == 0) {
      iVar13 = -1;
    }
    if (local_670 == (undefined8 *******)0x0) {
LAB_00f10b3c:
      pppppppuVar37 = (undefined8 *******)0x0;
    }
    else {
      iVar10 = iVar10 >> 1;
      pppppppuVar37 = &local_670;
      pppppppuVar29 = local_670;
      do {
        while (*(int *)(pppppppuVar29 + 4) < iVar10) {
          pppppppuVar29 = (undefined8 *******)pppppppuVar29[1];
          if (pppppppuVar29 == (undefined8 *******)0x0) goto LAB_00f10b28;
        }
        if ((iVar10 < *(int *)(pppppppuVar29 + 4)) ||
           (iVar13 <= *(int *)((long)pppppppuVar29 + 0x24))) {
          pppppppuVar8 = (undefined8 *******)*pppppppuVar29;
          pppppppuVar37 = pppppppuVar29;
        }
        else {
          pppppppuVar8 = (undefined8 *******)pppppppuVar29[1];
        }
        pppppppuVar29 = pppppppuVar8;
      } while (pppppppuVar29 != (undefined8 *******)0x0);
LAB_00f10b28:
      if ((((undefined8 ********)pppppppuVar37 == &local_670) ||
          (iVar10 < *(int *)(pppppppuVar37 + 4))) ||
         ((iVar10 <= *(int *)(pppppppuVar37 + 4) && (iVar13 < *(int *)((long)pppppppuVar37 + 0x24)))
         )) goto LAB_00f10b3c;
      pppppppuVar37 = pppppppuVar37 + 5;
    }
    pFVar20 = (FunctionLiteral *)puVar21[3];
    iVar10 = *(int *)(*puVar14 + 0x1f);
    iVar13 = FunctionLiteral::start_position(pFVar20);
    if (*(int *)(pFVar20 + 0x1c) == 0) {
      iVar13 = -1;
    }
    if (local_670 != (undefined8 *******)0x0) {
      iVar10 = iVar10 >> 1;
      pppppppuVar29 = local_670;
      do {
        if ((*(int *)(pppppppuVar29 + 4) < iVar10) ||
           ((*(int *)(pppppppuVar29 + 4) <= iVar10 &&
            (*(int *)((long)pppppppuVar29 + 0x24) < iVar13)))) {
          pppppppuVar29 = pppppppuVar29 + 1;
        }
        pppppppuVar29 = (undefined8 *******)*pppppppuVar29;
      } while (pppppppuVar29 != (undefined8 *******)0x0);
    }
    if (pppppppuVar37[1] != (undefined8 ******)0x0) {
      if (*(char *)((long)pppppppuVar37 + 0x44) == '\0') {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      iVar10 = *(int *)(pppppppuVar37 + 8);
      if (iVar10 == 1) {
        uVar26 = 3;
      }
      else if (iVar10 == 3) {
        uVar26 = 4;
      }
      else if (pppppppuVar37[5] == pppppppuVar37[6]) {
        if (iVar10 != 4) goto LAB_00f10aa8;
        uVar26 = 5;
      }
      else {
        uVar26 = 2;
      }
      *param_5 = uVar26;
      goto LAB_00f1211c;
    }
LAB_00f10aa8:
  }
  if (lVar33 == 0) {
LAB_00f10da0:
    if ((param_4 & 1) == 0) {
      local_730 = 0;
      local_738 = (__tree_node_base *)0x0;
      local_740 = (Isolate *)&local_738;
      for (puVar21 = local_700; puVar22 = local_6d0, puVar21 != (undefined8 *)0x0;
          puVar21 = (undefined8 *)*puVar21) {
        pFVar20 = (FunctionLiteral *)puVar21[2];
        iVar10 = *(int *)(*param_2 + 0x1f);
        iVar13 = FunctionLiteral::start_position(pFVar20);
        if (*(int *)(pFVar20 + 0x1c) == 0) {
          iVar13 = -1;
        }
        if (local_670 != (undefined8 *******)0x0) {
          iVar10 = iVar10 >> 1;
          pppppppuVar37 = local_670;
          pppppppuVar29 = &local_670;
          do {
            while (*(int *)(pppppppuVar37 + 4) < iVar10) {
              pppppppuVar37 = (undefined8 *******)pppppppuVar37[1];
              if (pppppppuVar37 == (undefined8 *******)0x0) goto LAB_00f10e54;
            }
            if ((iVar10 < *(int *)(pppppppuVar37 + 4)) ||
               (iVar13 <= *(int *)((long)pppppppuVar37 + 0x24))) {
              pppppppuVar8 = (undefined8 *******)*pppppppuVar37;
              pppppppuVar29 = pppppppuVar37;
            }
            else {
              pppppppuVar8 = (undefined8 *******)pppppppuVar37[1];
            }
            pppppppuVar37 = pppppppuVar8;
          } while (pppppppuVar37 != (undefined8 *******)0x0);
LAB_00f10e54:
          if (((((undefined8 ********)pppppppuVar29 != &local_670) &&
               (*(int *)(pppppppuVar29 + 4) <= iVar10)) &&
              ((*(int *)(pppppppuVar29 + 4) < iVar10 ||
               (*(int *)((long)pppppppuVar29 + 0x24) <= iVar13)))) &&
             (ppppppuVar46 = pppppppuVar29[6], ppppppuVar46 != (undefined8 ******)0x0)) {
            CompilationCache::Remove(*(CompilationCache **)(param_1 + 0x9518),ppppppuVar46);
            Debug::DeoptimizeFunction(*(Debug **)(param_1 + 0xb6c8),ppppppuVar46);
            uVar59 = (ulong)*ppppppuVar46 & 0xffffffff00000000;
            uVar61 = uVar59 | *(uint *)((long)*ppppppuVar46 + 0xf);
            if (*(short *)((uVar59 | 7) + (ulong)*(uint *)(uVar61 - 1)) == 0x5b) {
              if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar23 = *(ulong **)(param_1 + 0x95a0);
                if (puVar23 == *(ulong **)(param_1 + 0x95a8)) {
                  puVar23 = (ulong *)HandleScope::Extend(param_1);
                }
                *(ulong **)(param_1 + 0x95a0) = puVar23 + 1;
                *puVar23 = uVar61;
              }
              else {
                puVar23 = (ulong *)CanonicalHandleScope::Lookup
                                             (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar61);
              }
              Debug::RemoveBreakInfoAndMaybeFree(*(Debug **)(param_1 + 0xb6c8),puVar23);
            }
            SharedFunctionInfo::EnsureSourcePositionsAvailable(param_1,ppppppuVar46);
            local_650 = (piecewise_construct_t *)*ppppppuVar46;
            iVar10 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_650);
            if ((long)local_758 - (long)local_760 == 0) {
              pvVar51 = local_760;
              if (local_760 != local_758) goto LAB_00f10f84;
LAB_00f10f98:
              if (pvVar51 != local_760) {
                iVar10 = (*(int *)((long)pvVar51 + -4) + iVar10) - *(int *)((long)pvVar51 + -0xc);
              }
            }
            else {
              uVar59 = (long)local_758 - (long)local_760 >> 4;
              pvVar34 = local_760;
              do {
                uVar61 = uVar59 >> 1;
                pvVar51 = (void *)((long)pvVar34 + uVar61 * 0x10 + 0x10);
                uVar59 = uVar59 + ~uVar61;
                if (iVar10 <= *(int *)((long)pvVar34 + uVar61 * 0x10 + 4)) {
                  pvVar51 = pvVar34;
                  uVar59 = uVar61;
                }
                pvVar34 = pvVar51;
              } while (uVar59 != 0);
              if (pvVar51 == local_758) goto LAB_00f10f98;
LAB_00f10f84:
              if (*(int *)((long)pvVar51 + 4) != iVar10) goto LAB_00f10f98;
              iVar10 = *(int *)((long)pvVar51 + 0xc);
            }
            local_650 = (piecewise_construct_t *)*ppppppuVar46;
            iVar13 = SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_650);
            lVar69 = (long)local_758 - (long)local_760;
            if (lVar69 == 0) {
              pvVar51 = local_760;
              if (local_760 != local_758) goto LAB_00f1101c;
LAB_00f11030:
              if (pvVar51 != local_760) {
                iVar13 = (*(int *)((long)pvVar51 + -4) + iVar13) - *(int *)((long)pvVar51 + -0xc);
              }
            }
            else {
              uVar59 = lVar69 >> 4;
              pvVar34 = local_760;
              do {
                uVar61 = uVar59 >> 1;
                pvVar51 = (void *)((long)pvVar34 + uVar61 * 0x10 + 0x10);
                uVar59 = uVar59 + ~uVar61;
                if (iVar13 <= *(int *)((long)pvVar34 + uVar61 * 0x10 + 4)) {
                  pvVar51 = pvVar34;
                  uVar59 = uVar61;
                }
                pvVar34 = pvVar51;
              } while (uVar59 != 0);
              if (pvVar51 == local_758) goto LAB_00f11030;
LAB_00f1101c:
              if (*(int *)((long)pvVar51 + 4) != iVar13) goto LAB_00f11030;
              iVar13 = *(int *)((long)pvVar51 + 0xc);
            }
            local_650 = (piecewise_construct_t *)*ppppppuVar46;
            uVar3 = *(ushort *)(local_650 + 0x19);
            if (uVar3 == 0xffff) {
              iVar12 = -1;
            }
            else {
              iVar12 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_650);
              iVar12 = iVar12 - (uint)uVar3;
              lVar69 = (long)local_758 - (long)local_760;
            }
            pvVar51 = local_760;
            if (lVar69 != 0) {
              uVar59 = lVar69 >> 4;
              pvVar34 = local_760;
              do {
                uVar61 = uVar59 >> 1;
                pvVar51 = (void *)((long)pvVar34 + uVar61 * 0x10 + 0x10);
                uVar59 = uVar59 + ~uVar61;
                if (iVar12 <= *(int *)((long)pvVar34 + uVar61 * 0x10 + 4)) {
                  pvVar51 = pvVar34;
                  uVar59 = uVar61;
                }
                pvVar34 = pvVar51;
              } while (uVar59 != 0);
            }
            if ((pvVar51 == local_758) || (*(int *)((long)pvVar51 + 4) != iVar12)) {
              if (pvVar51 != local_760) {
                iVar12 = (*(int *)((long)pvVar51 + -4) + iVar12) - *(int *)((long)pvVar51 + -0xc);
              }
            }
            else {
              iVar12 = *(int *)((long)pvVar51 + 0xc);
            }
            local_650 = (piecewise_construct_t *)*ppppppuVar46;
            SharedFunctionInfo::SetPosition((SharedFunctionInfo *)&local_650,iVar10,iVar13);
            local_650 = (piecewise_construct_t *)*ppppppuVar46;
            SharedFunctionInfo::SetFunctionTokenPosition
                      ((SharedFunctionInfo *)&local_650,iVar12,iVar10);
            puVar16 = (uint *)((long)*ppppppuVar46 + 3);
            uVar11 = *puVar16;
            uVar59 = (ulong)*ppppppuVar46 & 0xffffffff00000000;
            if ((((uVar11 & 1) != 0) &&
                (*(short *)((uVar59 | 7) + (ulong)*(uint *)((uVar59 | uVar11) - 1)) == 0x86)) ||
               ((uVar11 = *puVar16, (uVar11 & 1) != 0 &&
                (*(short *)((uVar59 | 7) + (ulong)*(uint *)((uVar59 | uVar11) - 1)) == 0x61)))) {
              pppppuVar50 = *ppppppuVar46;
              uVar59 = (ulong)pppppuVar50 & 0xffffffff00000000;
              uVar27 = uVar59 | *(uint *)((long)pppppuVar50 + 0xf);
              uVar61 = uVar59 | 7;
              if ((*(short *)(uVar61 + *(uint *)(uVar27 - 1)) == 0x5b) &&
                 (*(short *)(uVar61 + *(uint *)((uVar59 | *(uint *)(uVar27 + 0x13)) - 1)) == 0x86))
              {
                uVar11 = *(uint *)(uVar27 + 0xf);
              }
              else {
                uVar11 = *(uint *)((long)pppppuVar50 + 3);
                if (((uVar11 & 1) == 0) ||
                   (*(short *)(uVar61 + *(uint *)((uVar59 | uVar11) - 1)) != 0x86)) {
                  uVar11 = *(uint *)((uVar59 | *(uint *)((long)pppppuVar50 + 3)) + 3);
                }
                else {
                  uVar11 = *(uint *)((long)pppppuVar50 + 3);
                }
              }
              if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar23 = *(ulong **)(param_1 + 0x95a0);
                if (puVar23 == *(ulong **)(param_1 + 0x95a8)) {
                  puVar23 = (ulong *)HandleScope::Extend(param_1);
                }
                *(ulong **)(param_1 + 0x95a0) = puVar23 + 1;
                *puVar23 = uVar59 | uVar11;
              }
              else {
                puVar23 = (ulong *)CanonicalHandleScope::Lookup
                                             (*(CanonicalHandleScope **)(param_1 + 0x95b8),
                                              uVar59 | uVar11);
              }
              SourcePositionTableBuilder::SourcePositionTableBuilder
                        ((SourcePositionTableBuilder *)&local_b0,2);
              uVar11 = *(uint *)(*puVar23 + 0xf);
              uVar59 = *puVar23 & 0xffffffff00000000;
              uVar61 = uVar59 | uVar11;
              if (((uVar11 & 1) == 0) ||
                 (*(short *)((uVar59 | 7) + (ulong)*(uint *)(uVar61 - 1)) != 0x85)) {
                if (uVar11 == *(uint *)(uVar59 + 0x180)) {
                  uVar61 = *(ulong *)(uVar59 + 0x3c0);
                }
                else {
                  uVar61 = uVar59 | *(uint *)(uVar61 + 3);
                }
              }
              if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar24 = *(ulong **)(param_1 + 0x95a0);
                if (puVar24 == *(ulong **)(param_1 + 0x95a8)) {
                  puVar24 = (ulong *)HandleScope::Extend(param_1);
                }
                *(ulong **)(param_1 + 0x95a0) = puVar24 + 1;
                *puVar24 = uVar61;
              }
              else {
                puVar24 = (ulong *)CanonicalHandleScope::Lookup
                                             (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar61);
                uVar61 = *puVar24;
              }
              SourcePositionTableIterator::SourcePositionTableIterator
                        ((SourcePositionTableIterator *)&local_650,uVar61,0);
              while ((int)ppStack_638 != -1) {
                iVar10 = ((uint)local_628 >> 1 & 0x3fffffff) - 1;
                if ((long)local_758 - (long)local_760 == 0) {
                  pvVar51 = local_760;
                  if (local_760 != local_758) goto LAB_00f11384;
LAB_00f11390:
                  if (pvVar51 != local_760) {
                    iVar10 = (*(int *)((long)pvVar51 + -4) + iVar10) -
                             *(int *)((long)pvVar51 + -0xc);
                  }
                }
                else {
                  uVar59 = (long)local_758 - (long)local_760 >> 4;
                  pvVar34 = local_760;
                  do {
                    uVar61 = uVar59 >> 1;
                    pvVar51 = (void *)((long)pvVar34 + uVar61 * 0x10 + 0x10);
                    uVar59 = uVar59 + ~uVar61;
                    if (iVar10 <= *(int *)((long)pvVar34 + uVar61 * 0x10 + 4)) {
                      pvVar51 = pvVar34;
                      uVar59 = uVar61;
                    }
                    pvVar34 = pvVar51;
                  } while (uVar59 != 0);
                  if (pvVar51 == local_758) goto LAB_00f11390;
LAB_00f11384:
                  if (*(int *)((long)pvVar51 + 4) != iVar10) goto LAB_00f11390;
                  iVar10 = *(int *)((long)pvVar51 + 0xc);
                }
                SourcePositionTableBuilder::AddPosition
                          ((SourcePositionTableBuilder *)&local_b0,(long)(int)local_630,
                           local_628 & 0xffffffff80000001 | (long)(iVar10 + 1) << 1,local_620);
                SourcePositionTableIterator::Advance((SourcePositionTableIterator *)&local_650);
              }
              puVar24 = (ulong *)SourcePositionTableBuilder::ToSourcePositionTable
                                           ((SourcePositionTableBuilder *)&local_b0,param_1);
              uVar61 = *puVar23;
              uVar59 = *puVar24;
              *(int *)(uVar61 + 0xf) = (int)uVar59;
              if ((uVar59 & 1) != 0) {
                uVar27 = *(ulong *)((uVar59 & 0xfffffffffffc0000) + 8);
                if (((uint)uVar27 >> 0x12 & 1) != 0) {
                  Heap_MarkingBarrierSlow(uVar61,uVar61 + 0xf,uVar59);
                  uVar27 = *(ulong *)(uVar59 & 0xfffffffffffc0000 | 8);
                }
                if (((uVar27 & 0x18) != 0) &&
                   ((*(byte *)((uVar61 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                  Heap_GenerationalBarrierSlow(uVar61,uVar61 + 0xf,uVar59);
                }
              }
              pLVar67 = *(Logger **)(param_1 + 0x9558);
              uVar59 = (**(code **)(*(long *)pLVar67 + 0x88))(pLVar67);
              if ((uVar59 & 1) != 0) {
                Logger::CodeLinePosInfoRecordEvent(pLVar67,*puVar23 + 0x21,*puVar24);
              }
              if (pFStack_a8 != (FunctionLiteral *)0x0) {
                local_a0 = pFStack_a8;
                operator_delete(pFStack_a8);
              }
            }
            local_650 = (piecewise_construct_t *)*ppppppuVar46;
            SharedFunctionInfo::set_script((SharedFunctionInfo *)&local_650,*puVar14);
            *(undefined4 *)((long)*ppppppuVar46 + 0x1f) = *(undefined4 *)(puVar21[3] + 0x1c);
            uVar59 = *puVar14;
            if ((*(uint *)(uVar59 + 0x17) & 0xfffffffe) == 6) {
              uVar59 = *(ulong *)((uVar59 & 0xffffffff00000000) + 0x420);
            }
            else {
              uVar59 = uVar59 & 0xffffffff00000000 | (ulong)*(uint *)(uVar59 + 0x2b);
            }
            pppppuVar50 = *ppppppuVar46;
            lVar69 = uVar59 + (long)(*(int *)(puVar21[3] + 0x1c) << 2);
            uVar11 = (uint)pppppuVar50 | 2;
            *(uint *)(lVar69 + 7) = uVar11;
            if ((((ulong)pppppuVar50 & 1) != 0) && (uVar11 != 3)) {
              uVar61 = *(ulong *)(((ulong)pppppuVar50 & 0xfffffffffffc0000) + 8);
              lVar69 = lVar69 + 7;
              if (((uint)uVar61 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar59,lVar69,(ulong)pppppuVar50 & 0xfffffffffffffffd);
                uVar61 = *(ulong *)((ulong)pppppuVar50 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar61 & 0x18) != 0) &&
                 ((*(byte *)((uVar59 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar59,lVar69,(ulong)pppppuVar50 & 0xfffffffffffffffd);
              }
            }
            uVar26 = *(undefined4 *)((FunctionLiteral *)puVar21[3] + 0x1c);
            iVar10 = FunctionLiteral::start_position((FunctionLiteral *)puVar21[3]);
            p_Var68 = (__tree_node_base *)&local_738;
            p_Var64 = local_738;
            p_Var38 = (__tree_node_base *)&local_738;
            if (local_738 == (__tree_node_base *)0x0) {
LAB_00f115a8:
              p_Var64 = operator_new(0x28);
              *(int *)(p_Var64 + 0x1c) = iVar10;
              *(undefined4 *)(p_Var64 + 0x20) = 0;
              *(undefined8 *)p_Var64 = 0;
              *(undefined8 *)(p_Var64 + 8) = 0;
              *(__tree_node_base **)(p_Var64 + 0x10) = p_Var38;
              *(__tree_node_base **)p_Var68 = p_Var64;
              p_Var38 = p_Var64;
              if (*(__tree_node_base **)local_740 != (__tree_node_base *)0x0) {
                p_Var38 = *(__tree_node_base **)p_Var68;
                local_740 = (Isolate *)*(__tree_node_base **)local_740;
              }
              std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                        (local_738,p_Var38);
              local_730 = local_730 + 1;
            }
            else {
              do {
                while (p_Var38 = p_Var64, *(int *)(p_Var38 + 0x1c) <= iVar10) {
                  if (iVar10 <= *(int *)(p_Var38 + 0x1c)) goto LAB_00f115a0;
                  p_Var68 = p_Var38 + 8;
                  p_Var64 = *(__tree_node_base **)p_Var68;
                  if (*(__tree_node_base **)p_Var68 == (__tree_node_base *)0x0) goto LAB_00f115a0;
                }
                p_Var68 = p_Var38;
                p_Var64 = *(__tree_node_base **)p_Var38;
              } while (*(__tree_node_base **)p_Var38 != (__tree_node_base *)0x0);
LAB_00f115a0:
              p_Var64 = *(__tree_node_base **)p_Var68;
              if (p_Var64 == (__tree_node_base *)0x0) goto LAB_00f115a8;
            }
            *(undefined4 *)(p_Var64 + 0x20) = uVar26;
            uVar11 = *(uint *)((long)*ppppppuVar46 + 3);
            if (((uVar11 & 1) != 0) &&
               (uVar59 = (ulong)*ppppppuVar46 & 0xffffffff00000000,
               *(short *)((uVar59 | 7) + (ulong)*(uint *)((uVar59 | uVar11) - 1)) == 0x95)) {
              uVar59 = (ulong)*ppppppuVar46 & 0xffffffff00000000;
              pHVar48 = (Heap *)(uVar59 | 0x8850);
              uVar61 = uVar59 | *(uint *)((long)*ppppppuVar46 + 3);
              Heap::NotifyObjectLayoutChange(pHVar48,uVar61,&local_650,0);
              uVar59 = *(ulong *)(uVar59 + 0x2a8);
              if ((int)uVar59 == 0) {
                *(undefined4 *)(uVar61 - 1) = 0;
              }
              else {
                Heap::VerifyObjectLayoutChange(pHVar48,uVar61,uVar59);
                *(int *)(uVar61 - 1) = (int)uVar59;
                if (((uVar59 & 1) != 0) &&
                   ((*(byte *)((uVar59 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
                  Heap_MarkingBarrierSlow(uVar61,0,uVar59);
                }
              }
              Heap::CreateFillerObjectAt(pHVar48,uVar61 + 0xf,4,0,1);
            }
            ppppppuVar43 = pppppppuVar29[8];
            for (ppppppuVar49 = pppppppuVar29[7]; ppppppuVar49 != ppppppuVar43;
                ppppppuVar49 = ppppppuVar49 + 1) {
              ppppuVar63 = **ppppppuVar49;
              uVar59 = *(ulong *)(param_1 + 0xe90);
              *(int *)((long)ppppuVar63 + 0x13) = (int)uVar59;
              if ((uVar59 & 1) != 0) {
                uVar61 = *(ulong *)((uVar59 & 0xfffffffffffc0000) + 8);
                if (((uint)uVar61 >> 0x12 & 1) != 0) {
                  Heap_MarkingBarrierSlow(ppppuVar63,(long)ppppuVar63 + 0x13,uVar59);
                  uVar61 = *(ulong *)(uVar59 & 0xfffffffffffc0000 | 8);
                }
                if (((uVar61 & 0x18) != 0) &&
                   ((*(byte *)(((ulong)ppppuVar63 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                  Heap_GenerationalBarrierSlow(ppppuVar63,(long)ppppuVar63 + 0x13,uVar59);
                }
              }
              ppppuVar63 = **ppppppuVar49;
              uVar59 = (ulong)ppppuVar63 & 0xffffffff00000000;
              if (*(int *)((uVar59 | *(uint *)((long)ppppuVar63 + 0x17)) + 0x27) != 0x42) {
                uVar11 = *(uint *)((uVar59 | *(uint *)((long)ppppuVar63 + 0xb)) + 3);
                if ((uVar11 != 0x84) &&
                   (((uVar11 & 1) == 0 ||
                    (1 < *(ushort *)((uVar59 | 7) + (ulong)*(uint *)((uVar59 | uVar11) - 1)) - 0x95)
                    ))) {
                  JSFunction::EnsureFeedbackVector(*ppppppuVar49);
                }
              }
            }
            puVar16 = (uint *)((long)*ppppppuVar46 + 3);
            uVar11 = *puVar16;
            uVar59 = (ulong)*ppppppuVar46 & 0xffffffff00000000;
            if ((((uVar11 & 1) != 0) &&
                (*(short *)((uVar59 | 7) + (ulong)*(uint *)((uVar59 | uVar11) - 1)) == 0x86)) ||
               ((uVar11 = *puVar16, (uVar11 & 1) != 0 &&
                (*(short *)((uVar59 | 7) + (ulong)*(uint *)((uVar59 | uVar11) - 1)) == 0x61)))) {
              pppppuVar50 = *ppppppuVar46;
              uVar61 = (ulong)pppppuVar50 & 0xffffffff00000000;
              uVar27 = uVar61 | 7;
              uVar59 = uVar61 | *(uint *)((long)pppppuVar50 + 0xf);
              if ((*(short *)(uVar27 + *(uint *)(uVar59 - 1)) == 0x5b) &&
                 (*(short *)(uVar27 + *(uint *)((uVar61 | *(uint *)(uVar59 + 0x13)) - 1)) == 0x86))
              {
                uVar11 = *(uint *)(uVar59 + 0xf);
              }
              else {
                uVar11 = *(uint *)((long)pppppuVar50 + 3);
                if (((uVar11 & 1) == 0) ||
                   (*(short *)(uVar27 + *(uint *)((uVar61 | uVar11) - 1)) != 0x86)) {
                  uVar11 = *(uint *)((uVar61 | *(uint *)((long)pppppuVar50 + 3)) + 3);
                }
                else {
                  uVar11 = *(uint *)((long)pppppuVar50 + 3);
                }
              }
              uVar59 = (ulong)*(uint *)((uVar61 | uVar11) + 7);
              uVar62 = uVar61 | uVar59;
              iVar10 = *(int *)(uVar62 + 3);
              if (1 < iVar10) {
                lVar69 = 0;
                do {
                  puVar16 = (uint *)(uVar62 + 7 + (long)((int)lVar69 << 2));
                  if (((*puVar16 & 1) != 0) &&
                     (*(short *)(uVar27 + *(uint *)((uVar61 | *puVar16) - 1)) == 0xa6)) {
                    local_650 = (piecewise_construct_t *)0x0;
                    uVar35 = FUN_00f128d8(&local_680,uVar61 | *puVar16,&local_650);
                    if (((uVar35 & 1) != 0) && (uStack_6d8 != 0)) {
                      uVar35 = *(ulong *)local_650;
                      uVar58 = CONCAT17(POPCOUNT((char)(uStack_6d8 >> 0x38)),
                                        CONCAT16(POPCOUNT((char)(uStack_6d8 >> 0x30)),
                                                 CONCAT15(POPCOUNT((char)(uStack_6d8 >> 0x28)),
                                                          CONCAT14(POPCOUNT((char)(uStack_6d8 >>
                                                                                  0x20)),
                                                                   CONCAT13(POPCOUNT((char)(
                                                  uStack_6d8 >> 0x18)),
                                                  CONCAT12(POPCOUNT((char)(uStack_6d8 >> 0x10)),
                                                           CONCAT11(POPCOUNT((char)(uStack_6d8 >> 8)
                                                                            ),
                                                                    POPCOUNT((char)uStack_6d8)))))))
                                       );
                      uVar30 = ((ulong)(uint)((int)uVar35 << 3) + 8 ^ uVar35 >> 0x20) *
                               -0x622015f714c7d297;
                      uVar70 = NEON_uaddlv(uVar58,1);
                      uVar36 = (uVar30 ^ uVar35 >> 0x20 ^ uVar30 >> 0x2f) * -0x622015f714c7d297;
                      uVar30 = CONCAT62((int6)((ulong)uVar58 >> 0x10),uVar70) & 0xffffffff;
                      uVar36 = (uVar36 ^ uVar36 >> 0x2f) * -0x622015f714c7d297;
                      if (uVar30 < 2) {
                        uVar40 = uVar36 & uStack_6d8 - 1;
                      }
                      else {
                        uVar40 = uVar36;
                        if (uStack_6d8 <= uVar36) {
                          uVar40 = 0;
                          if (uStack_6d8 != 0) {
                            uVar40 = uVar36 / uStack_6d8;
                          }
                          uVar40 = uVar36 - uVar40 * uStack_6d8;
                        }
                      }
                      if ((*(long **)(local_6e0 + uVar40 * 8) != (long *)0x0) &&
                         (plVar54 = (long *)**(long **)(local_6e0 + uVar40 * 8),
                         plVar54 != (long *)0x0)) {
                        do {
                          uVar44 = plVar54[1];
                          if (uVar44 == uVar36) {
                            if (plVar54[2] == uVar35) {
                              pFVar20 = (FunctionLiteral *)plVar54[3];
                              iVar10 = *(int *)(*puVar14 + 0x1f);
                              iVar13 = FunctionLiteral::start_position(pFVar20);
                              if (*(int *)(pFVar20 + 0x1c) == 0) {
                                iVar13 = -1;
                              }
                              if (local_670 != (undefined8 *******)0x0) {
                                iVar10 = iVar10 >> 1;
                                pppppppuVar29 = &local_670;
                                pppppppuVar37 = local_670;
                                do {
                                  if (*(int *)(pppppppuVar37 + 4) < iVar10) {
                                    pppppppuVar8 = (undefined8 *******)pppppppuVar37[1];
                                  }
                                  else if ((iVar10 < *(int *)(pppppppuVar37 + 4)) ||
                                          (iVar13 <= *(int *)((long)pppppppuVar37 + 0x24))) {
                                    pppppppuVar8 = (undefined8 *******)*pppppppuVar37;
                                    pppppppuVar29 = pppppppuVar37;
                                  }
                                  else {
                                    pppppppuVar8 = (undefined8 *******)pppppppuVar37[1];
                                  }
                                  pppppppuVar37 = pppppppuVar8;
                                } while (pppppppuVar37 != (undefined8 *******)0x0);
                                if ((((undefined8 ********)pppppppuVar29 != &local_670) &&
                                    (*(int *)(pppppppuVar29 + 4) <= iVar10)) &&
                                   ((*(int *)(pppppppuVar29 + 4) < iVar10 ||
                                    (*(int *)((long)pppppppuVar29 + 0x24) <= iVar13)))) {
                                  local_650 = (piecewise_construct_t *)(pppppppuVar29 + 5);
                                  if (pppppppuVar29[6] != (undefined8 ******)0x0) {
                                    pppppuVar50 = *pppppppuVar29[6];
                                    *puVar16 = (uint)pppppuVar50;
                                    if (((ulong)pppppuVar50 & 1) != 0) {
                                      uVar35 = *(ulong *)(((ulong)pppppuVar50 & 0xfffffffffffc0000)
                                                         + 8);
                                      if (((uint)uVar35 >> 0x12 & 1) != 0) {
                                        Heap_MarkingBarrierSlow(uVar62,puVar16,pppppuVar50);
                                        uVar35 = *(ulong *)((ulong)pppppuVar50 & 0xfffffffffffc0000
                                                           | 8);
                                      }
                                      if (((uVar35 & 0x18) != 0) &&
                                         ((*(byte *)(uVar61 | uVar59 & 0xfffffffffffc0000 | 8) &
                                          0x18) == 0)) {
                                        Heap_GenerationalBarrierSlow(uVar62,puVar16,pppppuVar50);
                                      }
                                    }
                                  }
                                }
                              }
                              break;
                            }
                          }
                          else {
                            if (uVar30 < 2) {
                              uVar44 = uVar44 & uStack_6d8 - 1;
                            }
                            else if (uStack_6d8 <= uVar44) {
                              uVar5 = 0;
                              if (uStack_6d8 != 0) {
                                uVar5 = uVar44 / uStack_6d8;
                              }
                              uVar44 = uVar44 - uVar5 * uStack_6d8;
                            }
                            if (uVar44 != uVar40) break;
                          }
                          plVar54 = (long *)*plVar54;
                        } while (plVar54 != (long *)0x0);
                      }
                    }
                    iVar10 = *(int *)(uVar62 + 3);
                  }
                  lVar69 = lVar69 + 1;
                } while (lVar69 < iVar10 >> 1);
              }
            }
          }
        }
      }
      for (; puVar22 != (undefined8 *)0x0; puVar22 = (undefined8 *)*puVar22) {
        pFVar20 = (FunctionLiteral *)puVar22[3];
        iVar10 = *(int *)(*puVar14 + 0x1f);
        iVar13 = FunctionLiteral::start_position(pFVar20);
        if (*(int *)(pFVar20 + 0x1c) == 0) {
          iVar13 = -1;
        }
        if (local_670 != (undefined8 *******)0x0) {
          iVar10 = iVar10 >> 1;
          pppppppuVar29 = &local_670;
          pppppppuVar37 = local_670;
          do {
            while (*(int *)(pppppppuVar37 + 4) < iVar10) {
              pppppppuVar37 = (undefined8 *******)pppppppuVar37[1];
              if (pppppppuVar37 == (undefined8 *******)0x0) goto LAB_00f11b8c;
            }
            if ((iVar10 < *(int *)(pppppppuVar37 + 4)) ||
               (iVar13 <= *(int *)((long)pppppppuVar37 + 0x24))) {
              pppppppuVar8 = (undefined8 *******)*pppppppuVar37;
              pppppppuVar29 = pppppppuVar37;
            }
            else {
              pppppppuVar8 = (undefined8 *******)pppppppuVar37[1];
            }
            pppppppuVar37 = pppppppuVar8;
          } while (pppppppuVar37 != (undefined8 *******)0x0);
LAB_00f11b8c:
          if ((((undefined8 ********)pppppppuVar29 != &local_670) &&
              (*(int *)(pppppppuVar29 + 4) <= iVar10)) &&
             ((*(int *)(pppppppuVar29 + 4) < iVar10 ||
              (*(int *)((long)pppppppuVar29 + 0x24) <= iVar13)))) {
            ppppppuVar46 = pppppppuVar29[6];
            if (ppppppuVar46 == (undefined8 ******)0x0) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","(location_) != nullptr");
            }
            pFVar20 = (FunctionLiteral *)puVar22[2];
            iVar10 = *(int *)(*param_2 + 0x1f);
            iVar13 = FunctionLiteral::start_position(pFVar20);
            if (*(int *)(pFVar20 + 0x1c) == 0) {
              iVar13 = -1;
            }
            if (local_670 != (undefined8 *******)0x0) {
              iVar10 = iVar10 >> 1;
              pppppppuVar37 = local_670;
              pppppppuVar29 = &local_670;
              do {
                while (*(int *)(pppppppuVar37 + 4) < iVar10) {
                  pppppppuVar37 = (undefined8 *******)pppppppuVar37[1];
                  if (pppppppuVar37 == (undefined8 *******)0x0) goto LAB_00f11c30;
                }
                if ((iVar10 < *(int *)(pppppppuVar37 + 4)) ||
                   (iVar13 <= *(int *)((long)pppppppuVar37 + 0x24))) {
                  pppppppuVar8 = (undefined8 *******)*pppppppuVar37;
                  pppppppuVar29 = pppppppuVar37;
                }
                else {
                  pppppppuVar8 = (undefined8 *******)pppppppuVar37[1];
                }
                pppppppuVar37 = pppppppuVar8;
              } while (pppppppuVar37 != (undefined8 *******)0x0);
LAB_00f11c30:
              if (((((undefined8 ********)pppppppuVar29 != &local_670) &&
                   (*(int *)(pppppppuVar29 + 4) <= iVar10)) &&
                  ((*(int *)(pppppppuVar29 + 4) < iVar10 ||
                   (*(int *)((long)pppppppuVar29 + 0x24) <= iVar13)))) &&
                 (ppppppuVar49 = pppppppuVar29[6], ppppppuVar49 != (undefined8 ******)0x0)) {
                Debug::DeoptimizeFunction(*(Debug **)(param_1 + 0xb6c8),ppppppuVar49);
                CompilationCache::Remove(*(CompilationCache **)(param_1 + 0x9518),ppppppuVar49);
                ppppppuVar43 = pppppppuVar29[8];
                for (ppppppuVar49 = pppppppuVar29[7]; ppppppuVar49 != ppppppuVar43;
                    ppppppuVar49 = ppppppuVar49 + 1) {
                  pppppuVar50 = *ppppppuVar46;
                  ppppuVar63 = **ppppppuVar49;
                  puVar17 = (undefined4 *)((long)ppppuVar63 + 0xb);
                  *puVar17 = (int)pppppuVar50;
                  if (((ulong)pppppuVar50 & 1) != 0) {
                    uVar59 = *(ulong *)(((ulong)pppppuVar50 & 0xfffffffffffc0000) + 8);
                    if (((uint)uVar59 >> 0x12 & 1) != 0) {
                      Heap_MarkingBarrierSlow(ppppuVar63,puVar17,pppppuVar50);
                      uVar59 = *(ulong *)((ulong)pppppuVar50 & 0xfffffffffffc0000 | 8);
                    }
                    if (((uVar59 & 0x18) != 0) &&
                       ((*(byte *)(((ulong)ppppuVar63 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                      Heap_GenerationalBarrierSlow(ppppuVar63,puVar17,pppppuVar50);
                    }
                  }
                  ppppuVar63 = **ppppppuVar49;
                  local_650 = (piecewise_construct_t *)
                              ((ulong)ppppuVar63 & 0xffffffff00000000 |
                              (ulong)*(uint *)((long)ppppuVar63 + 0xb));
                  uVar59 = SharedFunctionInfo::GetCode((SharedFunctionInfo *)&local_650);
                  *(int *)((long)ppppuVar63 + 0x17) = (int)uVar59;
                  if (((uVar59 & 1) != 0) &&
                     ((*(byte *)((uVar59 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
                    Heap_MarkingBarrierSlow(ppppuVar63,(long)ppppuVar63 + 0x17);
                  }
                  ppppuVar63 = **ppppppuVar49;
                  uVar59 = *(ulong *)(param_1 + 0xe90);
                  *(int *)((long)ppppuVar63 + 0x13) = (int)uVar59;
                  if ((uVar59 & 1) != 0) {
                    uVar61 = *(ulong *)((uVar59 & 0xfffffffffffc0000) + 8);
                    if (((uint)uVar61 >> 0x12 & 1) != 0) {
                      Heap_MarkingBarrierSlow(ppppuVar63,(long)ppppuVar63 + 0x13,uVar59);
                      uVar61 = *(ulong *)(uVar59 & 0xfffffffffffc0000 | 8);
                    }
                    if (((uVar61 & 0x18) != 0) &&
                       ((*(byte *)(((ulong)ppppuVar63 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                      Heap_GenerationalBarrierSlow(ppppuVar63,(long)ppppuVar63 + 0x13,uVar59);
                    }
                  }
                  ppppuVar63 = **ppppppuVar49;
                  uVar59 = (ulong)ppppuVar63 & 0xffffffff00000000;
                  if (*(int *)((uVar59 | *(uint *)((long)ppppuVar63 + 0x17)) + 0x27) != 0x42) {
                    uVar11 = *(uint *)((uVar59 | *(uint *)((long)ppppuVar63 + 0xb)) + 3);
                    if ((uVar11 != 0x84) &&
                       (((uVar11 & 1) == 0 ||
                        (1 < *(ushort *)((uVar59 | 7) + (ulong)*(uint *)((uVar59 | uVar11) - 1)) -
                             0x95)))) {
                      JSFunction::EnsureFeedbackVector(*ppppppuVar49);
                    }
                  }
                }
              }
            }
          }
        }
      }
      SharedFunctionInfo::ScriptIterator::ScriptIterator
                ((ScriptIterator *)&local_b0,param_1,*puVar14);
      uVar59 = SharedFunctionInfo::ScriptIterator::Next((ScriptIterator *)&local_b0);
      iVar10 = (int)uVar59;
      while (iVar10 != 0) {
        uVar11 = *(uint *)(uVar59 + 3);
        uVar61 = uVar59 & 0xffffffff00000000;
        if ((((uVar11 & 1) != 0) &&
            (*(short *)((uVar61 | 7) + (ulong)*(uint *)((uVar61 | uVar11) - 1)) == 0x86)) ||
           ((uVar11 = *(uint *)(uVar59 + 3), (uVar11 & 1) != 0 &&
            (*(short *)((uVar61 | 7) + (ulong)*(uint *)((uVar61 | uVar11) - 1)) == 0x61)))) {
          uVar62 = uVar61 | 7;
          uVar27 = uVar61 | *(uint *)(uVar59 + 0xf);
          if ((*(short *)(uVar62 + *(uint *)(uVar27 - 1)) == 0x5b) &&
             (*(short *)(uVar62 + *(uint *)((uVar61 | *(uint *)(uVar27 + 0x13)) - 1)) == 0x86)) {
            uVar11 = *(uint *)(uVar27 + 0xf);
          }
          else {
            uVar11 = *(uint *)(uVar59 + 3);
            if (((uVar11 & 1) == 0) ||
               (*(short *)(uVar62 + *(uint *)((uVar61 | uVar11) - 1)) != 0x86)) {
              uVar11 = *(uint *)((uVar61 | *(uint *)(uVar59 + 3)) + 3);
            }
            else {
              uVar11 = *(uint *)(uVar59 + 3);
            }
          }
          uVar59 = (ulong)*(uint *)((uVar61 | uVar11) + 7);
          uVar27 = uVar61 | uVar59;
          iVar10 = *(int *)(uVar27 + 3);
          if (1 < iVar10) {
            lVar69 = 0;
            do {
              puVar16 = (uint *)(uVar27 + 7 + (long)((int)lVar69 << 2));
              if (((*puVar16 & 1) != 0) &&
                 (*(short *)(uVar62 + *(uint *)((uVar61 | *puVar16) - 1)) == 0xa6)) {
                local_650 = (piecewise_construct_t *)(uVar61 | *puVar16);
                iVar10 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_650);
                p_Var68 = (__tree_node_base *)&local_738;
                p_Var64 = local_738;
                if (local_738 != (__tree_node_base *)0x0) {
                  do {
                    if (iVar10 <= *(int *)(p_Var64 + 0x1c)) {
                      p_Var68 = p_Var64;
                    }
                    p_Var38 = p_Var64 + (ulong)(*(int *)(p_Var64 + 0x1c) < iVar10) * 8;
                    p_Var64 = *(__tree_node_base **)p_Var38;
                  } while (*(__tree_node_base **)p_Var38 != (__tree_node_base *)0x0);
                  if ((p_Var68 != (__tree_node_base *)&local_738) &&
                     (*(int *)(p_Var68 + 0x1c) <= iVar10)) {
                    uVar35 = *puVar14;
                    if ((*(uint *)(uVar35 + 0x17) & 0xfffffffe) == 6) {
                      uVar35 = *(ulong *)((uVar35 & 0xffffffff00000000) + 0x420);
                    }
                    else {
                      uVar35 = uVar35 & 0xffffffff00000000 | (ulong)*(uint *)(uVar35 + 0x2b);
                    }
                    uVar11 = *(uint *)(uVar35 + (long)(*(int *)(p_Var68 + 0x20) << 2) + 7);
                    uVar30 = (ulong)uVar11 & 0xfffffffd;
                    uVar25 = (uint)uVar30;
                    if ((uVar25 != (uint)local_650) && (*puVar16 = uVar25, (uVar11 & 1) != 0)) {
                      uVar30 = uVar35 & 0xffffffff00000000 | uVar30;
                      uVar36 = uVar35 & 0xffffffff00000000 | (ulong)uVar11 & 0xfffc0000;
                      uVar35 = *(ulong *)(uVar36 + 8);
                      if (((uint)uVar35 >> 0x12 & 1) != 0) {
                        Heap_MarkingBarrierSlow(uVar27,puVar16,uVar30);
                        uVar35 = *(ulong *)(uVar36 | 8);
                      }
                      if (((uVar35 & 0x18) != 0) &&
                         ((*(byte *)(uVar61 | uVar59 & 0xfffffffffffc0000 | 8) & 0x18) == 0)) {
                        Heap_GenerationalBarrierSlow(uVar27,puVar16,uVar30);
                      }
                    }
                  }
                }
                iVar10 = *(int *)(uVar27 + 3);
              }
              lVar69 = lVar69 + 1;
            } while (lVar69 < iVar10 >> 1);
          }
        }
        uVar59 = SharedFunctionInfo::ScriptIterator::Next((ScriptIterator *)&local_b0);
        iVar10 = (int)uVar59;
      }
      if (lVar33 != 0) {
        StackFrameIterator::StackFrameIterator((StackFrameIterator *)&local_650,param_1);
        while (local_c8 != (JavaScriptFrame *)0x0) {
          if (*(long *)(local_c8 + 0x20) == lVar33) {
            Debug::ScheduleFrameRestart(*(Debug **)(param_1 + 0xb6c8),(StackFrame *)local_c8);
            *(undefined1 *)(param_5 + 1) = 1;
            break;
          }
          StackFrameIterator::Advance((StackFrameIterator *)&local_650);
        }
      }
      uVar11 = *(uint *)(*param_2 + 0x1f);
      *(uint *)(*param_2 + 0x1f) = *(uint *)(*puVar14 + 0x1f) & 0xfffffffe;
      *(uint *)(*puVar14 + 0x1f) = uVar11 & 0xfffffffe;
      *param_5 = 0;
      *(ulong **)(param_5 + 2) = puVar14;
      std::__ndk1::
      __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>
      ::destroy((__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>
                 *)&local_740,(__tree_node *)local_738);
    }
    else {
      *param_5 = 0;
    }
  }
  else {
    StackFrameIterator::StackFrameIterator((StackFrameIterator *)&local_650,param_1);
    while ((local_c8 != (JavaScriptFrame *)0x0 && (*(long *)(local_c8 + 0x20) != lVar33))) {
      StackFrameIterator::Advance((StackFrameIterator *)&local_650);
    }
    pFStack_a8 = (FunctionLiteral *)0x0;
    local_a0 = (FunctionLiteral *)0x0;
    local_b0 = (FunctionLiteral *)0x0;
    JavaScriptFrame::GetFunctions(local_c8,(vector *)&local_b0);
    pFVar7 = pFStack_a8;
    for (pFVar20 = local_b0; pFVar20 != pFVar7; pFVar20 = (FunctionLiteral *)((long)pFVar20 + 8)) {
      local_740 = (Isolate *)0x0;
      uVar59 = FUN_00f128d8(&local_680,**(undefined8 **)pFVar20,&local_740);
      if (((uVar59 & 1) != 0) && (uStack_6d8 != 0)) {
        uVar59 = *(ulong *)local_740;
        uVar58 = CONCAT17(POPCOUNT((char)(uStack_6d8 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(uStack_6d8 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(uStack_6d8 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(uStack_6d8 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(uStack_6d8 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(uStack_6d8 >>
                                                                                      0x10)),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  uStack_6d8 >> 8)),POPCOUNT((char)uStack_6d8)))))))
                         );
        uVar61 = ((ulong)(uint)((int)uVar59 << 3) + 8 ^ uVar59 >> 0x20) * -0x622015f714c7d297;
        uVar70 = NEON_uaddlv(uVar58,1);
        uVar27 = (uVar61 ^ uVar59 >> 0x20 ^ uVar61 >> 0x2f) * -0x622015f714c7d297;
        uVar61 = CONCAT62((int6)((ulong)uVar58 >> 0x10),uVar70) & 0xffffffff;
        uVar27 = (uVar27 ^ uVar27 >> 0x2f) * -0x622015f714c7d297;
        if (uVar61 < 2) {
          uVar62 = uVar27 & uStack_6d8 - 1;
        }
        else {
          uVar62 = uVar27;
          if (uStack_6d8 <= uVar27) {
            uVar62 = 0;
            if (uStack_6d8 != 0) {
              uVar62 = uVar27 / uStack_6d8;
            }
            uVar62 = uVar27 - uVar62 * uStack_6d8;
          }
        }
        if ((*(long **)(local_6e0 + uVar62 * 8) != (long *)0x0) &&
           (plVar54 = (long *)**(long **)(local_6e0 + uVar62 * 8), plVar54 != (long *)0x0)) {
          do {
            uVar35 = plVar54[1];
            if (uVar27 - uVar35 == 0) {
              if (plVar54[2] == uVar59) {
                if (*(long *)(*(long *)(plVar54[3] + 0x28) + 0xc0) != 0) {
                  bVar60 = false;
                  *param_5 = 6;
                  goto joined_r0x00f12234;
                }
                break;
              }
            }
            else {
              if (uVar61 < 2) {
                uVar35 = uVar35 & uStack_6d8 - 1;
              }
              else if (uStack_6d8 <= uVar35) {
                uVar30 = 0;
                if (uStack_6d8 != 0) {
                  uVar30 = uVar35 / uStack_6d8;
                }
                uVar35 = uVar35 - uVar30 * uStack_6d8;
              }
              if (uVar35 != uVar62) break;
            }
            plVar54 = (long *)*plVar54;
          } while (plVar54 != (long *)0x0);
        }
      }
    }
    bVar60 = true;
joined_r0x00f12234:
    if (local_b0 != (FunctionLiteral *)0x0) {
      pFStack_a8 = local_b0;
      operator_delete(local_b0);
    }
    if (bVar60) goto LAB_00f10da0;
  }
LAB_00f1211c:
  local_680 = &PTR_FUN_01ca46b8;
  FUN_00f16780(&pppppppuStack_678,local_670);
  pFVar20 = local_710;
  puVar21 = local_700;
  while (puVar21 != (void *)0x0) {
    pvVar51 = (void *)*puVar21;
    local_710 = pFVar20;
    operator_delete(puVar21);
    pFVar20 = local_710;
    puVar21 = pvVar51;
  }
  local_710 = (FunctionLiteral *)0x0;
  pFVar7 = local_6e0;
  puVar21 = local_6d0;
  if (pFVar20 != (FunctionLiteral *)0x0) {
    operator_delete(pFVar20);
    pFVar7 = local_6e0;
    puVar21 = local_6d0;
  }
  while (puVar21 != (void *)0x0) {
    pvVar51 = (void *)*puVar21;
    local_6e0 = pFVar7;
    operator_delete(puVar21);
    pFVar7 = local_6e0;
    puVar21 = pvVar51;
  }
  local_6e0 = (FunctionLiteral *)0x0;
  pvVar51 = local_6b0;
  plVar54 = local_6a0;
  if (pFVar7 != (FunctionLiteral *)0x0) {
    operator_delete(pFVar7);
    pvVar51 = local_6b0;
    plVar54 = local_6a0;
  }
  while (plVar54 != (long *)0x0) {
    plVar52 = (long *)*plVar54;
    local_6b0 = pvVar51;
    operator_delete(plVar54);
    pvVar51 = local_6b0;
    plVar54 = plVar52;
  }
  local_6b0 = (void *)0x0;
  if (pvVar51 != (void *)0x0) {
    operator_delete(pvVar51);
  }
LAB_00f121b4:
  ParseInfo::~ParseInfo(aPStack_950);
  if (local_870 != (undefined8 *)0x0) {
    local_868 = local_870;
    operator_delete(local_870);
  }
LAB_00f121cc:
  if (local_858 != (long *)0x0) {
    local_850 = local_858;
    operator_delete(local_858);
  }
  ParseInfo::~ParseInfo(aPStack_840);
joined_r0x00f0ff8c:
  if (local_760 != (void *)0x0) {
    local_758 = local_760;
    operator_delete(local_760);
  }
  if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

