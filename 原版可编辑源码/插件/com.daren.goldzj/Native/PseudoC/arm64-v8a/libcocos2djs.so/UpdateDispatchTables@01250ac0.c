
/* v8::internal::WasmTableObject::UpdateDispatchTables(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmTableObject>, int,
   v8::internal::Handle<v8::internal::WasmCapiFunction>) */

void v8::internal::WasmTableObject::UpdateDispatchTables
               (Isolate *param_1,ulong *param_2,undefined4 param_3,ulong *param_4)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  ulong *puVar5;
  void *pvVar6;
  ulong *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong uVar12;
  Isolate *pIVar13;
  int iVar14;
  int iVar15;
  char cVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  NativeModule *pNVar21;
  long local_c8;
  long lStack_c0;
  void *local_b8;
  ulong *local_b0;
  ulong *local_a8;
  undefined4 local_a0;
  ulong local_98 [6];
  long local_68;
  ulong extraout_x12;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar20 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(param_1 + 0x95a0);
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar20;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar20);
  }
  local_98[0] = *param_4 & 0xffffffff00000000 | (ulong)*(uint *)(*param_4 + 0xb);
  uVar20 = SharedFunctionInfo::wasm_capi_function_data((SharedFunctionInfo *)local_98);
  uVar20 = uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 0x13);
  iVar14 = *(int *)(uVar20 + 3);
  iVar19 = iVar14 >> 1;
  iVar2 = iVar19 + -1;
  pvVar6 = operator_new__((long)iVar2);
  iVar15 = (int)extraout_x12;
  if (1 < iVar14) {
    uVar12 = 0;
    iVar14 = 0;
    pcVar1 = (char *)(uVar20 + 7);
    cVar16 = *pcVar1;
    uVar20 = extraout_x12;
    if (cVar16 == '\0') goto LAB_01250bd4;
    do {
      *(char *)((long)pvVar6 + (long)iVar14) = cVar16;
      iVar14 = iVar14 + 1;
      while( true ) {
        iVar15 = (int)uVar20;
        uVar12 = uVar12 + 1;
        if ((long)iVar19 <= (long)uVar12) goto LAB_01250bdc;
        cVar16 = pcVar1[uVar12];
        if (cVar16 != '\0') break;
LAB_01250bd4:
        uVar20 = uVar12 & 0xffffffff;
      }
    } while( true );
  }
LAB_01250bdc:
  local_c8 = (long)iVar15;
  lStack_c0 = (long)(iVar2 - iVar15);
  uVar20 = *puVar5;
  local_b8 = pvVar6;
  if (1 < *(int *)(uVar20 + 3)) {
    iVar19 = 0;
    lVar17 = 0;
    lVar18 = 0x400000000;
    do {
      iVar14 = *(int *)(uVar20 + 7 + (lVar18 >> 0x20)) >> 1;
      uVar20 = uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 7 + (long)iVar19);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(param_1 + 0x95a0);
        if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar20;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar20);
        uVar20 = *puVar7;
      }
      pNVar21 = (NativeModule *)
                **(undefined8 **)
                  (*(long *)((uVar20 & 0xffffffff00000000 |
                             (ulong)*(uint *)((uVar20 & 0xffffffff00000000 |
                                              (ulong)*(uint *)(uVar20 + 0x6f)) + 0xb)) + 3) + 0x18);
      local_98[0] = *param_4 & 0xffffffff00000000 | (ulong)*(uint *)(*param_4 + 0xb);
      lVar8 = SharedFunctionInfo::wasm_capi_function_data((SharedFunctionInfo *)local_98);
      uVar20 = *(ulong *)(lVar8 + 3);
      wasm::WasmCodeRefScope::WasmCodeRefScope((WasmCodeRefScope *)local_98);
      puVar9 = (undefined8 *)
               compiler::CompileWasmCapiCallWrapper
                         (*(WasmEngine **)(param_1 + 0xc770),pNVar21,(Signature *)&local_c8,uVar20);
      StatsCounterThreadSafe::Increment
                ((StatsCounterThreadSafe *)(*(long *)(param_1 + 0x9520) + 0x2020),
                 *(int *)(puVar9 + 1));
      StatsCounterThreadSafe::Increment
                ((StatsCounterThreadSafe *)(*(long *)(param_1 + 0x9520) + 0x2060),
                 *(int *)(puVar9 + 3));
      puVar10 = (undefined8 *)Factory::NewTuple2((Factory *)param_1,puVar7,param_4,1);
      uVar20 = *puVar7 & 0xffffffff00000000;
      uVar4 = wasm::SignatureMap::Find
                        ((SignatureMap *)
                         (*(long *)(**(long **)(*(long *)((uVar20 | *(uint *)((uVar20 | *(uint *)(*
                                                  puVar7 + 0x6f)) + 0xb)) + 3) + 0x18) + 200) +
                         0x148),(Signature *)&local_c8);
      if (iVar14 == 0) {
        puVar11 = (ulong *)0x0;
        local_b0 = puVar7;
      }
      else {
        local_b0 = (ulong *)0x0;
        pIVar13 = (Isolate *)(*puVar7 & 0xffffffff00000000);
        uVar20 = (ulong)pIVar13 |
                 (ulong)*(uint *)(((ulong)pIVar13 | (ulong)*(uint *)(*puVar7 + 0x93)) +
                                  (long)(iVar14 << 2) + 7);
        if (*(CanonicalHandleScope **)((ulong)pIVar13 | 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar11 = *(ulong **)(pIVar13 + 0x95a0);
          if (puVar11 == *(ulong **)(pIVar13 + 0x95a8)) {
            puVar11 = (ulong *)HandleScope::Extend(pIVar13);
          }
          *(ulong **)(pIVar13 + 0x95a0) = puVar11 + 1;
          *puVar11 = uVar20;
        }
        else {
          puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)((ulong)pIVar13 | 0x95b8),uVar20);
        }
      }
      local_a8 = puVar11;
      local_a0 = param_3;
      IndirectFunctionTableEntry::Set
                ((IndirectFunctionTableEntry *)&local_b0,uVar4,*puVar9,*puVar10);
      wasm::WasmCodeRefScope::~WasmCodeRefScope((WasmCodeRefScope *)local_98);
      lVar17 = lVar17 + 3;
      iVar19 = iVar19 + 0xc;
      uVar20 = *puVar5;
      lVar18 = lVar18 + 0xc00000000;
    } while (lVar17 < *(int *)(uVar20 + 3) >> 1);
  }
  operator_delete__(pvVar6);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

