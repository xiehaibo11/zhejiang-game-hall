
/* v8::internal::Accessors::ArrayLengthGetter(v8::Local<v8::Name>,
   v8::PropertyCallbackInfo<v8::Value> const&) */

void v8::internal::Accessors::ArrayLengthGetter(undefined8 param_1,long *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  ulong uVar6;
  long lVar7;
  RuntimeCallStats *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  pIVar5 = *(Isolate **)(*param_2 + 0x10);
  local_50 = 0;
  uStack_68 = 0;
  local_70 = (RuntimeCallStats *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_70 = (RuntimeCallStats *)(*(long *)(pIVar5 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0x70);
  }
  puVar2 = *(ulong **)(pIVar5 + 0x95a0);
  puVar3 = *(ulong **)(pIVar5 + 0x95a8);
  *(int *)(pIVar5 + 0x95b0) = *(int *)(pIVar5 + 0x95b0) + 1;
  lVar7 = *param_2;
  uVar6 = *(ulong *)(lVar7 + 8) & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)(lVar7 + 8) + 0xb)
  ;
  if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = puVar2;
    if (puVar3 == puVar2) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar5);
    }
    *(ulong **)(pIVar5 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar6;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar6);
  }
  puVar1 = (ulong *)(lVar7 + 0x18);
  if (puVar4 != (ulong *)0x0) {
    puVar1 = puVar4;
  }
  *(ulong *)(lVar7 + 0x20) = *puVar1;
  *(ulong **)(pIVar5 + 0x95a0) = puVar2;
  *(int *)(pIVar5 + 0x95b0) = *(int *)(pIVar5 + 0x95b0) + -1;
  if (*(ulong **)(pIVar5 + 0x95a8) != puVar3) {
    *(ulong **)(pIVar5 + 0x95a8) = puVar3;
    HandleScope::DeleteExtensions(pIVar5);
  }
  if (local_70 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
  }
  return;
}

