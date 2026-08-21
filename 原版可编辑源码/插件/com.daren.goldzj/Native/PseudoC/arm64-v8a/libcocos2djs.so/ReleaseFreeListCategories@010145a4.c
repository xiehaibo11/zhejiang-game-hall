
/* v8::internal::Page::ReleaseFreeListCategories() */

void __thiscall v8::internal::Page::ReleaseFreeListCategories(Page *this)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if (*(long *)(this + 0xf0) != 0) {
    puVar2 = *(undefined8 **)(this + 0xf0);
    if (-1 < *(int *)(*(long *)(*(long *)(this + 0x58) + 0x60) + 0xc)) {
      pvVar3 = (void *)*puVar2;
      lVar1 = 0;
      while( true ) {
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
          *(undefined8 *)(*(long *)(this + 0xf0) + lVar1 * 8) = 0;
        }
        puVar2 = *(undefined8 **)(this + 0xf0);
        if (*(int *)(*(long *)(*(long *)(this + 0x58) + 0x60) + 0xc) <= lVar1) break;
        pvVar3 = (void *)puVar2[lVar1 + 1];
        lVar1 = lVar1 + 1;
      }
    }
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 *)(this + 0xf0) = 0;
  }
  return;
}

