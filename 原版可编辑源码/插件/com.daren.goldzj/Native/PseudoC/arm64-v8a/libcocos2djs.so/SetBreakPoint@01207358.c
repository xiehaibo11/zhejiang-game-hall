
/* v8::internal::WasmScript::SetBreakPoint(v8::internal::Handle<v8::internal::Script>, int*,
   v8::internal::Handle<v8::internal::BreakPoint>) */

void v8::internal::WasmScript::SetBreakPoint(ulong *param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  CanonicalHandleScope *pCVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long lVar10;
  Isolate *pIVar11;
  WasmModule *pWVar12;
  long lVar13;
  uchar *puVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  undefined **local_138;
  int local_130;
  uchar *local_128;
  uchar *puStack_120;
  byte local_108;
  void *local_f8;
  undefined4 local_f0 [2];
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  Zone *pZStack_d0;
  undefined **local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  Zone aZStack_b0 [64];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  pIVar11 = (Isolate *)(*param_1 & 0xffffffff00000000);
  pWVar12 = *(WasmModule **)
             (**(long **)(*(long *)(((ulong)pIVar11 | (ulong)*(uint *)(*param_1 + 0x27)) + 3) + 0x18
                         ) + 200);
  uVar3 = wasm::GetContainingWasmFunction(pWVar12,*param_2);
  if (-1 < (int)uVar3) {
    piVar17 = (int *)(*(long *)(pWVar12 + 0x88) + (ulong)uVar3 * 0x20 + 0x10);
    uVar1 = *param_2 - *piVar17;
    lVar13 = **(long **)(*(long *)((*param_1 & 0xffffffff00000000 |
                                   (ulong)*(uint *)(*param_1 + 0x27)) + 3) + 0x18);
    local_c8 = &PTR__AccountingAllocator_01cbced0;
    uStack_c0 = 0;
    local_b8 = 0;
    Zone::Zone(aZStack_b0,(AccountingAllocator *)&local_c8,"../../src/wasm/wasm-debug.cc:713");
    local_f0[0] = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    lVar10 = **(long **)(lVar13 + 0xe0);
    lVar13 = *(long *)(*(long *)(lVar13 + 200) + 0x88) + (ulong)uVar3 * 0x20;
    uVar15 = *(uint *)(lVar13 + 0x10);
    pZStack_d0 = aZStack_b0;
    wasm::BytecodeIterator::BytecodeIterator
              ((BytecodeIterator *)&local_138,(uchar *)(lVar10 + (ulong)uVar15),
               (uchar *)(lVar10 + (ulong)(*(int *)(lVar13 + 0x14) + uVar15)),
               (BodyLocalDecls *)local_f0);
    if (((int)uVar1 < 0) || (puVar14 = local_128, puStack_120 == local_128)) {
      uVar15 = 0;
    }
    else {
      do {
        uVar15 = (int)puVar14 - local_130;
        if (uVar1 <= uVar15) goto LAB_012074bc;
        uVar4 = wasm::OpcodeLength(puVar14,puStack_120);
        puVar14 = puVar14 + (uVar4 & 0xffffffff);
      } while (puStack_120 != puVar14);
      uVar15 = 0;
    }
LAB_012074bc:
    local_138 = &PTR__Decoder_01cbc3a8;
    if ((local_108 & 1) != 0) {
      operator_delete(local_f8);
    }
    if (local_e8 != 0) {
      local_e0 = local_e8;
    }
    Zone::~Zone(aZStack_b0);
    AccountingAllocator::~AccountingAllocator((AccountingAllocator *)&local_c8);
    if (uVar15 != 0) {
      uVar1 = *piVar17 + uVar15;
      *param_2 = uVar1;
      AddBreakpointToInfo(param_1,uVar1,param_3);
      pCVar5 = *(CanonicalHandleScope **)(pIVar11 + 0x95b8);
      uVar4 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0x2b);
      if (pCVar5 == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)(pIVar11 + 0x95a0);
        if (puVar6 == *(ulong **)(pIVar11 + 0x95a8)) {
          puVar6 = (ulong *)HandleScope::Extend(pIVar11);
        }
        *(ulong **)(pIVar11 + 0x95a0) = puVar6 + 1;
        *puVar6 = uVar4;
      }
      else {
        puVar6 = (ulong *)CanonicalHandleScope::Lookup(pCVar5,uVar4);
        uVar4 = *puVar6;
      }
      if (1 < *(int *)(uVar4 + 7)) {
        iVar16 = 0;
        lVar13 = 0;
        do {
          uVar1 = *(uint *)(uVar4 + (long)iVar16 + 0xb);
          if ((uVar1 != 3) && (((ulong)uVar1 & 3) == 3)) {
            pCVar5 = *(CanonicalHandleScope **)(pIVar11 + 0x95b8);
            uVar4 = (ulong)uVar1 & 0xfffffffffffffffd | uVar4 & 0xffffffff00000000;
            if (pCVar5 == (CanonicalHandleScope *)0x0) {
              puVar8 = *(ulong **)(pIVar11 + 0x95a0);
              if (puVar8 == *(ulong **)(pIVar11 + 0x95a8)) {
                puVar8 = (ulong *)HandleScope::Extend(pIVar11);
              }
              *(ulong **)(pIVar11 + 0x95a0) = puVar8 + 1;
              *puVar8 = uVar4;
            }
            else {
              CanonicalHandleScope::Lookup(pCVar5,uVar4);
            }
            lVar10 = WasmInstanceObject::GetOrCreateDebugInfo();
            local_138 = (undefined **)CONCAT44(local_138._4_4_,uVar3);
            lVar7 = FUN_01205bac((ulong)*(uint *)(lVar10 + 4) << 0x20,lVar10);
            WasmDebugInfo::RedirectToInterpreter(lVar10,&local_138,1);
            wasm::WasmInterpreter::SetBreakpoint
                      ((WasmInterpreter *)(lVar7 + 0x10),
                       (WasmFunction *)
                       (*(long *)(*(long *)(lVar7 + 8) + 0x88) + (long)(int)local_138 * 0x20),
                       (long)(int)uVar15,true);
            uVar4 = *puVar6;
          }
          lVar13 = lVar13 + 1;
          iVar16 = iVar16 + 4;
        } while (lVar13 < *(int *)(uVar4 + 7) >> 1);
      }
      uVar9 = 1;
      goto LAB_01207694;
    }
  }
  uVar9 = 0;
LAB_01207694:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}

