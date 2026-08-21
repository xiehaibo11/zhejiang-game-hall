
/* v8::internal::Page::AllocateFreeListCategories() */

void __thiscall v8::internal::Page::AllocateFreeListCategories(Page *this)

{
  bool bVar1;
  void *__s;
  undefined4 *puVar2;
  ulong uVar3;
  ulong __n;
  long lVar4;
  
  uVar3 = (ulong)*(int *)(*(long *)(*(long *)(this + 0x58) + 0x60) + 8);
  __n = uVar3 << 3;
  if (uVar3 >> 0x3d != 0) {
    __n = 0xffffffffffffffff;
  }
  __s = operator_new__(__n);
  memset(__s,0,__n);
  *(void **)(this + 0xf0) = __s;
  if (-1 < *(int *)(*(long *)(*(long *)(this + 0x58) + 0x60) + 0xc)) {
    lVar4 = 0;
    do {
      puVar2 = operator_new(0x20);
      *puVar2 = 0xffffffff;
      *(undefined8 *)(puVar2 + 1) = 0;
      *(undefined8 *)(puVar2 + 5) = 0;
      *(undefined8 *)(puVar2 + 3) = 0;
      puVar2[7] = 0;
      *(undefined4 **)(*(long *)(this + 0xf0) + lVar4 * 8) = puVar2;
      bVar1 = lVar4 < *(int *)(*(long *)(*(long *)(this + 0x58) + 0x60) + 0xc);
      lVar4 = lVar4 + 1;
    } while (bVar1);
  }
  return;
}

