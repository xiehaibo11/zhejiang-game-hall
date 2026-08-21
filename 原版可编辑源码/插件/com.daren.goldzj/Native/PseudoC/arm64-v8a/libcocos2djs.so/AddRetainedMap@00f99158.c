
/* v8::internal::Heap::AddRetainedMap(v8::internal::Handle<v8::internal::Map>) */

void __thiscall v8::internal::Heap::AddRetainedMap(Heap *this,long *param_2)

{
  Isolate *pIVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_50;
  ulong *local_48;
  
  if ((*(uint *)(*param_2 + 0xb) >> 0x17 & 1) == 0) {
    uVar6 = *(ulong *)(this + -0x78d8);
    pIVar1 = (Isolate *)(this + -0x8850);
    if (*(CanonicalHandleScope **)(this + 0xd68) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(this + 0xd50);
      if (puVar2 == *(ulong **)(this + 0xd58)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(this + 0xd50) = puVar2 + 1;
      *puVar2 = uVar6;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0xd68),uVar6)
      ;
      uVar6 = *puVar2;
    }
    local_50 = uVar6;
    uVar6 = WeakArrayList::IsFull((WeakArrayList *)&local_50);
    if ((uVar6 & 1) != 0) {
      CompactRetainedMaps(this,*puVar2);
    }
    local_50 = 0;
    local_48 = (ulong *)param_2;
    uVar3 = WeakArrayList::AddToEnd(pIVar1,puVar2,&local_50);
    local_50 = CONCAT44(local_50._4_4_,1);
    lVar5 = (long)FLAG_retain_maps_for_n_gc;
    if (*(CanonicalHandleScope **)(this + 0xd68) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(this + 0xd50);
      if (puVar2 == *(ulong **)(this + 0xd58)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(this + 0xd50) = puVar2 + 1;
      *puVar2 = lVar5 << 1;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0xd68),lVar5 << 1);
    }
    local_48 = puVar2;
    puVar4 = (undefined8 *)WeakArrayList::AddToEnd(pIVar1,uVar3,&local_50);
    if ((int)*puVar4 != *(int *)(this + -0x78d8)) {
      *(undefined8 *)(this + -0x78d8) = *puVar4;
    }
    *(uint *)(*param_2 + 0xb) = *(uint *)(*param_2 + 0xb) | 0x800000;
  }
  return;
}

