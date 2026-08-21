
/* v8::internal::Runtime_StoreGlobalIC_Slow(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_StoreGlobalIC_Slow(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  Isolate *pIVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 local_70;
  char local_68;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar10 = FUN_01505518(param_1,param_2,param_3);
    return uVar10;
  }
  pIVar2 = param_3 + 0x95a0;
  lVar3 = *(long *)pIVar2;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar8 = param_2 + -4;
  uVar10 = *puVar8;
  if (((uVar10 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[4].IsString()");
  }
  local_70 = *(undefined8 *)(param_3 + 0x2bc8);
  uVar10 = Context::global_object((Context *)&local_70);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar2;
    if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar2 = puVar6 + 1;
    *puVar6 = uVar10;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
  }
  uVar10 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
  uVar10 = uVar10 | *(uint *)((uVar10 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar2;
    if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar2 = puVar7 + 1;
    *puVar7 = uVar10;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
    uVar10 = *puVar7;
  }
  uVar10 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0x273);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar2;
    if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar2 = puVar7 + 1;
    *puVar7 = uVar10;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
    uVar10 = *puVar7;
  }
  uVar10 = ScriptContextTable::Lookup(param_3,uVar10,*puVar8,&local_70);
  if ((uVar10 & 1) == 0) {
    puVar8 = (ulong *)Runtime::SetObjectProperty(param_3,puVar6,puVar8,param_2,0,0);
    if (puVar8 == (ulong *)0x0) {
      uVar10 = *(ulong *)(param_3 + 0x180);
    }
    else {
      uVar10 = *puVar8;
    }
    goto LAB_01505490;
  }
  uVar10 = *puVar7 & 0xffffffff00000000 |
           (ulong)*(uint *)(*puVar7 + (long)((int)local_70 * 4 + 4) + 7);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar2;
    if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar2 = puVar7 + 1;
    *puVar7 = uVar10;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
  }
  if (local_68 == '\x01') {
    puVar9 = (undefined8 *)Factory::NewTypeError((Factory *)param_3,0x24,puVar6,puVar8,0);
LAB_0150537c:
    uVar10 = Isolate::Throw(param_3,*puVar9,0);
  }
  else {
    uVar5 = *(uint *)(*puVar7 + (long)(local_70._4_4_ << 2) + 7);
    uVar10 = *puVar7 & 0xffffffff00000000 | (ulong)uVar5;
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)pIVar2;
      if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar2 = puVar6 + 1;
      *puVar6 = uVar10;
      if ((uVar5 & 1) != 0) goto LAB_015053f8;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
      uVar10 = *puVar6;
      if ((uVar10 & 1) != 0) {
LAB_015053f8:
        if ((int)uVar10 == *(int *)(param_3 + 0xa8)) {
          puVar9 = (undefined8 *)Factory::NewReferenceError((Factory *)param_3,0xb4,puVar8,0,0);
          goto LAB_0150537c;
        }
      }
    }
    uVar12 = *puVar7;
    uVar10 = *param_2;
    lVar1 = uVar12 + (long)(local_70._4_4_ << 2);
    *(int *)(lVar1 + 7) = (int)uVar10;
    if ((uVar10 & 1) != 0) {
      uVar11 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
      lVar1 = lVar1 + 7;
      if (((uint)uVar11 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar12,lVar1,uVar10);
        uVar11 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar12,lVar1,uVar10);
      }
    }
    uVar10 = *param_2;
  }
LAB_01505490:
  *(long *)pIVar2 = lVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar10;
}

