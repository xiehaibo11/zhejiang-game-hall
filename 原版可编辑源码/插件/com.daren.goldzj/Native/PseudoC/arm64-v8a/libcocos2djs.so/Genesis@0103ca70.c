
/* v8::internal::Genesis::Genesis(v8::internal::Isolate*,
   v8::internal::MaybeHandle<v8::internal::JSGlobalProxy>, v8::Local<v8::ObjectTemplate>) */

void __thiscall
v8::internal::Genesis::Genesis
          (Genesis *this,Isolate *param_1,ulong *param_3,ObjectTemplate *param_4)

{
  int iVar1;
  ulong *puVar2;
  long *plVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  SaveContext aSStack_68 [24];
  
  *(Isolate **)this = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  lVar5 = *(long *)(param_1 + 0x9508);
  *(long *)(this + 0x38) = lVar5;
  *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  SaveContext::SaveContext(aSStack_68,param_1);
  iVar1 = ObjectTemplate::InternalFieldCount(param_4);
  iVar1 = iVar1 * 8 + 0x10;
  if (param_3 == (ulong *)0x0) {
    param_3 = (ulong *)Factory::NewUninitializedJSGlobalProxy(*(Factory **)this,iVar1);
  }
  uVar10 = *(ulong *)param_4 & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)param_4 + 0x17);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(param_1 + 0x95a0);
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar10;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
    uVar10 = *puVar2;
  }
  uVar6 = uVar10 & 0xffffffff00000000;
  uVar11 = *(ulong *)(uVar6 + 0xa0);
  if (*(uint *)(uVar10 + 0x23) != (uint)uVar11) {
    uVar11 = uVar6 | *(uint *)((uVar6 | *(uint *)(uVar10 + 0x23)) + 3);
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(param_1 + 0x95a0);
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar11;
    lVar5 = ApiNatives::InstantiateRemoteObject();
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
    lVar5 = ApiNatives::InstantiateRemoteObject();
  }
  if (lVar5 != 0) {
    plVar3 = (long *)Factory::NewMap((Factory *)param_1,0xab,iVar1,3,0);
    *(byte *)(*plVar3 + 9) = *(byte *)(*plVar3 + 9) | 0x20;
    *(uint *)(*plVar3 + 0xb) = *(uint *)(*plVar3 + 0xb) | 0x10000000;
    uVar6 = *param_3;
    uVar10 = *(ulong *)(*(long *)this + 0xb0);
    *(int *)(uVar6 + 0xb) = (int)uVar10;
    if ((uVar10 & 1) != 0) {
      uVar11 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar11 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar6,uVar6 + 0xb,uVar10);
        uVar11 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0xb,uVar10);
      }
    }
    JSObject::ForceSetPrototype(param_3,lVar5);
    uVar6 = (ulong)*(uint *)(*param_3 - 1);
    uVar10 = *param_3 & 0xffffffff00000000;
    uVar11 = *puVar2;
    uVar8 = uVar10 | uVar6;
    puVar9 = (uint *)(uVar8 + 0x13);
    if (((*puVar9 & 1) != 0) &&
       (*(short *)((uVar10 | 7) + (ulong)*(uint *)((uVar10 | *puVar9) - 1)) == 0xa2)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!constructor_or_backpointer().IsMap()");
    }
    *puVar9 = (uint)uVar11;
    if ((uVar11 & 1) != 0) {
      uVar7 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar7 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar8,puVar9,uVar11);
        uVar7 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar7 & 0x18) != 0) &&
         ((*(byte *)((uVar10 | uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar8,puVar9,uVar11);
      }
    }
    *(ulong **)(this + 0x18) = param_3;
    SaveContext::~SaveContext(aSStack_68);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

