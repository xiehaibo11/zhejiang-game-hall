
/* WARNING: Removing unreachable block (ram,0x012f9718) */

void FUN_012f9344(long param_1,Node *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  Operator *pOVar8;
  char *pcVar9;
  ulong uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  Node *pNVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  long *plVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 *puVar23;
  long *plVar24;
  char cVar25;
  Zone *pZVar26;
  long local_530;
  long lStack_528;
  long local_520;
  long local_518;
  long lStack_510;
  long local_508;
  undefined1 auStack_4f8 [288];
  ulong local_3d8;
  long local_3d0;
  undefined8 *local_3c8;
  undefined1 auStack_3c0 [256];
  byte local_2c0;
  undefined1 auStack_2b8 [8];
  long local_2b0;
  undefined8 *local_2a8;
  undefined1 auStack_2a0 [256];
  char local_1a0;
  undefined2 local_198;
  Node *local_190 [36];
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  lVar12 = *(long *)(param_1 + 0x88);
  pOVar8 = *(Operator **)param_2;
  uVar10 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
  if ((*(long *)(lVar12 + uVar10 * 8) == 0) && (0 < *(int *)(pOVar8 + 0x1c))) {
    iVar16 = 0;
    do {
      lVar12 = v8::internal::compiler::NodeProperties::GetControlInput(param_2,iVar16);
      uVar10 = (ulong)*(uint *)(lVar12 + 0x14) & 0xffffff;
      if ((*(long *)(*(long *)(param_1 + 0x88) + uVar10 * 8) == 0) &&
         ((*(ulong *)(*(long *)(param_1 + 0x68) + (uVar10 >> 3 & 0x1ffff8)) >>
           ((ulong)*(uint *)(lVar12 + 0x14) & 0x3f) & 1) == 0)) {
        lVar13 = *(long *)(param_1 + 0x20);
        lVar5 = *(long *)(param_1 + 0x28) - lVar13;
        uVar10 = 0;
        if (lVar5 != 0) {
          uVar10 = lVar5 * 0x40 - 1;
        }
        uVar21 = *(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x48);
        if (uVar10 == uVar21) {
          std::__ndk1::
          deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
          ::__add_back_capacity
                    ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                      *)(param_1 + 0x18));
          lVar13 = *(long *)(param_1 + 0x20);
          uVar21 = *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x50);
        }
        *(long *)(*(long *)(lVar13 + (uVar21 >> 6 & 0x3fffffffffffff8)) + (uVar21 & 0x1ff) * 8) =
             lVar12;
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        uVar10 = ((ulong)*(uint *)(lVar12 + 0x14) & 0xffffc0) >> 3;
        *(ulong *)(*(long *)(param_1 + 0x68) + uVar10) =
             1L << ((ulong)*(uint *)(lVar12 + 0x14) & 0x3f) |
             *(ulong *)(*(long *)(param_1 + 0x68) + uVar10);
      }
      pOVar8 = *(Operator **)param_2;
      iVar16 = iVar16 + 1;
    } while (iVar16 < *(int *)(pOVar8 + 0x1c));
    lVar12 = *(long *)(param_1 + 0x88);
    uVar10 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
  }
  lVar13 = *(long *)(lVar12 + uVar10 * 8);
  if (*(int *)(pOVar8 + 0x18) < 1) {
    if (lVar13 == 0) {
      *(undefined8 *)(lVar12 + uVar10 * 8) = *(undefined8 *)(param_1 + 200);
    }
    goto LAB_012fa208;
  }
  if ((lVar13 != 0) && (v8::internal::FLAG_trace_store_elimination != '\0')) {
    v8::internal::PrintF
              ("RedundantStoreFinder: - Revisiting: #%d:%s\n",uVar10,*(undefined8 *)(pOVar8 + 8));
    pOVar8 = *(Operator **)param_2;
  }
  if (pOVar8[0x24] == (Operator)0x0) {
    plVar24 = *(long **)(param_1 + 200);
  }
  else {
    if (*(long **)(param_2 + 0x18) == (long *)0x0) {
      plVar24 = (long *)0x0;
    }
    else {
      plVar24 = (long *)0x0;
      bVar7 = true;
      plVar19 = *(long **)(param_2 + 0x18);
      do {
        while( true ) {
          plVar22 = (long *)*plVar19;
          lVar12 = 0x10;
          if ((*(uint *)(plVar19 + 2) & 1) != 0) {
            lVar12 = 0x20;
          }
          uVar10 = v8::internal::compiler::NodeProperties::IsEffectEdge
                             (plVar19,(long)plVar19 +
                                      lVar12 + (ulong)(*(uint *)(plVar19 + 2) >> 1) * 0x20 + 0x18);
          if ((uVar10 & 1) == 0) break;
          plVar14 = plVar19 + (ulong)(*(uint *)(plVar19 + 2) >> 1) * 3 + 3;
          if ((*(uint *)(plVar19 + 2) & 1) == 0) {
            plVar14 = (long *)*plVar14;
          }
          plVar19 = *(long **)(*(long *)(param_1 + 0x88) +
                              ((ulong)*(uint *)((long)plVar14 + 0x14) & 0xffffff) * 8);
          if (bVar7) {
            plVar24 = plVar19;
            if (plVar19 == (long *)0x0) {
              plVar24 = *(long **)(param_1 + 200);
              goto joined_r0x012f9728;
            }
          }
          else {
            if (plVar24 != (long *)0x0) {
              pZVar26 = *(Zone **)(param_1 + 0x10);
              FUN_012fa794(&local_3d8,plVar24);
              if (((local_3c8 != (undefined8 *)0x0) && (plVar19 != (long *)0x0)) &&
                 (FUN_012fa794(&local_3d8,plVar19), local_3c8 != (undefined8 *)0x0)) {
                plVar14 = *(long **)(pZVar26 + 0x10);
                if ((ulong)(*(long *)(pZVar26 + 0x18) - (long)plVar14) < 0x18) {
                  plVar14 = (long *)v8::internal::Zone::NewExpand(pZVar26,0x18);
                }
                else {
                  *(long **)(pZVar26 + 0x10) = plVar14 + 3;
                }
                *plVar14 = 0;
                *(undefined1 *)(plVar14 + 1) = 0;
                plVar14[2] = (long)pZVar26;
                local_520 = plVar24[2];
                lStack_528 = plVar24[1];
                local_530 = *plVar24;
                local_508 = plVar19[2];
                lStack_510 = plVar19[1];
                local_518 = *plVar19;
                FUN_012fa794(&local_3d8,&local_530);
                FUN_012fa794(local_190,&local_518);
                memcpy(auStack_2b8,local_190,0x120);
                puVar23 = local_3c8;
                puVar20 = local_2a8;
                plVar24 = plVar14;
                if ((local_3c8 == (undefined8 *)0x0) || (local_2a8 == (undefined8 *)0x0)) {
                  if (local_3c8 == (undefined8 *)0x0 && local_2a8 == (undefined8 *)0x0) {
LAB_012f9754:
                    local_198 = 0x101;
                    bVar7 = true;
                    if (local_3c8 != (undefined8 *)0x0 || local_2a8 != (undefined8 *)0x0)
                    goto LAB_012f9780;
                    goto joined_r0x012f9728;
                  }
                }
                else if (*(int *)(local_3c8 + 2) == *(int *)(local_2a8 + 2)) {
                  puVar1 = local_3c8;
                  if (local_3c8[3] != 0) {
                    puVar1 = (undefined8 *)(local_3d0 + 0x1c);
                  }
                  puVar2 = local_2a8;
                  if (local_2a8[3] != 0) {
                    puVar2 = (undefined8 *)(local_2b0 + 0x1c);
                  }
                  if (((int)*puVar1 == (int)*puVar2) &&
                     ((int)((ulong)*puVar1 >> 0x20) == (int)((ulong)*puVar2 >> 0x20)))
                  goto LAB_012f9754;
                }
                if (local_3c8 != (undefined8 *)0x0) {
                  if (local_2a8 == (undefined8 *)0x0) goto LAB_012f9704;
                  bVar7 = *(uint *)(local_2a8 + 2) <= *(uint *)(local_3c8 + 2);
                  if (*(uint *)(local_3c8 + 2) == *(uint *)(local_2a8 + 2)) {
                    puVar1 = local_3c8;
                    if (local_3c8[3] != 0) {
                      puVar1 = (undefined8 *)(local_3d0 + 0x1c);
                    }
                    puVar2 = local_2a8;
                    if (local_2a8[3] != 0) {
                      puVar2 = (undefined8 *)(local_2b0 + 0x1c);
                    }
                    uVar17 = (uint)*puVar2;
                    uVar18 = (uint)*puVar1;
                    if (uVar18 < uVar17) goto LAB_012f9704;
                    if (uVar18 != uVar17) goto LAB_012f976c;
                    bVar7 = (uint)((ulong)*puVar2 >> 0x20) <= (uint)((ulong)*puVar1 >> 0x20);
                  }
                  if (!bVar7) {
LAB_012f9704:
                    bVar7 = true;
                    cVar25 = '\0';
                    local_198 = 1;
                    goto LAB_012f97d0;
                  }
                }
LAB_012f976c:
                bVar7 = false;
                local_198 = 0x100;
                if (local_3c8 != (undefined8 *)0x0 || local_2a8 != (undefined8 *)0x0) {
LAB_012f9780:
                  cVar25 = '\x01';
                  if (bVar7) goto LAB_012f97d0;
                  do {
                    if (puVar20[3] == 0) {
                      uVar17 = *(uint *)(puVar20 + 1);
                    }
                    else {
                      uVar17 = (uint)*(byte *)(local_2b0 + 0x24);
                      puVar20 = (undefined8 *)(local_2b0 + 0x1c);
                    }
                    uVar11 = *puVar20;
                    iVar16 = (uVar17 & 0xff) << 8;
                    bVar3 = local_2c0;
joined_r0x012f999c:
                    if ((bVar3 != 0) && (iVar16 != 0)) {
                      FUN_012fa270(plVar14,uVar11,1);
                      uVar11 = extraout_x1;
                    }
                    if (bVar7) {
                      FUN_012fa8a8(&local_3d8,uVar11);
                      uVar11 = extraout_x1_00;
                      cVar25 = local_198._1_1_;
                    }
                    if (cVar25 != '\0') {
                      FUN_012fa8a8(auStack_2b8,uVar11);
                    }
                    puVar23 = local_3c8;
                    lVar12 = local_3d0;
                    memcpy(local_190,auStack_3c0,0x108);
                    puVar20 = local_2a8;
                    lVar13 = local_2b0;
                    memcpy(auStack_4f8,auStack_2a0,0x108);
                    if ((puVar23 == (undefined8 *)0x0) || (puVar20 == (undefined8 *)0x0)) {
                      if (puVar23 != (undefined8 *)0x0 || puVar20 != (undefined8 *)0x0)
                      goto LAB_012f9910;
LAB_012f997c:
                      cVar25 = '\x01';
                      bVar7 = true;
                    }
                    else {
                      if (*(int *)(puVar23 + 2) == *(int *)(puVar20 + 2)) {
                        puVar1 = puVar23;
                        if (puVar23[3] != 0) {
                          puVar1 = (undefined8 *)(lVar12 + 0x1c);
                        }
                        puVar2 = puVar20;
                        if (puVar20[3] != 0) {
                          puVar2 = (undefined8 *)(lVar13 + 0x1c);
                        }
                        if (((int)*puVar1 == (int)*puVar2) &&
                           ((int)((ulong)*puVar1 >> 0x20) == (int)((ulong)*puVar2 >> 0x20)))
                        goto LAB_012f997c;
                      }
LAB_012f9910:
                      if (puVar23 == (undefined8 *)0x0) goto LAB_012f9790;
                      if (puVar20 != (undefined8 *)0x0) {
                        if (*(uint *)(puVar23 + 2) == *(uint *)(puVar20 + 2)) {
                          puVar1 = puVar23;
                          if (puVar23[3] != 0) {
                            puVar1 = (undefined8 *)(lVar12 + 0x1c);
                          }
                          puVar2 = puVar20;
                          if (puVar20[3] != 0) {
                            puVar2 = (undefined8 *)(lVar13 + 0x1c);
                          }
                          uVar17 = (uint)*puVar2;
                          uVar18 = (uint)*puVar1;
                          if ((uVar17 <= uVar18) &&
                             ((uVar18 != uVar17 ||
                              ((uint)((ulong)*puVar2 >> 0x20) <= (uint)((ulong)*puVar1 >> 0x20)))))
                          {
LAB_012f9790:
                            bVar7 = false;
                            cVar25 = '\x01';
                            goto LAB_012f9798;
                          }
                        }
                        else if (*(uint *)(puVar20 + 2) <= *(uint *)(puVar23 + 2))
                        goto LAB_012f9790;
                      }
                      cVar25 = '\0';
                      bVar7 = true;
                    }
LAB_012f9798:
                    memcpy(auStack_3c0,local_190,0x108);
                    memcpy(auStack_2a0,auStack_4f8,0x108);
                    local_198 = CONCAT11(cVar25,bVar7);
                    if (puVar23 == (undefined8 *)0x0 && puVar20 == (undefined8 *)0x0)
                    goto joined_r0x012f9728;
                  } while (!bVar7);
LAB_012f97d0:
                  if (puVar23[3] == 0) {
                    bVar3 = *(byte *)(puVar23 + 1);
                  }
                  else {
                    bVar3 = *(byte *)(local_3d0 + 0x24);
                    puVar23 = (undefined8 *)(local_3d0 + 0x1c);
                  }
                  uVar11 = *puVar23;
                  if (cVar25 == '\0') {
                    uVar17 = (uint)(local_1a0 != '\0');
                  }
                  else {
                    if (puVar20[3] == 0) {
                      uVar17 = *(uint *)(puVar20 + 1);
                    }
                    else {
                      uVar17 = (uint)*(byte *)(local_2b0 + 0x24);
                    }
                    uVar17 = uVar17 & 1;
                  }
                  iVar16 = 0x100;
                  if (uVar17 == 0) {
                    iVar16 = 0;
                  }
                  goto joined_r0x012f999c;
                }
                goto joined_r0x012f9728;
              }
            }
            plVar24 = *(long **)(param_1 + 200);
joined_r0x012f9728:
            if (plVar24 == (long *)0x0) goto LAB_012f99f0;
          }
          FUN_012fa794(&local_3d8,plVar24);
          if ((local_3c8 == (undefined8 *)0x0) ||
             (bVar7 = false, plVar19 = plVar22, plVar22 == (long *)0x0)) goto LAB_012f99f0;
        }
        plVar19 = plVar22;
      } while (plVar22 != (long *)0x0);
    }
LAB_012f99f0:
    pOVar8 = *(Operator **)param_2;
  }
  uVar4 = *(ushort *)(pOVar8 + 0x10);
  plVar19 = plVar24;
  local_190[0] = param_2;
  if (0x1a9 < uVar4) {
    if (((uVar4 != 0x1aa) && (uVar4 != 0x1ac)) && (uVar4 != 0x1f7)) goto switchD_012f9a2c_caseD_ec;
    goto switchD_012f9a2c_caseD_eb;
  }
  switch(uVar4) {
  case 0xea:
    pNVar15 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar15 = (Node *)(*(long *)pNVar15 + 0x10);
    }
    lVar13 = *(long *)pNVar15;
    lVar12 = v8::internal::compiler::FieldAccessOf(pOVar8);
    uVar17 = *(uint *)(lVar12 + 4);
    if (v8::internal::FLAG_trace_store_elimination != '\0') {
      uVar18 = *(uint *)(param_2 + 0x14);
      uVar11 = v8::internal::MachineReprToString(*(undefined1 *)(lVar12 + 0x20));
      v8::internal::PrintF
                ("RedundantStoreFinder:   #%d is LoadField[+%d,%s](#%d), removing all offsets [+%d] from set\n"
                 ,(ulong)(uVar18 & 0xffffff),(ulong)uVar17,uVar11,
                 (ulong)(*(uint *)(lVar13 + 0x14) & 0xffffff),(ulong)uVar17);
    }
    pZVar26 = *(Zone **)(param_1 + 0x10);
    plVar19 = *(long **)(pZVar26 + 0x10);
    if ((ulong)(*(long *)(pZVar26 + 0x18) - (long)plVar19) < 0x18) {
      plVar19 = (long *)v8::internal::Zone::NewExpand(pZVar26,0x18);
    }
    else {
      *(long **)(pZVar26 + 0x10) = plVar19 + 3;
    }
    *plVar19 = 0;
    *(undefined1 *)(plVar19 + 1) = 0;
    plVar19[2] = (long)pZVar26;
    lVar13 = plVar24[1];
    lVar12 = *plVar24;
    plVar19[2] = plVar24[2];
    plVar19[1] = lVar13;
    *plVar19 = lVar12;
    FUN_012fa794(&local_3d8,plVar19);
    while (local_3c8 != (undefined8 *)0x0) {
      puVar23 = local_3c8;
      if (local_3c8[3] != 0) {
        puVar23 = (undefined8 *)(local_3d0 + 0x1c);
      }
      if (uVar17 == (uint)((ulong)*puVar23 >> 0x20)) {
        FUN_012fa270(plVar19,*puVar23,0);
      }
      FUN_012fa8a8(&local_3d8);
    }
    break;
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
  case 0xf0:
