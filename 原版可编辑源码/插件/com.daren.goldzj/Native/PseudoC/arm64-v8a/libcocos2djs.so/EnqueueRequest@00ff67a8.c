
/* v8::internal::MemoryMeasurement::EnqueueRequest(v8::internal::Handle<v8::internal::NativeContext>,
   v8::MeasureMemoryMode) */

undefined8 v8::internal::MemoryMeasurement::EnqueueRequest(long *param_1)

{
  Isolate *pIVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  Isolate *this;
  
  uVar2 = Factory::NewJSPromise((Factory *)*param_1);
  this = (Isolate *)*param_1;
  uVar11 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
  uVar11 = uVar11 | *(uint *)((uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)
                                                  ) + 0x13)) + 499);
  pIVar1 = this + 0x95a0;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(this);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar11;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar11)
    ;
  }
  uVar4 = Factory::NewJSObject((Factory *)this,puVar3,0);
  uVar11 = Heap::SizeOfObjects((Heap *)(*param_1 + 0x8850));
  uVar5 = Heap::SizeOfObjects((Heap *)(*param_1 + 0x8850));
  uVar12 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
  uVar12 = uVar12 | *(uint *)((uVar12 | *(uint *)((uVar12 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)
                                                  ) + 0x13)) + 499);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(this);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar12;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar12)
    ;
  }
  uVar6 = Factory::NewJSObject((Factory *)this,puVar3,0);
  if (uVar11 >> 0x1e == 0) {
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pIVar1;
      if (puVar3 == *(ulong **)(this + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(this);
      }
      *(ulong **)pIVar1 = puVar3 + 1;
      *puVar3 = uVar11 << 1;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar11 << 1);
    }
  }
  else {
    puVar3 = (ulong *)Factory::NewHeapNumber<(v8::internal::AllocationType)0>((Factory *)this);
    *(double *)(*puVar3 + 3) = (double)uVar11;
  }
  JSObject::AddProperty(this,uVar6,this + 0x798,puVar3,0);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(this);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = 0;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),0);
  }
  if (uVar5 >> 0x1e == 0) {
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)pIVar1;
      if (puVar7 == *(ulong **)(this + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(this);
      }
      *(ulong **)pIVar1 = puVar7 + 1;
      *puVar7 = uVar5 << 1;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar5 << 1);
    }
  }
  else {
    puVar7 = (ulong *)Factory::NewHeapNumber<(v8::internal::AllocationType)0>((Factory *)this);
    *(double *)(*puVar7 + 3) = (double)uVar5;
  }
  puVar8 = (ulong *)Factory::NewFixedArray((Factory *)this,2,0);
  uVar5 = *puVar8;
  uVar11 = *puVar3;
  *(int *)(uVar5 + 7) = (int)uVar11;
  if ((uVar11 & 1) != 0) {
    uVar12 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar12 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 7,uVar11);
      uVar12 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 7,uVar11);
    }
  }
  uVar5 = *puVar8;
  uVar11 = *puVar7;
  *(int *)(uVar5 + 0xb) = (int)uVar11;
  if ((uVar11 & 1) != 0) {
    uVar12 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar12 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0xb,uVar11);
      uVar12 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0xb,uVar11);
    }
  }
  uVar9 = Factory::NewJSArrayWithElements(this,puVar8,3,*(int *)(*puVar8 + 3) >> 1,0);
  JSObject::AddProperty(this,uVar6,this + 0x7a0,uVar9,0);
  JSObject::AddProperty(this,uVar4,this + 0xa78,uVar6,0);
  lVar10 = JSPromise::Resolve(uVar2,uVar4);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  return uVar2;
}

