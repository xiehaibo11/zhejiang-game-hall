
/* v8::internal::Factory::ReinitializeJSGlobalProxy(v8::internal::Handle<v8::internal::JSGlobalProxy>,
   v8::internal::Handle<v8::internal::JSFunction>) */

void __thiscall
v8::internal::Factory::ReinitializeJSGlobalProxy(Factory *this,ulong *param_2,ulong *param_3)

{
  Factory *pFVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_38;
  
  pFVar1 = this + 0x95a0;
  uVar5 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 0x1b);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)pFVar1;
    if (puVar2 == *(ulong **)(this + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar2 + 1;
    *puVar2 = uVar5;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
  }
  uVar5 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pFVar1;
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
  }
  uVar5 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 3);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pFVar1;
    if (puVar4 == *(ulong **)(this + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar4 + 1;
    *puVar4 = uVar5;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
  }
  if ((*(uint *)(*puVar3 + 0xb) >> 0x14 & 1) != 0) {
    puVar2 = (ulong *)Map::Copy(this,puVar2,"CopyAsPrototypeForJSGlobalProxy");
    *(uint *)(*puVar2 + 0xb) = *(uint *)(*puVar2 + 0xb) | 0x100000;
  }
  JSObject::NotifyMapChange(puVar3,puVar2,this);
  uVar5 = *puVar3;
  if ((*(uint *)(uVar5 + 0xb) >> 0x19 & 1) == 0) {
    *(uint *)(uVar5 + 0xb) = *(uint *)(uVar5 + 0xb) | 0x2000000;
    local_38 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0x1b);
    DependentCode::DeoptimizeDependentCodeGroup(&local_38,this,1);
  }
  uVar5 = *puVar2;
  uVar6 = *param_2;
  if ((int)uVar5 == 0) {
    *(undefined4 *)(uVar6 - 1) = 0;
  }
  else {
    Heap::VerifyObjectLayoutChange((Heap *)(uVar6 & 0xffffffff00000000 | 0x8850),uVar6,uVar5);
    *(int *)(uVar6 - 1) = (int)uVar5;
    if (((uVar5 & 1) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
      Heap_MarkingBarrierSlow(uVar6,0,uVar5);
    }
  }
  InitializeJSObjectFromMap(this,param_2,puVar4,puVar2);
  return;
}

