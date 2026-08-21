
undefined8
FUN_0123efd8(ThreadImpl *param_1,Isolate *param_2,undefined8 param_3,undefined8 *param_4,
            Signature *param_5)

{
  Isolate *pIVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined4 local_1a8 [2];
  undefined1 local_1a0;
  undefined7 uStack_19f;
  byte bStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined1 local_188;
  undefined7 uStack_187;
  byte bStack_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined1 local_170;
  undefined4 uStack_16f;
  undefined3 uStack_16b;
  ulong uStack_168;
  undefined1 local_160;
  undefined1 local_158;
  undefined7 uStack_157;
  byte bStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined1 local_140;
  undefined4 uStack_13f;
  undefined3 uStack_13b;
  ulong uStack_138;
  undefined1 local_130;
  undefined1 auStack_128 [80];
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  long local_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined1 local_a0;
  StackValue local_90;
  undefined4 uStack_8f;
  undefined4 uStack_8b;
  undefined7 uStack_87;
  undefined1 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  uVar15 = *(ulong *)(param_5 + 8);
  local_1a8[0] = v8::internal::wasm::WasmFeatures::FromIsolate(param_2);
  iVar5 = (int)uVar15;
  if ((*(int *)((long)param_4 + 0x3c) == 2) &&
     (uVar6 = v8::internal::wasm::IsJSCompatibleSignature(param_5,(WasmFeatures *)local_1a8),
     (uVar6 & 1) == 0)) {
    lVar14 = *(long *)(param_1 + 0x28);
    if (0 < iVar5) {
      iVar3 = (int)lVar14 - (int)*(undefined8 *)(param_1 + 0x18);
      iVar11 = iVar3 * -0xf0f0f0f;
      uVar4 = *(uint *)(**(ulong **)(param_1 + 0x30) + 3);
      uVar15 = **(ulong **)(param_1 + 0x30) & 0xffffffff00000000;
      lVar14 = (long)iVar11 - (long)(iVar11 - iVar5);
      iVar11 = iVar3 * -0x3c3c3c3c + iVar5 * -4;
      do {
        lVar14 = lVar14 + -1;
        *(undefined4 *)((uVar15 | uVar4) + 7 + (long)iVar11) = *(undefined4 *)(uVar15 + 0xa8);
        iVar11 = iVar11 + 4;
      } while (lVar14 != 0);
      lVar14 = *(long *)(param_1 + 0x28);
    }
    *(long *)(param_1 + 0x28) = lVar14 + (long)iVar5 * -0x11;
    puVar9 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_2,0x15f,0,0,0);
    v8::internal::Isolate::Throw(param_2,*puVar9,0);
    iVar5 = v8::internal::wasm::ThreadImpl::HandleException(param_1,param_2);
    uVar8 = 4;
    if (iVar5 != 1) {
      uVar8 = 5;
    }
  }
  else {
    pIVar1 = param_2 + 0x95a0;
    uVar6 = **(ulong **)(param_1 + 0x10) & 0xffffffff00000000 |
            (ulong)*(uint *)(**(ulong **)(param_1 + 0x10) + 0x8b);
    if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)pIVar1;
      if (puVar7 == *(ulong **)(param_2 + 0x95a8)) {
        puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_2);
      }
      *(ulong **)pIVar1 = puVar7 + 1;
      *puVar7 = uVar6;
    }
    else {
      puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar6);
    }
    uVar8 = v8::internal::WasmDebugInfo::GetCWasmEntry(puVar7,param_5);
    uVar4 = v8::internal::wasm::CWasmArgumentsPacker::TotalSize(param_5);
    local_d8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (undefined1 *)0x0;
    if (uVar4 < 0x51) {
      local_c0 = auStack_128;
    }
    else {
      uVar6 = (ulong)(int)uVar4;
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_c0 = operator_new(uVar6);
      local_c8 = local_c0 + uVar6;
      local_d0 = local_c0;
      do {
        *local_d0 = 0;
        uVar6 = uVar6 - 1;
        local_d0 = local_d0 + 1;
        local_d8 = local_c0;
      } while (uVar6 != 0);
    }
    local_b8 = 0;
    if (0 < iVar5) {
      lVar10 = *(long *)(param_1 + 0x18);
      lVar14 = 0;
      lVar13 = (uVar15 & 0xffffffff) - 1;
      lVar12 = (*(long *)(param_1 + 0x28) - lVar10) - ((long)iVar5 + (long)iVar5 * 0x10);
      do {
        v8::internal::wasm::ThreadImpl::StackValue::ExtractValue
                  ((ThreadImpl *)(lVar10 + lVar12),(ulong)param_1);
        switch(*(undefined1 *)(*(long *)(param_5 + 0x10) + *(long *)param_5 + lVar14)) {
        case 1:
        case 3:
          lVar10 = local_b8 + 4;
          *(undefined4 *)(local_c0 + local_b8) = uStack_8f;
          local_b8 = lVar10;
          if (lVar13 != lVar14) goto LAB_0123f1f4;
          goto LAB_0123f214;
        case 2:
        case 4:
          *(ulong *)(local_c0 + local_b8) = CONCAT44(uStack_8b,uStack_8f);
          break;
        default:
          goto switchD_0123f190_caseD_5;
        case 6:
        case 7:
        case 9:
          *(undefined8 *)(local_c0 + local_b8) = *(undefined8 *)CONCAT44(uStack_8b,uStack_8f);
        }
        local_b8 = local_b8 + 8;
        if (lVar13 == lVar14) break;
LAB_0123f1f4:
        lVar10 = *(long *)(param_1 + 0x18);
        lVar14 = lVar14 + 1;
        lVar12 = lVar12 + 0x11;
      } while( true );
    }