switchD_012f9a2c_caseD_ec:
    if (v8::internal::FLAG_trace_store_elimination != '\0') {
      v8::internal::PrintF
                ("RedundantStoreFinder:   #%d:%s might observe anything, recording empty set\n",
                 (ulong)(*(uint *)(param_2 + 0x14) & 0xffffff),*(undefined8 *)(pOVar8 + 8));
    }
    plVar19 = *(long **)(param_1 + 200);
    break;
  case 0xf1:
    pNVar15 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar15 = (Node *)(*(long *)pNVar15 + 0x10);
    }
    lVar13 = *(long *)pNVar15;
    lVar12 = v8::internal::compiler::FieldAccessOf(pOVar8);
    uVar21 = (ulong)*(uint *)(lVar12 + 4);
    uVar10 = (ulong)*(uint *)(lVar13 + 0x14) & 0xffffff | uVar21 << 0x20;
    local_3d8 = uVar10;
    if ((plVar24 == (long *)0x0) ||
       (pcVar9 = (char *)FUN_012fab78(plVar24,&local_3d8), *pcVar9 == '\0')) {
      if (v8::internal::FLAG_trace_store_elimination != '\0') {
        uVar17 = *(uint *)(param_2 + 0x14);
        uVar11 = v8::internal::MachineReprToString(*(undefined1 *)(lVar12 + 0x20));
        v8::internal::PrintF
                  ("RedundantStoreFinder:   #%d is StoreField[+%d,%s](#%d), observable, recording in set\n"
                   ,(ulong)(uVar17 & 0xffffff),uVar21,uVar11,
                   (ulong)(*(uint *)(lVar13 + 0x14) & 0xffffff));
      }
      pZVar26 = *(Zone **)(param_1 + 0x10);
      local_3d8 = uVar10;
      pcVar9 = (char *)FUN_012fab78(plVar24,&local_3d8);
      if (*pcVar9 == '\0') {
        plVar19 = *(long **)(pZVar26 + 0x10);
        if ((ulong)(*(long *)(pZVar26 + 0x18) - (long)plVar19) < 0x18) {
          plVar19 = (long *)v8::internal::Zone::NewExpand(pZVar26,0x18);
        }
        else {
          *(long **)(pZVar26 + 0x10) = plVar19 + 3;
        }
        *plVar19 = 0;
        *(undefined1 *)(plVar19 + 1) = 0;
        plVar19[2] = (long)pZVar26;
        lVar13 = plVar24[1];
        lVar12 = *plVar24;
        plVar19[2] = plVar24[2];
        plVar19[1] = lVar13;
        *plVar19 = lVar12;
        FUN_012fa270(plVar19,local_3d8,1);
      }
    }
    else {
      if (v8::internal::FLAG_trace_store_elimination != '\0') {
        uVar17 = *(uint *)(param_2 + 0x14);
        uVar11 = v8::internal::MachineReprToString(*(undefined1 *)(lVar12 + 0x20));
        v8::internal::PrintF
                  ("RedundantStoreFinder:   #%d is StoreField[+%d,%s](#%d), unobservable\n",
                   (ulong)(uVar17 & 0xffffff),uVar21,uVar11,
                   (ulong)(*(uint *)(lVar13 + 0x14) & 0xffffff));
      }
      std::__ndk1::
      __tree<v8::internal::compiler::Node*,std::__ndk1::less<v8::internal::compiler::Node*>,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__emplace_unique_key_args<v8::internal::compiler::Node*,v8::internal::compiler::Node*const&>
                ((__tree<v8::internal::compiler::Node*,std::__ndk1::less<v8::internal::compiler::Node*>,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  *)(param_1 + 0xa8),local_190,local_190);
    }
    break;
  default:
    if ((uVar4 != 0x24) && (uVar4 != 0x38)) goto switchD_012f9a2c_caseD_ec;
  case 0xeb:
  case 0xf2:
