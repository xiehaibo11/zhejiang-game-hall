
/* v8::internal::SourceTextModule::GetAsyncCycleRoot(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SourceTextModule>) */

ulong * v8::internal::SourceTextModule::GetAsyncCycleRoot(Isolate *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  if ((-1 < *(int *)(uVar1 + 0xb)) && (4 < (uint)(*(int *)(uVar1 + 0xb) >> 1))) {
    uVar2 = uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0x2f);
    if (((1 < *(uint *)(uVar2 + 3)) && (1 < *(uint *)(uVar2 + 7))) &&
       (*(int *)(uVar1 + 0x3b) >> 1 < *(int *)(uVar1 + 0x37) >> 1)) {
      do {
        uVar1 = uVar1 & 0xffffffff00000000 |
                (ulong)*(uint *)((uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0x2f)) + 0xb
                                );
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          param_2 = *(ulong **)(param_1 + 0x95a0);
          if (param_2 == *(ulong **)(param_1 + 0x95a8)) {
            param_2 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)(param_1 + 0x95a0) = param_2 + 1;
          *param_2 = uVar1;
        }
        else {
          param_2 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar1);
        }
        uVar1 = *param_2;
      } while (*(int *)(uVar1 + 0x3b) >> 1 < *(int *)(uVar1 + 0x37) >> 1);
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","module->status() >= kEvaluated");
}

