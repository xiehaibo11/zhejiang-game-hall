
/* v8::internal::OSROptimizedCodeCache::AddOptimizedCode(v8::internal::Handle<v8::internal::NativeContext>,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>, v8::internal::Handle<v8::internal::Code>,
   v8::internal::BailoutId) */

void v8::internal::OSROptimizedCodeCache::AddOptimizedCode
               (ulong *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  ulong uVar2;
  Isolate *pIVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong local_50;
  ulong *local_48;
  
  pIVar3 = (Isolate *)(*param_1 & 0xffffffff00000000);
  uVar6 = (ulong)pIVar3 | (ulong)*(uint *)(*param_1 + 0x3cf);
  if (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    local_48 = *(ulong **)(pIVar3 + 0x95a0);
    if (local_48 == *(ulong **)(pIVar3 + 0x95a8)) {
      local_48 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = local_48 + 1;
    *local_48 = uVar6;
  }
  else {
    local_48 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8),uVar6);
    uVar6 = *local_48;
  }
  uVar1 = *(uint *)(uVar6 + 3);
  if (1 < (int)uVar1) {
    lVar4 = 0;
    uVar2 = 0;
    iVar5 = 4;
    do {
      if ((*(int *)(uVar6 + 7 + (lVar4 >> 0x20)) == 3) || (*(int *)(uVar6 + 7 + (long)iVar5) == 3))
      goto LAB_01125fa4;
      uVar2 = uVar2 + 3;
      iVar5 = iVar5 + 0xc;
      lVar4 = lVar4 + 0xc00000000;
    } while ((long)uVar2 < (long)((ulong)uVar1 << 0x20) >> 0x21);
    if (0x17fb < (int)uVar1) {
      uVar2 = 0;
      goto LAB_01125fa4;
    }
  }
  uVar2 = GrowOSRCache(param_1,&local_48);
  uVar2 = uVar2 & 0xffffffff;
  uVar6 = *local_48;
LAB_01125fa4:
  local_50 = uVar6;
  InitializeEntry((OSROptimizedCodeCache *)&local_50,uVar2,*param_2,*param_3,param_4);
  return;
}