switchD_012f9a2c_caseD_eb:
    if (v8::internal::FLAG_trace_store_elimination != '\0') {
      v8::internal::PrintF
                ("RedundantStoreFinder:   #%d:%s can observe nothing, set stays unchanged\n",
                 (ulong)(*(uint *)(param_2 + 0x14) & 0xffffff),*(undefined8 *)(pOVar8 + 8));
    }
  }
  plVar24 = *(long **)(*(long *)(param_1 + 0x88) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 8
                      );
  if (plVar24 == (long *)0x0) {
LAB_012f9e74:
    *(long **)(*(long *)(param_1 + 0x88) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 8) =
         plVar19;
    if (0 < *(int *)(*(long *)param_2 + 0x18)) {
      iVar16 = 0;
      do {
        plVar24 = (long *)v8::internal::compiler::NodeProperties::GetEffectInput(param_2,iVar16);
        if (v8::internal::FLAG_trace_store_elimination != '\0') {
          v8::internal::PrintF
                    ("RedundantStoreFinder:     marking #%d:%s for revisit\n",
                     (ulong)(*(uint *)((long)plVar24 + 0x14) & 0xffffff),
                     *(undefined8 *)(*plVar24 + 8));
        }
        if ((*(ulong *)(*(long *)(param_1 + 0x68) +
                       (((ulong)*(uint *)((long)plVar24 + 0x14) & 0xffffc0) >> 3)) >>
             ((ulong)*(uint *)((long)plVar24 + 0x14) & 0x3f) & 1) == 0) {
          lVar12 = *(long *)(param_1 + 0x20);
          lVar13 = *(long *)(param_1 + 0x28) - lVar12;
          uVar10 = 0;
          if (lVar13 != 0) {
            uVar10 = lVar13 * 0x40 - 1;
          }
          uVar21 = *(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x48);
          if (uVar10 == uVar21) {
            std::__ndk1::
            deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
            ::__add_back_capacity
                      ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                        *)(param_1 + 0x18));
            lVar12 = *(long *)(param_1 + 0x20);
            uVar21 = *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x50);
          }
          *(long **)(*(long *)(lVar12 + (uVar21 >> 6 & 0x3fffffffffffff8)) + (uVar21 & 0x1ff) * 8) =
               plVar24;
          *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
          uVar10 = ((ulong)*(uint *)((long)plVar24 + 0x14) & 0xffffc0) >> 3;
          *(ulong *)(*(long *)(param_1 + 0x68) + uVar10) =
               1L << ((ulong)*(uint *)((long)plVar24 + 0x14) & 0x3f) |
               *(ulong *)(*(long *)(param_1 + 0x68) + uVar10);
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(*(long *)param_2 + 0x18));
    }
  }
  else {
    if (plVar19 == (long *)0x0) {
      FUN_012fa794(&local_3d8);
      if (local_3c8 != (undefined8 *)0x0) goto LAB_012f9e74;
    }
    else if (*plVar24 != *plVar19) {
      if ((char)plVar24[1] != (char)plVar19[1]) goto LAB_012f9e74;
      local_520 = plVar24[2];
      lStack_528 = plVar24[1];
      local_530 = *plVar24;
      local_508 = plVar19[2];
      lStack_510 = plVar19[1];
      local_518 = *plVar19;
      FUN_012fa794(local_190,&local_530);
      FUN_012fa794(auStack_4f8,&local_518);
      memcpy(&local_3d8,local_190,0x120);
      memcpy(auStack_2b8,auStack_4f8,0x120);
      if ((local_3c8 == (undefined8 *)0x0) || (local_2a8 == (undefined8 *)0x0)) {
        if (local_3c8 == (undefined8 *)0x0 && local_2a8 == (undefined8 *)0x0) {
LAB_012f9f90:
          cVar25 = '\x01';
          local_198 = 0x101;
          bVar7 = true;
          if (local_3c8 != (undefined8 *)0x0 || local_2a8 != (undefined8 *)0x0) goto LAB_012f9fc4;
          goto LAB_012fa1f4;
        }
      }
      else if (*(int *)(local_3c8 + 2) == *(int *)(local_2a8 + 2)) {
        puVar23 = local_3c8;
        if (local_3c8[3] != 0) {
          puVar23 = (undefined8 *)(local_3d0 + 0x1c);
        }
        puVar20 = local_2a8;
        if (local_2a8[3] != 0) {
          puVar20 = (undefined8 *)(local_2b0 + 0x1c);
        }
        if (((int)*puVar23 == (int)*puVar20) &&
           ((int)((ulong)*puVar23 >> 0x20) == (int)((ulong)*puVar20 >> 0x20))) goto LAB_012f9f90;
      }
      if (local_3c8 == (undefined8 *)0x0) {
LAB_012f9fac:
        bVar7 = false;
        cVar25 = '\x01';
        local_198 = 0x100;
        if (local_3c8 != (undefined8 *)0x0 || local_2a8 != (undefined8 *)0x0) goto LAB_012f9fc4;
      }
      else {
        if (local_2a8 != (undefined8 *)0x0) {
          bVar7 = *(uint *)(local_2a8 + 2) <= *(uint *)(local_3c8 + 2);
          if (*(uint *)(local_3c8 + 2) == *(uint *)(local_2a8 + 2)) {
            puVar23 = local_3c8;
            if (local_3c8[3] != 0) {
              puVar23 = (undefined8 *)(local_3d0 + 0x1c);
            }
            puVar20 = local_2a8;
            if (local_2a8[3] != 0) {
              puVar20 = (undefined8 *)(local_2b0 + 0x1c);
            }
            uVar17 = (uint)*puVar20;
            uVar18 = (uint)*puVar23;
            if (uVar18 < uVar17) goto LAB_012f9e4c;
            if (uVar18 != uVar17) goto LAB_012f9fac;
            bVar7 = (uint)((ulong)*puVar20 >> 0x20) <= (uint)((ulong)*puVar23 >> 0x20);
          }
          if (bVar7) goto LAB_012f9fac;
        }
LAB_012f9e4c:
        bVar7 = true;
        cVar25 = '\0';
        local_198 = 1;
        if (local_3c8 != (undefined8 *)0x0 || local_2a8 != (undefined8 *)0x0) {
LAB_012f9fc4:
          puVar20 = local_2a8;
          puVar23 = local_3c8;
          if (bVar7) goto LAB_012fa01c;
LAB_012fa030:
          if (puVar20[3] == 0) {
            uVar17 = *(uint *)(puVar20 + 1);
          }
          else {
            uVar17 = (uint)*(byte *)(local_2b0 + 0x24);
          }
          uVar17 = (uint)local_2c0 | (uVar17 & 0xff) << 8;
          do {
            if ((uVar17 & 0xff) != uVar17 >> 8) goto LAB_012f9e74;
            if (bVar7) {
              FUN_012fa8a8(&local_3d8);
              cVar25 = local_198._1_1_;
            }
            if (cVar25 != '\0') {
              FUN_012fa8a8(auStack_2b8);
            }
            puVar23 = local_3c8;
            lVar12 = local_3d0;
            memcpy(local_190,auStack_3c0,0x108);
            puVar20 = local_2a8;
            lVar13 = local_2b0;
            memcpy(auStack_4f8,auStack_2a0,0x108);
            if ((puVar23 == (undefined8 *)0x0) || (puVar20 == (undefined8 *)0x0)) {
              if (puVar23 != (undefined8 *)0x0 || puVar20 != (undefined8 *)0x0) goto LAB_012fa160;
LAB_012fa1cc:
              cVar25 = '\x01';
              bVar7 = true;
            }
            else {
              if (*(int *)(puVar23 + 2) == *(int *)(puVar20 + 2)) {
                puVar1 = puVar23;
                if (puVar23[3] != 0) {
                  puVar1 = (undefined8 *)(lVar12 + 0x1c);
                }
                puVar2 = puVar20;
                if (puVar20[3] != 0) {
                  puVar2 = (undefined8 *)(lVar13 + 0x1c);
                }
                if (((int)*puVar1 == (int)*puVar2) &&
                   ((int)((ulong)*puVar1 >> 0x20) == (int)((ulong)*puVar2 >> 0x20)))
                goto LAB_012fa1cc;
              }
LAB_012fa160:
              if (puVar23 == (undefined8 *)0x0) goto LAB_012f9fdc;
              if (puVar20 != (undefined8 *)0x0) {
                if (*(uint *)(puVar23 + 2) == *(uint *)(puVar20 + 2)) {
                  puVar1 = puVar23;
                  if (puVar23[3] != 0) {
                    puVar1 = (undefined8 *)(lVar12 + 0x1c);
                  }
                  puVar2 = puVar20;
                  if (puVar20[3] != 0) {
                    puVar2 = (undefined8 *)(lVar13 + 0x1c);
                  }
                  uVar17 = (uint)*puVar2;
                  uVar18 = (uint)*puVar1;
                  if ((uVar17 <= uVar18) &&
                     ((uVar18 != uVar17 ||
                      ((uint)((ulong)*puVar2 >> 0x20) <= (uint)((ulong)*puVar1 >> 0x20))))) {
LAB_012f9fdc:
                    bVar7 = false;
                    cVar25 = '\x01';
                    goto LAB_012f9fe4;
                  }
                }
                else if (*(uint *)(puVar20 + 2) <= *(uint *)(puVar23 + 2)) goto LAB_012f9fdc;
              }
              cVar25 = '\0';
              bVar7 = true;
            }
LAB_012f9fe4:
            memcpy(auStack_3c0,local_190,0x108);
            memcpy(auStack_2a0,auStack_4f8,0x108);
            local_198 = CONCAT11(cVar25,bVar7);
            if (puVar23 == (undefined8 *)0x0 && puVar20 == (undefined8 *)0x0) break;
            if (!bVar7) goto LAB_012fa030;
LAB_012fa01c:
            if (puVar23[3] == 0) {
              bVar3 = *(byte *)(puVar23 + 1);
            }
            else {
              bVar3 = *(byte *)(local_3d0 + 0x24);
            }
            if (cVar25 == '\0') {
              uVar18 = (uint)(local_1a0 != '\0');
            }
            else {
              if (puVar20[3] == 0) {
                uVar18 = *(uint *)(puVar20 + 1);
              }
              else {
                uVar18 = (uint)*(byte *)(local_2b0 + 0x24);
              }
              uVar18 = uVar18 & 1;
            }
            uVar17 = 0x100;
            if (uVar18 == 0) {
              uVar17 = 0;
            }
            uVar17 = uVar17 | bVar3;
          } while( true );
        }
      }
    }
LAB_012fa1f4:
    if (v8::internal::FLAG_trace_store_elimination != '\0') {
      v8::internal::PrintF
                ("RedundantStoreFinder: + No change: stabilized. Not visiting effect inputs.\n");
    }
  }
LAB_012fa208:
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

