
/* v8::internal::wasm::GetImports(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmModuleObject>) */

ulong * v8::internal::wasm::GetImports(Isolate *param_1,ulong *param_2)

{
  Isolate *pIVar1;
  undefined1 *puVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 uVar28;
  int iVar29;
  uint local_e8;
  uint local_e4;
  char *local_70;
  undefined8 uStack_68;
  
  pIVar1 = param_1 + 0x95a0;
  uVar4 = WasmFeatures::FromIsolate(param_1);
  uStack_68 = __strlen_chk("module",7);
  local_70 = "module";
  uVar5 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_70);
  uStack_68 = __strlen_chk("name",5);
  local_70 = "name";
  uVar6 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_70);
  uStack_68 = __strlen_chk("kind",5);
  local_70 = "kind";
  uVar7 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_70);
  uStack_68 = __strlen_chk("type",5);
  local_70 = "type";
  uVar8 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_70);
  uStack_68 = __strlen_chk("function",9);
  local_70 = "function";
  uVar9 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_70);
  uStack_68 = __strlen_chk("table",6);
  local_70 = "table";
  uVar10 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_70);
  uStack_68 = __strlen_chk("memory",7);
  local_70 = "memory";
  uVar11 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_70);
  uStack_68 = __strlen_chk("global",7);
  local_70 = "global";
  uVar12 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_70);
  uStack_68 = __strlen_chk("exception",10);
  local_70 = "exception";
  uVar13 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_70);
  lVar21 = *(long *)(**(long **)(*(long *)((*param_2 & 0xffffffff00000000 |
                                           (ulong)*(uint *)(*param_2 + 0xb)) + 3) + 0x18) + 200);
  uVar26 = (*(long *)(lVar21 + 0xd8) - *(long *)(lVar21 + 0xd0) >> 3) * -0x5555555555555555;
  puVar14 = (ulong *)Factory::NewJSArray((Factory *)param_1,2,0,0,0,0);
  puVar15 = (ulong *)Factory::NewFixedArray((Factory *)param_1,uVar26 & 0xffffffff,0);
  JSObject::EnsureCanContainElements(puVar14,puVar15,*(int *)(*puVar15 + 3) >> 1,1);
  uVar27 = *puVar14;
  uVar23 = *puVar15;
  *(int *)(uVar27 + 7) = (int)uVar23;
  if ((uVar23 & 1) != 0) {
    uVar19 = *(ulong *)((uVar23 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar19 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar27,uVar27 + 7,uVar23);
      uVar19 = *(ulong *)(uVar23 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar19 & 0x18) != 0) && ((*(byte *)((uVar27 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar27,uVar27 + 7,uVar23);
    }
  }
  *(uint *)(*puVar14 + 0xb) = *(uint *)(*puVar15 + 3) & 0xfffffffe;
  *(int *)(*puVar14 + 0xb) = (int)uVar26 << 1;
  uVar23 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar23 = uVar23 | *(uint *)((uVar23 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar16 = *(ulong **)pIVar1;
    if (puVar16 == *(ulong **)(param_1 + 0x95a8)) {
      puVar16 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar16 + 1;
    *puVar16 = uVar23;
  }
  else {
    puVar16 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar23);
    uVar23 = *puVar16;
  }
  uVar23 = uVar23 & 0xffffffff00000000 | (ulong)*(uint *)(uVar23 + 499);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar16 = *(ulong **)pIVar1;
    if (puVar16 == *(ulong **)(param_1 + 0x95a8)) {
      puVar16 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar16 + 1;
    *puVar16 = uVar23;
  }
  else {
    puVar16 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar23);
  }
  if (0 < (int)uVar26) {
    iVar29 = 0;
    lVar22 = 0;
    do {
      lVar25 = *(long *)(lVar21 + 0xd0);
      puVar17 = (ulong *)Factory::NewJSObject((Factory *)param_1,puVar16,0);
      lVar24 = 0;
      uVar28 = uVar13;
      switch(*(undefined1 *)(lVar25 + lVar22 + 0x10)) {
      case 0:
        uVar28 = uVar9;
        if ((uVar4 >> 8 & 1) == 0) {
          lVar24 = 0;
        }
        else {
          lVar24 = GetTypeForFunction(param_1,*(Signature **)
                                               (*(long *)(lVar21 + 0x88) +
                                               (ulong)*(uint *)(lVar25 + lVar22 + 0x14) * 0x20));
        }
        break;
      case 1:
        uVar28 = uVar10;
        if ((uVar4 >> 8 & 1) == 0) {
          lVar24 = 0;
        }
        else {
          puVar2 = (undefined1 *)
                   (*(long *)(lVar21 + 0xb8) + (ulong)*(uint *)(lVar25 + lVar22 + 0x14) * 0x10);
          if (puVar2[0xc] == '\0') {
            uVar20 = 0;
          }
          else {
            uVar20 = *(uint *)(puVar2 + 8);
            local_e4 = uVar20 >> 8;
          }
          lVar24 = GetTypeForTable(param_1,*puVar2,*(undefined4 *)(puVar2 + 4),
                                   (ulong)(puVar2[0xc] != '\0') |
                                   (ulong)(uVar20 & 0xff | local_e4 << 8) << 0x20);
        }
        break;
      case 2:
        uVar28 = uVar11;
        if ((uVar4 >> 8 & 1) == 0) {
          lVar24 = 0;
        }
        else {
          bVar3 = *(char *)(lVar21 + 0x11) == '\0';
          if (bVar3) {
            uVar20 = 0;
          }
          else {
            uVar20 = *(uint *)(lVar21 + 0xc);
            local_e8 = uVar20 >> 8;
          }
          lVar24 = GetTypeForMemory(param_1,*(undefined4 *)(lVar21 + 8),
                                    (ulong)!bVar3 | (ulong)(uVar20 & 0xff | local_e8 << 8) << 0x20);
        }
        break;
      case 3:
        uVar28 = uVar12;
        if ((uVar4 >> 8 & 1) == 0) {
          lVar24 = 0;
        }
        else {
          puVar2 = (undefined1 *)
                   (*(long *)(lVar21 + 0x18) + (ulong)*(uint *)(lVar25 + lVar22 + 0x14) * 0x20);
          lVar24 = GetTypeForGlobal(param_1,puVar2[1],*puVar2);
        }
        break;
      case 4:
        break;
      default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      lVar18 = WasmModuleObject::ExtractUtf8StringFromModuleBytes
                         (param_1,param_2,*(undefined8 *)(lVar25 + lVar22));
      lVar25 = WasmModuleObject::ExtractUtf8StringFromModuleBytes
                         (param_1,param_2,((undefined8 *)(lVar25 + lVar22))[1]);
      if ((lVar18 == 0) || (JSObject::AddProperty(param_1,puVar17,uVar5,lVar18,0), lVar25 == 0)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      JSObject::AddProperty(param_1,puVar17,uVar6,lVar25,0);
      JSObject::AddProperty(param_1,puVar17,uVar7,uVar28,0);
      if (lVar24 != 0) {
        JSObject::AddProperty(param_1,puVar17,uVar8,lVar24,0);
      }
      uVar23 = *puVar17;
      uVar27 = *puVar15;
      *(int *)(uVar27 + (long)iVar29 + 7) = (int)uVar23;
      if ((uVar23 & 1) != 0) {
        uVar19 = *(ulong *)((uVar23 & 0xfffffffffffc0000) + 8);
        lVar24 = uVar27 + (long)iVar29 + 7;
        if (((uint)uVar19 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar27,lVar24,uVar23);
          uVar19 = *(ulong *)(uVar23 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar19 & 0x18) != 0) && ((*(byte *)((uVar27 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar27,lVar24,uVar23);
        }
      }
      lVar22 = lVar22 + 0x18;
      iVar29 = iVar29 + 4;
    } while (((uVar26 & 0xffffffff) + (uVar26 & 0xffffffff) * 2) * 8 != lVar22);
  }
  return puVar14;
}

