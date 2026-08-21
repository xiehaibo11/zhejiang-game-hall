
/* v8::internal::Runtime_FunctionGetScriptSource(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_FunctionGetScriptSource(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar6 = FUN_01560700(param_1,param_2,param_3);
    return uVar6;
  }
  pIVar1 = param_3 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if ((uVar6 & 1) == 0) {
LAB_015606ec:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
  }
  uVar5 = uVar6 & 0xffffffff00000000;
  uVar7 = uVar5 | 7;
  if (*(ushort *)(uVar7 + *(uint *)(uVar6 - 1)) < 0xa9) goto LAB_015606ec;
  if (*(short *)(uVar7 + *(uint *)(uVar6 - 1)) == 0x439) {
    uVar6 = uVar5 | *(uint *)((uVar5 | *(uint *)(uVar6 + 0xb)) + 0xf);
    if (*(short *)(uVar7 + *(uint *)(uVar6 - 1)) == 0x5b) {
      uVar6 = uVar5 | *(uint *)(uVar6 + 0xb);
    }
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
    if (((uVar6 & 1) != 0) &&
       (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x65)) {
      uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 3);
      goto LAB_01560694;
    }
  }
  uVar6 = *(ulong *)(param_3 + 0xa0);
LAB_01560694:
  *(ulong **)pIVar1 = puVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
    *(ulong **)(param_3 + 0x95a8) = puVar3;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar6;
}

