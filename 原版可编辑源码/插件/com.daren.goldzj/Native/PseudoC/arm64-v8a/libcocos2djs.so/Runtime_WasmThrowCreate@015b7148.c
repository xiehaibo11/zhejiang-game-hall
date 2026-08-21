
/* v8::internal::Runtime_WasmThrowCreate(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_WasmThrowCreate(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  StackFrameIterator aSStack_608 [1416];
  WasmCompiledFrame *local_80;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (TracingFlags::runtime_stats == 0) {
    pIVar1 = param_3 + 0x95a0;
    lVar2 = *(long *)pIVar1;
    lVar3 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    StackFrameIterator::StackFrameIterator(aSStack_608,param_3,(ThreadLocalTop *)(param_3 + 0x2bb8))
    ;
    StackFrameIterator::Advance(aSStack_608);
    uVar5 = WasmCompiledFrame::wasm_instance(local_80);
    *(ulong *)(param_3 + 0x2bc8) = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0x77);
    uVar5 = *param_2;
    if (((uVar5 & 1) == 0) ||
       (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x72)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsWasmExceptionTag()");
    }
    uVar10 = param_2[-1];
    if ((uVar10 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsSmi()");
    }
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)pIVar1;
      if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar6 + 1;
      *puVar6 = uVar5;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar5);
    }
    puVar7 = (undefined8 *)Factory::NewWasmRuntimeError((Factory *)param_3,0x163,0,0,0);
    lVar8 = Object::SetProperty(param_3,puVar7,param_3 + 0xbf8,puVar6,0,1);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "!Object::SetProperty(isolate, exception, isolate->factory()->wasm_exception_tag_symbol(), tag, StoreOrigin::kMaybeKeyed, Just(ShouldThrow::kThrowOnError)) .is_null()"
              );
    }
    uVar9 = Factory::NewFixedArray((Factory *)param_3,(int)uVar10 >> 1,0);
    lVar8 = Object::SetProperty(param_3,puVar7,param_3 + 0xc00,uVar9,0,1);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "!Object::SetProperty(isolate, exception, isolate->factory()->wasm_exception_values_symbol(), values, StoreOrigin::kMaybeKeyed, Just(ShouldThrow::kThrowOnError)) .is_null()"
              );
    }
    uVar9 = *puVar7;
    *(long *)pIVar1 = lVar2;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar3) {
      *(long *)(param_3 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(param_3);
    }
    if (*(long *)(lVar4 + 0x28) != local_68) {
LAB_015b7324:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    uVar9 = FUN_015b7378(param_1,param_2,param_3);
    if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_015b7324;
  }
  return uVar9;
}

