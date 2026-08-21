
/* v8::internal::Object::GetPropertyWithAccessor(v8::internal::LookupIterator*) */

Isolate * v8::internal::Object::GetPropertyWithAccessor(LookupIterator *param_1)

{
  uint uVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  Isolate *this;
  undefined8 *puVar10;
  long lVar11;
  Isolate *local_b0;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_48;
  
  this = *(Isolate **)(param_1 + 0x18);
  pIVar3 = this + 0x95a0;
  puVar2 = (ulong *)LookupIterator::GetAccessors();
  puVar9 = *(ulong **)(param_1 + 0x30);
  uVar6 = *puVar9;
  if (((uVar6 & 1) != 0) &&
     (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0xaa)) {
    uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0xf);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)pIVar3;
      if (puVar9 == *(ulong **)(this + 0x95a8)) {
        puVar9 = (ulong *)HandleScope::Extend(this);
      }
      *(ulong **)pIVar3 = puVar9 + 1;
      *puVar9 = uVar6;
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar6);
    }
  }
  uVar6 = *puVar2;
  puVar10 = *(undefined8 **)(param_1 + 0x38);
  if (((uVar6 & 1) != 0) &&
     (uVar7 = uVar6 & 0xffffffff00000000,
     *(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x51)) {
    lVar11 = *(long *)(param_1 + 0x20);
    if (lVar11 == 0) {
      lVar11 = Factory::SizeToString(*(Factory **)(param_1 + 0x18),*(ulong *)(param_1 + 0x48),true);
      *(long *)(param_1 + 0x20) = lVar11;
      uVar6 = *puVar2;
      uVar7 = uVar6 & 0xffffffff00000000;
      uVar1 = *(uint *)(uVar6 + 0xb);
      pIVar5 = local_b0;
    }
    else {
      uVar1 = *(uint *)(uVar6 + 0xb);
      pIVar5 = local_b0;
    }
    if ((uVar1 & 1) != 0) {
      local_b0 = (Isolate *)(uVar7 | uVar1);
      uVar8 = *puVar9;
      if (*(short *)((uVar7 | 7) + (ulong)*(uint *)((long)local_b0 - 1)) == 0x4e) {
        if ((((uVar8 & 1) == 0) ||
            (*(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) < 0xaa)) ||
           (uVar6 = FunctionTemplateInfo::IsTemplateFor
                              ((FunctionTemplateInfo *)&local_b0,
                               uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 - 1)),
           pIVar5 = local_b0, (uVar6 & 1) == 0)) {
          local_b0 = pIVar5;
          puVar10 = (undefined8 *)Factory::NewTypeError((Factory *)this,0x3d,lVar11,puVar9,0);
          Isolate::Throw(this,*puVar10,0);
          return (Isolate *)0x0;
        }
        uVar6 = *puVar2;
      }
    }
    local_b0 = pIVar5;
    if (*(int *)(uVar6 + 0x13) == 0) goto LAB_01107aa0;
    if (((*(byte *)(uVar6 + 7) >> 4 & 1) != 0) &&
       ((uVar7 = *puVar9, (uVar7 & 1) == 0 ||
        (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0xa9)))) {
      puVar9 = (ulong *)ConvertReceiver(this,puVar9);
      if (puVar9 == (ulong *)0x0) {
        return (Isolate *)0x0;
      }
      uVar6 = *puVar2;
    }
    PropertyCallbackArguments::PropertyCallbackArguments
              ((PropertyCallbackArguments *)&local_b0,this,
               uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0x1b),*puVar9,*puVar10,
               0x100000001);
    puVar4 = (ulong *)PropertyCallbackArguments::CallAccessorGetter
                                ((PropertyCallbackArguments *)&local_b0,puVar2,lVar11);
    if (*(int *)(this + 0x2c20) == *(int *)(this + 0xa8)) {
      if (puVar4 == (ulong *)0x0) {
        pIVar5 = this + 0xa0;
        goto LAB_01107ba4;
      }
      uVar6 = *puVar4;
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        pIVar5 = *(Isolate **)pIVar3;
        if (pIVar5 == *(Isolate **)(this + 0x95a8)) {
          pIVar5 = (Isolate *)HandleScope::Extend(this);
        }
        *(Isolate **)pIVar3 = pIVar5 + 8;
        *(ulong *)pIVar5 = uVar6;
      }
      else {
        pIVar5 = (Isolate *)
                 CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar6);
      }
      if ((((*(byte *)(*puVar2 + 7) >> 5 & 1) == 0) || (uVar6 = *puVar9, (uVar6 & 1) == 0)) ||
         ((*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0xa9 ||
          (lVar11 = Accessors::ReplaceAccessorWithDataProperty(puVar9,puVar10,lVar11,puVar4),
          lVar11 != 0)))) goto LAB_01107ba4;
    }
    else {
      Isolate::PromoteScheduledException(this);
    }
    pIVar5 = (Isolate *)0x0;
LAB_01107ba4:
    *(undefined8 *)(local_a8 + 0xb790) = uStack_a0;
    return pIVar5;
  }
  uVar6 = LookupIterator::TryLookupCachedProperty(param_1);
  if ((uVar6 & 1) != 0) {
    pIVar3 = (Isolate *)GetProperty(param_1,false);
    return pIVar3;
  }
  uVar1 = *(uint *)(*puVar2 + 3);
  uVar6 = *puVar2 & 0xffffffff00000000 | (ulong)uVar1;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)pIVar3;
    if (puVar2 == *(ulong **)(this + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(this);
    }
    *(ulong **)pIVar3 = puVar2 + 1;
    *puVar2 = uVar6;
    if ((uVar1 & 1) == 0) goto LAB_01107aa0;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar6);
    uVar6 = *puVar2;
    if ((uVar6 & 1) == 0) goto LAB_01107aa0;
  }
  pIVar3 = (Isolate *)(uVar6 & 0xffffffff00000000);
  if (*(short *)(((ulong)pIVar3 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x4e) {
    local_48 = *puVar10;
    puVar10 = (undefined8 *)JSReceiver::GetCreationContext((JSReceiver *)&local_48);
    SaveAndSwitchContext::SaveAndSwitchContext((SaveAndSwitchContext *)&local_b0,this,*puVar10);
    pIVar3 = (Isolate *)Builtins::InvokeApiFunction(this,0,puVar2,puVar9,0,0,this + 0xa0);
    SaveContext::~SaveContext((SaveContext *)&local_b0);
    return pIVar3;
  }
  if ((*(byte *)(((ulong)pIVar3 | 9) + (ulong)*(uint *)(uVar6 - 1)) >> 1 & 1) != 0) {
    local_b0 = pIVar3;
    uVar6 = StackLimitCheck::JsHasOverflowed((StackLimitCheck *)&local_b0,0);
    if ((uVar6 & 1) != 0) {
      Isolate::StackOverflow(pIVar3);
      return (Isolate *)0x0;
    }
    pIVar3 = (Isolate *)Execution::Call(pIVar3,puVar2,puVar9,0,0);
    return pIVar3;
  }
LAB_01107aa0:
  return this + 0xa0;
}

