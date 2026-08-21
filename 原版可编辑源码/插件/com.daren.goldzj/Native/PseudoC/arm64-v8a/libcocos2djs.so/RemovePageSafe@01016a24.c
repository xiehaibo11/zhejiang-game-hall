
/* v8::internal::PagedSpace::RemovePageSafe(int) */

Page * __thiscall v8::internal::PagedSpace::RemovePageSafe(PagedSpace *this,int param_1)

{
  Page *pPVar1;
  
  base::Mutex::Lock((Mutex *)(this + 0xc0));
  pPVar1 = (Page *)(**(code **)(**(long **)(this + 0x60) + 0x28))
                             (*(long **)(this + 0x60),(long)param_1);
  if (pPVar1 != (Page *)0x0) {
    RemovePage(this,pPVar1);
  }
  base::Mutex::Unlock((Mutex *)(this + 0xc0));
  return pPVar1;
}

