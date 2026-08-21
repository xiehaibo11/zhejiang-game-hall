
/* v8::internal::SourceTextModule::AddAsyncParentModule(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SourceTextModule>) */

void __thiscall
v8::internal::SourceTextModule::AddAsyncParentModule
          (SourceTextModule *this,Isolate *param_1,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x2f);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(param_1 + 0x95a0);
    if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar5;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
  }
  puVar1 = (ulong *)ArrayList::Add(param_1,puVar1,param_3);
  uVar5 = *puVar1;
  *(int *)(*(long *)this + 0x2f) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar2 = *(ulong *)this;
    uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    lVar3 = uVar2 + 0x2f;
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar2,lVar3,uVar5);
      uVar2 = *(ulong *)this;
      uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      lVar3 = uVar2 + 0x2f;
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar2,lVar3,uVar5);
      return;
    }
  }
  return;
}

