
/* v8::internal::Runtime_NewScriptContext(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_NewScriptContext(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined4 *puVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  byte bVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  int iVar17;
  ulong *local_100;
  ulong local_e8;
  undefined8 local_dc;
  long local_d0;
  ulong *local_c8;
  undefined8 uStack_c0;
  ulong *local_b8;
  undefined8 uStack_b0;
  ulong *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  int local_88 [2];
  byte local_80;
  undefined8 local_68;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar16 = FUN_0158d908(param_1,param_2,param_3);
    return uVar16;
  }
  pIVar2 = param_3 + 0x95a0;
  puVar3 = *(ulong **)pIVar2;
  puVar5 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar13 = *param_2;
  if (((uVar13 & 1) == 0) ||
     (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x83)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsScopeInfo()");
  }
  uVar13 = *(ulong *)(param_3 + 0x2bc8);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    local_100 = puVar3;
    if (puVar5 == puVar3) {
      local_100 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar2 = local_100 + 1;
    *local_100 = uVar13;
  }
  else {
    local_100 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar13);
    uVar13 = *local_100;
  }
  local_e8 = uVar13;
  uVar13 = Context::global_object((Context *)&local_e8);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)pIVar2;
    if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar2 = puVar8 + 1;
    *puVar8 = uVar13;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar13);
  }
  uVar13 = *local_100 & 0xffffffff00000000 | (ulong)*(uint *)(*local_100 + 0x273);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)pIVar2;
    if (puVar9 == *(ulong **)(param_3 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar2 = puVar9 + 1;
    *puVar9 = uVar13;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar13);
  }
  iVar17 = 0;
  do {
    uVar13 = *param_2;
    if (*(int *)(uVar13 + 3) < 2) {
      if (iVar17 < 0) goto LAB_0158d4d8;
LAB_0158d6c4:
      uVar16 = *(undefined8 *)(param_3 + 0xa0);
LAB_0158d74c:
      uVar13 = *(ulong *)(param_3 + 0x2bd8);
      iVar17 = (int)uVar13;
      goto joined_r0x0158d740;
    }
    if (*(int *)(uVar13 + 0xf) >> 1 <= iVar17) goto LAB_0158d6c4;
LAB_0158d4d8:
    local_e8 = uVar13;
    uVar13 = ScopeInfo::ContextLocalName((ScopeInfo *)&local_e8,iVar17);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar10 = *(ulong **)pIVar2;
      if (puVar10 == *(ulong **)(param_3 + 0x95a8)) {
        puVar10 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar2 = puVar10 + 1;
      *puVar10 = uVar13;
    }
    else {
      puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar13);
    }
    local_e8 = *param_2;
    bVar7 = ScopeInfo::ContextLocalMode((ScopeInfo *)&local_e8,iVar17);
    uVar13 = ScriptContextTable::Lookup(param_3,*puVar9,*puVar10,local_88);
    if ((uVar13 & 1) == 0) {
      if (bVar7 < 2) {
LAB_0158d63c:
        local_d0 = (ulong)*(uint *)((long)puVar8 + 4) << 0x20;
        local_e8 = local_e8 & 0xffffffff00000000;
        local_dc = 0xc000000000;
        puVar11 = puVar10;
        if ((*(ushort *)((*puVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar10 - 1)) &
            0xffe0) == 0x20) {
          puVar11 = (ulong *)StringTable::LookupString(local_d0,puVar10);
        }
        uStack_c0 = 0;
        uStack_b0 = 0;
        local_a0 = 0xffffffffffffffff;
        uStack_98 = 0xffffffffffffffff;
        local_c8 = puVar11;
        local_b8 = puVar8;
        local_a8 = puVar8;
        LookupIterator::Start<false>((LookupIterator *)&local_e8);
        uVar13 = JSReceiver::GetPropertyAttributes((LookupIterator *)&local_e8);
        if ((uVar13 & 0xff) == 0) {
          uVar16 = *(undefined8 *)(param_3 + 0x180);
          goto LAB_0158d74c;
        }
        if ((uVar13 >> 0x22 & 1) != 0) {
          lVar4 = *(long *)pIVar2;
          lVar6 = *(long *)(param_3 + 0x95a8);
          *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
          puVar12 = (undefined8 *)Factory::NewSyntaxError((Factory *)param_3,0xb0,puVar10,0,0);
          uVar16 = Isolate::Throw(param_3,*puVar12,0);
          *(long *)pIVar2 = lVar4;
          *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
          if (*(long *)(param_3 + 0x95a8) != lVar6) {
            *(long *)(param_3 + 0x95a8) = lVar6;
            HandleScope::DeleteExtensions(param_3);
          }
          uVar13 = *(ulong *)(param_3 + 0x2bd8);
          iVar17 = (int)uVar13;
joined_r0x0158d740:
          if (((uVar13 & 1) != 0) && (iVar17 == *(int *)(param_3 + 0xa8))) {
            puVar12 = (undefined8 *)Factory::NewScriptContext((Factory *)param_3,local_100,param_2);
            puVar8 = (ulong *)ScriptContextTable::Extend(puVar9,puVar12);
            uVar15 = *local_100;
            uVar13 = *puVar8;
            puVar1 = (undefined4 *)(uVar15 + 0x273);
            *puVar1 = (int)uVar13;
            if ((uVar13 & 1) != 0) {
              uVar14 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
              if (((uint)uVar14 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar15,puVar1,uVar13);
                uVar14 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar14 & 0x18) != 0) &&
                 ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar15,puVar1,uVar13);
              }
            }
            uVar16 = *puVar12;
          }
          *(ulong **)pIVar2 = puVar3;
          *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
          if (*(ulong **)(param_3 + 0x95a8) != puVar5) {
            *(ulong **)(param_3 + 0x95a8) = puVar5;
            HandleScope::DeleteExtensions(param_3);
          }
          return uVar16;
        }
        JSGlobalObject::InvalidatePropertyCell(puVar8,puVar10);
      }
    }
    else if ((bVar7 < 2) || (local_80 < 2)) {
      uVar13 = *puVar9 & 0xffffffff00000000 |
               (ulong)*(uint *)(*puVar9 + (long)(local_88[0] * 4 + 4) + 7);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar11 = *(ulong **)pIVar2;
        if (puVar11 == *(ulong **)(param_3 + 0x95a8)) {
          puVar11 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar2 = puVar11 + 1;
        *puVar11 = uVar13;
      }
      else {
        puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar13);
      }
      if ((bVar7 == 0) && (local_80 == 0)) {
        local_e8 = *param_2;
        uVar13 = ScopeInfo::IsReplModeScope((ScopeInfo *)&local_e8);
        if ((uVar13 & 1) != 0) {
          local_90 = *puVar11;
          local_68 = Context::scope_info((Context *)&local_90);
          uVar13 = ScopeInfo::IsReplModeScope((ScopeInfo *)&local_68);
          if ((uVar13 & 1) != 0) goto LAB_0158d63c;
        }
      }
      lVar4 = *(long *)pIVar2;
      lVar6 = *(long *)(param_3 + 0x95a8);
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
      puVar12 = (undefined8 *)Factory::NewSyntaxError((Factory *)param_3,0xb0,puVar10,0,0);
      uVar16 = Isolate::Throw(param_3,*puVar12,0);
      *(long *)pIVar2 = lVar4;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar6) {
        *(long *)(param_3 + 0x95a8) = lVar6;
        HandleScope::DeleteExtensions(param_3);
      }
      uVar13 = *(ulong *)(param_3 + 0x2bd8);
      iVar17 = (int)uVar13;
      goto joined_r0x0158d740;
    }
    iVar17 = iVar17 + 1;
  } while( true );
}

