
/* v8::internal::Genesis::ConfigureGlobalObjects(v8::Local<v8::ObjectTemplate>) */

undefined8 __thiscall v8::internal::Genesis::ConfigureGlobalObjects(Genesis *this,ulong *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  ulong *puVar7;
  Isolate *pIVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 local_48;
  
  local_48 = **(undefined8 **)(this + 0x10);
  uVar3 = Context::global_proxy((Context *)&local_48);
  pIVar8 = *(Isolate **)this;
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar3;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar3);
  }
  local_48 = **(undefined8 **)(this + 0x10);
  uVar3 = Context::global_object((Context *)&local_48);
  pIVar8 = *(Isolate **)this;
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar3;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar3);
  }
  if (param_2 != (ulong *)0x0) {
    lVar6 = ApiNatives::InstantiateObject((ulong)*(uint *)((long)puVar4 + 4) << 0x20,param_2,0);
    if (lVar6 == 0) {
LAB_0103c15c:
      *(undefined8 *)(*(long *)this + 0x2bd8) = *(undefined8 *)(*(long *)this + 0xa8);
      return 0;
    }
    TransferObject(this,lVar6,puVar4);
    pIVar8 = *(Isolate **)this;
    uVar3 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
    if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar7 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar3;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar3);
      uVar3 = *puVar7;
    }
    uVar10 = uVar3 & 0xffffffff00000000;
    uVar2 = *(uint *)(uVar3 + 0x23);
    uVar9 = *(ulong *)(uVar10 + 0xa0);
    uVar3 = uVar9;
    if (uVar2 != (uint)uVar9) {
      uVar3 = (ulong)*(uint *)((uVar10 | uVar2) + 3);
    }
    pIVar8 = *(Isolate **)this;
    if (((uVar3 & 1) == 0) || ((int)uVar3 != *(int *)(pIVar8 + 0xa0))) {
      if (uVar2 != (uint)uVar9) {
        uVar9 = uVar10 | *(uint *)((uVar10 | uVar2) + 3);
      }
      if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(pIVar8 + 0x95a0);
        if (puVar7 == *(ulong **)(pIVar8 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(pIVar8);
        }
        *(ulong **)(pIVar8 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar9;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar9);
      }
      lVar6 = ApiNatives::InstantiateObject((ulong)*(uint *)((long)puVar5 + 4) << 0x20,puVar7,0);
      if (lVar6 == 0) goto LAB_0103c15c;
      TransferObject(this,lVar6,puVar5);
    }
  }
  JSObject::ForceSetPrototype(puVar4,puVar5);
  uVar10 = **(ulong **)(this + 0x10);
  uVar3 = uVar10 & 0xffffffff00000000;
  uVar2 = *(uint *)((uVar3 | *(uint *)(uVar10 + 0x23)) + 0x1b);
  *(uint *)(uVar10 + 0x27) = uVar2;
  if ((uVar2 & 1) != 0) {
    uVar11 = uVar3 | uVar2;
    uVar3 = uVar3 | (ulong)uVar2 & 0xfffffffffffc0000;
    uVar9 = *(ulong *)(uVar3 + 8);
    if (((uint)uVar9 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,uVar10 + 0x27,uVar11);
      uVar9 = *(ulong *)(uVar3 | 8);
    }
    if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,uVar10 + 0x27,uVar11);
    }
  }
  pIVar8 = *(Isolate **)this;
  uVar3 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
          (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0x177);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar3;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar3);
  }
  pIVar8 = *(Isolate **)this;
  uVar3 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
          (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0x183);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar3;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar3);
  }
  JSObject::MigrateSlowToFast(puVar4,0,"Bootstrapping");
  JSObject::MigrateSlowToFast(puVar5,0,"Bootstrapping");
  uVar3 = *puVar4;
  uVar10 = **(ulong **)(this + 0x10);
  uVar2 = *(uint *)(uVar3 + 0x1b);
  puVar1 = (uint *)(uVar10 + 0x17b);
  *puVar1 = uVar2;
  if ((uVar2 & 1) != 0) {
    uVar3 = uVar3 & 0xffffffff00000000;
    uVar11 = uVar3 | uVar2;
    uVar3 = uVar3 | (ulong)uVar2 & 0xfffffffffffc0000;
    uVar9 = *(ulong *)(uVar3 + 8);
    if (((uint)uVar9 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,puVar1,uVar11);
      uVar9 = *(ulong *)(uVar3 | 8);
    }
    if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,puVar1,uVar11);
    }
  }
  uVar3 = *puVar5;
  uVar10 = **(ulong **)(this + 0x10);
  uVar2 = *(uint *)(uVar3 + 0x1b);
  puVar1 = (uint *)(uVar10 + 0x187);
  *puVar1 = uVar2;
  if ((uVar2 & 1) != 0) {
    uVar3 = uVar3 & 0xffffffff00000000;
    uVar11 = uVar3 | uVar2;
    uVar3 = uVar3 | (ulong)uVar2 & 0xfffffffffffc0000;
    uVar9 = *(ulong *)(uVar3 + 8);
    if (((uint)uVar9 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,puVar1,uVar11);
      uVar9 = *(ulong *)(uVar3 | 8);
    }
    if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,puVar1,uVar11);
    }
  }
  return 1;
}

