
/* v8::internal::Isolate::MaybeInitializeVectorListFromHeap() */

void __thiscall v8::internal::Isolate::MaybeInitializeVectorListFromHeap(Isolate *this)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  Isolate *pIVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_88;
  HeapObjectIterator aHStack_80 [40];
  long *local_58;
  long *local_50;
  long *plStack_48;
  Isolate *local_28;
  
  if (((*(ulong *)(this + 0xf80) & 1) != 0) &&
     ((int)*(ulong *)(this + 0xf80) == *(int *)(this + 0xa0))) {
    local_50 = (long *)0x0;
    plStack_48 = (long *)0x0;
    local_58 = (long *)0x0;
    HeapObjectIterator::HeapObjectIterator(aHStack_80,this + 0x8850,0);
    uVar3 = HeapObjectIterator::Next(aHStack_80);
    if ((int)uVar3 != 0) {
      do {
        uVar10 = uVar3 & 0xffffffff00000000;
        uVar8 = uVar10 | 7;
        if (*(short *)(uVar8 + *(uint *)(uVar3 - 1)) == 0x9f) {
          uVar11 = uVar10 | *(uint *)(uVar3 + 3);
          pIVar7 = (Isolate *)(uVar10 | *(uint *)(uVar11 + 0xf));
          if (*(short *)(uVar8 + *(uint *)(pIVar7 + -1)) == 0x5b) {
            pIVar7 = (Isolate *)(uVar10 | *(uint *)(pIVar7 + 0xb));
          }
          local_88 = uVar3;
          if ((((((ulong)pIVar7 & 1) == 0) ||
               ((int)pIVar7 != *(int *)(((ulong)pIVar7 & 0xffffffff00000000) + 0xa0))) &&
              (local_28 = pIVar7, uVar4 = Script::IsUserJavaScript((Script *)&local_28),
              plVar9 = local_50, uVar3 = local_88, (uVar4 & 1) != 0)) &&
             ((uVar1 = *(uint *)(uVar11 + 3), (uVar1 & 1) == 0 ||
              (*(short *)(uVar8 + *(uint *)((uVar10 | uVar1) - 1)) != 0x57)))) {
            local_28 = this;
            if (local_50 < plStack_48) {
              if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar5 = *(ulong **)(this + 0x95a0);
                if (puVar5 == *(ulong **)(this + 0x95a8)) {
                  puVar5 = (ulong *)HandleScope::Extend(this);
                }
                *(ulong **)(this + 0x95a0) = puVar5 + 1;
                *puVar5 = uVar3;
              }
              else {
                puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                            (*(CanonicalHandleScope **)(this + 0x95b8),local_88);
              }
              *plVar9 = (long)puVar5;
              local_50 = local_50 + 1;
            }
            else {
              std::__ndk1::
              vector<v8::internal::Handle<v8::internal::FeedbackVector>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::FeedbackVector>>>
              ::__emplace_back_slow_path<v8::internal::FeedbackVector&,v8::internal::Isolate*>
                        ((vector<v8::internal::Handle<v8::internal::FeedbackVector>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::FeedbackVector>>>
                          *)&local_58,(FeedbackVector *)&local_88,&local_28);
            }
          }
        }
        uVar3 = HeapObjectIterator::Next(aHStack_80);
      } while ((int)uVar3 != 0);
    }
    HeapObjectIterator::~HeapObjectIterator(aHStack_80);
    puVar6 = (undefined8 *)ArrayList::New(this,(int)((ulong)((long)local_50 - (long)local_58) >> 3))
    ;
    plVar2 = local_50;
    for (plVar9 = local_58; plVar9 != plVar2; plVar9 = plVar9 + 1) {
      puVar6 = (undefined8 *)ArrayList::Add(this,puVar6,*plVar9);
    }
    *(undefined8 *)(this + 0xf80) = *puVar6;
    if (local_58 != (long *)0x0) {
      local_50 = local_58;
      operator_delete(local_58);
    }
  }
  return;
}

