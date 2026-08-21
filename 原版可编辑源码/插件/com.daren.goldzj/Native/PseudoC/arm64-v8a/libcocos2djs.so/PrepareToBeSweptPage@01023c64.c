
/* v8::internal::Sweeper::PrepareToBeSweptPage(v8::internal::AllocationSpace, v8::internal::Page*)
    */

void __thiscall v8::internal::Sweeper::PrepareToBeSweptPage(Sweeper *this,int param_2,Page *param_3)

{
  long lVar1;
  
  Page::MoveOldToNewRememberedSetForSweeping(param_3);
  *(undefined8 *)(param_3 + 0xa8) = 1;
  lVar1 = *(long *)(*(long *)this + (long)param_2 * 8 + 0x128);
  *(long *)(lVar1 + 0xb8) = *(long *)(lVar1 + 0xb8) + *(long *)(param_3 + 0x68);
  return;
}

