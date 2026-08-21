
/* v8::internal::wasm::GetExports(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmModuleObject>) */

ulong * v8::internal::wasm::GetExports(Isolate *param_1,ulong *param_2)

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
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uVar26;
  long lVar27;
  uint local_d0;
  uint local_cc;
  char *local_70;
  undefined8 uStack_68;
  
  pIVar1 = param_1 + 0x95a0;
  uVar4 = WasmFeatures::FromIsolate(param_1);
  uStack_68 = __strlen_chk("name",5);
  local_70 = "name";
  uVar5 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_70);
  uStack_68 = __strlen_chk("kind",5);
  local_70 = "kind";
  uVar6 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_70);
  uStack_68 = __strlen_chk("type",5);
  local_70 = "type";
  uVar7 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_70);
  uStack_68 = __strlen_chk("function",9);
  local_70 = "function";
  uVar8 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_70);
  uStack_68 = __strlen_chk("table",6);
  local_70 = "table";
  uVar9 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_70);
  uStack_68 = __strlen_chk("memory",7);
  local_70 = "memory";
  uVar10 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_70);
  uStack_68 = __strlen_chk("global",7);
  local_70 = "global";
  uVar11 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_70);
  uStack_68 = __strlen_chk("exception",10);
  local_70 = "exception";
  uVar12 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_70);
  lVar22 = *(long *)(**(long **)(*(long *)((*param_2 & 0xffffffff00000000 |
                                           (ulong)*(uint *)(*param_2 + 0xb)) + 3) + 0x18) + 200);
  uVar24 = *(long *)(lVar22 + 0xf0) - *(long *)(lVar22 + 0xe8);
  puVar13 = (ulong *)Factory::NewJSArray((Factory *)param_1,2,0,0,0,0);
  puVar14 = (ulong *)Factory::NewFixedArray((Factory *)param_1,uVar24 >> 4 & 0xffffffff,0);
  JSObject::EnsureCanContainElements(puVar13,puVar14,*(int *)(*puVar14 + 3) >> 1,1);
  uVar25 = *puVar13;
  uVar20 = *puVar14;
  *(int *)(uVar25 + 7) = (int)uVar20;
  if ((uVar20 & 1) != 0) {
    uVar17 = *(ulong *)((uVar20 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar17 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar25,uVar25 + 7,uVar20);
      uVar17 = *(ulong *)(uVar20 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar17 & 0x18) != 0) && ((*(byte *)((uVar25 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar25,uVar25 + 7,uVar20);
    }
  }
  *(uint *)(*puVar13 + 0xb) = *(uint *)(*puVar14 + 3) & 0xfffffffe;
  *(int *)(*puVar13 + 0xb) = (int)(uVar24 >> 3);
  uVar20 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar20 = uVar20 | *(uint *)((uVar20 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar15 = *(ulong **)pIVar1;
    if (puVar15 == *(ulong **)(param_1 + 0x95a8)) {
      puVar15 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar15 + 1;
    *puVar15 = uVar20;
  }
  else {
    puVar15 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar20);
    uVar20 = *puVar15;
  }
  uVar20 = uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 499);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar15 = *(ulong **)pIVar1;
    if (puVar15 == *(ulong **)(param_1 + 0x95a8)) {
      puVar15 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar15 + 1;
    *puVar15 = uVar20;
  }
  else {
    puVar15 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar20);
  }
  if (0 < (int)(uVar24 >> 4)) {
    iVar19 = 0;
    lVar23 = 0;
    do {
      lVar21 = *(long *)(lVar22 + 0xe8);
      lVar27 = 0;
      uVar26 = uVar12;
      switch(*(undefined1 *)(lVar21 + lVar23 + 8)) {
      case 0:
        uVar26 = uVar8;
        if ((uVar4 >> 8 & 1) == 0) {
          lVar27 = 0;
        }
        else {
          lVar27 = GetTypeForFunction(param_1,*(Signature **)
                                               (*(long *)(lVar22 + 0x88) +
                                               (ulong)*(uint *)(lVar21 + lVar23 + 0xc) * 0x20));
        }
        break;
      case 1:
        uVar26 = uVar9;
        if ((uVar4 >> 8 & 1) == 0) {
          lVar27 = 0;
        }
        else {
          puVar2 = (undefined1 *)
                   (*(long *)(lVar22 + 0xb8) + (ulong)*(uint *)(lVar21 + lVar23 + 0xc) * 0x10);
          if (puVar2[0xc] == '\0') {
            uVar18 = 0;
          }
          else {
            uVar18 = *(uint *)(puVar2 + 8);
            local_cc = uVar18 >> 8;
          }
          lVar27 = GetTypeForTable(param_1,*puVar2,*(undefined4 *)(puVar2 + 4),
                                   (ulong)(puVar2[0xc] != '\0') |
                                   (ulong)(uVar18 & 0xff | local_cc << 8) << 0x20);
        }
        break;
      case 2:
        uVar26 = uVar10;
        if ((uVar4 >> 8 & 1) == 0) {
          lVar27 = 0;
        }
        else {
          bVar3 = *(char *)(lVar22 + 0x11) == '\0';
          if (bVar3) {
            uVar18 = 0;
          }
          else {
            uVar18 = *(uint *)(lVar22 + 0xc);
            local_d0 = uVar18 >> 8;
          }
          lVar27 = GetTypeForMemory(param_1,*(undefined4 *)(lVar22 + 8),
                                    (ulong)!bVar3 | (ulong)(uVar18 & 0xff | local_d0 << 8) << 0x20);
        }
        break;
      case 3:
        uVar26 = uVar11;
        if ((uVar4 >> 8 & 1) == 0) {
          lVar27 = 0;
        }
        else {
          puVar2 = (undefined1 *)
                   (*(long *)(lVar22 + 0x18) + (ulong)*(uint *)(lVar21 + lVar23 + 0xc) * 0x20);
          lVar27 = GetTypeForGlobal(param_1,puVar2[1],*puVar2);
        }
        break;
      case 4:
        break;
      default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      puVar16 = (ulong *)Factory::NewJSObject((Factory *)param_1,puVar15,0);
      lVar21 = WasmModuleObject::ExtractUtf8StringFromModuleBytes
                         (param_1,param_2,*(undefined8 *)(lVar21 + lVar23));
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      JSObject::AddProperty(param_1,puVar16,uVar5,lVar21,0);
      JSObject::AddProperty(param_1,puVar16,uVar6,uVar26,0);
      if (lVar27 != 0) {
        JSObject::AddProperty(param_1,puVar16,uVar7,lVar27,0);
      }
      uVar20 = *puVar16;
      uVar25 = *puVar14;
      *(int *)(uVar25 + (long)iVar19 + 7) = (int)uVar20;
      if ((uVar20 & 1) != 0) {
        uVar17 = *(ulong *)((uVar20 & 0xfffffffffffc0000) + 8);
        lVar27 = uVar25 + (long)iVar19 + 7;
        if (((uint)uVar17 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar25,lVar27,uVar20);
          uVar17 = *(ulong *)(uVar20 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar17 & 0x18) != 0) && ((*(byte *)((uVar25 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar25,lVar27,uVar20);
        }
      }
      lVar23 = lVar23 + 0x10;
      iVar19 = iVar19 + 4;
    } while ((uVar24 >> 4 & 0xffffffff) * 0x10 - lVar23 != 0);
  }
  return puVar13;
}

