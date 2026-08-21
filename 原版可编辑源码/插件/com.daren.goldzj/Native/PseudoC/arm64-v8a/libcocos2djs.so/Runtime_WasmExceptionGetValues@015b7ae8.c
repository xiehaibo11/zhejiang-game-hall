
/* v8::internal::Runtime_WasmExceptionGetValues(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_WasmExceptionGetValues(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  Isolate *pIVar7;
  undefined8 uVar8;
  StackFrameIterator aSStack_5f8 [1416];
  WasmCompiledFrame *local_70;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (TracingFlags::runtime_stats != 0) {
    uVar8 = FUN_015b7c60(param_1,param_2,param_3);
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return uVar8;
    }
    goto LAB_015b7c5c;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  StackFrameIterator::StackFrameIterator(aSStack_5f8,param_3,(ThreadLocalTop *)(param_3 + 0x2bb8));
  StackFrameIterator::Advance(aSStack_5f8);
  uVar5 = WasmCompiledFrame::wasm_instance(local_70);
  *(ulong *)(param_3 + 0x2bc8) = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0x77);
  uVar5 = *param_2;
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar1;
    if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar6 + 1;
    *puVar6 = uVar5;
    if ((uVar5 & 1) != 0) goto LAB_015b7bc0;
LAB_015b7be0:
    pIVar7 = param_3 + 0xa0;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar5);
    uVar5 = *puVar6;
    if ((uVar5 & 1) == 0) goto LAB_015b7be0;
LAB_015b7bc0:
    if (*(ushort *)(((ulong)param_3 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0xa9) goto LAB_015b7be0;
    pIVar7 = (Isolate *)WasmExceptionPackage::GetExceptionValues(param_3,puVar6);
  }
  uVar8 = *(undefined8 *)pIVar7;
  *(long *)pIVar1 = lVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    HandleScope::DeleteExtensions(param_3);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return uVar8;
  }
LAB_015b7c5c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

