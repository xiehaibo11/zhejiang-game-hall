
/* v8::internal::FunctionTemplateInfo::GetOrCreateSharedFunctionInfo(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::FunctionTemplateInfo>,
   v8::internal::MaybeHandle<v8::internal::Name>) */

ulong * v8::internal::FunctionTemplateInfo::GetOrCreateSharedFunctionInfo
                  (Isolate *param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_2;
  pIVar1 = param_1 + 0x95a0;
  uVar3 = uVar4 & 0xffffffff00000000;
  if (((*(uint *)(uVar4 + 0x27) & 1) == 0) ||
     (uVar5 = uVar3 | *(uint *)(uVar4 + 0x27),
     *(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0xa6)) {
    if ((param_3 == (Isolate *)0x0) ||
       (0x3f < *(ushort *)
                ((*(ulong *)param_3 & 0xffffffff00000000 | 7) +
                (ulong)*(uint *)(*(ulong *)param_3 - 1)))) {
      if (((*(uint *)(uVar4 + 0x1b) & 1) == 0) ||
         (uVar4 = uVar3 | *(uint *)(uVar4 + 0x1b),
         0x3f < *(ushort *)((uVar3 | 7) + (ulong)*(uint *)(uVar4 - 1)))) {
        param_3 = param_1 + 200;
      }
      else if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        param_3 = *(Isolate **)pIVar1;
        if (param_3 == *(Isolate **)(param_1 + 0x95a8)) {
          param_3 = (Isolate *)HandleScope::Extend(param_1);
        }
        *(Isolate **)pIVar1 = param_3 + 8;
        *(ulong *)param_3 = uVar4;
      }
      else {
        param_3 = (Isolate *)
                  CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
      }
    }
    puVar2 = (ulong *)Factory::NewSharedFunctionInfoForApiFunction
                                (param_1,param_3,param_2,
                                 (*(int *)(*param_2 + 0x2b) << 0x1b) >> 0x1f & 0x11);
    *(short *)(*puVar2 + 0x13) = (short)(*(uint *)(*param_2 + 0x2f) >> 1);
    *(undefined2 *)(*puVar2 + 0x15) = 0xffff;
    uVar4 = *param_2;
    uVar3 = *puVar2;
    *(int *)(uVar4 + 0x27) = (int)uVar3;
    if ((uVar3 & 1) != 0) {
      uVar5 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar4,uVar4 + 0x27,uVar3);
        uVar5 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0x27,uVar3);
      }
    }
  }
  else if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)pIVar1;
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar2 + 1;
    *puVar2 = uVar5;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
  }
  return puVar2;
}

