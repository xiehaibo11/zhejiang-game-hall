
/* v8::internal::Runtime_MapGrow(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_MapGrow(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar8 = FUN_0155bce0(param_1,param_2,param_3);
    return uVar8;
  }
  pIVar1 = param_3 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) != 0) &&
     (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x41c)) {
    uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0xb);
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
    }
    puVar4 = (ulong *)OrderedHashTable<v8::internal::OrderedHashMap,2>::EnsureGrowable
                                (param_3,puVar4);
    if (puVar4 == (ulong *)0x0) {
      puVar5 = (undefined8 *)Factory::NewRangeError((Factory *)param_3,0xde,0,0,0);
      uVar8 = Isolate::Throw(param_3,*puVar5,0);
    }
    else {
      uVar9 = *param_2;
      uVar6 = *puVar4;
      *(int *)(uVar9 + 0xb) = (int)uVar6;
      if ((uVar6 & 1) != 0) {
        uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar7 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar9,uVar9 + 0xb,uVar6);
          uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0xb,uVar6);
        }
      }
      uVar8 = *(undefined8 *)(param_3 + 0xa0);
    }
    *(ulong **)pIVar1 = puVar2;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
      *(ulong **)(param_3 + 0x95a8) = puVar3;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSMap()");
}

