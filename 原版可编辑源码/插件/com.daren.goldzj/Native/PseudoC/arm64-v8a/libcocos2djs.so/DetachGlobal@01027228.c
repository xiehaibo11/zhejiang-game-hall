
/* v8::internal::Bootstrapper::DetachGlobal(v8::internal::Handle<v8::internal::Context>) */

void __thiscall v8::internal::Bootstrapper::DetachGlobal(Bootstrapper *this,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  Isolate *pIVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  ulong local_58;
  
  uVar3 = *(undefined8 *)(*(long *)this + 0x9520);
  local_58 = *param_2 & 0xffffffff00000000;
  local_58 = local_58 | *(uint *)((local_58 | *(uint *)(*param_2 - 1)) + 0x13);
  NativeContext::GetErrorsThrown((NativeContext *)&local_58);
  Histogram::AddSample((int)uVar3 + 0xd0);
  local_58 = *param_2;
  lVar10 = *(long *)this;
  uVar1 = Context::global_proxy((Context *)&local_58);
  pIVar4 = *(Isolate **)this;
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar1;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar1);
  }
  uVar8 = *puVar2;
  uVar1 = *(ulong *)(lVar10 + 0xb0);
  *(int *)(uVar8 + 0xb) = (int)uVar1;
  if ((uVar1 & 1) != 0) {
    uVar5 = *(ulong *)((uVar1 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 0xb,uVar1);
      uVar5 = *(ulong *)(uVar1 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0xb,uVar1);
    }
  }
  JSObject::ForceSetPrototype(puVar2,*(long *)this + 0xb0);
  uVar8 = (ulong)*(uint *)(*puVar2 - 1);
  uVar1 = *puVar2 & 0xffffffff00000000;
  uVar5 = *(ulong *)(lVar10 + 0xb0);
  uVar7 = uVar1 | uVar8;
  puVar9 = (uint *)(uVar7 + 0x13);
  if (((*puVar9 & 1) != 0) &&
     (*(short *)((uVar1 | 7) + (ulong)*(uint *)((uVar1 | *puVar9) - 1)) == 0xa2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!constructor_or_backpointer().IsMap()");
  }
  *puVar9 = (uint)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar6 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,puVar9,uVar5);
      uVar6 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar1 | uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
       ) {
      Heap_GenerationalBarrierSlow(uVar7,puVar9,uVar5);
    }
  }
  if (FLAG_track_detached_contexts != '\0') {
    Isolate::AddDetachedContext(*(Isolate **)this,param_2);
  }
  uVar1 = *param_2 & 0xffffffff00000000;
  *(undefined8 *)((uVar1 | *(uint *)((uVar1 | *(uint *)(*param_2 - 1)) + 0x13)) + 0x423) = 0;
  return;
}

