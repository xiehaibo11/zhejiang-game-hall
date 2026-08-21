
/* v8::internal::SourceTextModule::RunInitializationCode(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SourceTextModule>) */

undefined8 v8::internal::SourceTextModule::RunInitializationCode(Isolate *param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *local_38;
  
  uVar5 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(param_1 + 0x95a0);
    if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar5;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
  }
  local_38 = param_2;
  puVar1 = (ulong *)Execution::Call(param_1,puVar1,param_1 + 0xa0,1,&local_38);
  uVar2 = 0;
  if (puVar1 != (ulong *)0x0) {
    uVar4 = *param_2;
    uVar5 = *puVar1;
    *(int *)(uVar4 + 0x17) = (int)uVar5;
    if ((uVar5 & 1) != 0) {
      uVar3 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar3 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar4,uVar4 + 0x17,uVar5);
        uVar3 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0x17,uVar5);
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

