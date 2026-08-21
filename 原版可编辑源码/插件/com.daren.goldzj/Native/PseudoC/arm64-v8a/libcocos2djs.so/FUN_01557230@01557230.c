
undefined8 FUN_01557230(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  uint uVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  Isolate *pIVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  Logger *pLVar14;
  ulong *puVar15;
  Isolate *pIVar16;
  ulong *puVar17;
  ulong uVar18;
  uint *puVar19;
  Isolate *local_d8;
  byte **local_c0;
  byte *local_b8;
  char *local_b0;
  undefined8 local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong local_78;
  long *local_70;
  ulong *local_68;
  
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0xdb);
  }
  if (DAT_01d46db0 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46db0 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d46db0;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d46db0 & 5) != 0) {
    local_70 = (long *)0x0;
    local_68 = (ulong *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar4,"V8.Runtime_Runtime_DefineClass",0,0,0,0,0,0,0,&local_70,0
                      );
    puVar15 = local_68;
    local_68 = (ulong *)0x0;
    if (puVar15 != (ulong *)0x0) {
      (**(code **)(*puVar15 + 8))();
    }
    plVar5 = local_70;
    local_70 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_c0 = &local_b8;
    local_b0 = "V8.Runtime_Runtime_DefineClass";
    local_b8 = pbVar4;
    local_a8 = uVar6;
  }
  local_70 = (long *)(long)param_1;
  pIVar1 = *(Isolate **)(param_3 + 0x95a0);
  pIVar2 = *(Isolate **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar12 = *param_2;
  local_68 = param_2;
  if (((uVar12 & 1) == 0) ||
     (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x76)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsClassBoilerplate()");
  }
  puVar15 = param_2 + -1;
  uVar12 = *puVar15;
  if (((uVar12 & 1) == 0) ||
     (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x439)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsJSFunction()");
  }
  pIVar16 = (Isolate *)(param_2 + -2);
  uVar12 = *(ulong *)pIVar16;
  if ((uVar12 & 1) == 0) {
LAB_015573b4:
    uVar6 = 0x33;
    local_d8 = pIVar16;
LAB_015573c0:
    puVar7 = (undefined8 *)
             v8::internal::Factory::NewTypeError((Factory *)param_3,uVar6,local_d8,0,0);
    v8::internal::Isolate::Throw(param_3,*puVar7,0);
  }
  else {
    if ((int)uVar12 == *(int *)(param_3 + 0xa8)) {
      uVar12 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
      uVar12 = uVar12 | *(uint *)((uVar12 | *(uint *)((uVar12 | *(uint *)(*(ulong *)(param_3 +
                                                                                    0x2bc8) - 1)) +
                                                     0x13)) + 0x103);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        local_d8 = pIVar1;
        if (pIVar2 == pIVar1) {
          local_d8 = (Isolate *)v8::internal::HandleScope::Extend(param_3);
        }
        puVar17 = (ulong *)0x0;
        *(Isolate **)(param_3 + 0x95a0) = local_d8 + 8;
        *(ulong *)local_d8 = uVar12;
      }
      else {
        local_d8 = (Isolate *)
                   v8::internal::CanonicalHandleScope::Lookup
                             (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar12);
        puVar17 = (ulong *)0x0;
      }
    }
    else {
      pIVar8 = param_3 + 0xb0;
      if ((int)uVar12 != *(int *)pIVar8) {
        if ((*(byte *)((uVar12 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar12 - 1)) >> 6 & 1)
            == 0) goto LAB_015573b4;
        local_d8 = (Isolate *)
                   v8::internal::Runtime::GetObjectProperty(param_3,pIVar16,param_3 + 0x908,0);
        if (local_d8 != (Isolate *)0x0) {
          uVar12 = *(ulong *)local_d8;
          if (((uVar12 & 1) != 0) &&
             (((int)uVar12 == *(int *)pIVar8 ||
              (0xa8 < *(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)))
              ))) {
            uVar12 = *(ulong *)pIVar16;
            if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar17 = *(ulong **)(param_3 + 0x95a0);
              if (puVar17 == *(ulong **)(param_3 + 0x95a8)) {
                puVar17 = (ulong *)v8::internal::HandleScope::Extend(param_3);
              }
              *(ulong **)(param_3 + 0x95a0) = puVar17 + 1;
              *puVar17 = uVar12;
            }
            else {
              puVar17 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar12);
            }
            goto LAB_015574b8;
          }
          uVar6 = 0x74;
          goto LAB_015573c0;
        }
        goto LAB_01557ae0;
      }
      puVar17 = (ulong *)0x0;
      local_d8 = pIVar8;
    }
