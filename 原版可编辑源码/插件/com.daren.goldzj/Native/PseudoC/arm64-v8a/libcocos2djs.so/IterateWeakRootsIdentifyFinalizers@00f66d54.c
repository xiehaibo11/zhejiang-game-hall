
/* v8::internal::GlobalHandles::IterateWeakRootsIdentifyFinalizers(bool (*)(v8::internal::Heap*,
   v8::internal::FullObjectSlot)) */

void __thiscall
v8::internal::GlobalHandles::IterateWeakRootsIdentifyFinalizers
          (GlobalHandles *this,_func_bool_Heap_ptr_FullObjectSlot *param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  
  lVar3 = *(long *)(*(long *)(this + 8) + 0x10);
  if (lVar3 != 0) {
    uVar4 = 0;
    do {
      while( true ) {
        lVar1 = lVar3 + uVar4 * 0x20;
        pbVar5 = (byte *)(lVar1 + 0xb);
        if ((((*pbVar5 & 7) == 2) &&
            (bVar2 = (*param_1)((Heap *)(*(long *)this + 0x8850),(char)lVar1), bVar2)) &&
           ((*pbVar5 & 0x30) == 0)) {
          *pbVar5 = *pbVar5 & 0xf8 | 3;
        }
        uVar4 = uVar4 + 1;
        if (0xff < uVar4) break;
        if (lVar3 == 0) {
          return;
        }
      }
      lVar3 = *(long *)(lVar3 + 0x2018);
      uVar4 = 0;
    } while (lVar3 != 0);
  }
  return;
}

