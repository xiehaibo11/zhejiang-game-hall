
/* v8::internal::GlobalHandles::MarkYoungWeakUnmodifiedObjectsPending(bool (*)(v8::internal::Heap*,
   v8::internal::FullObjectSlot)) */

void __thiscall
v8::internal::GlobalHandles::MarkYoungWeakUnmodifiedObjectsPending
          (GlobalHandles *this,_func_bool_Heap_ptr_FullObjectSlot *param_1)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  
  plVar2 = *(long **)(this + 0x18);
  for (plVar1 = *(long **)(this + 0x10); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar5 = *plVar1;
    if (((((*(byte *)(lVar5 + 0xb) & 7) == 2) &&
         (bVar4 = (*param_1)((Heap *)(*(long *)this + 0x8850),(char)lVar5), bVar4)) &&
        (bVar3 = *(byte *)(lVar5 + 0xb), (~bVar3 & 0x30) != 0)) &&
       (1 < (byte)((bVar3 >> 4 & 3) - 1))) {
      *(byte *)(lVar5 + 0xb) = bVar3 & 0xf8 | 3;
    }
  }
  return;
}

