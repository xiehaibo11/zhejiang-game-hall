
/* v8::internal::wasm::InstanceBuilder::ProcessImportedWasmGlobalObject(v8::internal::Handle<v8::internal::WasmInstanceObject>,
   int, v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::String>,
   v8::internal::wasm::WasmGlobal const&, v8::internal::Handle<v8::internal::WasmGlobalObject>) */

undefined8
v8::internal::wasm::InstanceBuilder::ProcessImportedWasmGlobalObject
          (InstanceBuilder *param_1,ulong *param_2)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  ulong *puVar8;
  char *pcVar9;
  byte *in_x5;
  ulong *in_x6;
  uint uVar10;
  Isolate *pIVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  
  uVar14 = *in_x6;
  bVar4 = in_x5[1];
  uVar3 = *(uint *)(uVar14 + 0x17);
  if ((uint)bVar4 == (uVar3 >> 9 & 1)) {
    bVar5 = *in_x5;
    uVar6 = uVar3 >> 1;
    uVar10 = (uint)bVar5;
    if ((uint)bVar5 == (uVar6 & 0xff)) {
      bVar7 = true;
    }
    else {
      uVar3 = uVar3 >> 1 & 0xff;
      bVar7 = true;
      if ((2 < (uVar6 - 7 & 0xff) || bVar5 != 6) && (uVar3 != 8 || uVar10 != 7)) {
        bVar7 = uVar3 == 8 && uVar10 == 9;
      }
    }
    bVar2 = uVar10 == (uVar6 & 0xff);
    if (bVar4 == 0) {
      bVar2 = bVar7;
    }
    if (bVar2) {
      if (bVar4 == 0) {
        WriteGlobalValue(param_1,in_x5,in_x6);
      }
      else {
        if ((uVar10 < 10) && ((1 << (ulong)(uVar10 & 0x1f) & 0x2c0U) != 0)) {
          pIVar11 = *(Isolate **)param_1;
          uVar14 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 0xf);
          if (*(CanonicalHandleScope **)(pIVar11 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar8 = *(ulong **)(pIVar11 + 0x95a0);
            if (puVar8 == *(ulong **)(pIVar11 + 0x95a8)) {
              puVar8 = (ulong *)HandleScope::Extend(pIVar11);
            }
            *(ulong **)(pIVar11 + 0x95a0) = puVar8 + 1;
            *puVar8 = uVar14;
          }
          else {
            puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar11 + 0x95b8),uVar14);
          }
          uVar14 = *puVar8;
          lVar17 = (long)((ulong)*(uint *)(*in_x6 + 0x13) << 0x20) >> 0x21;
        }
        else {
          pIVar11 = *(Isolate **)param_1;
          uVar14 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 0xb);
          if (*(CanonicalHandleScope **)(pIVar11 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar8 = *(ulong **)(pIVar11 + 0x95a0);
            if (puVar8 == *(ulong **)(pIVar11 + 0x95a8)) {
              puVar8 = (ulong *)HandleScope::Extend(pIVar11);
            }
            *(ulong **)(pIVar11 + 0x95a0) = puVar8 + 1;
            *puVar8 = uVar14;
          }
          else {
            puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar11 + 0x95b8),uVar14);
          }
          if (puVar8 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","(location_) != nullptr");
          }
          uVar14 = *puVar8;
          lVar17 = *(long *)(uVar14 + 0x13) + (long)(*(int *)(*in_x6 + 0x13) >> 1);
        }
        uVar15 = (ulong)*(uint *)(*param_2 + 0x87);
        uVar12 = *param_2 & 0xffffffff00000000;
        uVar16 = uVar12 | uVar15;
        lVar1 = uVar16 + (long)(*(int *)(in_x5 + 0x18) << 2);
        *(int *)(lVar1 + 7) = (int)uVar14;
        if ((uVar14 & 1) != 0) {
          uVar13 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
          lVar1 = lVar1 + 7;
          if (((uint)uVar13 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar16,lVar1,uVar14);
            uVar13 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar13 & 0x18) != 0) &&
             ((*(byte *)((uVar12 | uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(uVar16,lVar1,uVar14);
          }
        }
        *(long *)(*(long *)(*param_2 + 0x57) + (ulong)*(uint *)(in_x5 + 0x18) * 8) = lVar17;
      }
      return 1;
    }
    pcVar9 = "imported global does not match the expected type";
  }
  else {
    pcVar9 = "imported global does not match the expected mutability";
  }
  ReportLinkError(param_1,pcVar9);
  return 0;
}

