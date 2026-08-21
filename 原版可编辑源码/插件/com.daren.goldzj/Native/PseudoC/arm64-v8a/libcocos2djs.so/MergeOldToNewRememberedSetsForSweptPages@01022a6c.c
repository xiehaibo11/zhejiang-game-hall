
/* v8::internal::Sweeper::MergeOldToNewRememberedSetsForSweptPages() */

void __thiscall v8::internal::Sweeper::MergeOldToNewRememberedSetsForSweptPages(Sweeper *this)

{
  long lVar1;
  long lVar2;
  
  base::Mutex::Lock((Mutex *)(this + 0x40));
  lVar1 = *(long *)(this + 0x70);
  for (lVar2 = *(long *)(this + 0x68); lVar2 != lVar1; lVar2 = lVar2 + 8) {
    Page::MergeOldToNewRememberedSets();
  }
  lVar1 = *(long *)(this + 0x88);
  for (lVar2 = *(long *)(this + 0x80); lVar2 != lVar1; lVar2 = lVar2 + 8) {
    Page::MergeOldToNewRememberedSets();
  }
  lVar1 = *(long *)(this + 0xa0);
  for (lVar2 = *(long *)(this + 0x98); lVar2 != lVar1; lVar2 = lVar2 + 8) {
    Page::MergeOldToNewRememberedSets();
  }
  base::Mutex::Unlock((Mutex *)(this + 0x40));
  return;
}

