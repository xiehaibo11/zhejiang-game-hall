
/* v8::internal::Runtime_WasmNumCodeSpaces(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_WasmNumCodeSpaces(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar6 = FUN_015ad3c8(param_1,param_2,param_3);
    return uVar6;
  }
  pIVar1 = param_3 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if ((uVar6 & 1) != 0) {
    uVar5 = uVar6 & 0xffffffff00000000;
    if (0xa9 < *(ushort *)((uVar5 | 7) + (ulong)*(uint *)(uVar6 - 1))) {
      if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x434) {
        uVar6 = uVar5 | *(uint *)(uVar6 + 0x6f);
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar4 = puVar2;
          if (puVar3 == puVar2) {
            puVar4 = (ulong *)HandleScope::Extend(param_3);
          }
          *(ulong **)pIVar1 = puVar4 + 1;
          *puVar4 = uVar6;
        }
        else {
          puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6);
          uVar6 = *puVar4;
        }
        uVar5 = uVar6 & 0xffffffff00000000;
      }
      uVar6 = wasm::NativeModule::GetNumberOfCodeSpacesForTesting
                        ((NativeModule *)
                         **(undefined8 **)(*(long *)((uVar5 | *(uint *)(uVar6 + 0xb)) + 3) + 0x18));
      if (uVar6 >> 0x1e == 0) {
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar4 = *(ulong **)pIVar1;
          if (puVar4 == *(ulong **)(param_3 + 0x95a8)) {
            puVar4 = (ulong *)HandleScope::Extend(param_3);
          }
          *(ulong **)pIVar1 = puVar4 + 1;
          *puVar4 = uVar6 << 1;
        }
        else {
          puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6 << 1);
        }
      }
      else {
        puVar4 = (ulong *)Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                    ((Factory *)param_3);
        *(double *)(*puVar4 + 3) = (double)uVar6;
      }
      uVar6 = *puVar4;
      *(ulong **)pIVar1 = puVar2;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
        *(ulong **)(param_3 + 0x95a8) = puVar3;
        HandleScope::DeleteExtensions(param_3);
      }
      return uVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSObject()");
}

