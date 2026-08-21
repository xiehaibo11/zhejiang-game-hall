
/* v8::internal::wasm::InstanceBuilder::ProcessExports(v8::internal::Handle<v8::internal::WasmInstanceObject>)
    */

void __thiscall
v8::internal::wasm::InstanceBuilder::ProcessExports(InstanceBuilder *this,ulong *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  uint *puVar3;
  long lVar4;
  char *pcVar5;
  bool bVar6;
  char cVar7;
  ulong uVar8;
  Isolate *pIVar9;
  ulong *puVar10;
  size_t sVar11;
  ulong *puVar12;
  ulong *puVar13;
  CanonicalHandleScope *this_00;
  ulong *puVar14;
  uint uVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  uint *puVar21;
  undefined8 *puVar22;
  Factory *this_01;
  uint *puVar23;
  undefined8 uVar24;
  undefined1 auVar25 [12];
  ulong *local_100;
  ulong local_e8 [2];
  undefined1 local_d8 [8];
  ulong *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  char *local_b0;
  uint local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined7 uStack_8c;
  undefined1 local_85;
  undefined7 uStack_84;
  undefined8 uStack_7d;
  undefined2 local_75;
  undefined1 local_73;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  lVar17 = *(long *)(this + 0x10);
  if (*(int *)(lVar17 + 0x48) == 0) {
    pcVar1 = *(char **)(lVar17 + 0xb8);
    do {
      if (pcVar1 == *(char **)(lVar17 + 0xc0)) goto LAB_015f86e8;
      cVar7 = *pcVar1;
      pcVar1 = pcVar1 + 0x10;
    } while (cVar7 != '\a');
  }
  uVar19 = (*(long *)(lVar17 + 0xd8) - *(long *)(lVar17 + 0xd0) >> 3) * -0x5555555555555555;
  if (0 < (int)uVar19) {
    lVar20 = 0;
    do {
      lVar17 = *(long *)(lVar17 + 0xd0);
      if (*(char *)(lVar17 + lVar20 + 0x10) == '\0') {
        puVar22 = *(undefined8 **)(*(long *)(this + 0x70) + lVar20 + 0x10);
        uVar8 = WasmExternalFunction::IsWasmExternalFunction(*puVar22);
        if ((uVar8 & 1) != 0) {
          WasmInstanceObject::SetWasmExternalFunction
                    (*(undefined8 *)this,param_2,*(undefined4 *)(lVar17 + lVar20 + 0x14),puVar22);
        }
      }
      lVar17 = *(long *)(this + 0x10);
      lVar20 = lVar20 + 0x18;
    } while (((uVar19 & 0xffffffff) + (uVar19 & 0xffffffff) * 2) * 8 - lVar20 != 0);
  }
LAB_015f86e8:
  if (*(byte *)(lVar17 + 0x178) - 1 < 2) {
    pIVar9 = *(Isolate **)this;
    uVar19 = *(ulong *)(pIVar9 + 0x2bc8) & 0xffffffff00000000;
    uVar19 = uVar19 | *(uint *)((uVar19 | *(uint *)(*(ulong *)(pIVar9 + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar10 = *(ulong **)(pIVar9 + 0x95a0);
      if (puVar10 == *(ulong **)(pIVar9 + 0x95a8)) {
        puVar10 = (ulong *)HandleScope::Extend(pIVar9);
      }
      *(ulong **)(pIVar9 + 0x95a0) = puVar10 + 1;
      *puVar10 = uVar19;
    }
    else {
      puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar19);
      uVar19 = *puVar10;
    }
    pIVar9 = *(Isolate **)this;
    uVar19 = uVar19 & 0xffffffff00000000 | (ulong)*(uint *)(uVar19 + 499);
    if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar10 = *(ulong **)(pIVar9 + 0x95a0);
      if (puVar10 == *(ulong **)(pIVar9 + 0x95a8)) {
        puVar10 = (ulong *)HandleScope::Extend(pIVar9);
      }
      *(ulong **)(pIVar9 + 0x95a0) = puVar10 + 1;
      *puVar10 = uVar19;
    }
    else {
      puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar19);
    }
    puVar10 = (ulong *)Factory::NewJSObject(*(Factory **)this,puVar10,0);
    this_01 = *(Factory **)this;
    sVar11 = strlen("__single_function__");
    local_a8 = (uint)sVar11;
    local_a4 = (undefined4)(sVar11 >> 0x20);
    local_b0 = "__single_function__";
    local_100 = (ulong *)Factory::InternalizeUtf8String(this_01,(Vector *)&local_b0);
    bVar6 = true;
  }
  else {
    if (*(byte *)(lVar17 + 0x178) != 0) {
switchD_015f88f8_default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    puVar10 = (ulong *)Factory::NewJSObjectWithNullProto(*(Factory **)this);
    local_100 = (ulong *)0x0;
    bVar6 = false;
  }
  uVar8 = *param_2;
  uVar19 = *puVar10;
  *(int *)(uVar8 + 0x73) = (int)uVar19;
  if ((uVar19 & 1) != 0) {
    uVar18 = *(ulong *)((uVar19 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar18 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 0x73,uVar19);
      uVar18 = *(ulong *)(uVar19 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar18 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0x73,uVar19);
    }
  }
  uStack_c8 = 0;
  local_d0 = (ulong *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  local_d8[0] = 0x3f;
  if (!bVar6) {
    local_d8[0] = 0x2b;
  }
  lVar17 = *(long *)(this + 0x10);
  puVar3 = *(uint **)(lVar17 + 0xf0);
  if (*(uint **)(lVar17 + 0xe8) != puVar3) {
    puVar23 = *(uint **)(lVar17 + 0xe8) + 3;
    do {
      puVar12 = (ulong *)WasmModuleObject::ExtractUtf8StringFromModuleBytes
                                   (*(undefined8 *)this,*(undefined8 *)(this + 0x20),
                                    *(undefined8 *)(puVar23 + -3));
      if (puVar12 == (ulong *)0x0) {
LAB_015f8ebc:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      puVar16 = puVar10;
      switch((char)puVar23[-1]) {
      case '\0':
        local_d0 = (ulong *)WasmInstanceObject::GetOrCreateWasmExternalFunction
                                      (*(undefined8 *)this,param_2,*puVar23);
        puVar13 = local_d0;
        if (bVar6) {
          if (local_100 == (ulong *)0x0) goto LAB_015f8ebc;
          if (((puVar12 == local_100) || (uVar19 = *puVar12, uVar19 == *local_100)) ||
             (((0x1f < *(ushort *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1))
               || (0x1f < *(ushort *)
                           ((*local_100 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*local_100 - 1)
                           ))) &&
              (uVar19 = String::SlowEquals(*(undefined8 *)this,puVar12,local_100),
              puVar13 = local_d0, (uVar19 & 1) != 0)))) {
            puVar16 = param_2;
            puVar13 = local_d0;
          }
        }
        break;
      case '\x01':
        uVar19 = *param_2 & 0xffffffff00000000;
        pIVar9 = *(Isolate **)this;
        uVar19 = uVar19 | *(uint *)((uVar19 | *(uint *)(*param_2 + 0x8f)) +
                                    (long)(int)(*puVar23 << 2) + 7);
        this_00 = *(CanonicalHandleScope **)(pIVar9 + 0x95b8);
        if (this_00 == (CanonicalHandleScope *)0x0) goto LAB_015f8aa8;
LAB_015f8a18:
        puVar13 = (ulong *)CanonicalHandleScope::Lookup(this_00,uVar19);
        break;
      case '\x02':
        pIVar9 = *(Isolate **)this;
        this_00 = *(CanonicalHandleScope **)(pIVar9 + 0x95b8);
        uVar19 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x7b);
        if (this_00 != (CanonicalHandleScope *)0x0) goto LAB_015f8a18;
LAB_015f8aa8:
        puVar13 = *(ulong **)(pIVar9 + 0x95a0);
        if (puVar13 == *(ulong **)(pIVar9 + 0x95a8)) {
          puVar13 = (ulong *)HandleScope::Extend(pIVar9);
        }
        *(ulong **)(pIVar9 + 0x95a0) = puVar13 + 1;
        *puVar13 = uVar19;
        break;
      case '\x03':
        uVar19 = (ulong)*puVar23;
        lVar17 = *(long *)(*(long *)(this + 0x10) + 0x18);
        pbVar2 = (byte *)(lVar17 + uVar19 * 0x20);
        if ((pbVar2[1] == 0) || (pbVar2[0x1c] == 0)) {
          if ((*pbVar2 < 10) && ((1 << (ulong)(*pbVar2 & 0x1f) & 0x2c0U) != 0)) {
            pIVar9 = *(Isolate **)this;
            uVar8 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x83);
            if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar14 = *(ulong **)(pIVar9 + 0x95a0);
              if (puVar14 == *(ulong **)(pIVar9 + 0x95a8)) {
                puVar14 = (ulong *)HandleScope::Extend(pIVar9);
              }
              puVar13 = (ulong *)0x0;
              *(ulong **)(pIVar9 + 0x95a0) = puVar14 + 1;
              *puVar14 = uVar8;
            }
            else {
              puVar14 = (ulong *)CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar8);
              puVar13 = (ulong *)0x0;
            }
          }
          else {
            pIVar9 = *(Isolate **)this;
            uVar8 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x7f);
            if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar13 = *(ulong **)(pIVar9 + 0x95a0);
              if (puVar13 == *(ulong **)(pIVar9 + 0x95a8)) {
                puVar13 = (ulong *)HandleScope::Extend(pIVar9);
              }
              puVar14 = (ulong *)0x0;
              *(ulong **)(pIVar9 + 0x95a0) = puVar13 + 1;
              *puVar13 = uVar8;
            }
            else {
              puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar8);
              puVar14 = (ulong *)0x0;
            }
          }
          uVar19 = (ulong)*(uint *)(lVar17 + uVar19 * 0x20 + 0x18);
        }
        else {
          pIVar9 = *(Isolate **)this;
          uVar8 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x87);
          if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar13 = *(ulong **)(pIVar9 + 0x95a0);
            if (puVar13 == *(ulong **)(pIVar9 + 0x95a8)) {
              puVar13 = (ulong *)HandleScope::Extend(pIVar9);
            }
            *(ulong **)(pIVar9 + 0x95a0) = puVar13 + 1;
            *puVar13 = uVar8;
          }
          else {
            puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar8);
          }
          if ((*pbVar2 < 10) && ((1 << (ulong)(*pbVar2 & 0x1f) & 0x2c0U) != 0)) {
            puVar21 = (uint *)(lVar17 + uVar19 * 0x20 + 0x18);
            pIVar9 = *(Isolate **)this;
            uVar19 = *puVar13 & 0xffffffff00000000 |
                     (ulong)*(uint *)(*puVar13 + (long)(int)(*puVar21 << 2) + 7);
            if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar14 = *(ulong **)(pIVar9 + 0x95a0);
              if (puVar14 == *(ulong **)(pIVar9 + 0x95a8)) {
                puVar14 = (ulong *)HandleScope::Extend(pIVar9);
              }
              *(ulong **)(pIVar9 + 0x95a0) = puVar14 + 1;
              *puVar14 = uVar19;
            }
            else {
              puVar14 = (ulong *)CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar19);
            }
            puVar13 = (ulong *)0x0;
            uVar19 = *(ulong *)(*(long *)(*param_2 + 0x57) + (ulong)*puVar21 * 8);
          }
          else {
            puVar21 = (uint *)(lVar17 + uVar19 * 0x20 + 0x18);
            pIVar9 = *(Isolate **)this;
            uVar19 = *puVar13 & 0xffffffff00000000 |
                     (ulong)*(uint *)(*puVar13 + (long)(int)(*puVar21 << 2) + 7);
            if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar13 = *(ulong **)(pIVar9 + 0x95a0);
              if (puVar13 == *(ulong **)(pIVar9 + 0x95a8)) {
                puVar13 = (ulong *)HandleScope::Extend(pIVar9);
              }
              *(ulong **)(pIVar9 + 0x95a0) = puVar13 + 1;
              *puVar13 = uVar19;
            }
            else {
              puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar19);
            }
            uVar8 = *(ulong *)(*(long *)(*param_2 + 0x57) + (ulong)*puVar21 * 8);
            uVar18 = *(ulong *)(*puVar13 + 0x13);
            uVar19 = uVar8 - uVar18;
            if ((uVar8 < uVar18) || (uVar18 + *(long *)(*puVar13 + 0xb) <= uVar8)) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.",
                       "global_addr >= backing_store && global_addr < backing_store + buffer_size");
            }
            puVar14 = (ulong *)0x0;
          }
        }
        puVar13 = (ulong *)WasmGlobalObject::New
                                     (*(undefined8 *)this,puVar13,puVar14,*pbVar2,uVar19,pbVar2[1]);
        if (puVar13 == (ulong *)0x0) goto LAB_015f8ebc;
        break;
      case '\x04':
        uVar15 = *puVar23;
        puVar13 = *(ulong **)(*(long *)(this + 0x50) + (ulong)uVar15 * 8);
        if (puVar13 == (ulong *)0x0) {
          lVar17 = *(long *)(*(long *)(this + 0x10) + 0x100);
          uVar19 = *param_2 & 0xffffffff00000000;
          pIVar9 = *(Isolate **)this;
          uVar19 = uVar19 | *(uint *)((uVar19 | *(uint *)(*param_2 + 0x9b)) +
                                      (long)(int)(uVar15 << 2) + 7);
          if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar13 = *(ulong **)(pIVar9 + 0x95a0);
            if (puVar13 == *(ulong **)(pIVar9 + 0x95a8)) {
              puVar13 = (ulong *)HandleScope::Extend(pIVar9);
            }
            *(ulong **)(pIVar9 + 0x95a0) = puVar13 + 1;
            *puVar13 = uVar19;
          }
          else {
            puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar19);
          }
          puVar13 = (ulong *)WasmExceptionObject::New
                                       (*(undefined8 *)this,
                                        *(undefined8 *)(lVar17 + (ulong)uVar15 * 8),puVar13);
          *(ulong **)(*(long *)(this + 0x50) + (ulong)*puVar23 * 8) = puVar13;
        }
        break;
      default:
        goto switchD_015f88f8_default;
      }
      local_d0 = puVar13;
      cVar7 = JSReceiver::DefineOwnProperty(*(undefined8 *)this,puVar16,puVar12,local_d8,1);
      if (cVar7 == '\0') {
        local_e8[0] = *puVar12;
        auVar25 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)local_e8);
        uVar15 = auVar25._8_4_;
        local_b0 = auVar25._0_8_;
        local_a8 = uVar15;
        if (0x31 < (int)uVar15) {
          local_a8 = 0x32;
        }
        if (0x32 < uVar15) {
          uStack_9c = *(undefined8 *)(local_b0 + 8);
          uVar24 = *(undefined8 *)local_b0;
          pcVar5 = local_b0 + 0x18;
          uStack_94 = *(undefined8 *)(local_b0 + 0x10);
          pcVar1 = local_b0 + 0x1f;
          uStack_7d = *(undefined8 *)(local_b0 + 0x27);
          local_b0 = (char *)&local_a4;
          local_75 = 0x2e2e;
          local_73 = 0x2e;
          uStack_84 = (undefined7)((ulong)*(undefined8 *)pcVar1 >> 8);
          uStack_8c = (undefined7)*(undefined8 *)pcVar5;
          local_85 = (undefined1)((ulong)*(undefined8 *)pcVar5 >> 0x38);
          local_a4 = (undefined4)uVar24;
          uStack_a0 = (undefined4)((ulong)uVar24 >> 0x20);
        }
        ErrorThrower::LinkError(*(char **)(this + 0x18),"export of %.*s failed.");
        goto LAB_015f8e8c;
      }
      puVar21 = puVar23 + 1;
      puVar23 = puVar23 + 4;
    } while (puVar21 != puVar3);
    lVar17 = *(long *)(this + 0x10);
  }
  if (*(char *)(lVar17 + 0x178) == '\0') {
    JSReceiver::SetIntegrityLevel(puVar10,5,1);
  }
LAB_015f8e8c:
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

