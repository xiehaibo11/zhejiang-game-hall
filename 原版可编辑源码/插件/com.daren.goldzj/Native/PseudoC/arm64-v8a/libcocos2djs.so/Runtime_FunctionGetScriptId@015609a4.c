
/* v8::internal::Runtime_FunctionGetScriptId(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_FunctionGetScriptId(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar7 = FUN_01560b14(param_1,param_2,param_3);
    return uVar7;
  }
  pIVar1 = param_3 + 0x95a0;
  puVar3 = *(ulong **)pIVar1;
  puVar4 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if ((uVar7 & 1) == 0) {
LAB_01560b00:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
  }
  uVar6 = uVar7 & 0xffffffff00000000;
  uVar8 = uVar6 | 7;
  if (*(ushort *)(uVar8 + *(uint *)(uVar7 - 1)) < 0xa9) goto LAB_01560b00;
  if (*(short *)(uVar8 + *(uint *)(uVar7 - 1)) == 0x439) {
    uVar7 = uVar6 | *(uint *)((uVar6 | *(uint *)(uVar7 + 0xb)) + 0xf);
    if (*(short *)(uVar8 + *(uint *)(uVar7 - 1)) == 0x5b) {
      uVar7 = uVar6 | *(uint *)(uVar7 + 0xb);
    }
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = puVar3;
      if (puVar4 == puVar3) {
        puVar5 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar7;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
      uVar7 = *puVar5;
    }
    if (((uVar7 & 1) != 0) &&
       (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x65)) {
      uVar2 = *(int *)(uVar7 + 0x1f) >> 1;
      uVar7 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
      goto LAB_01560aa8;
    }
  }
  uVar7 = 0xfffffffffffffffe;
LAB_01560aa8:
  *(ulong **)pIVar1 = puVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar4) {
    *(ulong **)(param_3 + 0x95a8) = puVar4;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar7;
}

