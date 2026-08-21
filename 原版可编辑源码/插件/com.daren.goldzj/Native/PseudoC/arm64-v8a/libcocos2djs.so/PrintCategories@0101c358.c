
/* v8::internal::FreeList::PrintCategories(int) */

void __thiscall v8::internal::FreeList::PrintCategories(FreeList *this,int param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(this + 0x20) + (long)param_1 * 8);
  PrintF("FreeList[%p, top=%p, %d] ",this,lVar1,(ulong)(uint)param_1);
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x18);
    PrintF("%p -> ",lVar1);
    lVar1 = lVar2;
  }
  PrintF("null\n");
  return;
}

