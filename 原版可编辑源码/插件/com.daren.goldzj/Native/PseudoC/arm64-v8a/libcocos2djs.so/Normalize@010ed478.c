
/* v8::internal::Map::Normalize(v8::internal::Isolate*, v8::internal::Handle<v8::internal::Map>,
   v8::internal::ElementsKind, v8::internal::PropertyNormalizationMode, char const*) */

ulong * v8::internal::Map::Normalize
                  (Isolate *param_1,ulong *param_2,uint param_3,undefined4 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  Logger *this;
  ulong local_48;
  
  uVar5 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(param_1 + 0x95a0);
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar5;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    uVar5 = *puVar2;
  }
  uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0x1eb);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(param_1 + 0x95a0);
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar5;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
  }
  if ((*(uint *)(*param_2 + 0xb) >> 0x14 & 1) == 0) {
    uVar5 = *puVar2;
    if (((uVar5 & 1) != 0) && ((int)uVar5 == *(int *)(param_1 + 0xa0))) goto LAB_010ed570;
    local_48 = uVar5;
    puVar3 = (ulong *)NormalizedMapCache::Get(&local_48,param_2,param_3,param_4);
    if (puVar3 != (ulong *)0x0) {
      if (FLAG_verify_heap != '\0') {
        local_48 = *puVar3;
        DictionaryMapVerify((Map *)&local_48,param_1);
      }
      goto LAB_010ed654;
    }
    bVar1 = true;
  }
  else {
LAB_010ed570:
    puVar2 = (ulong *)0x0;
    bVar1 = false;
  }
  puVar3 = (ulong *)CopyNormalized(param_1,param_2,param_4);
  if (0x1b < (param_3 & 0xff)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","static_cast<int>(elements_kind) < kElementsKindCount");
  }
  *(byte *)(*puVar3 + 10) = *(byte *)(*puVar3 + 10) & 7 | (byte)(param_3 << 3);
  if (bVar1) {
    local_48 = *puVar2;
    NormalizedMapCache::Set((NormalizedMapCache *)&local_48,param_2,puVar3);
    lVar6 = *(long *)(param_1 + 0x9520);
    if (*(char *)(lVar6 + 0x17b8) == '\0') {
      *(char *)(lVar6 + 0x17b8) = '\x01';
      piVar4 = (int *)StatsCounterBase::FindLocationInStatsTable
                                ((StatsCounterBase *)(lVar6 + 0x17a0));
      *(int **)(lVar6 + 0x17b0) = piVar4;
    }
    else {
      piVar4 = *(int **)(lVar6 + 0x17b0);
    }
    if (piVar4 != (int *)0x0) {
      *piVar4 = *piVar4 + 1;
    }
  }
LAB_010ed654:
  if (FLAG_trace_maps != '\0') {
    this = *(Logger **)(param_1 + 0x9558);
    uVar5 = Logger::is_logging(this);
    if ((uVar5 & 1) != 0) {
      Logger::MapEvent(this,"Normalize",*param_2,*puVar3,param_5,0);
    }
  }
  uVar5 = *param_2;
  if ((*(uint *)(uVar5 + 0xb) >> 0x19 & 1) == 0) {
    *(uint *)(uVar5 + 0xb) = *(uint *)(uVar5 + 0xb) | 0x2000000;
    local_48 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0x1b);
    DependentCode::DeoptimizeDependentCodeGroup(&local_48,param_1,1);
  }
  return puVar3;
}

