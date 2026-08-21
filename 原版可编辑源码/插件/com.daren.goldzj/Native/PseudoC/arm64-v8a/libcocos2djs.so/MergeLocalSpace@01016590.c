
/* v8::internal::PagedSpace::MergeLocalSpace(v8::internal::LocalSpace*) */

void __thiscall v8::internal::PagedSpace::MergeLocalSpace(PagedSpace *this,LocalSpace *param_1)

{
  Page *pPVar1;
  Page *pPVar2;
  
  base::Mutex::Lock((Mutex *)(this + 0xc0));
  FreeLinearAllocationArea((PagedSpace *)param_1);
  *(long *)(this + 0x80) = *(long *)(this + 0x80) + *(long *)(param_1 + 0x80);
  *(long *)(this + 0x88) = *(long *)(this + 0x88) + *(long *)(param_1 + 0x88);
  *(long *)(this + 0x90) = *(long *)(this + 0x90) + *(long *)(param_1 + 0x90);
  pPVar1 = *(Page **)(param_1 + 0x20);
  while (pPVar1 != (Page *)0x0) {
    pPVar2 = *(Page **)(pPVar1 + 0xe0);
    Page::MergeOldToNewRememberedSets();
    RemovePage((PagedSpace *)param_1,pPVar1);
    AddPage(this,pPVar1);
    pPVar1 = pPVar2;
  }
  base::Mutex::Unlock((Mutex *)(this + 0xc0));
  return;
}

