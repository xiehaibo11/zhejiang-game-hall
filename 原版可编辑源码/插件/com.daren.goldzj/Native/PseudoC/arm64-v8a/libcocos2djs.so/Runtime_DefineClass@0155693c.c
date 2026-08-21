
/* v8::internal::Runtime_DefineClass(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_DefineClass(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  uint uVar3;
  undefined8 *puVar4;
  Isolate *pIVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  Logger *pLVar13;
  Isolate *pIVar14;
  ulong *puVar15;
  ulong uVar16;
  uint *puVar17;
  Isolate *local_90;
  long local_78;
  ulong *puStack_70;
  ulong local_68;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar10 = FUN_01557230(param_1,param_2,param_3);
    return uVar10;
  }
  local_78 = (long)param_1;
  pIVar1 = *(Isolate **)(param_3 + 0x95a0);
  pIVar2 = *(Isolate **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar10 = *param_2;
  puStack_70 = param_2;
  if (((uVar10 & 1) == 0) ||
     (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x76)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsClassBoilerplate()");
  }
  puVar12 = param_2 + -1;
  uVar10 = *puVar12;
  if (((uVar10 & 1) == 0) ||
     (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x439)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsJSFunction()");
  }
  pIVar14 = (Isolate *)(param_2 + -2);
  uVar10 = *(ulong *)pIVar14;
  if ((uVar10 & 1) == 0) {
LAB_015569e4:
    uVar9 = 0x33;
    local_90 = pIVar14;
LAB_015569f0:
    puVar4 = (undefined8 *)Factory::NewTypeError((Factory *)param_3,uVar9,local_90,0,0);
    Isolate::Throw(param_3,*puVar4,0);
  }
  else {
    if ((int)uVar10 == *(int *)(param_3 + 0xa8)) {
      uVar10 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
      uVar10 = uVar10 | *(uint *)((uVar10 | *(uint *)((uVar10 | *(uint *)(*(ulong *)(param_3 +
                                                                                    0x2bc8) - 1)) +
                                                     0x13)) + 0x103);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        local_90 = pIVar1;
        if (pIVar2 == pIVar1) {
          local_90 = (Isolate *)HandleScope::Extend(param_3);
        }
        puVar15 = (ulong *)0x0;
        *(Isolate **)(param_3 + 0x95a0) = local_90 + 8;
        *(ulong *)local_90 = uVar10;
      }
      else {
        local_90 = (Isolate *)
                   CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10)
        ;
        puVar15 = (ulong *)0x0;
      }
    }
    else {
      pIVar5 = param_3 + 0xb0;
      if ((int)uVar10 != *(int *)pIVar5) {
        if ((*(byte *)((uVar10 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar10 - 1)) >> 6 & 1)
            == 0) goto LAB_015569e4;
        local_90 = (Isolate *)Runtime::GetObjectProperty(param_3,pIVar14,param_3 + 0x908,0);
        if (local_90 != (Isolate *)0x0) {
          uVar10 = *(ulong *)local_90;
          if (((uVar10 & 1) != 0) &&
             (((int)uVar10 == *(int *)pIVar5 ||
              (0xa8 < *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)))
              ))) {
            uVar10 = *(ulong *)pIVar14;
            if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar15 = *(ulong **)(param_3 + 0x95a0);
              if (puVar15 == *(ulong **)(param_3 + 0x95a8)) {
                puVar15 = (ulong *)HandleScope::Extend(param_3);
              }
              *(ulong **)(param_3 + 0x95a0) = puVar15 + 1;
              *puVar15 = uVar10;
            }
            else {
              puVar15 = (ulong *)CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
            }
            goto LAB_01556aec;
          }
          uVar9 = 0x74;
          goto LAB_015569f0;
        }
        goto LAB_01557110;
      }
      puVar15 = (ulong *)0x0;
      local_90 = pIVar5;
    }
LAB_01556aec:
    uVar9 = Map::Create(param_3,0);
    pIVar5 = (Isolate *)Factory::NewJSObjectFromMap(param_3,uVar9,0,0);
    *(ulong *)pIVar14 = *(ulong *)pIVar5;
    uVar10 = *puVar12 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar12 - 1);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(param_3 + 0x95a0);
      if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar10;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
    }
    puVar6 = (ulong *)Map::CopyDropDescriptors(param_3,puVar6);
    if (puVar15 != (ulong *)0x0) {
      Map::SetPrototype(param_3,puVar6,puVar15,0);
    }
    uVar10 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xf);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar15 = *(ulong **)(param_3 + 0x95a0);
      if (puVar15 == *(ulong **)(param_3 + 0x95a8)) {
        puVar15 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar15 + 1;
      *puVar15 = uVar10;
    }
    else {
      puVar15 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
    }
    uVar10 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x13);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(param_3 + 0x95a0);
      if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar10;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
    }
    uVar3 = *(uint *)(*param_2 + 0xb);
    uVar10 = *param_2 & 0xffffffff00000000 | (ulong)uVar3;
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(param_3 + 0x95a0);
      if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
        puVar8 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar10;
      if ((uVar3 & 1) != 0) goto LAB_01556c84;
LAB_01556d3c:
      uVar10 = FUN_01559714(param_3,puVar6,puVar8,puVar15,puVar12,&local_78);
    }
    else {
      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
      uVar10 = *puVar8;
      if ((uVar10 & 1) == 0) goto LAB_01556d3c;
LAB_01556c84:
      if (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x7a)
      goto LAB_01556d3c;
      *(uint *)(*puVar6 + 0xb) = *(uint *)(*puVar6 + 0xb) | 0x2200000;
      local_68 = *puVar6;
      Map::SetInstanceDescriptors
                ((Map *)&local_68,param_3,*(long *)(param_3 + 0x170),
                 (int)*(short *)(*(long *)(param_3 + 0x170) + 5));
      *(uint *)(*puVar6 + 0xb) = *(uint *)(*puVar6 + 0xb) & 0xfbffffff;
      *(uint *)(*puVar6 + 0xb) = *(uint *)(*puVar6 + 0xb) | 0x10000000;
      *(uint *)(*puVar6 + 0xb) = *(uint *)(*puVar6 + 0xb) & 0x1fffffff;
      uVar10 = FUN_01558e24(param_3,puVar6,puVar8,puVar15,puVar7,puVar12,
                            *(uint *)(*param_2 + 7) >> 1 & 1,&local_78);
    }
    if ((uVar10 & 1) != 0) {
      uVar10 = *(ulong *)pIVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)pIVar5 - 1);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar15 = *(ulong **)(param_3 + 0x95a0);
        if (puVar15 == *(ulong **)(param_3 + 0x95a8)) {
          puVar15 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar15 + 1;
        *puVar15 = uVar10;
      }
      else {
        puVar15 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
      }
      puVar15 = (ulong *)Map::CopyDropDescriptors(param_3,puVar15);
      *(uint *)(*puVar15 + 0xb) = *(uint *)(*puVar15 + 0xb) | 0x100000;
      Map::SetPrototype(param_3,puVar15,local_90,1);
      uVar16 = *puVar12;
      uVar10 = *(ulong *)pIVar5;
      *(int *)(uVar16 + 0x1b) = (int)uVar10;
      if ((uVar10 & 1) != 0) {
        uVar11 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar11 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar16,uVar16 + 0x1b,uVar10);
          uVar11 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar16,uVar16 + 0x1b,uVar10);
        }
      }
      uVar16 = *puVar15;
      uVar10 = *puVar12;
      puVar17 = (uint *)(uVar16 + 0x13);
      if (((*puVar17 & 1) != 0) &&
         (*(short *)((uVar16 & 0xffffffff00000000 | 7) +
                    (ulong)*(uint *)((uVar16 & 0xffffffff00000000 | (ulong)*puVar17) - 1)) == 0xa2))
      {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!constructor_or_backpointer().IsMap()");
      }
      *puVar17 = (uint)uVar10;
      if ((uVar10 & 1) != 0) {
        uVar11 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar11 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar16,puVar17,uVar10);
          uVar11 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar16,puVar17,uVar10);
        }
      }
      uVar10 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x1f);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)(param_3 + 0x95a0);
        if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
          puVar6 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar6 + 1;
        *puVar6 = uVar10;
      }
      else {
        puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
      }
      uVar10 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x1b);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(param_3 + 0x95a0);
        if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar10;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
      }
      uVar3 = *(uint *)(*param_2 + 0x17);
      uVar10 = *param_2 & 0xffffffff00000000 | (ulong)uVar3;
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)(param_3 + 0x95a0);
        if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar8 + 1;
        *puVar8 = uVar10;
        if ((uVar3 & 1) != 0) goto LAB_01556fbc;
LAB_01557044:
        uVar10 = FUN_01559714(param_3,puVar15,puVar8,puVar7,pIVar5,&local_78);
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
        uVar10 = *puVar8;
        if ((uVar10 & 1) == 0) goto LAB_01557044;
LAB_01556fbc:
        if (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x7a)
        goto LAB_01557044;
        *(uint *)(*puVar15 + 0xb) = *(uint *)(*puVar15 + 0xb) | 0x2200000;
        *(uint *)(*puVar15 + 0xb) = *(uint *)(*puVar15 + 0xb) & 0xfbffffff;
        *(uint *)(*puVar15 + 0xb) = *(uint *)(*puVar15 + 0xb) | 0x10000000;
        *(uint *)(*puVar15 + 0xb) = *(uint *)(*puVar15 + 0xb) & 0x1fffffff;
        uVar10 = FUN_01558e24(param_3,puVar15,puVar8,puVar7,puVar6,pIVar5,0,&local_78);
      }
      if ((uVar10 & 1) != 0) {
        if (FLAG_trace_maps != '\0') {
          pLVar13 = *(Logger **)(param_3 + 0x9558);
          uVar10 = Logger::is_logging(pLVar13);
          if ((uVar10 & 1) != 0) {
            uVar10 = *puVar12;
            uVar3 = *(uint *)(uVar10 - 1);
            local_68 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0xb);
            uVar9 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_68);
            Logger::MapEvent(pLVar13,"InitialMap",0,uVar10 & 0xffffffff00000000 | (ulong)uVar3,
                             "init class constructor",uVar9);
          }
          pLVar13 = *(Logger **)(param_3 + 0x9558);
          uVar10 = Logger::is_logging(pLVar13);
          if ((uVar10 & 1) != 0) {
            Logger::MapEvent(pLVar13,"InitialMap",0,
                             *(ulong *)pIVar5 & 0xffffffff00000000 |
                             (ulong)*(uint *)(*(ulong *)pIVar5 - 1),"init class prototype",0);
          }
        }
        if (pIVar5 != (Isolate *)0x0) goto LAB_01557114;
      }
    }
  }
LAB_01557110:
  pIVar5 = param_3 + 0x180;
LAB_01557114:
  uVar10 = *(ulong *)pIVar5;
  *(Isolate **)(param_3 + 0x95a0) = pIVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(Isolate **)(param_3 + 0x95a8) != pIVar2) {
    *(Isolate **)(param_3 + 0x95a8) = pIVar2;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar10;
}

