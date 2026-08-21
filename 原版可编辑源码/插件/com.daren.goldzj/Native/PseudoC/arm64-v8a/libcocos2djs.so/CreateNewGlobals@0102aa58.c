
/* v8::internal::Genesis::CreateNewGlobals(v8::Local<v8::ObjectTemplate>,
   v8::internal::Handle<v8::internal::JSGlobalProxy>) */

ulong * __thiscall
v8::internal::Genesis::CreateNewGlobals(Genesis *this,ulong *param_2,ulong *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  NewFunctionArgs aNStack_a8 [64];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_2 == (ulong *)0x0) {
LAB_0102aba8:
    pIVar3 = *(Isolate **)this;
    uVar9 = *(ulong *)(pIVar3 + 0x2bc8) & 0xffffffff00000000;
    uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(pIVar3 + 0x2bc8) - 1)
                                                 ) + 0x13)) + 499);
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar9;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar9);
    }
    uVar5 = Factory::NewFunctionPrototype((Factory *)pIVar3,puVar4);
    NewFunctionArgs::ForBuiltinWithPrototype(aNStack_a8,pIVar3 + 200,uVar5,0xaa,0x14,0,0x97,0);
    puVar4 = (ulong *)Factory::NewFunction(*(Factory **)this,aNStack_a8);
  }
  else {
    pIVar3 = *(Isolate **)this;
    uVar9 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar9;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar9);
      uVar9 = *puVar4;
    }
    uVar8 = uVar9 & 0xffffffff00000000;
    uVar10 = *(ulong *)(uVar8 + 0xa0);
    if (*(uint *)(uVar9 + 0x23) != (uint)uVar10) {
      uVar10 = uVar8 | *(uint *)((uVar8 | *(uint *)(uVar9 + 0x23)) + 3);
    }
    pIVar3 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar10;
      if ((uVar10 & 1) != 0) goto LAB_0102ab68;
LAB_0102ab30:
      if (puVar4 == (ulong *)0x0) goto LAB_0102aba8;
      pIVar3 = *(Isolate **)this;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar10);
      uVar10 = *puVar4;
      if ((uVar10 & 1) == 0) goto LAB_0102ab30;
LAB_0102ab68:
      if ((puVar4 == (ulong *)0x0) ||
         (pIVar3 = *(Isolate **)this, (int)uVar10 == *(int *)(pIVar3 + 0xa0))) goto LAB_0102aba8;
    }
    uVar9 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0x17);
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar9;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar9);
    }
    pIVar3 = *(Isolate **)this;
    uVar9 = *(ulong *)(pIVar3 + 0x2bc8) & 0xffffffff00000000;
    uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(pIVar3 + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar9;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar9);
    }
    puVar4 = (ulong *)ApiNatives::CreateApiFunction
                                (pIVar3,puVar6,puVar4,*(long *)this + 0xa8,0xaa,0);
  }
  uVar9 = *puVar4 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar4 + 0x1b);
  *(uint *)(uVar9 + 0xb) = *(uint *)(uVar9 + 0xb) | 0x100000;
  uVar9 = *puVar4 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar4 + 0x1b);
  *(uint *)(uVar9 + 0xb) = *(uint *)(uVar9 + 0xb) | 0x2200000;
  uVar9 = *puVar4 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar4 + 0x1b);
  *(uint *)(uVar9 + 0xb) = *(uint *)(uVar9 + 0xb) | 0x10000000;
  puVar4 = (ulong *)Factory::NewJSGlobalObject(*(Factory **)this,puVar4);
  if (param_2 == (ulong *)0x0) {
    NewFunctionArgs::ForBuiltinWithPrototype
              (aNStack_a8,*(long *)this + 200,*(long *)this + 0xa8,0xab,0x10,0,0x97,0);
    puVar6 = (ulong *)Factory::NewFunction(*(Factory **)this,aNStack_a8);
  }
  else {
    pIVar3 = *(Isolate **)this;
    uVar9 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar9;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar9);
    }
    pIVar3 = *(Isolate **)this;
    uVar9 = *(ulong *)(pIVar3 + 0x2bc8) & 0xffffffff00000000;
    uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(pIVar3 + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar7 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar9;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar9);
    }
    puVar6 = (ulong *)ApiNatives::CreateApiFunction
                                (pIVar3,puVar7,puVar6,*(long *)this + 0xa8,0xab,0);
  }
  uVar9 = *puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + 0x1b);
  *(byte *)(uVar9 + 9) = *(byte *)(uVar9 + 9) | 0x20;
  uVar9 = *puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + 0x1b);
  *(uint *)(uVar9 + 0xb) = *(uint *)(uVar9 + 0xb) | 0x10000000;
  uVar9 = *puVar6;
  uVar8 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar8 + 0x36f);
  *puVar1 = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar10 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,puVar1,uVar9);
      uVar10 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,puVar1,uVar9);
    }
  }
  Factory::ReinitializeJSGlobalProxy(*(Factory **)this,param_3,puVar6);
  uVar8 = *puVar4;
  uVar9 = **(ulong **)(this + 0x10);
  *(int *)(uVar8 + 0xb) = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar10 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 0xb,uVar9);
      uVar10 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0xb,uVar9);
    }
  }
  uVar8 = *puVar4;
  uVar9 = *param_3;
  *(int *)(uVar8 + 0xf) = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar10 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 0xf,uVar9);
      uVar10 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0xf,uVar9);
    }
  }
  uVar8 = *param_3;
  uVar9 = **(ulong **)(this + 0x10);
  *(int *)(uVar8 + 0xb) = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar10 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 0xb,uVar9);
      uVar10 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0xb,uVar9);
    }
  }
  uVar9 = *param_3;
  uVar8 = **(ulong **)(this + 0x10);
  *(int *)(uVar8 + 0x13) = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar10 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 0x13,uVar9);
      uVar10 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0x13,uVar9);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

