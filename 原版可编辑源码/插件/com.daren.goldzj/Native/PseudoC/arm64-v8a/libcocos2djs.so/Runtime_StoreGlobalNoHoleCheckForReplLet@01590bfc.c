
/* v8::internal::Runtime_StoreGlobalNoHoleCheckForReplLet(int, unsigned long*,
   v8::internal::Isolate*) */

ulong v8::internal::Runtime_StoreGlobalNoHoleCheckForReplLet
                (int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int local_70;
  int local_6c;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar6 = FUN_01590e84(param_1,param_2,param_3);
    return uVar6;
  }
  pIVar2 = param_3 + 0x95a0;
  puVar3 = *(ulong **)pIVar2;
  puVar4 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) != 0) &&
     (*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0x40)) {
    uVar6 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
    uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = puVar3;
      if (puVar4 == puVar3) {
        puVar5 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar2 = puVar5 + 1;
      *puVar5 = uVar6;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6);
      uVar6 = *puVar5;
    }
    uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0x273);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar2;
      if (puVar5 == *(ulong **)(param_3 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar2 = puVar5 + 1;
      *puVar5 = uVar6;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6);
      uVar6 = *puVar5;
    }
    uVar6 = ScriptContextTable::Lookup(param_3,uVar6,*param_2,&local_70);
    if ((uVar6 & 1) != 0) {
      uVar6 = *puVar5 & 0xffffffff00000000 |
              (ulong)*(uint *)(*puVar5 + (long)(local_70 * 4 + 4) + 7);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)pIVar2;
        if (puVar5 == *(ulong **)(param_3 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar2 = puVar5 + 1;
        *puVar5 = uVar6;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6);
        uVar6 = *puVar5;
      }
      uVar8 = param_2[-1];
      lVar1 = uVar6 + (long)(local_6c << 2);
      *(int *)(lVar1 + 7) = (int)uVar8;
      if ((uVar8 & 1) != 0) {
        uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
        lVar1 = lVar1 + 7;
        if (((uint)uVar7 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar6,lVar1,uVar8);
          uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar6,lVar1,uVar8);
        }
      }
      uVar6 = param_2[-1];
      *(ulong **)pIVar2 = puVar3;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(ulong **)(param_3 + 0x95a8) != puVar4) {
        *(ulong **)(param_3 + 0x95a8) = puVar4;
        HandleScope::DeleteExtensions(param_3);
      }
      return uVar6;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","found");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsString()");
}

