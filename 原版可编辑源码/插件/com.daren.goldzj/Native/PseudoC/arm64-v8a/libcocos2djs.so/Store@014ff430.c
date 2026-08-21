
/* v8::internal::StoreGlobalIC::Store(v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::Object>) */

ulong * __thiscall
v8::internal::StoreGlobalIC::Store(StoreGlobalIC *this,undefined8 *param_2,ulong *param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  Factory *pFVar11;
  ulong uVar12;
  Isolate *pIVar13;
  int local_70;
  int local_6c;
  char local_68;
  undefined8 local_60;
  undefined8 *local_58;
  
  pIVar13 = *(Isolate **)(this + 8);
  local_60 = *(undefined8 *)(pIVar13 + 0x2bc8);
  uVar5 = Context::global_object((Context *)&local_60);
  if (*(CanonicalHandleScope **)(pIVar13 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar13 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar13 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar13);
    }
    *(ulong **)(pIVar13 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar5;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar13 + 0x95b8),uVar5);
  }
  uVar5 = *puVar6 & 0xffffffff00000000;
  pIVar13 = *(Isolate **)(this + 8);
  uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)(*puVar6 + 0xb)) + 0x273);
  if (*(CanonicalHandleScope **)(pIVar13 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(pIVar13 + 0x95a0);
    if (puVar7 == *(ulong **)(pIVar13 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(pIVar13);
    }
    *(ulong **)(pIVar13 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar5;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar13 + 0x95b8),uVar5);
    uVar5 = *puVar7;
  }
  uVar5 = ScriptContextTable::Lookup(*(undefined8 *)(this + 8),uVar5,*param_2,&local_70);
  if ((uVar5 & 1) == 0) {
    puVar6 = (ulong *)StoreIC::Store((StoreIC *)this,puVar6,param_2,param_3,1);
    return puVar6;
  }
  pIVar13 = *(Isolate **)(this + 8);
  uVar5 = *puVar7 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar7 + (long)(local_70 * 4 + 4) + 7);
  if (*(CanonicalHandleScope **)(pIVar13 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(pIVar13 + 0x95a0);
    if (puVar7 == *(ulong **)(pIVar13 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(pIVar13);
    }
    *(ulong **)(pIVar13 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar5;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar13 + 0x95b8),uVar5);
  }
  if (local_68 == '\x01') {
    pIVar13 = *(Isolate **)(this + 8);
    uVar1 = *(undefined8 *)(pIVar13 + 0x95a0);
    lVar2 = *(long *)(pIVar13 + 0x95a8);
    *(int *)(pIVar13 + 0x95b0) = *(int *)(pIVar13 + 0x95b0) + 1;
    pFVar11 = *(Factory **)(this + 8);
    puVar8 = (undefined8 *)Factory::NewTypeError(pFVar11,0x24,param_2,puVar6,0);
    Isolate::Throw((Isolate *)pFVar11,*puVar8,0);
    if (pIVar13 == (Isolate *)0x0) {
      return (ulong *)0x0;
    }
    *(undefined8 *)(pIVar13 + 0x95a0) = uVar1;
    *(int *)(pIVar13 + 0x95b0) = *(int *)(pIVar13 + 0x95b0) + -1;
    if (*(long *)(pIVar13 + 0x95a8) != lVar2) {
      *(long *)(pIVar13 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(pIVar13);
      return (ulong *)0x0;
    }
    return (ulong *)0x0;
  }
  uVar3 = *(uint *)(*puVar7 + (long)(local_6c << 2) + 7);
  pIVar13 = *(Isolate **)(this + 8);
  uVar5 = *puVar7 & 0xffffffff00000000 | (ulong)uVar3;
  if (*(CanonicalHandleScope **)(pIVar13 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar13 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar13 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar13);
    }
    *(ulong **)(pIVar13 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar5;
    if ((uVar3 & 1) != 0) goto LAB_014ff6e0;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar13 + 0x95b8),uVar5);
    uVar5 = *puVar6;
    if ((uVar5 & 1) != 0) {
LAB_014ff6e0:
      pFVar11 = *(Factory **)(this + 8);
      if ((int)uVar5 == *(int *)(pFVar11 + 0xa8)) {
        puVar8 = (undefined8 *)Factory::NewReferenceError(pFVar11,0xb4,param_2,0,0);
        Isolate::Throw((Isolate *)pFVar11,*puVar8,0);
        return (ulong *)0x0;
      }
    }
  }
  if ((*(int *)(this + 0x18) == 0) || ((FLAG_use_ic & 1) == 0)) {
    if ((*(int *)(this + 0x18) != 0) || (TracingFlags::ic_stats == 0)) goto LAB_014ff85c;
    uVar9 = 0;
    uVar4 = 0;
  }
  else {
    uVar5 = FeedbackNexus::ConfigureLexicalVarMode
                      ((FeedbackNexus *)(this + 0x50),local_70,local_6c,local_68 == '\x01');
    if ((uVar5 & 1) == 0) {
      if (TracingFlags::runtime_stats != 0) {
        RuntimeCallStats::CorrectCurrentCounterId
                  ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x41e,0);
      }
      pIVar13 = *(Isolate **)(this + 8);
      if (*(CanonicalHandleScope **)(pIVar13 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        local_58 = *(undefined8 **)(pIVar13 + 0x95a0);
        if (local_58 == *(undefined8 **)(pIVar13 + 0x95a8)) {
          local_58 = (undefined8 *)HandleScope::Extend(pIVar13);
        }
        *(undefined8 **)(pIVar13 + 0x95a0) = local_58 + 1;
        *local_58 = 0x14;
      }
      else {
        local_58 = (undefined8 *)
                   CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar13 + 0x95b8),0x14);
      }
      local_60 = CONCAT44(local_60._4_4_,1);
      IC::SetCache((IC *)this,param_2,&local_60);
    }
    else if (TracingFlags::runtime_stats != 0) {
      RuntimeCallStats::CorrectCurrentCounterId
                ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x41f,0);
    }
    if (TracingFlags::ic_stats == 0) goto LAB_014ff85c;
    if (*(int *)(this + 0x18) == 0) {
      uVar9 = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = FeedbackNexus::ic_state((FeedbackNexus *)(this + 0x50));
      uVar9 = *(undefined4 *)(this + 0x18);
    }
  }
  IC::TraceIC((IC *)this,"StoreGlobalIC",param_2,uVar9,uVar4);
LAB_014ff85c:
  uVar12 = *puVar7;
  uVar5 = *param_3;
  lVar2 = uVar12 + (long)(local_6c << 2);
  *(int *)(lVar2 + 7) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar10 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    lVar2 = lVar2 + 7;
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar12,lVar2,uVar5);
      uVar10 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar12,lVar2,uVar5);
    }
  }
  return param_3;
}

