
/* v8::internal::Page::InitializeFreeListCategories() */

void __thiscall v8::internal::Page::InitializeFreeListCategories(Page *this)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  
  if (-1 < *(int *)(*(long *)(*(long *)(this + 0x58) + 0x60) + 0xc)) {
    lVar2 = 0;
    do {
      puVar3 = *(undefined4 **)(*(long *)(this + 0xf0) + lVar2 * 8);
      *puVar3 = (int)lVar2;
      puVar3[1] = 0;
      *(undefined8 *)(puVar3 + 4) = 0;
      *(undefined8 *)(puVar3 + 6) = 0;
      bVar1 = lVar2 < *(int *)(*(long *)(*(long *)(this + 0x58) + 0x60) + 0xc);
      lVar2 = lVar2 + 1;
    } while (bVar1);
  }
  return;
}