LAB_015574b8:
    uVar6 = v8::internal::Map::Create(param_3,0);
    pIVar8 = (Isolate *)v8::internal::Factory::NewJSObjectFromMap(param_3,uVar6,0,0);
    *(undefined8 *)pIVar16 = *(undefined8 *)pIVar8;
    uVar12 = *puVar15 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar15 - 1);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)(param_3 + 0x95a0);
      if (puVar9 == *(ulong **)(param_3 + 0x95a8)) {
        puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar9 + 1;
      *puVar9 = uVar12;
    }
    else {
      puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar12);
    }
    puVar9 = (ulong *)v8::internal::Map::CopyDropDescriptors(param_3,puVar9);
    if (puVar17 != (ulong *)0x0) {
      v8::internal::Map::SetPrototype(param_3,puVar9,puVar17,0);
    }
    uVar12 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xf);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar17 = *(ulong **)(param_3 + 0x95a0);
      if (puVar17 == *(ulong **)(param_3 + 0x95a8)) {
        puVar17 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar17 + 1;
      *puVar17 = uVar12;
    }
    else {
      puVar17 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar12);
    }
    uVar12 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x13);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar10 = *(ulong **)(param_3 + 0x95a0);
      if (puVar10 == *(ulong **)(param_3 + 0x95a8)) {
        puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar10 + 1;
      *puVar10 = uVar12;
    }
    else {
      puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar12);
    }
    uVar3 = *(uint *)(*param_2 + 0xb);
    uVar12 = *param_2 & 0xffffffff00000000 | (ulong)uVar3;
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar11 = *(ulong **)(param_3 + 0x95a0);
      if (puVar11 == *(ulong **)(param_3 + 0x95a8)) {
        puVar11 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar11 + 1;
      *puVar11 = uVar12;
      if ((uVar3 & 1) != 0) goto LAB_01557654;
LAB_0155770c:
      uVar12 = FUN_01559714(param_3,puVar9,puVar11,puVar17,puVar15,&local_70);
    }
    else {
      puVar11 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar12);
      uVar12 = *puVar11;
      if ((uVar12 & 1) == 0) goto LAB_0155770c;
LAB_01557654:
      if (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x7a)
      goto LAB_0155770c;
      *(uint *)(*puVar9 + 0xb) = *(uint *)(*puVar9 + 0xb) | 0x2200000;
      local_78 = *puVar9;
      v8::internal::Map::SetInstanceDescriptors
                ((Map *)&local_78,param_3,*(long *)(param_3 + 0x170),
                 (int)*(short *)(*(long *)(param_3 + 0x170) + 5));
      *(uint *)(*puVar9 + 0xb) = *(uint *)(*puVar9 + 0xb) & 0xfbffffff;
      *(uint *)(*puVar9 + 0xb) = *(uint *)(*puVar9 + 0xb) | 0x10000000;
      *(uint *)(*puVar9 + 0xb) = *(uint *)(*puVar9 + 0xb) & 0x1fffffff;
      uVar12 = FUN_01558e24(param_3,puVar9,puVar11,puVar17,puVar10,puVar15,
                            *(uint *)(*param_2 + 7) >> 1 & 1,&local_70);
    }
    if ((uVar12 & 1) != 0) {
      uVar12 = *(ulong *)pIVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)pIVar8 - 1);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar17 = *(ulong **)(param_3 + 0x95a0);
        if (puVar17 == *(ulong **)(param_3 + 0x95a8)) {
          puVar17 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar17 + 1;
        *puVar17 = uVar12;
      }
      else {
        puVar17 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar12);
      }
      puVar17 = (ulong *)v8::internal::Map::CopyDropDescriptors(param_3,puVar17);
      *(uint *)(*puVar17 + 0xb) = *(uint *)(*puVar17 + 0xb) | 0x100000;
      v8::internal::Map::SetPrototype(param_3,puVar17,local_d8,1);
      uVar18 = *puVar15;
      uVar12 = *(ulong *)pIVar8;
      *(int *)(uVar18 + 0x1b) = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar13 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar13 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar18,uVar18 + 0x1b,uVar12);
          uVar13 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          v8::internal::Heap_GenerationalBarrierSlow(uVar18,uVar18 + 0x1b,uVar12);
        }
      }
      uVar18 = *puVar17;
      uVar12 = *puVar15;
      puVar19 = (uint *)(uVar18 + 0x13);
      if (((*puVar19 & 1) != 0) &&
         (*(short *)((uVar18 & 0xffffffff00000000 | 7) +
                    (ulong)*(uint *)((uVar18 & 0xffffffff00000000 | (ulong)*puVar19) - 1)) == 0xa2))
      {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!constructor_or_backpointer().IsMap()");
      }
      *puVar19 = (uint)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar13 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar13 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar18,puVar19,uVar12);
          uVar13 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          v8::internal::Heap_GenerationalBarrierSlow(uVar18,puVar19,uVar12);
        }
      }
      uVar12 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x1f);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar9 = *(ulong **)(param_3 + 0x95a0);
        if (puVar9 == *(ulong **)(param_3 + 0x95a8)) {
          puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar9 + 1;
        *puVar9 = uVar12;
      }
      else {
        puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar12);
      }
      uVar12 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x1b);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar10 = *(ulong **)(param_3 + 0x95a0);
        if (puVar10 == *(ulong **)(param_3 + 0x95a8)) {
          puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar10 + 1;
        *puVar10 = uVar12;
      }
      else {
        puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar12);
      }
      uVar3 = *(uint *)(*param_2 + 0x17);
      uVar12 = *param_2 & 0xffffffff00000000 | (ulong)uVar3;
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar11 = *(ulong **)(param_3 + 0x95a0);
        if (puVar11 == *(ulong **)(param_3 + 0x95a8)) {
          puVar11 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar11 + 1;
        *puVar11 = uVar12;
        if ((uVar3 & 1) != 0) goto LAB_0155798c;
LAB_01557a14:
        uVar12 = FUN_01559714(param_3,puVar17,puVar11,puVar10,pIVar8,&local_70);
      }
      else {
        puVar11 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar12);
        uVar12 = *puVar11;
        if ((uVar12 & 1) == 0) goto LAB_01557a14;