LAB_0123f214:
    v8::internal::Execution::CallWasm(param_2,uVar8,*param_4,param_3,local_c0);
    lVar14 = *(long *)(param_1 + 0x28);
    if (0 < iVar5) {
      iVar3 = (int)lVar14 - (int)*(undefined8 *)(param_1 + 0x18);
      iVar11 = iVar3 * -0xf0f0f0f;
      uVar4 = *(uint *)(**(ulong **)(param_1 + 0x30) + 3);
      uVar15 = **(ulong **)(param_1 + 0x30) & 0xffffffff00000000;
      lVar14 = (long)iVar11 - (long)(iVar11 - iVar5);
      iVar11 = iVar3 * -0x3c3c3c3c + iVar5 * -4;
      do {
        lVar14 = lVar14 + -1;
        *(undefined4 *)((uVar15 | uVar4) + 7 + (long)iVar11) = *(undefined4 *)(uVar15 + 0xa8);
        iVar11 = iVar11 + 4;
      } while (lVar14 != 0);
      lVar14 = *(long *)(param_1 + 0x28);
    }
    *(long *)(param_1 + 0x28) = lVar14 + (long)iVar5 * -0x11;
    if (((*(ulong *)(param_2 + 0x2bd8) & 1) == 0) ||
       ((int)*(ulong *)(param_2 + 0x2bd8) != *(int *)(param_2 + 0xa8))) {
      iVar5 = v8::internal::wasm::ThreadImpl::HandleException(param_1,param_2);
      uVar8 = 4;
      if (iVar5 != 1) {
        uVar8 = 5;
      }
    }
    else {
      local_b8 = 0;
      uVar8 = 3;
      if (*(long *)param_5 != 0) {
        uVar15 = 0;
        do {
          switch(*(undefined1 *)(*(long *)(param_5 + 0x10) + uVar15)) {
          case 1:
            uStack_13f = *(undefined4 *)(local_c0 + local_b8);
            local_140 = 1;
            *(undefined4 *)((undefined8 *)((ulong)&local_140 | 5) + 1) = 0;
            *(undefined8 *)((ulong)&local_140 | 5) = 0;
            local_b0 = CONCAT35(uStack_13b,CONCAT41(uStack_13f,1));
            local_b8 = local_b8 + 4;
            uStack_a8 = uStack_138;
            local_a0 = local_130;
            break;
          case 2:
            local_158 = 2;
            uStack_14f = 0;
            uStack_148 = 0;
            uStack_157 = (undefined7)*(undefined8 *)(local_c0 + local_b8);
            bStack_150 = (byte)((ulong)*(undefined8 *)(local_c0 + local_b8) >> 0x38);
            local_a0 = 0;
            uStack_a8 = (ulong)bStack_150;
            local_b0 = CONCAT71(uStack_157,2);
            local_b8 = local_b8 + 8;
            break;
          case 3:
            uStack_16f = *(undefined4 *)(local_c0 + local_b8);
            local_170 = 3;
            *(undefined4 *)((undefined8 *)((ulong)&local_170 | 5) + 1) = 0;
            *(undefined8 *)((ulong)&local_170 | 5) = 0;
            local_b0 = CONCAT35(uStack_16b,CONCAT41(uStack_16f,3));
            local_b8 = local_b8 + 4;
            uStack_a8 = uStack_168;
            local_a0 = local_160;
            break;
          case 4:
            local_188 = 4;
            uStack_17f = 0;
            uStack_178 = 0;
            uStack_187 = (undefined7)*(undefined8 *)(local_c0 + local_b8);
            bStack_180 = (byte)((ulong)*(undefined8 *)(local_c0 + local_b8) >> 0x38);
            uStack_a8 = (ulong)bStack_180;
            local_b0 = CONCAT71(uStack_187,4);
            local_b8 = local_b8 + 8;
            local_a0 = uStack_178;
            break;
          default:
switchD_0123f190_caseD_5:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unimplemented code");
          case 6:
          case 7:
          case 9:
            lVar14 = local_b8 + 8;
            uVar6 = *(ulong *)(local_c0 + local_b8);
            local_b8 = lVar14;
            if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar7 = *(ulong **)pIVar1;
              if (puVar7 == *(ulong **)(param_2 + 0x95a8)) {
                puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_2);
              }
              *(ulong **)pIVar1 = puVar7 + 1;
              *puVar7 = uVar6;
            }
            else {
              puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar6);
            }
            local_1a0 = 6;
            uStack_197 = 0;
            uStack_190 = 0;
            uStack_19f = SUB87(puVar7,0);
            bStack_198 = (byte)((ulong)puVar7 >> 0x38);
            uStack_a8 = (ulong)bStack_198;
            local_b0 = CONCAT71(uStack_19f,6);
            local_a0 = 0;
          }
          v8::internal::wasm::ThreadImpl::StackValue::StackValue
                    (&local_90,&local_b0,param_1,
                     (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x18)) * -0xf0f0f0f0f0f0f0f);
          puVar9 = *(undefined8 **)(param_1 + 0x28);
          uVar15 = uVar15 + 1;
          *(long *)(param_1 + 0x28) = (long)puVar9 + 0x11;
          *(undefined1 *)(puVar9 + 2) = local_80;
          puVar9[1] = CONCAT71(uStack_87,uStack_8b._3_1_);
          *puVar9 = CONCAT35((undefined3)uStack_8b,CONCAT41(uStack_8f,local_90));
        } while (uVar15 < *(ulong *)param_5);
      }
    }
    if (local_d8 != (undefined1 *)0x0) {
      local_d0 = local_d8;
      operator_delete(local_d8);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

