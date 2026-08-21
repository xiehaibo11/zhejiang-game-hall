
/* v8::internal::Factory::InitializeAllocationMemento(v8::internal::AllocationMemento,
   v8::internal::AllocationSite) */

void __thiscall
v8::internal::Factory::InitializeAllocationMemento(Factory *this,long param_2,long param_3)

{
  *(undefined4 *)(param_2 + -1) = *(undefined4 *)(this + 0xcd8);
  *(int *)(param_2 + 3) = (int)param_3;
  if (FLAG_allocation_site_pretenuring != '\0') {
    *(int *)(param_3 + 0x13) = *(int *)(param_3 + 0x13) + 1;
  }
  return;
}