LAB_0155798c:
        if (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x7a)
        goto LAB_01557a14;
        *(uint *)(*puVar17 + 0xb) = *(uint *)(*puVar17 + 0xb) | 0x2200000;
        *(uint *)(*puVar17 + 0xb) = *(uint *)(*puVar17 + 0xb) & 0xfbffffff;
        *(uint *)(*puVar17 + 0xb) = *(uint *)(*puVar17 + 0xb) | 0x10000000;
        *(uint *)(*puVar17 + 0xb) = *(uint *)(*puVar17 + 0xb) & 0x1fffffff;
        uVar12 = FUN_01558e24(param_3,puVar17,puVar11,puVar10,puVar9,pIVar8,0,&local_70);
      }
      if ((uVar12 & 1) != 0) {
        if (v8::internal::FLAG_trace_maps != '\0') {
          pLVar14 = *(Logger **)(param_3 + 0x9558);
          uVar12 = v8::internal::Logger::is_logging(pLVar14);
          if ((uVar12 & 1) != 0) {
            uVar12 = *puVar15;
            uVar3 = *(uint *)(uVar12 - 1);
            local_78 = uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + 0xb);
            uVar6 = v8::internal::SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_78);
            v8::internal::Logger::MapEvent
                      (pLVar14,"InitialMap",0,uVar12 & 0xffffffff00000000 | (ulong)uVar3,
                       "init class constructor",uVar6);
          }
          pLVar14 = *(Logger **)(param_3 + 0x9558);
          uVar12 = v8::internal::Logger::is_logging(pLVar14);
          if ((uVar12 & 1) != 0) {
            v8::internal::Logger::MapEvent
                      (pLVar14,"InitialMap",0,
                       *(ulong *)pIVar8 & 0xffffffff00000000 |
                       (ulong)*(uint *)(*(ulong *)pIVar8 - 1),"init class prototype",0);
          }
        }
        if (pIVar8 != (Isolate *)0x0) goto LAB_01557ae4;
      }
    }
  }
LAB_01557ae0:
  pIVar8 = param_3 + 0x180;
LAB_01557ae4:
  uVar6 = *(undefined8 *)pIVar8;
  *(Isolate **)(param_3 + 0x95a0) = pIVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(Isolate **)(param_3 + 0x95a8) != pIVar2) {
    *(Isolate **)(param_3 + 0x95a8) = pIVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_b8,local_b0,local_a8);
  }
  if (local_a0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
  }
  return uVar6;
}

