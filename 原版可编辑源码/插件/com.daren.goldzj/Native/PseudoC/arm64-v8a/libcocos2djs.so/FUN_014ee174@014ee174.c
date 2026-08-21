
void FUN_014ee174(long param_1)

{
  Heap *pHVar1;
  char cVar2;
  Resolver *pRVar3;
  undefined8 uVar4;
  ulong *puVar5;
  HandleScope aHStack_38 [24];
  
  v8::HandleScope::HandleScope(aHStack_38,*(Isolate **)(param_1 + 0x28));
  pHVar1 = (Heap *)(*(long *)(param_1 + 0x28) + 0x8850);
  if (*(int *)(param_1 + 0x40) == 0) {
    v8::internal::Heap::SetEmbedderStackStateForNextFinalizaton(pHVar1,2);
    v8::internal::Heap::PreciseCollectAllGarbage(pHVar1,0,0x15,4);
    puVar5 = *(ulong **)(param_1 + 0x38);
  }
  else {
    if (*(int *)(param_1 + 0x40) == 1) {
      v8::internal::Heap::CollectGarbage(pHVar1,1,0x15,4);
    }
    puVar5 = *(ulong **)(param_1 + 0x38);
  }
  if (puVar5 == (ulong *)0x0) {
    pRVar3 = (Resolver *)0x0;
    puVar5 = *(ulong **)(param_1 + 0x30);
  }
  else {
    pRVar3 = (Resolver *)v8::HandleScope::CreateHandle(*(Isolate **)(param_1 + 0x28),*puVar5);
    puVar5 = *(ulong **)(param_1 + 0x30);
  }
  if (puVar5 == (ulong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = v8::HandleScope::CreateHandle(*(Isolate **)(param_1 + 0x28),*puVar5);
  }
  cVar2 = v8::Promise::Resolver::Resolve(pRVar3,uVar4,*(long *)(param_1 + 0x28) + 0xa0);
  if (cVar2 == '\0') {
    v8::V8::FromJustIsNothing();
  }
  v8::HandleScope::~HandleScope(aHStack_38);
  return;
}

