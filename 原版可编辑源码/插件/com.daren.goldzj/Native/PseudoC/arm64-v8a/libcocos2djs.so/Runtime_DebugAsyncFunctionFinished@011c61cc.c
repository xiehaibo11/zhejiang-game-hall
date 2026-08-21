
/* v8::internal::Runtime_DebugAsyncFunctionFinished(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_DebugAsyncFunctionFinished(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar6 = FUN_011c6318(param_1,param_2,param_3);
    return uVar6;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if ((((uVar6 & 1) != 0) &&
      (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x43)) &&
     ((*(uint *)(uVar6 + 0x17) >> 1 & 0xff) < 2)) {
    iVar3 = *(int *)(param_3 + 0xb8);
    puVar5 = param_2 + -1;
    uVar4 = *puVar5;
    if (((uVar4 & 1) != 0) &&
       (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x42d)) {
      Isolate::PopPromise(param_3);
      if ((int)uVar6 == iVar3) {
        Isolate::OnAsyncFunctionStateChanged(param_3,puVar5,6);
      }
      uVar6 = *puVar5;
      *(undefined8 *)(param_3 + 0x95a0) = uVar1;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar2) {
        *(long *)(param_3 + 0x95a8) = lVar2;
        HandleScope::DeleteExtensions(param_3);
      }
      return uVar6;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsJSPromise()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsBoolean()");
}

